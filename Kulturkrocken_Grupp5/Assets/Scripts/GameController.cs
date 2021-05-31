using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameController : MonoBehaviour
{
    [SerializeField]
    private Sprite bgImage;

    public Sprite[] cards;
    public List<Sprite> gameCards = new List<Sprite>();
    public List<Button> btns = new List<Button>();

    const string ScoreKey = "Score";

    public GameObject recordPanel;
    public Text recordText;
    public Text scoreText;

    public static GameController instance;

    private bool firstGuess, secondGuess;

    private int recordGuess;
    private int countGuess;
    private int countCorrectGuesses;
    private int gameGuesses;

    private int firstGuessIndex, secondGuessIndex;

    private string firstGuessCard, secondGuessCard;

    private void Awake()
    {
        //cards = Resources.LoadAll<Sprite>("Kulturhuset/MemoryCards");
        instance = this;
    }

    void Start()
    {
        GetButtons();
        AddListeners();
        AddGameCards();
        gameGuesses = gameCards.Count / 2;

        LoadPrefs();
        Debug.Log(PlayerPrefs.GetInt(ScoreKey));
    }

    private void Update()
    {
        scoreText.text = "current turn " + countGuess;
    }

    private void SetRecordText()
    {
        recordText.text = "Finished game in turn " + recordGuess;
    }

    void GetButtons()
    {
        GameObject[] objects = GameObject.FindGameObjectsWithTag ("MemoryCardButton");
        
        for (int i = 0; i <objects.Length; i++)
        {
            btns.Add(objects[i].GetComponent<Button>());
            btns[i].image.sprite = bgImage;
        }
    }

    void AddGameCards()
    {
        int looper = btns.Count;
        int index = 0;

        for(int i = 0; i < looper; i++)
        {
            if(index == looper / 2)
            {
                index = 0;
            }

            gameCards.Add(cards[index]);

            index++;
        }
        Shuffle(gameCards);
    }
    void AddListeners()
    {
        foreach(Button btn in btns)
        {
            btn.onClick.AddListener(() => PickACard());
        }
        {

        }
    }
    public void PickACard() 
    {
        string name = UnityEngine.EventSystems.EventSystem.current.currentSelectedGameObject.name;
        if (!firstGuess)
        {
            firstGuess = true;

            firstGuessIndex = int.Parse(UnityEngine.EventSystems.EventSystem.current.currentSelectedGameObject.name);

            firstGuessCard = gameCards[firstGuessIndex].name;

            btns[firstGuessIndex].image.sprite = gameCards[firstGuessIndex];
        } 
        
        else if (!secondGuess)
        {
            secondGuess = true;

            secondGuessIndex = int.Parse(UnityEngine.EventSystems.EventSystem.current.currentSelectedGameObject.name);

            secondGuessCard = gameCards[secondGuessIndex].name;

            btns[secondGuessIndex].image.sprite = gameCards[secondGuessIndex];

            countGuess++;

            StartCoroutine(CheckIfTheCardsMatch());

        }
    }

    IEnumerator CheckIfTheCardsMatch()
    {
        yield return new WaitForSeconds(1f);

        if (firstGuessCard == secondGuessCard)
        {
            yield return new WaitForSeconds(.5f);

            btns[firstGuessIndex].interactable = false;
            btns[secondGuessIndex].interactable = false;

            btns[firstGuessIndex].image.color = new Color(0, 0, 0, 0);
            btns[secondGuessIndex].image.color = new Color(0, 0, 0, 0);

            CheckIfTheGameIsFinished();
        }

        else
        {
            yield return new WaitForSeconds(.5f);

            btns[firstGuessIndex].image.sprite = bgImage;
            btns[secondGuessIndex].image.sprite = bgImage;
        }

        yield return new WaitForSeconds(.5f);

        firstGuess = secondGuess = false;

    }

    void CheckIfTheGameIsFinished()
    {
        countCorrectGuesses++;

        if(countCorrectGuesses == gameGuesses)
        {
            Debug.Log("Game Finished");
            Debug.Log("It took you "+ countGuess + " many guess(es) to finish the game");

            gameIsFinished();
        }
    }

    void Shuffle(List<Sprite> list)
    {
        for(int i = 0; i < list.Count; i++)
        {
            Sprite temp = list[i];
            int randomIndex = Random.Range(0, list.Count);
            list[i] = list[randomIndex];
            list[randomIndex] = temp;
        }
    }

    void SavePrefs()
    {
        LoadPrefs();
        if (recordGuess != 0 && countGuess < recordGuess)
        {
            PlayerPrefs.SetInt(ScoreKey, countGuess);
            PlayerPrefs.Save();
        }
        else
        {
            PlayerPrefs.SetInt(ScoreKey, countGuess);
            PlayerPrefs.Save();
        }
    }

    void LoadPrefs()
    {
        var score = PlayerPrefs.GetInt(ScoreKey, 0);
        recordGuess = score;
    }

    void gameIsFinished()
    {
        SavePrefs();
        LoadPrefs();
        SetRecordText();
        recordPanel.SetActive(true);
    }

    private void OnApplicationQuit()
    {
        SavePrefs();
    }
}

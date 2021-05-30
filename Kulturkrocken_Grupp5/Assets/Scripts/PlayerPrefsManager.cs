using UnityEngine;
using UnityEngine.UI;

public class PlayerPrefsManager : MonoBehaviour
{
    const string ScoreKey = "Score";

    public Text recordText;

    private int recordGuess;
    private int currentScore;
    private int recordScore;

    void Start()
    {
        //currentScore = GameController.instance.countGuess;
        LoadPrefs();

        recordText.text = "Finished game in turn " + recordGuess;
    }

    private void OnApplicationQuit()
    {
        SavePrefs();
    }

    public void SavePrefs()
    {
        if (currentScore > recordScore)
        {
            PlayerPrefs.SetInt(ScoreKey, currentScore);
            PlayerPrefs.Save();
        }
    }

    public void LoadPrefs()
    {
        var score = PlayerPrefs.GetInt(ScoreKey, 0);
        recordScore = score;
    }
}

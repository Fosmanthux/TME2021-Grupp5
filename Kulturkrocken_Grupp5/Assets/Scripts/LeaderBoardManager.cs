using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class LeaderBoardManager : MonoBehaviour
{
	dreamloLeaderBoard dl;

	const string ScoreKey = "Score";

	public Text GPS;
	public Text recordText;
	public GameObject scoreCellPrefab;
	public int maxCounts = 5;
	public Text inputName;
	public GameObject uploadBtn;
	public GameObject disBtn;

	public bool onSpot = false;
	public bool refreshing = true;

	public float latitude;
	public float longitude;

	private int recordScore;
	private string playerName;

	private int count = 0;
	private int opposite = -1;

	private float myN;
	private float myE;

	List<dreamloLeaderBoard.Score> scoreList;

	void Start()
    {
		this.dl = dreamloLeaderBoard.GetSceneDreamloLeaderboard();

		dl.GetScores();

		LoadPrefs();
		recordText.text = "Finished on turn " + recordScore;

		StartCoroutine(StartGPS());
	}

    void Update()
    {
		CheckLocation();

		scoreList = dl.ToListHighToLow();
		if (scoreList.Count > 0 && refreshing == true)
		{
			DisplayList();
			refreshing = false;
		}

		if (onSpot == false)
        {
			uploadBtn.SetActive(false);
			disBtn.SetActive(true);
        }
        else if (onSpot == true)
        {
			uploadBtn.SetActive(true);
			disBtn.SetActive(false);
		}
	}

	public void Refresh()
    {
		//myN = latitude;
		//myE = longitude;
    }

	void DisplayList()
    {
        Debug.Log(scoreList[0]);
		int maxToDisplay = maxCounts;
		foreach (var currentScore in scoreList)
		{
				count++;
				Debug.Log(count);
				if (count > maxCounts)
					break;
			//if (count <= maxCounts)
			//{
				var cell = Instantiate(scoreCellPrefab, transform);
				cell.GetComponent<ScoreCell>().SetModel(currentScore);
			//}
		}
		Debug.Log("finished");
	}

	public void UploadRecord()
	{
		LoadPrefs();
		this.playerName = inputName.text;
		dl.AddScore(this.playerName, opposite * recordScore);
	}

	void LoadPrefs()
	{
		var score = PlayerPrefs.GetInt(ScoreKey);
		this.recordScore = score;
	}

	public void CheckLocation()
    {
		float Nplus = latitude + 0.0001f;
		float Nminus = latitude - 0.0001f;
		float Eplus = longitude + 0.0001f;
		float Eminus = longitude - 0.0001f;

		if (Nminus < myN && myN < Nplus && Eminus < myE && myE < Eplus)
        {
			onSpot = true;
        }
        else
        {
			onSpot = false;
        }
    }

	IEnumerator StartGPS()
    {
		if (!Input.location.isEnabledByUser)
        {
			GPS.text = "Please enable location service on this device";
			yield break;
        }
        else
        {
			Input.location.Start(1.0f, 1.0f);
        }

		int maxWait = 20;
		while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
        {
			yield return new WaitForSeconds(1);
			maxWait--;
        }
		if (maxWait < 1)
        {
			GPS.text = "Request time out, please try again later";
			yield break;
        }
		if (Input.location.status == LocationServiceStatus.Failed)
        {
			GPS.text = "Request location failed, please try again later";
			yield break;
        }
        else
        {
			myN = Input.location.lastData.latitude;
			myE = Input.location.lastData.longitude;
			GPS.text = "Request location succeeded";
			Input.location.Stop();
			yield return null;
		}
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LeaderBoardManager : MonoBehaviour
{
	dreamloLeaderBoard dl;

	const string ScoreKey = "Score";

	public Text recordText;
	public GameObject scoreCellPrefab;
	public int maxCounts = 5;
	public Text inputName;
	public GameObject uploadBtn;

	public bool onSpot = false;
	public string E_latitude;
	public string N_Longitude;

	private int recordScore;
	private string playerName;

	private int count = 0;
	private int opposite = -1;

	private string myN;
	private string myE;

	List<dreamloLeaderBoard.Score> scoreList;

	void Start()
    {
		this.dl = dreamloLeaderBoard.GetSceneDreamloLeaderboard();

		dl.GetScores();

		LoadPrefs();

		recordText.text = "Finished in turn " + recordScore;

		StartCoroutine(StartGPS());
	}

    void Update()
    {
		scoreList = dl.ToListHighToLow();

		if (scoreList != null)
		{
			int maxToDisplay = maxCounts;
			foreach (var currentScore in scoreList)
			{
				count++;
				Debug.Log(count);
				if (count >= maxCounts)
				{
					this.enabled = false;
				}
				if (count <= maxCounts)
				{
				var cell = Instantiate(scoreCellPrefab, transform);
					cell.GetComponent<ScoreCell>().SetModel(currentScore);
					this.enabled = false;
				}
			}
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
		var score = PlayerPrefs.GetInt(ScoreKey, 0);
		this.recordScore = score;
	}

	public void CheckLocation()
    {
		if (E_latitude == myE && N_Longitude == myN)
        {
			onSpot = true;
			uploadBtn.SetActive(true);
        }
        else
        {
			uploadBtn.SetActive(false);
        }
    }

	IEnumerator StartGPS()
    {
		if (!Input.location.isEnabledByUser)
        {
			Debug.Log("Location disabled");
			yield break;
        }
        else
        {
			Input.location.Start(10.0f, 10.0f);
        }

		int maxWait = 20;
		while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
        {
			yield return new WaitForSeconds(1);
			maxWait--;
        }
		if (maxWait < 1)
        {
			Debug.Log("Overtime");
			yield break;
        }
		if (Input.location.status == LocationServiceStatus.Failed)
        {
			Debug.Log("Failed");
			yield break;
        }
        else
        {
			myN = Input.location.lastData.latitude.ToString();
			myE = Input.location.lastData.longitude.ToString();
			Input.location.Stop();
			yield return null;
		}
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LeaderBoardManager : MonoBehaviour
{
	dreamloLeaderBoard dl;

	public GameObject scoreCellPrefab;
	public int maxCounts = 5;

    void Start()
    {
		this.dl = dreamloLeaderBoard.GetSceneDreamloLeaderboard();

		dl.GetScores();
	}

    void Update()
    {
		List<dreamloLeaderBoard.Score> scoreList = dl.ToListLowToHigh();

		if (scoreList != null)
		{
			int maxToDisplay = maxCounts;
			int count = -1;
			foreach (dreamloLeaderBoard.Score currentScore in scoreList)
			{
				count++;
				Debug.Log(count);
				if (count < maxCounts)
				{
					var cell = Instantiate(scoreCellPrefab, transform);
					cell.GetComponent<ScoreCell>().SetModel(currentScore);
				}
				else if (count >= maxCounts)
				{
					this.enabled = false; 
				}
			}
		}
		Debug.Log("finished");
		

	}

	private void OnGUI()
	{
		var width200 = new GUILayoutOption[] { GUILayout.Width(200) };
		GUILayout.Label("High Scores:");
		List<dreamloLeaderBoard.Score> scoreList = dl.ToListHighToLow();

		if (scoreList == null)
		{
			GUILayout.Label("(loading...)");
		}
		else
		{
			int maxToDisplay = 10;
			int count = 0;
			foreach (dreamloLeaderBoard.Score currentScore in scoreList)
			{
				
				count++;
				GUILayout.BeginHorizontal();
				GUILayout.Label(currentScore.playerName, width200);
				GUILayout.Label(currentScore.score.ToString(), width200);
				GUILayout.EndHorizontal();

				if (count >= maxToDisplay) break;
			}
		}
	}
}

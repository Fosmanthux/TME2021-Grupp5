using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScoreCell : MonoBehaviour
{
    public Text nameText;
    public Text scoreText;

    private int opposite = -1;

    public void SetModel (dreamloLeaderBoard.Score data)
    {
        nameText.text = data.playerName;
        scoreText.text = data.score * opposite + " tries";
    }
}

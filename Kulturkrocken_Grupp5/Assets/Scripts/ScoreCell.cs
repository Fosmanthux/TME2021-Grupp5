using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScoreCell : MonoBehaviour
{
    public Text nameText;
    public Text scoreText;

    public void SetModel (dreamloLeaderBoard.Score data)
    {
        nameText.text = data.playerName;
        scoreText.text = data.score + " tries";
    }
}

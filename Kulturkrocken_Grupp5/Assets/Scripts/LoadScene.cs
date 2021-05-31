using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadScene : MonoBehaviour
{
    public void LoadGamePlay()
    {
        SceneManager.LoadScene("GamePlay");
    }

    public void LoadMainMenu()
    {
        SceneManager.LoadScene("MainMenu");
    }

    public void LoadLeaderBoard()
    {
        SceneManager.LoadScene("LeaderBoard");
    }

    public void LoadVideoPlay()
    {
        SceneManager.LoadScene("VideoPlay");
    }

    public void quit()
    {
        Debug.Log("Quit!");
        Application.Quit();
    }
}

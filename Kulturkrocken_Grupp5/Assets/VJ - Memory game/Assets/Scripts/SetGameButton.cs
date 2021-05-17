using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SetGameButton : MonoBehaviour
{
    public enum EButtonType
    {
        NotSet,
        PairNumberBtn,
    };

    [SerializeField] public EButtonType ButtonType = EButtonType.NotSet;
    [HideInInspector] public GameSettings.EPairNumber PairNumber = GameSettings.EPairNumber.NotSet;
    

    void Start()
    {
        
    }

    public void SetGameOption (string GameSceneName)
    {
        var comp = gameObject.GetComponent<SetGameButton>();
        switch (comp.ButtonType)
        {
            case SetGameButton.EButtonType.PairNumberBtn:
                GameSettings.Instance.SetPairNumber(comp.PairNumber);
                break;
        }

        if(GameSettings.Instance.AllSettingsReady())
        {
            SceneManager.LoadScene(GameSceneName);
        }
    }
    
   


   
}

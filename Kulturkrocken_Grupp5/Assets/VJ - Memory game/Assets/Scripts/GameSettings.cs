using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameSettings : MonoBehaviour
{
    private int _settings;
    private const int SettingsNumber = 1;
    public enum EPairNumber
    {
        NotSet = 0,
        E10Pairs = 20,
        E15Pairs = 15,
        E20Pairs = 20,
    }

    public struct Settings
    {
        public EPairNumber PairNumber;
    };

    private Settings _gameSettings;

    public static GameSettings Instance;

    void Awake()
    {
        if(Instance == null)
        {
            DontDestroyOnLoad(this);
            Instance = this;
        }
        else
        {
            Destroy(this);
        }
    }
    void Start()
    {
        _gameSettings = new Settings();
        ResetGameSettings();
    }

    public void SetPairNumber(EPairNumber Number)
    {
        if (_gameSettings.PairNumber == EPairNumber.NotSet)
            _settings++;
        _gameSettings.PairNumber = Number;
    }

    public void ResetGameSettings()
    {
        _settings = 0;
        _gameSettings.PairNumber = EPairNumber.NotSet;
    }

    public bool AllSettingsReady()
    {
        return _settings == SettingsNumber;
    }
}

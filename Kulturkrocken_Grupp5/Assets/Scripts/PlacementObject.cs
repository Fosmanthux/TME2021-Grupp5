using TMPro;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Video;

public class PlacementObject : MonoBehaviour
{
    [SerializeField]
    public bool IsSelected; 

    public bool Selected
    {
        get
        {
            return this.IsSelected;
        }
        set
        {
            IsSelected = value;
        }
    }

    [SerializeField]
    private TextMeshPro OverlayText;

    [SerializeField]
    private VideoPlayer VideoPlayer;

    private void Awake()
    {
        VideoPlayer = GetComponentInChildren<VideoPlayer>();
        OverlayText = GetComponentInChildren<TextMeshPro>();
        if(OverlayText != null)
            OverlayText.gameObject.SetActive(false);
    }

    private void Update()
    {
        ToggleOverlay();
        TogglePlay();
    }

    public void ToggleOverlay() 
    {
        OverlayText.gameObject.SetActive(IsSelected);
    }

    public void TogglePlay()
    {
        if (Selected == true)
            VideoPlayer.Play();
        else
            VideoPlayer.Pause();
    }
}

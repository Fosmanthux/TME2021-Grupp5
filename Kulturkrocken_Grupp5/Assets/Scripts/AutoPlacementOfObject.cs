using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;

[RequireComponent(typeof(ARRaycastManager))]

public class AutoPlacementOfObject : MonoBehaviour
{
    public GameObject arCamera;

    [SerializeField]
    public GameObject[] videoArray;

    private GameObject video;

    [SerializeField]
    private ARPlaneManager arPlaneManager;

    [SerializeField]
    private Camera Camera;

    private Vector2 touchPosition = default;
    private ARRaycastManager arRaycastManager;
    private static List<ARRaycastHit> hits = new List<ARRaycastHit>();

    private PlacementObject lastSelectedObject;

    private ARSessionOrigin aRSessionOrigin;

    private Vector3 cameraPosition;
    private Vector3 planePosition;
    private Vector3 objectPosition;

    private void Awake()
    {
        arPlaneManager = GetComponent<ARPlaneManager>();
        arPlaneManager.planesChanged += PlaneChanged;
        arRaycastManager = GetComponent<ARRaycastManager>();
        aRSessionOrigin = GetComponent<ARSessionOrigin>();
    }

    void Update()
    {
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);
            touchPosition = touch.position;

            if (touch.phase == TouchPhase.Began)
            {
                Ray ray = Camera.ScreenPointToRay(touch.position);
                RaycastHit hitObject;
                if (Physics.Raycast(ray, out hitObject))
                {
                    lastSelectedObject = hitObject.transform.GetComponent<PlacementObject>();
                    if (lastSelectedObject != null)
                    {
                        ChangeSelectedObject(lastSelectedObject);
                    }
                }
                else
                {
                    lastSelectedObject = null;
                    if (lastSelectedObject == null)
                    {
                        PlacementObject[] allObjects = FindObjectsOfType<PlacementObject>();
                        foreach (PlacementObject placementObject in allObjects)
                        {
                            placementObject.Selected = false;
                        }
                    }
                }
            }
        }
    }

    private void PlaneChanged(ARPlanesChangedEventArgs args)
    {
        if (args.added != null && video == null)
        {
            ARPlane arPlane = args.added[0];
            this.cameraPosition = arCamera.transform.position;
            this.planePosition = arPlane.transform.position;
            this.objectPosition = new Vector3(planePosition.x, planePosition.y, cameraPosition.z + 3f);

            video = Instantiate(videoArray[Random.Range(0, videoArray.Length)], objectPosition, Quaternion.identity);
        }
    }

    public void ChangeVideo()
    {
        Destroy(video);
        video = Instantiate(videoArray[Random.Range(0, videoArray.Length)], objectPosition, Quaternion.identity);
    }

    void ChangeSelectedObject(PlacementObject selected)
    {
        PlacementObject[] allOtherObjects = FindObjectsOfType<PlacementObject>();
        foreach (PlacementObject placementObject in allOtherObjects)
        {
            if (placementObject != lastSelectedObject)
            {
                placementObject.Selected = false;
            }
            else
            {
                placementObject.Selected = true;
            }
        }
    }
}

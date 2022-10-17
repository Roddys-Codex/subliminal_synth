using System.Collections;
using System.Collections.Generic;
using AudioHelm;
using Sanford.Multimedia;
using UnityEngine;
using UnityEngine.EventSystems;

public class LoadPatch : MonoBehaviour, IPointerClickHandler
{

    HelmController helmController;
    [SerializeField] GameObject synth;
    //[SerializeField] HelmPatch patch;
    public string filePath;
    private HelmPatch helmPatch;

    void Awake() {
        helmController = synth.GetComponent<HelmController>();
        filePath = "..//AudioHelm/Presets/Bass/COA Terror Bass 1.helm";
    }
    // Start is called before the first frame update
    void Start()
    {
        NRKernal.NRInput.AddClickListener(NRKernal.ControllerHandEnum.Right, NRKernal.ControllerButton.APP, () =>
        {
            Debug.Log("ResetWorldMatrix");
            var poseTracker = NRKernal.NRSessionManager.Instance.NRHMDPoseTracker;
            poseTracker.ResetWorldMatrix();
        });
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        Debug.Log("I HAVE BEEN CLICKED");
        helmPatch.LoadPatchData(filePath);
        helmController.LoadPatch(helmPatch);
    }
}

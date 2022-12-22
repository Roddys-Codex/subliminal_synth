using System.Collections;
using System.Collections.Generic;
using ForieroEngine.Extensions;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class ParameterChange : MonoBehaviour
{
    /// <summary> The mesh render. </summary>
    private RectTransform m_RectTransform;
    public AudioHelm.HelmController helmController;
    public NRKernal.NRInput nRInput;
    public int note = 60;
    private Slider slider;
    Vector3 pos;

    /// <summary> Awakes this object. </summary>
    void Awake()
    {
        //m_RectTransform = transform.GetComponent<RectTransform>();
        slider = GetComponent<Slider>();
        slider.onValueChanged.AddListener(delegate { UpdateParameter(); });
    }

    void Start()
    {
        //NRKernal.NRInput.AddClickListener(NRKernal.ControllerHandEnum.Right, NRKernal.ControllerButton.APP, () =>
        //{
        //    Debug.Log("ResetWorldMatrix");
        //    var poseTracker = NRKernal.NRSessionManager.Instance.NRHMDPoseTracker;
        //    poseTracker.ResetWorldMatrix();
        //});
    }

    /// <summary> Updates this object. </summary>
    void UpdateParameter()
    {
   
        helmController.SetParameterAtIndex(0, slider.value);
        //get controller rotation, and set the value to the cube transform

         //Vector3. pos = NRKernal.NRInput.GetPosition;
        //pos.SetZ(NRKernal.NRInput.GetPosition);
           
        //transform.rotation.Set();
    }

    /// <summary> when pointer click, set the cube color to random color. </summary>
    /// <param name="eventData"> Current event data.</param>
    //public void OnPointerClick(PointerEventData eventData)
    //{
    //    //m_RectTransform.material.color = new Color(Random.Range(0f, 1f), Random.Range(0f, 1f), Random.Range(0f, 1f));
    //    //helmController.NoteOn(note, 0.5f, 0.5f);

    //    while(eventData.pointerPress)
    //    {
    //        //transform.rotation = NRKernal.NRInput.GetRotation();
    //    }
    //}

    //void OnGUI()
    //{
    //    Event e = Event.current;
    //    if (e.isKey)
    //        Debug.Log("e.keyCode: " + e.keyCode);
    //}

    // void OnMouseDown()
    // {
    //     m_MeshRender.material.color = new Color(Random.Range(0f, 1f), Random.Range(0f, 1f), Random.Range(0f, 1f));
    //     // helmController.noteOn(0.5f, 0.5f, 0.5f);
    // }

    /// <summary> when pointer hover, set the cube color to green. </summary>
    /// <param name="eventData"> Current event data.</param>
    //public void OnPointerEnter(PointerEventData eventData)
    //{
    //    //m_RectTransform.material.color = Color.green;
    //}

    ///// <summary> when pointer exit hover, set the cube color to white. </summary>
    ///// <param name="eventData"> Current event data.</param>
    //public void OnPointerExit(PointerEventData eventData)
    //{
    //    //m_RectTransform.material.color = Color.white;
    //}
}

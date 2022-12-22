using System.Collections;
using System.Collections.Generic;
using AudioHelm;
using UnityEngine;
using UnityEngine.EventSystems;

public class NoteOn : MonoBehaviour, IPointerClickHandler, IPointerEnterHandler, IPointerExitHandler
{
    /// <summary> The mesh render. </summary>
    private MeshRenderer m_MeshRender;
    public SynthManager synth;

    public int note = 60;

    /// <summary> Awakes this object. </summary>
    void Awake()
    {
        m_MeshRender = transform.GetComponent<MeshRenderer>();
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
    void Update()
    {
        //get controller rotation, and set the value to the cube transform
        //transform.rotation = NRKernal.NRInput.GetRotation();
    }

    /// <summary> when pointer click, set the cube color to random color. </summary>
    /// <param name="eventData"> Current event data.</param>
    public void OnPointerClick(PointerEventData eventData)
    {
        m_MeshRender.material.color = new Color(Random.Range(0f, 1f), Random.Range(0f, 1f), Random.Range(0f, 1f));
        synth.playANote(note);
    }

        /// <summary> when pointer hover, set the cube color to green. </summary>
        /// <param name="eventData"> Current event data.</param>
        public void OnPointerEnter(PointerEventData eventData)
        {
            m_MeshRender.material.color = Color.green;
        }

        /// <summary> when pointer exit hover, set the cube color to white. </summary>
        /// <param name="eventData"> Current event data.</param>
        public void OnPointerExit(PointerEventData eventData)
        {
            m_MeshRender.material.color = Color.white;
        }
    
}

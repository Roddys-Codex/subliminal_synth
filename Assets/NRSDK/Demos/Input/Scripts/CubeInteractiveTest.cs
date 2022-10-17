/****************************************************************************
* Copyright 2019 Nreal Techonology Limited. All rights reserved.
*                                                                                                                                                          
* This file is part of NRSDK.                                                                                                          
*                                                                                                                                                           
* https://www.nreal.ai/        
* 
*****************************************************************************/

using UnityEngine;
using UnityEngine.EventSystems;
// using AudioHelm.HelmController;

namespace NRKernal.NRExamples
{
    /// <summary> A cube interactive test. </summary>
    public class CubeInteractiveTest : MonoBehaviour, IPointerClickHandler, IPointerEnterHandler, IPointerExitHandler
    {
        /// <summary> The mesh render. </summary>
        private MeshRenderer m_MeshRender;
        // public AudioHelm.HelmController helmController;
        public int note = 60;

        /// <summary> Awakes this object. </summary>
        void Awake()
        {
            m_MeshRender = transform.GetComponent<MeshRenderer>();
        }

        void Start()
        {
            NRInput.AddClickListener(ControllerHandEnum.Right, ControllerButton.APP, () =>
            {
                Debug.Log("ResetWorldMatrix");
                var poseTracker = NRSessionManager.Instance.NRHMDPoseTracker;
                poseTracker.ResetWorldMatrix();
            });
        }

        /// <summary> Updates this object. </summary>
        void Update()
        {
            //get controller rotation, and set the value to the cube transform
            transform.rotation = NRInput.GetRotation();
        }

        /// <summary> when pointer click, set the cube color to random color. </summary>
        /// <param name="eventData"> Current event data.</param>
        public void OnPointerClick(PointerEventData eventData)
        {
            m_MeshRender.material.color = new Color(Random.Range(0f, 1f), Random.Range(0f, 1f), Random.Range(0f, 1f));
        }

        void OnGUI()
        {
            Event e = Event.current;
            if (e.isKey)
                Debug.Log("e.keyCode: " + e.keyCode);
        }

        // void OnMouseDown()
        // {
        //     m_MeshRender.material.color = new Color(Random.Range(0f, 1f), Random.Range(0f, 1f), Random.Range(0f, 1f));
        //     // helmController.noteOn(0.5f, 0.5f, 0.5f);
        // }

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
}

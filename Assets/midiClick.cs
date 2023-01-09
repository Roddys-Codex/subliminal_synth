using System.Collections;
using System.Collections.Generic;
using jp.kshoji.unity.midi.sample;
using UnityEngine;
using UnityEngine.EventSystems;

public class midiClick : MonoBehaviour, IPointerClickHandler
{
    public GameObject midiSampleSceneObject;
    public MidiSampleScene midiSampleScene;
    private MeshRenderer m_MeshRender;
    // Start is called before the first frame update
    void Start()
    {
        midiSampleScene = midiSampleSceneObject.GetComponent<MidiSampleScene>();
        m_MeshRender = transform.GetComponent<MeshRenderer>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        m_MeshRender.material.color = new Color(Random.Range(0f, 1f), Random.Range(0f, 1f), Random.Range(0f, 1f));
        midiSampleScene.connectToRtpServer();
        
    }
}

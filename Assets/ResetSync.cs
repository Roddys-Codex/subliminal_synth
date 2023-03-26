using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using AudioHelm;
using UnityEngine.EventSystems;

public class ResetSync : MonoBehaviour, IPointerClickHandler
{

    public AudioHelmClock midiClock;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void OnPointerClick(PointerEventData eventData)
    {
        midiClock.Reset();
    }
}

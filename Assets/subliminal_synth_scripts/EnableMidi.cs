using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class EnableMidi : MonoBehaviour, IPointerClickHandler
{
    public bool midiEnabled = false;
    public GameObject midiConnection;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(midiEnabled==true)
        {
            midiConnection.SetActive(midiEnabled);
        }
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        if(midiEnabled==false)
        {
            midiEnabled = true;
            midiConnection.SetActive(true);
        } else
        {
            midiEnabled = false;
            midiConnection.SetActive(false);
        }
        

       
    }
}

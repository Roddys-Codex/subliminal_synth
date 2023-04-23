using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using AudioHelm;
using UnityEngine.UI;

public class TempoEdit : MonoBehaviour
{
    public AudioHelmClock audioHelmClock;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void setTempo()
    {
        audioHelmClock.bpm = GetComponent<Slider>().value;
    }
}

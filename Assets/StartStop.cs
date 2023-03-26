using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using AudioHelm;

public class StartStop : MonoBehaviour
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

    public void startStop()
    {
        if(audioHelmClock.pause)
        {
            audioHelmClock.pause = false;
        } else
        {
            audioHelmClock.pause = true;
        }
    }
}

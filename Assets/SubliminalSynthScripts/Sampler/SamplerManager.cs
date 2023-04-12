using System.Collections;
using System.Collections.Generic;
using AudioHelm;
using UnityEngine;

public class SamplerManager : MonoBehaviour
{
    public Sequencer sequencer;
    public List<SamplerPosition> samplerPositionsC;
    public Sampler sampler;
    // Start is called before the first frame update
    void Start()
    {
        sequencer.OnBeat += playIfActive;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void playIfActive(int index)
    {
        //index = index--;
        if(index<0)
        {
            index = 15;
        } 
        int previousIndex;
        if(index == 0)
        {
            previousIndex = 15;
        } else
        {
            previousIndex = index - 1;
        }
        if (index == samplerPositionsC[index].position)
        {
            MeshRenderer currentMesh = samplerPositionsC[index].GetComponent<MeshRenderer>();
            currentMesh.material.color= Color.red;
            
            if (samplerPositionsC[previousIndex].active != true)
            {
                samplerPositionsC[previousIndex].GetComponent<MeshRenderer>().material.color = Color.white;
            } else
            {
                samplerPositionsC[previousIndex].GetComponent<MeshRenderer>().material.color = Color.cyan;
            }
            
        }
        if (samplerPositionsC[previousIndex].active)
        {
            sampler.NoteOff(samplerPositionsC[previousIndex].note);
        }
        if(samplerPositionsC[index].active)
        {
            sampler.NoteOn(samplerPositionsC[index].note);
        }
    }
}

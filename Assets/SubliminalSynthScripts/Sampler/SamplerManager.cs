using System.Collections.Generic;
using System.Linq;
using AudioHelm;
using jp.kshoji.unity.midi;
using UnityEngine;

public class SamplerManager : MonoBehaviour
{
    public Sequencer sequencer;
    public List<SamplerPosition> samplerPositionsC;
    public Sampler sampler;

    public RTPMidiActive midiActiveScript;
    // Start is called before the first frame update
    void Start()
    {
        sequencer.OnBeat += PlayIfActive;
    }

    public void PlayIfActive(int index)
    {
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

            if (midiActiveScript.midiEnabled && midiActiveScript.samplerMidi)
            {
                var deviceIds = MidiManager.Instance.DeviceIdSet.ToArray();
                var deviceNames = new string[deviceIds.Length];
                MidiManager.Instance.SendMidiNoteOff(deviceIds[0], 0, 0, samplerPositionsC[previousIndex].note, 127);
            }
        }
        if(samplerPositionsC[index].active)
        {
            sampler.NoteOn(samplerPositionsC[index].note);
            if (midiActiveScript.midiEnabled && midiActiveScript.samplerMidi)
            {
                var deviceIds = MidiManager.Instance.DeviceIdSet.ToArray();
                var deviceNames = new string[deviceIds.Length];
                MidiManager.Instance.SendMidiNoteOn(deviceIds[0], 0, 0, samplerPositionsC[previousIndex].note, 127);
            }
        }
    }
}

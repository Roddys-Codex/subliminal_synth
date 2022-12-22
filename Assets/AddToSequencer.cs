using System.Collections;
using System.Collections.Generic;
using AudioHelm;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Events;

public class AddToSequencer : MonoBehaviour, IPointerClickHandler
{

    public SynthManager synth;
    public int positionInSequencer;
    public string noteName;
    public Note note;
    public UnityEvent unityEvent;

    public void OnPointerClick(PointerEventData eventData)
    {
        //note.
        //int note = synth.noteNames[noteName];
        float sixteenthNote = synth.getSixteenthTime() * 8.0f;
        
        synth.addSixteenthNote(synth.cNote, (positionInSequencer*synth.getSixteenthTime()), sixteenthNote);
                

        
    }

    // Start is called before the first frame update
    void Start()
    {
        note = new Note();
        note.start = (synth.getSixteenthTime() * 4) * 3;
        note.end = (synth.getSixteenthTime() * 4) * 3;


    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

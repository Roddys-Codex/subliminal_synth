using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using AudioHelm;
using UnityEngine.Events;
using Unity.VisualScripting;

public class SynthManager : MonoBehaviour
{

    public HelmController helmController;
    public HelmSequencer sequencer;
    public int sequencerPosition;

    // Start is called before the first frame update
    void Awake()
    {
        helmController = GetComponent<HelmController>();
        sequencer = GetComponent<HelmSequencer>();
    }

    // Update is called once per frame
    void Update()
    {
        this.sequencerPosition = (int)sequencer.GetSequencerPosition() + 1;
    }

    public void playANote(int note)
    {
        helmController.NoteOn(note, 0.5f, 0.5f);
    }

    //public void addNotes()
    //{
    //    //for(int i = 0; i < 16; i++)
    //    //{
    //    int noteMiddleC = 60;
    //    float start = 0;
    //    float end = 4;
    //    float velocity = 1;
    //    sequencer.AddNote(noteMiddleC, start, end, velocity);
    //    Instantiate(prefab, new Vector3(start, start, end), Quaternion.identity);
    //    List<Note> allNotes = getAllNotesInSequencer();
    //}

    public List<Note> getAllNotesInSequencer()
    {
        return sequencer.getAllNotes();
    }

    public List<Note> getAllNotes()
    {
        return sequencer.getAllNotes();
    }

    public float getSixteenthTime()
    {
        return sequencer.GetSixteenthTime();
    }

}

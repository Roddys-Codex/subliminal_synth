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
    public int note = 60;
    List<Note> notes;

    public List<GameObject> sixteenthNotes;

    public float  QUARTER_NOTE;
    public float EIGHT_NOTE;

    public int cNote = 48;
    public int dNote = 50;
    public int eNote = 52;
    public int fNote = 53;
    public int gNote = 55;
    public int aNote = 57;
    public int bNote = 59;

    public static Dictionary<int, Note> noteNames { get; set; }

    Note note1 = new Note();
    Note note2 = new Note();
    Note note3 = new Note();
    Note note4 = new Note();
    Note note5 = new Note();
    Note note6 = new Note();
    Note note7 = new Note();
    Note note8 = new Note();
    Note note9 = new Note();
    Note note10 = new Note();
    Note note11 = new Note();
    Note note12 = new Note();

    // Start is called before the first frame update
    void Awake()
    {
        Debug.Log("SIXTEENTH TIME IS : "+sequencer.GetSixteenthTime()+" ");
        helmController = GetComponent<HelmController>();
        sequencer = GetComponent<HelmSequencer>();

        QUARTER_NOTE = sequencer.GetSixteenthTime() * 4;
        EIGHT_NOTE = sequencer.GetSixteenthTime() * 8;

        //noteNames.Add(1, note1);
        //noteNames.Add(2, note2);
        //noteNames.Add(3, note3);
        //noteNames.Add(4, note4);
        //noteNames.Add(5, note5);
        //noteNames.Add(6, note6);
        //noteNames.Add(7, note7);
        //noteNames.Add(8, note8);
        //noteNames.Add(9, note9);
        //noteNames.Add(10, note10);
        //noteNames.Add(11, note11);
        //noteNames.Add(12, note12);
        noteNames = new Dictionary<int, Note>();
        Debug.Log("LOGGED");
        
        Debug.Log("LOGGED TWO");
        addNotes();
    }

    // Update is called once per frame
    void Update()
    {
        //addNotes();
        Debug.Log("This was called");
    }

    public void playANote(int note)
    {
        helmController.NoteOn(note, 0.5f, 0.5f);
    }

    public void addNotes()
    {
        //for(int i = 0; i < 16; i++)
        //{
        int note = 80;
        float start = 0;
        float end = 1;
        float velocity = 1;
        sequencer.AddNote(note, start, end, velocity);
        sequencer.AddNote(note+1, start+1, end+1, velocity);
        sequencer.AddNote(note+2, start+2, end+2, velocity);
        sequencer.AddNote(note+3, start+3, end+3, velocity);
        sequencer.AddNote(note+4, start+4, end+4, velocity);
        sequencer.AddNote(note+5, start+5, end+5, velocity);
        sequencer.AddNote(note+6, start+6, end+6, velocity);
        sequencer.AddNote(note+7, start+7, end+7, velocity);

        //noteNames.Add(i, note1);
        //noteNames[i].start = sequencer.GetSixteenthTime();
        //noteNames[i].end = sequencer.GetSixteenthTime() * 8;
        //noteNames[i].note = 60;
        //noteNames[i].TriggerNoteOnEvent();
        //}
    }

    public void changeSequencer()
    {

    }

    public void addSixteenthNote(int note, float start, float end)
    {
        float sixteenth = sequencer.GetSixteenthTime();

        notes = sequencer.GetAllNotes();

        notes.ForEach(noteSingle => {
            sequencer.RemoveNote(noteSingle);
            }
         );

        sequencer.AddNote(note, start, end, 1.0f);
    }

    public List<Note> getAllNotes()
    {
        return sequencer.getAllNotes();
    }

    public float getSixteenthTime()
    {
        return sequencer.GetSixteenthTime();
    }

    //public int getNoteName(string noteName)
    //{
    //    return noteNames[noteName];
    //}

}

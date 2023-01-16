using System.Collections.Generic;
using UnityEngine;
using AudioHelm;
using jp.kshoji.unity.midi;
using System.Linq;
using UnityEngine.UI;
using System;

public class SynthManager : MonoBehaviour
{
    public float sixteenthTime;
    public HelmController helmController;
    public HelmSequencer sequencer;
    public AudioHelmClock audioHelmClock;
    public int sequencerPosition = 0;
    public int previousSeqPosition;
    public SequencerPosition position1;
    public SequencerPosition position2;
    public SequencerPosition position3;
    public SequencerPosition position4;
    public SequencerPosition position5;
    public SequencerPosition position6;
    public SequencerPosition position7;
    public SequencerPosition position8;
    public SequencerPosition position9;
    public SequencerPosition position10;
    public SequencerPosition position11;
    public SequencerPosition position12;
    public SequencerPosition position13;
    public SequencerPosition position14;
    public SequencerPosition position15;
    public SequencerPosition position16;
    public List<GameObject> positionObjects;
    public List<SequencerPosition> sequencerPositions;
    public List<int> seqPositionNumber;
    public int previousIndex = 16;
    public int currentIndex;
    public GameObject note;
    public Slider noteSlider;
    public GameObject position;
    public Slider positionSlider;
    public GameObject octave;
    public Slider octaveSlider;
    public int pitch;
    public int positionSelected = 1;
    public int previousSelected = 16;
    public Note activeNote;
    public Note selectedNote;
    public Note oldNote;
    public Note noteUpdate;
    private bool firstTime = true;

    void Awake()
    {
        sixteenthTime = sequencer.GetSixteenthTime();
        sequencer.OnBeat += BeatActionWhite;

        sequencer.OnNoteOn += NoteActionOn;

        sequencer.OnNoteOff += NoteActionOff;
        
        helmController = GetComponent<HelmController>();
        sequencer = GetComponent<HelmSequencer>();
        audioHelmClock = GetComponent<AudioHelmClock>();
        sequencerPositions.Add(position1);
        sequencerPositions.Add(position2);
        sequencerPositions.Add(position3);
        sequencerPositions.Add(position4);
        sequencerPositions.Add(position5);
        sequencerPositions.Add(position6);
        sequencerPositions.Add(position7);
        sequencerPositions.Add(position8);
        sequencerPositions.Add(position9);
        sequencerPositions.Add(position10);
        sequencerPositions.Add(position11);
        sequencerPositions.Add(position12);
        sequencerPositions.Add(position13);
        sequencerPositions.Add(position14);
        sequencerPositions.Add(position15);
        sequencerPositions.Add(position16);
        /*
         * 
         *  HERE!!!!
         * 
         */
        position1.OnNote += AddNote;
        position1.OffNote += RemoveNote;

        position2.OnNote += AddNote;
        position2.OffNote += RemoveNote;

        position3.OnNote += AddNote;
        position3.OffNote += RemoveNote;

        position4.OnNote += AddNote;
        position4.OffNote += RemoveNote;

        position5.OnNote += AddNote;
        position5.OffNote += RemoveNote;

        position6.OnNote += AddNote;
        position6.OffNote += RemoveNote;

        position7.OnNote += AddNote;
        position7.OffNote += RemoveNote;

        position8.OnNote += AddNote;
        position8.OffNote += RemoveNote;

        position9.OnNote += AddNote;
        position9.OffNote += RemoveNote;

        position10.OnNote += AddNote;
        position10.OffNote += RemoveNote;

        position11.OnNote += AddNote;
        position11.OffNote += RemoveNote;

        position12.OnNote += AddNote;
        position12.OffNote += RemoveNote;

        position13.OnNote += AddNote;
        position13.OffNote += RemoveNote;

        position14.OnNote += AddNote;
        position14.OffNote += RemoveNote;

        position15.OnNote += AddNote;
        position15.OffNote += RemoveNote;

        position16.OnNote += AddNote;
        position16.OffNote += RemoveNote;


        noteSlider = note.GetComponent<Slider>();
        octaveSlider = octave.GetComponent<Slider>();
        positionSlider = position.GetComponent<Slider>();

        positionSlider.onValueChanged.AddListener(delegate { PositionUpdate(); });

        noteSlider.onValueChanged.AddListener(delegate { NoteUpdate(); });
        octaveSlider.onValueChanged.AddListener(delegate { NoteUpdate(); });

        pitch = 60;
        selectedNote = new Note();
        noteUpdate = new Note();

    }

    private void AddNote(Note note, bool noteActive)
    {
        /*
         * CAREFUL
         */
        if (note.start < 0)
        {
            note.start = 15;
        }
            
        if (sequencerPositions[(int)note.start-1].note.start == note.start)
        {
            note.note = pitch;
            if (noteActive == false)
            {
                sequencer.AddNote(note.note, note.start, note.end, note.velocity);
            }

            NoteActionOn(note);
        }
        
    }

    private void RemoveNote(Note note, bool noteActive)
    {
        if(firstTime == true)
        {
            Note firstTime = new Note();
            firstTime.note = 60;
            firstTime.start = note.note;
            firstTime.end = note.end;
            firstTime.velocity = note.velocity;
            sequencer.RemoveNote(firstTime);
        }
        if (noteActive == true)
        {
            sequencer.RemoveNote(note);
        }

        NoteActionOn(note);
    }

    private void NoteUpdate()
    {

        //noteUpdate.note = (int)noteSlider.value * (int)octaveSlider.value;
        //noteUpdate.start = sequencerPositions[positionSelected].note.start;
        //noteUpdate.end = sequencerPositions[positionSelected].note.end;
        //noteUpdate.velocity = sequencerPositions[positionSelected].note.velocity;

        int oldKey = sequencerPositions[positionSelected].note.note;

        pitch = (int)octaveSlider.value * 12 + (int)noteSlider.value;
        sequencerPositions[positionSelected].note.note = pitch;

        //sequencer.RemoveNotesContainedInRange(noteUpdate.note, noteUpdate.start, noteUpdate.end);
        sequencer.NotifyNoteKeyChanged(sequencerPositions[positionSelected].note, oldKey);
        sequencerPositions[positionSelected].noteActive = true;
        //sequencerPositions[positionSelected].renderer.material.color = Color.cyan;

        selectedNote = noteUpdate;
    }

    private void PositionUpdate()
    {
        noteUpdate.start = sequencerPositions[(int)positionSlider.value].note.start;
        noteUpdate.end = sequencerPositions[(int)positionSlider.value].note.end;
        previousSelected = positionSelected;
        positionSelected = (int)positionSlider.value;

        if(sequencerPositions[previousSelected].noteActive)
        {
            sequencerPositions[previousSelected].renderer.material.color = Color.cyan;
        } else
        {
            sequencerPositions[previousSelected].renderer.material.color = Color.white;
        }
        
        sequencerPositions[positionSelected].renderer.material.color = Color.red;
    }

    public void BeatActionMagenta(int index)
    {
        if (sequencerPositions[index].noteActive != true)
        {
            sequencerPositions[index].renderer.material.color = Color.magenta;
        }
        
    }

    public void BeatActionWhite(int index)
    {   
        if(index != positionSelected)
        {
            if (sequencerPositions[previousIndex].noteActive != true)
            {
                sequencerPositions[previousIndex].renderer.material.color = Color.white;
                BeatActionMagenta(index);
                BeatActionUpdate(index);
            }  else {
                BeatActionMagenta(index);
                BeatActionUpdate(index);
            }
        }
    }

    public void BeatActionUpdate(int index)
    {
        previousIndex = index;
    }

    public void playANote(int note)
    {
        helmController.NoteOn(note, 0.5f, 0.5f);
    }

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

    public void NoteActionOn(Note note)
    {
        helmController.NoteOn(note.note, note.velocity, sixteenthTime);
        var deviceIds = MidiManager.Instance.DeviceIdSet.ToArray();
        var deviceNames = new string[deviceIds.Length];
        MidiManager.Instance.SendMidiNoteOn(deviceIds[0], 0, 0, note.note, (int)note.velocity);
        Debug.Log("MidiNote On Sent!");
        
    }

    public void NoteActionOff(Note note)
    {
        
        var deviceIds = MidiManager.Instance.DeviceIdSet.ToArray();
        var deviceNames = new string[deviceIds.Length];
        MidiManager.Instance.SendMidiNoteOff(deviceIds[0], 0, 0, note.note, (int)note.velocity);
        Debug.Log("MidiNote Off Sent!");
    }

    public void NoteActionOnHelm(Note note)
    {
        helmController.NoteOn(note.note, note.velocity, sixteenthTime);
    }

}
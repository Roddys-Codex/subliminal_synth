using System.Collections.Generic;
using UnityEngine;
using AudioHelm;
using jp.kshoji.unity.midi;
using System.Linq;
using UnityEngine.UI;
using System;
using UnityEngine.UIElements;
using Slider = UnityEngine.UI.Slider;

public class SynthManager16th : MonoBehaviour
{
    public EnableMidi midiEnabled;
    public float sixteenthTime;
    public HelmController helmController;
    public HelmSequencer sequencer;
    public AudioHelmClock audioHelmClock;
    public int sequencerPosition = 0;
    public int previousSeqPosition;

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
        sequencer = GetComponent<HelmSequencer>();
        sixteenthTime = sequencer.GetSixteenthTime();
        sequencer.OnBeat += BeatActionWhite;

        sequencer.OnNoteOn += NoteActionOn;

        sequencer.OnNoteOff += NoteActionOff;
        
        helmController = GetComponent<HelmController>();
        sequencer = GetComponent<HelmSequencer>();
        audioHelmClock = GetComponent<AudioHelmClock>();
    
        sequencerPositions.ForEach(position =>
        {
            position.OnNote += AddNote;
            position.OffNote += RemoveNote;
        });

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

        int oldKey = sequencerPositions[positionSelected].note.note;

        pitch = (int)octaveSlider.value * 12 + (int)noteSlider.value;
        sequencerPositions[positionSelected].note.note = pitch;

        sequencer.NotifyNoteKeyChanged(sequencerPositions[positionSelected].note, oldKey);
        sequencerPositions[positionSelected].noteActive = true;

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
        if(midiEnabled.midiEnabled)
        {
            var deviceIds = MidiManager.Instance.DeviceIdSet.ToArray();
            var deviceNames = new string[deviceIds.Length];
            MidiManager.Instance.SendMidiNoteOn(deviceIds[0], 0, 0, note.note, (int)note.velocity);
            Debug.Log("MidiNote On Sent!");
        }
        
        
    }

    public void NoteActionOff(Note note)
    {
        if(midiEnabled.midiEnabled)
        {
            var deviceIds = MidiManager.Instance.DeviceIdSet.ToArray();
            var deviceNames = new string[deviceIds.Length];
            MidiManager.Instance.SendMidiNoteOff(deviceIds[0], 0, 0, note.note, (int)note.velocity);
            Debug.Log("MidiNote Off Sent!");
        }
        
    }

    public void NoteActionOnHelm(Note note)
    {
        helmController.NoteOn(note.note, note.velocity, sixteenthTime);
    }

}
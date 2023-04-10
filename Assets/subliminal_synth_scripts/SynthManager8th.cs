using System.Collections.Generic;
using UnityEngine;
using AudioHelm;
using jp.kshoji.unity.midi;
using System.Linq;
using UnityEngine.UI;
using System;
using UnityEngine.Serialization;
using UnityEngine.UIElements;
using Slider = UnityEngine.UI.Slider;

public class SynthManager8th : MonoBehaviour
{
    // General variables needed for functionality
    [FormerlySerializedAs("midiEnabled")] public EnableRTPMidi rtpMidiEnabled;
    public UnityEngine.UI.Toggle midiToggle;
    public float sixteenthTime;
    public HelmController helmController;
    public HelmSequencer sequencer;
    public AudioHelmClock audioHelmClock;
    public int sequencerPosition = 0;
    public int previousSeqPosition;
    public List<SequencerPosition8th> sequencerPositions;
    public int previousIndex = 7;

    // References to GameObjects. These are the UI elements the user interacts with.
    public GameObject timeObject;
    public Slider timeSlider;
    public GameObject noteObject;
    public Slider noteSlider;
    public GameObject positionObject;
    public Slider positionSlider;
    public GameObject octaveObject;
    public Slider octaveSlider;

    // Variables related to setting the values of the note the user has selected.
    public int pitch;
    public int positionSelected = 1;
    public int previousSelected = 7;
    public Note selectedNote;
    public Note noteUpdate;
    private int synthTime = 2;

    // List of 'lights' that show up when a user wants to change a note value.
    public List<GameObject> eighthLights;

    void Awake()
    {
        // Initialialize variables.
        sequencer = GetComponent<HelmSequencer>();
        helmController = GetComponent<HelmController>();
        sixteenthTime = sequencer.GetSixteenthTime() * 2;
        helmController = GetComponent<HelmController>();
        sequencer = GetComponent<HelmSequencer>();
        audioHelmClock = GetComponent<AudioHelmClock>();

        // Delegate sequencer methods.
        sequencer.OnNoteOn += NoteActionOn;
        sequencer.OnNoteOff += NoteActionOff;

        // Delegate each SequencerPosition8th to the method.
        foreach (SequencerPosition8th seqPos in sequencerPositions)
        {
            seqPos.OnNote += AddNote;
            seqPos.OffNote += RemoveNote;
        }

        // Initialize objects.
        timeSlider = timeObject.GetComponent<Slider>();
        noteSlider = noteObject.GetComponent<Slider>();
        octaveSlider = octaveObject.GetComponent<Slider>();
        positionSlider = positionObject.GetComponent<Slider>();

        // Add listeners to the 'onChange' function of the sliders.
        //timeSlider.onValueChanged.AddListener(delegate { TimeUpdate(); });
        positionSlider.onValueChanged.AddListener(delegate { PositionUpdate(); });
        noteSlider.onValueChanged.AddListener(delegate { NoteUpdate(); });
        octaveSlider.onValueChanged.AddListener(delegate { NoteUpdate(); });

        // Initialize note currently being inspected by the user.
        // This will become active when a user selects the 'note menu', as doing so also selects a note (the note initialised beneath).
        pitch = 60;
        selectedNote = new Note();
        noteUpdate = new Note();
    }

    // Adds a note to the sequencer.
    public void AddNote(Note note)
    {
        sequencer.AddNote(note.note, note.start, note.end, note.velocity);
    }

    // Conditionally adds a note to the sequencer, if the note is active.
    private void AddNote(Note note, bool noteActive)
    {
        note.note = pitch;
        if (noteActive == false)
        {
            sequencer.AddNote(note.note, note.start, note.end, note.velocity);
        }
        NoteActionOn(note);
    }

    // Conditionally removes a note if active.
    private void RemoveNote(Note note, bool noteActive)
    {
        if (noteActive == true)
        {
            sequencer.RemoveNote(note);
        }
        NoteActionOn(note);
    }

    // Updates the note that the user has selected. (Method will take it's values from the UI sliders)
    private void NoteUpdate()
    {
        synthTime = (int)timeSlider.value;
        if (synthTime == 2)
        {
            int oldKey = sequencerPositions[positionSelected].note.note;

            pitch = (int)octaveSlider.value * 12 + (int)noteSlider.value;
            sequencerPositions[positionSelected].note.note = pitch;

            sequencer.NotifyNoteKeyChanged(sequencerPositions[positionSelected].note, oldKey);
            sequencerPositions[positionSelected].noteActive = true;
            sequencerPositions[positionSelected].renderer.material.color = Color.cyan;

            selectedNote = noteUpdate;
        }
    }

    // Changes the position the user has selected.. (Method will take it's values from the UI sliders)
    public void PositionUpdate()
    {
        synthTime = (int)timeSlider.value;
        if (synthTime == 2)
        {
            noteUpdate.start = sequencerPositions[(int)positionSlider.value].note.start;
            noteUpdate.end = sequencerPositions[(int)positionSlider.value].note.end;
            previousSelected = positionSelected;
            positionSelected = (int)positionSlider.value;

            if (sequencerPositions[previousSelected].noteActive)
            {
                sequencerPositions[previousSelected].renderer.material.color = Color.cyan;
                eighthLights[previousSelected].SetActive(false);
            }
            else
            {
                eighthLights[previousSelected].SetActive(false);
            }

            eighthLights[positionSelected].SetActive(true);
        }
    }

    // Changes from allowing the user to program either 16th or 8th notes.
    private void TimeUpdate()
    {
        synthTime = (int)timeSlider.value;

        if (synthTime == 2)
        {
            positionSelected = 0;
            eighthLights[positionSelected].SetActive(true);
        }
        
    }

    // Plays a note for a designated time. Note param is the MIDI note.
    public void playANote(int note)
    {
        helmController.NoteOn(note, 0.5f, sequencer.GetSixteenthTime() * 2);
        sequencerPositions[sequencer.currentIndex].note.note = note;

        if(midiToggle.isOn)
        {
            sequencerPositions[sequencer.currentIndex].noteActive = true;

            sequencer.AddNote(note, sequencerPositions[sequencer.currentIndex].positionObjectNumber, sequencerPositions[sequencer.currentIndex].positionObjectNumber + 2, 1);
            sequencerPositions[sequencer.currentIndex].renderer.material.color = Color.cyan;
        }
        
    }

    // Gets all Notes in Sequencer.
    public List<Note> getAllNotesInSequencer()
    {
        return sequencer.getAllNotes();
    }

    // Gets Sixteenth time as float.
    public float getSixteenthTime()
    {
        return sequencer.GetSixteenthTime();
    }

    // Implementation of the delegate method. This method will be called each time an active note is encountered in the loop.
    public void NoteActionOn(Note note)
    {

            helmController.NoteOn(note.note, note.velocity, sixteenthTime);
            if (rtpMidiEnabled.midiEnabled)
            {
                var deviceIds = MidiManager.Instance.DeviceIdSet.ToArray();
                var deviceNames = new string[deviceIds.Length];
                MidiManager.Instance.SendMidiNoteOn(deviceIds[0], 0, 0, note.note, (int)note.velocity);
                Debug.Log("MidiNote On Sent!");
            }

    }

    // Implementation of the delegate method. This method will be called every time a NoteOff event is sent.
    public void NoteActionOff(Note note)
    {
        if (rtpMidiEnabled.midiEnabled)
        {
            var deviceIds = MidiManager.Instance.DeviceIdSet.ToArray();
            var deviceNames = new string[deviceIds.Length];
            MidiManager.Instance.SendMidiNoteOff(deviceIds[0], 0, 0, note.note, (int)note.velocity);
            Debug.Log("MidiNote Off Sent!");
        }

    }

}
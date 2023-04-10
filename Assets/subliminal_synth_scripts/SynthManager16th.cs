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

public class SynthManager16th : MonoBehaviour
{
    // General variables needed for functionality
    [FormerlySerializedAs("midiEnabled")] public EnableRTPMidi rtpMidiEnabled;
    public float sixteenthTime;
    public HelmController helmController;
    public Sequencer sequencer;
    public AudioHelmClock audioHelmClock;
    public int sequencerPosition = 0;
    private int synthTime = 1;
    public List<SequencerPosition> sequencerPositions;
    public int previousIndex = 16;
    public int currentIndex;

    // References to GameObjects. These are the UI elements the user interacts with.
    public GameObject timeObject;
    public Slider timeSlider;
    public GameObject note;
    public Slider noteSlider;
    public GameObject position;
    public Slider positionSlider;
    public GameObject octave;
    public Slider octaveSlider;

    // Variables related to setting the values of the note the user has selected.
    public int pitch;
    public int positionSelected = 1;
    public int previousSelected = 16;
    public Note selectedNote;
    public Note noteUpdate;
    public UnityEngine.UI.Toggle midiToggle;

    // List of 'lights' that show up when a user wants to change a note value.
    public List<GameObject> sixteenthLights;
    public GameObject sixteenthLightObject;
    public GameObject eighthLightObject;

    void Awake()
    {
        // Initialialize variables.
        sequencer = GetComponent<HelmSequencer>();
        sixteenthTime = sequencer.GetSixteenthTime();
        sequencer.OnBeat += MoveColorIndicatorToCurrentIndex;

        // Delegate sequencer methods.
        sequencer.OnNoteOn += NoteActionOn;
        sequencer.OnNoteOff += NoteActionOff;
        
        helmController = GetComponent<HelmController>();
        sequencer = GetComponent<HelmSequencer>();
        audioHelmClock = GetComponent<AudioHelmClock>();

        // Delegate each SequencerPosition8th to the method.
        sequencerPositions.ForEach(position =>
        {
            position.OnNote += AddNote;
            position.OffNote += RemoveNote;
        });

        // Initialize objects.
        timeSlider = timeObject.GetComponent<Slider>();
        noteSlider = note.GetComponent<Slider>();
        octaveSlider = octave.GetComponent<Slider>();
        positionSlider = position.GetComponent<Slider>();

        // Add listeners to the 'onChange' function of the sliders.
        timeSlider.onValueChanged.AddListener(delegate { TimeUpdate(); });
        positionSlider.onValueChanged.AddListener(delegate { PositionUpdate(); });
        noteSlider.onValueChanged.AddListener(delegate { NoteUpdate(); });
        octaveSlider.onValueChanged.AddListener(delegate { NoteUpdate(); });

        // Initialize note currently being inspected by the user.
        // This will become active when a user selects the 'note menu', as doing so also selects a note (the note initialised beneath).
        pitch = 60;
        selectedNote = new Note();
        noteUpdate = new Note();

    }

    // Conditionally add a note to the Sequencer, if active, then play note.
    public void AddNote(Note note, bool noteActive)
    {            
        note.note = pitch;
        if (noteActive == false)
        {
            sequencer.AddNote(note.note, note.start, note.end, note.velocity);
        }
        NoteActionOn(note);
    }

    // Adds a note to the sequencer.
    public void AddNote(Note note)
    {
        sequencer.AddNote(note.note, note.start, note.end, note.velocity);
    }

    // Removes a note from the sequencer, if active.
    private void RemoveNote(Note note, bool noteActive)
    {
        if (noteActive == true)
        {
            sequencer.RemoveNote(note);
        }
        NoteActionOn(note);
    }

    // Updates the values of the Note currently selected by the user. Values are taken from the UI sliders shown on screen.
    private void NoteUpdate()
    {
        synthTime = (int)timeSlider.value;
        if (synthTime==1)
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

    // Updates the position the user currently has selected. Values are taken from the UI sliders shown on screen.
    private void PositionUpdate()
    {
        synthTime = (int)timeSlider.value;
        if (synthTime == 1)
        {
            noteUpdate.start = sequencerPositions[(int)positionSlider.value].note.start;
            noteUpdate.end = sequencerPositions[(int)positionSlider.value].note.end;
            previousSelected = positionSelected;
            positionSelected = (int)positionSlider.value;

            if (sequencerPositions[previousSelected].noteActive)
            {
                sequencerPositions[previousSelected].renderer.material.color = Color.cyan;
                sixteenthLights[previousSelected].SetActive(false);
            }
            else
            {
                sixteenthLights[previousSelected].SetActive(false);
            }

            sixteenthLights[positionSelected].SetActive(true);
        }
        
    }

    // Updates whether the user can program 16th or 8th notes, depending on which is selected on the UI.
    private void TimeUpdate()
    {
        synthTime = (int)timeSlider.value;
        if (synthTime==1)
        {
            positionSlider.minValue = 0;
            positionSlider.maxValue = 15;
            positionSelected = 0;
            eighthLightObject.SetActive(false);
            sixteenthLightObject.SetActive(true);
            PositionUpdate();
        } else
        {
            if (sequencerPositions[positionSelected].noteActive!=true)
            {
                sequencerPositions[positionSelected].renderer.material.color = Color.white;
            }
            positionSlider.minValue = 0;
            positionSlider.maxValue = 7;
            sixteenthLights[positionSelected].SetActive(false);
            eighthLightObject.SetActive(true);
            FindObjectOfType<SynthManager8th>().PositionUpdate();
        }
    }

    // Moves the loop indicator to the current index, and switches previous index back to white.
    public void MoveColorIndicatorToCurrentIndex(int index)
    {   
        if(index != positionSelected)
        {
            if (sequencerPositions[previousIndex].noteActive != true)
            {
                sequencerPositions[previousIndex].renderer.material.color = Color.white;
            }  
            ChangePositionColour(index);
            previousIndex = index;
        }
    }

    // Helper method that changes the colour of the current index position.
    public void ChangePositionColour(int index)
    {
        if (sequencerPositions[index].noteActive != true)
        {
            sequencerPositions[index].renderer.material.color = Color.magenta;
        }
    }

    // Plays a note for a set time. If MIDI play is enabled, calling this method will result in the selected note becoming active in the loop.
    // Used for the MIDI play button.
    public void playANote(int note)
    {
        helmController.NoteOn(note, 0.5f, sequencer.GetSixteenthTime());
        sequencerPositions[sequencer.currentIndex].note.note = note;

        if (midiToggle.isOn)
        {
            sequencerPositions[sequencer.currentIndex].noteActive = true;
            sequencer.AddNote(note, sequencerPositions[sequencer.currentIndex].positionObjectNumber,
                sequencerPositions[sequencer.currentIndex].positionObjectNumber + 1, 1);
            sequencerPositions[sequencer.currentIndex].renderer.material.color = Color.cyan;
        }
    }

    // Gets 16th note time as a float.
    public float getSixteenthTime()
    {
        return sequencer.GetSixteenthTime();
    }

    // Implementation of the delegate method. This method will be called each time an active note is encountered in the loop.
    public void NoteActionOn(Note note)
    {
        helmController.NoteOn(note.note, note.velocity, sixteenthTime);
        if(rtpMidiEnabled.midiEnabled)
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
        if(rtpMidiEnabled.midiEnabled)
        {
            var deviceIds = MidiManager.Instance.DeviceIdSet.ToArray();
            var deviceNames = new string[deviceIds.Length];
            MidiManager.Instance.SendMidiNoteOff(deviceIds[0], 0, 0, note.note, (int)note.velocity);
            Debug.Log("MidiNote Off Sent!");
        }
        
    }

    // Resets modulation of the current preset to default.
    public void resetMod()
    {
        Native.HelmClearModulations(0);
    }

}
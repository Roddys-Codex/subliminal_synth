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
    private int synthTime = 1;

    public List<GameObject> positionObjects;
    public List<SequencerPosition> sequencerPositions;

    public List<int> seqPositionNumber;
    public int previousIndex = 16;
    public int currentIndex;

    public GameObject timeObject;
    public Slider timeSlider;
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
    public UnityEngine.UI.Toggle midiToggle;
    public List<GameObject> sixteenthLights;

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

        timeSlider = timeObject.GetComponent<Slider>();
        noteSlider = note.GetComponent<Slider>();
        octaveSlider = octave.GetComponent<Slider>();
        positionSlider = position.GetComponent<Slider>();

        timeSlider.onValueChanged.AddListener(delegate { TimeUpdate(); });
        positionSlider.onValueChanged.AddListener(delegate { PositionUpdate(); });
        noteSlider.onValueChanged.AddListener(delegate { NoteUpdate(); });
        octaveSlider.onValueChanged.AddListener(delegate { NoteUpdate(); });

        pitch = 60;
        selectedNote = new Note();
        noteUpdate = new Note();

    }

    public void AddNote(Note note, bool noteActive)
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

    public void AddNote(Note note)
    {
        sequencer.AddNote(note.note, note.start, note.end, note.velocity);
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
        if(synthTime==1)
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

    private void PositionUpdate()
    {
        if(synthTime == 1)
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
                //sequencerPositions[previousSelected].renderer.material.color = Color.white;
                sixteenthLights[previousSelected].SetActive(false);
            }

            //sequencerPositions[positionSelected].renderer.material.color = Color.red;

            sixteenthLights[positionSelected].SetActive(true);
        }
        
    }

    private void TimeUpdate()
    {
        synthTime = (int)timeSlider.value;

        if(synthTime==1)
        {
            //sequencerPositions[positionSelected].renderer.material.color = Color.red;

            sixteenthLights[positionSelected].SetActive(true);

        } else
        {
            if (sequencerPositions[positionSelected].noteActive!=true)
            {
                sequencerPositions[positionSelected].renderer.material.color = Color.white;
            }

            sixteenthLights[positionSelected].SetActive(false);

        }
        

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
        helmController.NoteOn(note, 0.5f, sequencer.GetSixteenthTime());
        sequencerPositions[sequencer.currentIndex].note.note = note;

        if (midiToggle.isOn)
        {
            
            sequencerPositions[sequencer.currentIndex].noteActive = true;

            sequencer.AddNote(note, sequencerPositions[sequencer.currentIndex].positionObjectNumber, sequencerPositions[sequencer.currentIndex].positionObjectNumber + 1, 1);
            sequencerPositions[sequencer.currentIndex].renderer.material.color = Color.cyan;
        }

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

    public void resetMod()
    {
        Native.HelmClearModulations(0);
    }

}
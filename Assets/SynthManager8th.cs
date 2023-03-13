using System.Collections.Generic;
using UnityEngine;
using AudioHelm;
using jp.kshoji.unity.midi;
using System.Linq;
using UnityEngine.UI;
using System;
using UnityEngine.UIElements;
using Slider = UnityEngine.UI.Slider;

public class SynthManager8th : MonoBehaviour
{
    public EnableMidi midiEnabled;
    public float sixteenthTime;
    public HelmController helmController;
    public HelmSequencer sequencer;
    public AudioHelmClock audioHelmClock;
    public int sequencerPosition = 0;
    public int previousSeqPosition;

    public List<GameObject> positionObjects;
    public List<SequencerPosition8th> sequencerPositions;

    public int previousIndex = 7;

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
    public int previousSelected = 8;
    public Note activeNote;
    public Note selectedNote;
    public Note oldNote;
    public Note noteUpdate;
    private bool firstTime = true;
    private int synthTime = 1;

    public bool notePlayed = false;

    public Note firstNote;

    public Note lastClicked;

    public UnityEngine.UI.Toggle midiToggle;
    public List<GameObject> eighthLights;

    void Awake()
    {
        sequencer = GetComponent<HelmSequencer>();
        helmController = GetComponent<HelmController>();
        sixteenthTime = sequencer.GetSixteenthTime() * 2;

        //sequencer.OnBeat += BeatActionWhite;

        sequencer.OnNoteOn += NoteActionOn;

        sequencer.OnNoteOff += NoteActionOff;

        helmController = GetComponent<HelmController>();
        sequencer = GetComponent<HelmSequencer>();
        audioHelmClock = GetComponent<AudioHelmClock>();

        //sequencerPositions.ForEach(position =>
        //{
        //    position.OnNote += AddNote;
        //    position.OffNote += RemoveNote;
        //});

        foreach (SequencerPosition8th seqPos in sequencerPositions)
        {
            seqPos.OnNote += AddNote;
            seqPos.OffNote += RemoveNote;
        }

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

    public void AddNote(Note note)
    {
        sequencer.AddNote(note.note, note.start, note.end, note.velocity);
    }

    private void AddNote(Note note, bool noteActive)
    {
        firstNote = note;
        if (note.start <= 0)
        {
            note.start = 15;
        }

        if (sequencerPositions[((int)note.start / 2)].note.start == note.start)
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
        if (firstTime == true)
        {
            //Note firstTime = new Note();
            
            sequencer.RemoveNote(firstNote);
        }
        if (noteActive == true)
        {
            sequencer.RemoveNote(note);
        }

        NoteActionOn(note);
    }

    private void NoteUpdate()
    {
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

    private void PositionUpdate()
    {
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
                //sequencerPositions[previousSelected].renderer.material.color = Color.white;
                eighthLights[previousSelected].SetActive(false);
            }

            //sequencerPositions[positionSelected].renderer.material.color = Color.red;
            eighthLights[positionSelected].SetActive(true);
        }
    }

    private void TimeUpdate()
    {
        synthTime = (int)timeSlider.value;

        if (synthTime == 2)
        {
            //sequencerPositions[positionSelected].renderer.material.color = Color.red;
            positionSlider.minValue = 0;
            positionSlider.maxValue = 7;
            eighthLights[positionSelected].SetActive(true);
        }
        else
        {
            if (sequencerPositions[positionSelected].noteActive != true)
            {
                sequencerPositions[positionSelected].renderer.material.color = Color.white;
            }
            
            positionSlider.minValue = 0;
            positionSlider.maxValue = 15;
            eighthLights[positionSelected].SetActive(false);
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
        if (index < 1 || index > 8)
        {
            return;
        }
        //if (index == 1)
        //{
        //    index = 0;
        //    previousIndex = 7;
        //}
        //else
        //{
        index = index - 1;
        //}

        if (sequencerPositions[previousIndex].noteActive != true)
        {
            sequencerPositions[previousIndex].renderer.material.color = Color.white;
        }
        else
        {
            
            
        }

        if(index != 20)
        {
            BeatActionMagenta(index);
            BeatActionUpdate(index);
        }
        

    }

    public void BeatActionUpdate(int index)
    {
        switch(index)
        {
            case 0:
                previousIndex = 0;  
                break;
            case 1:
                previousIndex = 1;
                break;

            case 2:
                previousIndex = 2;
                break;

            case 3:
                previousIndex = 3;
                break;
            case 4:
                previousIndex = 4;
                break;
            case 5:
                previousIndex = 5;
                break;

            case 6:
                previousIndex = 6;
                break;

            case 7:
                previousIndex = 7;
                break;
            default:
                previousIndex = 7;
                break;

        }

        
    }

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
            if (midiEnabled.midiEnabled)
            {
                var deviceIds = MidiManager.Instance.DeviceIdSet.ToArray();
                var deviceNames = new string[deviceIds.Length];
                MidiManager.Instance.SendMidiNoteOn(deviceIds[0], 0, 0, note.note, (int)note.velocity);
                Debug.Log("MidiNote On Sent!");
            }

    }

    public void NoteActionOff(Note note)
    {
        if (midiEnabled.midiEnabled)
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
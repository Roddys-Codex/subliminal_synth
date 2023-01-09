using System.Collections;
using System.Collections.Generic;
using System.Linq;
using AudioHelm;
using jp.kshoji.unity.midi;
using jp.kshoji.unity.midi.sample;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class SequencerPosition : MonoBehaviour, IPointerClickHandler
{
    public int sequencerPosition;
    public int positionObjectNumber;
    public GameObject gameObject;
    public GameObject noteSliderObject;
    public GameObject midiSampleSceneGameObject;
    public MidiSampleScene midiSampleScene;
    public bool noteActive = false;
    SynthManager synthManager;
    MeshRenderer renderer;
    public Note currentObjectNote;
    Slider noteSlider;
    private int noteValue;
    public GameObject previousPositionObject;
    public SequencerPosition previousSequencerPosition;
    private bool previousNoteActive;

    // Start is called before the first frame update
    void Awake()
    {
        noteSliderObject.SetActive(false);
        synthManager = gameObject.GetComponent<SynthManager>();
        renderer = GetComponent<MeshRenderer>();
        noteSlider = noteSliderObject.GetComponent<Slider>();
        synthManager.audioHelmClock.Reset();
        noteSlider.onValueChanged.AddListener(delegate { setNoteValue(); });
        noteValue = (int)noteSlider.value;
        midiSampleScene = midiSampleSceneGameObject.GetComponent<MidiSampleScene>();
        previousSequencerPosition = previousPositionObject.GetComponent<SequencerPosition>();
        //currentObjectNote = new Note();
    }

    // Update is called once per frame
    void Update()
    {

        currentObjectNote.note = noteValue;

        sequencerPosition = synthManager.sequencerPosition;
        if(sequencerPosition == positionObjectNumber)
        {
            previousNoteActive = previousSequencerPosition.noteActive;
            if(previousNoteActive==true)
            {
                Debug.Log("Midi Off sent");
                var deviceIds = MidiManager.Instance.DeviceIdSet.ToArray();
                var deviceNames = new string[deviceIds.Length];

                for (var i = 0; i < deviceIds.Length; i++)
                {
                    deviceNames[i] = $"{MidiManager.Instance.GetDeviceName(deviceIds[i])} ({deviceIds[i]})";
                    MidiManager.Instance.SendMidiNoteOff(deviceIds[0], 0, 0, 60, 127);
                    Debug.Log("MidiNoteOffSent");
                }
            }

            if (noteActive==true)
            {
                Debug.Log("Midi On note pressed");
                var deviceIds = MidiManager.Instance.DeviceIdSet.ToArray();
                var deviceNames = new string[deviceIds.Length];

                for (var i = 0; i < deviceIds.Length; i++)
                {
                    deviceNames[i] = $"{MidiManager.Instance.GetDeviceName(deviceIds[i])} ({deviceIds[i]})";
                    MidiManager.Instance.SendMidiNoteOn(deviceIds[0], 0, 0, 60, 127);
                    Debug.Log("MidiNoteSent");
                }

            } else
            {
                StartCoroutine(ChangeColor(Color.magenta, true));
                //midiSampleScene.sendMidiOffEvent();
            }
        }

    }

    //IEnumerator PositionColourChange(MeshRenderer source, float duration)
    //{
    //    // save origin color
    //    Color originColor = source.material.color;

    //    // tint the sprite with damage color
    //    source.material.color = Color.magenta;

    //    // you can delay the animation
    //    //yield return new WaitForSeconds(delay);

    //    // lerp animation with given duration in seconds
    //    for (float t = 0; t < 1.0f; t += Time.deltaTime / duration)
    //    {
    //        source.material.color = Color.Lerp(Color.magenta, originColor, t);

    //        yield return null;
    //    }

    //    // restore origin color
    //    source.material.color = originColor;
    //}

    private IEnumerator ChangeColor(Color color, bool returnToOriginalColour)
    {
        renderer.material.color = color;
        yield return new WaitForSeconds(0.04f);
        if(returnToOriginalColour == true)
        {
            renderer.material.color = Color.white;
        }
    }

    public void OnPointerClick(PointerEventData eventData)
    {

        if (noteActive == false)
        {
            noteActive = true;
            renderer.material.color = Color.cyan;
            synthManager.sequencer.AddNote(noteValue, positionObjectNumber, positionObjectNumber + 1, 1) ;
            //List<Note> newNotes = new List<Note>();
            //Note note = new Note();/
            //note.note = noteValue;
            //newNotes.Add(note);

            //synthManager.sequencer.allNotes[noteValue].notes = newNotes;
        } else
        {
            noteActive = false;
            renderer.material.color = Color.white;
            synthManager.sequencer.RemoveNotesContainedInRange(noteValue, positionObjectNumber, positionObjectNumber + 1); 
        }

        StartCoroutine(showPopUpSlider());
    }

    private IEnumerator showPopUpSlider()
    {
        noteSliderObject.SetActive(true);
        yield return new WaitForSeconds(8.0f);
        noteSliderObject.SetActive(false);
    }

    public void setNoteValue()
    {
            if(noteActive == true)
            {
                synthManager.sequencer.RemoveNotesContainedInRange(noteValue, positionObjectNumber, positionObjectNumber + 1);
                noteValue = (int)noteSlider.value;
                synthManager.sequencer.AddNote(noteValue, positionObjectNumber, positionObjectNumber + 1, 1);
            }
    }

}

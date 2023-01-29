using System.Collections;
using AudioHelm;
using jp.kshoji.unity.midi.sample;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using static AudioHelm.Sequencer;

public class SequencerPosition8th : MonoBehaviour, IPointerClickHandler
{
    public int positionObjectNumber;

    public GameObject synthObject;

    public bool noteActive = false;

    public MeshRenderer renderer;

    public int noteEndAddOn;
    public int noteValue;
    public GameObject previousPositionObject;
    public SequencerPosition8th previousSequencerPosition;
    public bool playing = false;
    public int velocity = 127;
    public Note note;

    public delegate void NoteActivated(Note note, bool noteActive);
    public event NoteActivated OnNote;

    public delegate void NoteDeactivated(Note note, bool noteActive);
    public event NoteActivated OffNote;

    void Awake()
    {
        renderer = GetComponent<MeshRenderer>();

        previousSequencerPosition = previousPositionObject.GetComponent<SequencerPosition8th>();
        note = new Note();
        note.note = noteValue;
        note.start = positionObjectNumber;
        note.end = positionObjectNumber + 2;
        note.velocity = 1;
    }

    public void OnPointerClick(PointerEventData eventData)
    {

        if (noteActive == false)
        {
            playing = true;
            renderer.material.color = Color.cyan;
            OnNote(note, noteActive);
            noteActive = true;
        }
        else
        {
            renderer.material.color = Color.white;
            OffNote(note, noteActive);
            noteActive = false;
        }
    }

}

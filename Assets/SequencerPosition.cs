using System.Collections;
using AudioHelm;
using jp.kshoji.unity.midi.sample;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using static AudioHelm.Sequencer;

public class SequencerPosition : MonoBehaviour, IPointerClickHandler
{
    public int sequencerPosition;
    public int positionObjectNumber;
    public GameObject gameObject;
    //public GameObject noteSliderObject;
    public GameObject midiSampleSceneGameObject;
    public MidiSampleScene midiSampleScene;
    public bool noteActive = false;
    SynthManager synthManager;
    public MeshRenderer renderer;
    public Note currentObjectNote;
    //Slider noteSlider;
    public int noteValue;
    public GameObject previousPositionObject;
    public SequencerPosition previousSequencerPosition;
    public bool playing = false;
    public int velocity = 127;
    public bool midiSent = false;
    public Note note;

    public delegate void NoteActivated(Note note, bool noteActive);
    public event NoteActivated OnNote;

    public delegate void NoteDeactivated(Note note, bool noteActive);
    public event NoteActivated OffNote;

    void Awake()
    {
        synthManager = gameObject.GetComponent<SynthManager>();
        renderer = GetComponent<MeshRenderer>();
        //noteSlider = noteSliderObject.GetComponent<Slider>();
        synthManager.audioHelmClock.Reset();
        //noteSlider.onValueChanged.AddListener(delegate { setNoteValue(); });
        //noteValue = (int)noteSlider.value;
        midiSampleScene = midiSampleSceneGameObject.GetComponent<MidiSampleScene>();
        previousSequencerPosition = previousPositionObject.GetComponent<SequencerPosition>();
        note = new Note();
        note.note = noteValue;
        note.start = positionObjectNumber;
        note.end = positionObjectNumber + 1;
        note.velocity = 1;
    }

    public IEnumerator ChangeColor(Color color, bool returnToOriginalColour)
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
            
            playing = true;
            renderer.material.color = Color.cyan;
            OnNote(note, noteActive);
            //synthManager.sequencer.Trigger
            noteActive = true;
        } else
        {
            
            renderer.material.color = Color.white;
            OffNote(note, noteActive);
            noteActive = false;
            //synthManager.sequencer.RemoveNotesContainedInRange(note.note, note.start, note.end); 
        }

        //StartCoroutine(showPopUpSlider());
    }

    //private IEnumerator showPopUpSlider()
    //{
    //    noteSliderObject.SetActive(true);
    //    yield return new WaitForSeconds(8.0f);
    //    noteSliderObject.SetActive(false);
    //}

    //public void setNoteValue()
    //{
    //    if (noteActive == true)
    //    {
    //        synthManager.sequencer.RemoveNotesContainedInRange(noteValue, positionObjectNumber, positionObjectNumber + 1);
    //        noteValue = (int)noteSlider.value;
    //        //synthManager.sequencer.AddNote(noteValue, positionObjectNumber, positionObjectNumber + 1, 1);
    //    }
    //}

}

using System.Collections;
using System.Collections.Generic;
using AudioHelm;
using UnityEngine;
using UnityEngine.EventSystems;

public class SequencerPosition : MonoBehaviour, IPointerClickHandler
{
    public int sequencerPosition;
    public int positionObjectNumber;
    public GameObject gameObject;
    public bool noteActive = false;
    SynthManager synthManager;
    MeshRenderer renderer;
    Note currentObjectNote;

    // Start is called before the first frame update
    void Start()
    {
        synthManager = gameObject.GetComponent<SynthManager>();
        renderer = GetComponent<MeshRenderer>();
    }

    // Update is called once per frame
    void Update()
    {
        sequencerPosition = synthManager.sequencerPosition;

        if(sequencerPosition == positionObjectNumber)
        {
            if(noteActive==true)
            {
                
            } else
            {
                StartCoroutine(ChangeColor(Color.magenta, true));
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
        yield return new WaitForSeconds(0.1f);
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
            currentObjectNote = synthManager.sequencer.AddNote(60, positionObjectNumber, positionObjectNumber + 1, 1) ;
        } else
        {
            noteActive = false;
            renderer.material.color = Color.white;
            synthManager.sequencer.RemoveNote(currentObjectNote);
        }
        
       
    }
}

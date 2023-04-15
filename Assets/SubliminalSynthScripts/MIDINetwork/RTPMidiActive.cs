using UnityEngine;
using UnityEngine.EventSystems;

public class RTPMidiActive : MonoBehaviour, IPointerClickHandler
{
    public bool midiEnabled = false;

    public void OnPointerClick(PointerEventData eventData)
    {
        if(midiEnabled==false)
        {
            midiEnabled = true;
        } else
        {
            midiEnabled = false;
        }
    }
}
using UnityEngine;
using AudioHelm;
using UnityEngine.EventSystems;

public class ResetSync : MonoBehaviour, IPointerClickHandler
{

    public AudioHelmClock midiClock;
    
    public void OnPointerClick(PointerEventData eventData)
    {
        midiClock.Reset();
    }
}

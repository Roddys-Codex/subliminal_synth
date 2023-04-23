using UnityEngine;
using UnityEngine.EventSystems;

public class RTPMidiMenuShowButton : MonoBehaviour, IPointerClickHandler
{
    public GameObject midiConnection;
    
    public void OnPointerClick(PointerEventData eventData)
    {
        midiConnection.SetActive(!midiConnection.activeSelf);
    }
}

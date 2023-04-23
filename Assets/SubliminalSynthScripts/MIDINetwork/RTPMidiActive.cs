using UnityEngine;
using UnityEngine.EventSystems;

public class RTPMidiActive : MonoBehaviour, IPointerClickHandler
{
    public bool midiEnabled = false;
    public bool samplerMidi = false;

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

    public void SamplerRtpMidiSwitch()
    {
        if (samplerMidi)
        {
            samplerMidi = false;
        }
        else
        {
            samplerMidi = true;
        }
    }
}

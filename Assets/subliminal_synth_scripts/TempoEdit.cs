using UnityEngine;
using AudioHelm;
using UnityEngine.UI;

public class TempoEdit : MonoBehaviour
{
    public AudioHelmClock audioHelmClock;

    public void SetTempo()
    {
        audioHelmClock.bpm = GetComponent<Slider>().value;
    }
}

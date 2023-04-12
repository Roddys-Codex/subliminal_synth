using UnityEngine;
using AudioHelm;

public class StartStop : MonoBehaviour
{
    public AudioHelmClock audioHelmClock;
    public void startStop()
    {
        if(audioHelmClock.pause)
        {
            audioHelmClock.pause = false;
        } else
        {
            audioHelmClock.pause = true;
        }
    }
}

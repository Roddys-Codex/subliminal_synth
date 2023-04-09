using System.Collections;
using UnityEngine;
using UnityEngine.Audio;


public class TransitionTest : MonoBehaviour {
    public AudioMixerSnapshot Indoors;
    public AudioMixerSnapshot Outdoors;

    void Start () {



    }

    void Update () {


    }

    public void OnMouseDown(){
        Indoors.TransitionTo (6.0f);
    }
}

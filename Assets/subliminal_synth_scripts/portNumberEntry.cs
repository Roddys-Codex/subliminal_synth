using System.Collections;
using System.Collections.Generic;
using AudioSynthesis.Bank.Components.Effects;
using UnityEngine;

public class portNumberEntry : MonoBehaviour
{

    public GameObject connectButton;
    private midiConnectButton midiConnectButton;
    public GameObject portNumberEntryO;
    private TextMesh textMesh;
    private int portNumber;

    // Start is called before the first frame update
    void Start()
    {
        midiConnectButton = connectButton.GetComponent<midiConnectButton>();
        textMesh = portNumberEntryO.GetComponent<TextMesh>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void SetPortNumber()
    {
        midiConnectButton.setPort();
        //midiConnectButton.setPort(textMesh.text);
        //if (int.TryParse(textMesh.text, out int result))
        //{
        //    portNumber = result;
            
        //}
        //else
        //{
        //    Debug.Log($"Attempted conversion of {textMesh.text} failed");
        //}
    }
}

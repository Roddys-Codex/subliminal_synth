using System.Collections;
using System.Collections.Generic;
using jp.kshoji.unity.midi;
using System.Net;
using UnityEngine;
using System;
using TMPro;
using AudioSynthesis.Bank.Components.Effects;
using UnityEngine.XR;

public class midiConnectButton : MonoBehaviour
{
    public string iPaddressString;
    public string sessionName;
    public int port;

    public GameObject iPEntryO;
    public iPEntry iPEntry;
    public TMP_InputField iPEntryText;

    public portNumberEntry portNumberEntry;
    public TMP_InputField portText;

    // Start is called before the first frame update
    void Start()
    {
        iPEntry = iPEntryO.GetComponent<iPEntry>();
        iPEntryText = iPEntryO.GetComponent<TMP_InputField>();

        portText = portNumberEntry.GetComponent<TMP_InputField>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void setIpAddress()
    {

        //iPEntry = iPEntryO.GetComponent<iPEntry>();
        this.iPaddressString = iPEntryText.text;
        
    }

    public void setPort()
    {

        if (int.TryParse(portText.text, out int result))
        {
            this.port = result;
        }
        else
        {
            Debug.Log($"Attempted conversion of {portText.text} failed");
            portText.text = "Must be a number";
        }
    }

    public void setSessionName(string sessionName)
    {
        this.sessionName = sessionName;
    }

    public void attemptConnection()
    {
       try
        { 
            MidiManager.Instance.ConnectToRtpMidiServer(sessionName, port, new IPEndPoint(IPAddress.Parse(iPaddressString), port));
        } catch (Exception e)
        {
            Debug.Log("Error occured connecting to midi server. Exception: " + e);
        }


    }
}

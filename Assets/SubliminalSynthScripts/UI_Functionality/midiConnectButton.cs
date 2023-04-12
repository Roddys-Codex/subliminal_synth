using jp.kshoji.unity.midi;
using System.Net;
using UnityEngine;
using System;
using TMPro;

public class MidiConnectButton : MonoBehaviour
{
    public string iPaddressString;
    public string sessionName;
    public int port;

    public TMP_InputField iPEntryText;
    public TMP_InputField portText;
    
    public void SetIpAddress()
    {
        
        this.iPaddressString = iPEntryText.text;
    }

    public void SetPort()
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

    public void SetSessionName(string sessionName)
    {
        this.sessionName = sessionName;
    }

    public void AttemptConnection()
    {
       try
       { 
           MidiManager.Instance.ConnectToRtpMidiServer(sessionName, port, 
               new IPEndPoint(IPAddress.Parse(iPaddressString), port));
       } catch (Exception e)
       {
           Debug.Log("Error occured connecting to midi server. Exception: " + e);
       }
    }
}

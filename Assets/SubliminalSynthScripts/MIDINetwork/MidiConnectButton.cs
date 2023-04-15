using jp.kshoji.unity.midi;
using System.Net;
using UnityEngine;
using System;
using System.Collections;
using TMPro;

public class MidiConnectButton : MonoBehaviour
{
    private string iPaddressString;
    private string sessionName;
    private int port;

    public TMP_InputField iPEntryText;
    public TMP_InputField portText;
    public TMP_InputField sessionText;
    public MeshRenderer buttonMesh;

    public MeshRenderer statusMesh;

    private void Awake()
    {
        ConnectionStatus();
    }

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

    public void SetSessionName()
    {
        this.sessionName = sessionText.text;
    }

    public void AttemptConnection()
    {
        StartCoroutine(TemporarilyChangeColor(buttonMesh.gameObject, Color.cyan, 0.3f));
        if (MidiManager.Instance.IsRtpMidiRunning(port))
        {
            MidiManager.Instance.StopRtpMidi(port);
            ConnectionStatus();
        }
        else
        {
            try
            {
                MidiManager.Instance.ConnectToRtpMidiServer(sessionName, port,
                    new IPEndPoint(IPAddress.Parse(iPaddressString), port));
                StartInvokingMethod();
            }
            catch (Exception e)
            {
                Debug.Log("Error occured connecting to midi server. Exception: " + e);
            }
        }
    }

    public void ConnectionStatus()
    {
        if (MidiManager.Instance.IsRtpMidiRunning(port))
        {
            statusMesh.material.color = Color.green;
        }
        else
        {
            statusMesh.material.color = Color.red;
        }
    }
    
    public void StartInvokingMethod()
    {
        InvokeRepeating(nameof(ConnectionStatus), 0.0f, 15.0f);
    }

    public void StopInvokingMethod()
    {
        CancelInvoke(nameof(ConnectionStatus));
    }

    private void OnDestroy()
    {
        MidiManager.Instance.StopRtpMidi(port);
        MidiManager.Instance.StopAllRtpMidi();
        MidiManager.Instance.TerminateMidi();
        
    }
    
    public IEnumerator TemporarilyChangeColor(GameObject obj, Color color, float duration)
    {
        Renderer renderer = obj.GetComponent<Renderer>();
        if (renderer == null) {
            Debug.LogWarning("TemporarilyChangeColor: Object does not have a Renderer component.");
            yield break;
        }

        // Store the original color
        Color originalColor = renderer.material.color;

        // Change the color to the specified color
        renderer.material.color = color;

        // Wait for the specified duration
        yield return new WaitForSeconds(duration);

        // Revert the color back to the original color
        renderer.material.color = originalColor;
    }
}

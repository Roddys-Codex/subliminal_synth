using System.Net;
using jp.kshoji.unity.midi;
using UnityEngine;

public class MidiNetworkManagerController : MonoBehaviour
{
    public GameObject objectMidiManager;
    public MidiManager midiManager;
    // Start is called before the first frame update
    void Awake()
    {
        midiManager = objectMidiManager.GetComponent<MidiManager>();
        // Register an GameObject to receive MIDI events
        midiManager.RegisterEventHandleObject(gameObject);
        // Initialize MidiManager
        midiManager.InitializeMidi(() =>
        {
            // Start to scan Bluetooth LE MIDI devices
            midiManager.StartScanBluetoothMidiDevices(0); // 0: scans infinite
        });
        midiManager.ConnectToRtpMidiServer("MidiNetwork", 5004, new IPEndPoint(IPAddress.Parse("192.168.0.17"), int.Parse("5004")));
          
    }

    private void OnDestroy()
    {
        midiManager.StopRtpMidi(5004);
    }
}

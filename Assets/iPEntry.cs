using jp.kshoji.unity.midi;
using System.Net;
using jp.kshoji.unity.midi.sample;
using UnityEngine;
using UnityEngine.EventSystems;
using TMPro;

public class iPEntry: MonoBehaviour, IPointerClickHandler
{
    public GameObject connectButton;
    public midiConnectButton midiConnectButton;
    private TMP_InputField textMesh;
    public GameObject ipEntryO;
    // Start is called before the first frame update
    void Start()
    {
        midiConnectButton = connectButton.GetComponent<midiConnectButton>();
        textMesh = ipEntryO.GetComponent<TMP_InputField>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnPointerClick(PointerEventData eventData)
    {

        //midiConnectButton.setIpAddress(textMesh.text);
    }

    public void SetIPAddress()
    {
        //GameObject midBtn = GameObject.Find("MidiHandling/MidiConnect");
        //midiConnectButton midi = midBtn.GetComponent<midiConnectButton>();

         midiConnectButton.setIpAddress();
        //this.iPaddressString = iPEntryText.text;
    }
}

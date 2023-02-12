using UnityEngine;
using ForieroEngine.MIDIUnified.SysEx;
using UnityEngine.UI;
using TMPro;

public class MCExample : MonoBehaviour
{
    public TMP_Text text;

    // Start is called before the first frame update
    void Start()
    {
        SysEx.MC.OnBar += UpdateText;
        SysEx.MC.OnBeat += UpdateText;
        SysEx.MC.OnTick += UpdateText;

        SysEx.MC.OnTimeSignature += () =>
        {
            Debug.Log("MC : TIMESIGNATURE");
            UpdateText();
        };


        SysEx.MC.OnStart += () =>
        {
            Debug.Log("MC : START");
            UpdateText();
        };


        SysEx.MC.OnStop += () =>
        {
            Debug.Log("MC : STOP");
            UpdateText();
        };

        SysEx.MC.OnContinue += () =>
        {
            Debug.Log("MC : CONTINUES");
            UpdateText();
        };
    }

    void UpdateText()
    {
        text.text = SysEx.MC.ToString();
    }
}

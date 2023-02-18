using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using TMPro;

public class MidiSelectionUIDeviceButton : MonoBehaviour
{
	public enum Device
	{
		IN,
		OUT
	}

	public MidiSelectionUI midiSelectionUI;
	public Device device = Device.IN;
	public TMP_Text text;
	public Image image;

	public bool connected = false;


	public void OnClick ()
	{
		midiSelectionUI.OnDeviceClick (this);
	}
}

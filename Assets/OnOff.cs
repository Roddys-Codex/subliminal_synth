using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class OnOff : MonoBehaviour
{

    public Toggle toggle;
    public Slider noteMenuOnOff;
    public GameObject gameObject;
    private bool active = false;

    public SynthManager16th synthManager16Th;
    public SynthManager8th synthManager8th;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void SetObjectActive()
    {
        if(active==false)
        {
            gameObject.SetActive(true);
            active = true;

            if(noteMenuOnOff.value==1)
            {
                //synthManager16Th.sequencerPositions[synthManager16Th.positionSelected].renderer.material.color = Color.red;
                synthManager16Th.sixteenthLights[synthManager16Th.positionSelected].SetActive(true);
            } else
            {
                //synthManager8th.sequencerPositions[synthManager8th.positionSelected].renderer.material.color = Color.red;
                //synthManager8th.sixteenthLights[synthManager8th.positionSelected].renderer.material.color = Color.red;
            }
            
        } else
        {
            gameObject.SetActive(false);
            active = false;
            //synthManager16Th.sequencerPositions[synthManager16Th.positionSelected].renderer.material.color = Color.white;
            synthManager16Th.sixteenthLights[synthManager16Th.positionSelected].SetActive(false);
            //synthManager8th.sequencerPositions[synthManager8th.positionSelected].renderer.material.color = Color.white;
        }
        
    }
}

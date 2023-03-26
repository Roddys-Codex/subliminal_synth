using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MidiPlay : MonoBehaviour
{
    public Color activeColor;
    public Toggle m_Toggle;
    public GameObject objectToActivate;
    // Start is called before the first frame update
    void Start()
    {
        m_Toggle = GetComponent<Toggle>();
        //Add listener for when the state of the Toggle changes, to take action
        m_Toggle.onValueChanged.AddListener(delegate {
            switchColour();
        });

    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void switchColour()
    {

        if(GetComponent<MeshRenderer>().material.color!=activeColor)
        {
            GetComponent<MeshRenderer>().material.color = activeColor;
            objectToActivate.SetActive(true);

        } else
        {
            GetComponent<MeshRenderer>().material.color = Color.white;
            objectToActivate.SetActive(false);
        }
        
    }

    public void switchOnlyColour()
    {

        if (GetComponent<MeshRenderer>().material.color != activeColor)
        {
            GetComponent<MeshRenderer>().material.color = activeColor;

        }
        else
        {
            GetComponent<MeshRenderer>().material.color = Color.white;
        }

    }
}

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ColourChange : MonoBehaviour
{
    public Color activeColor;
    public Toggle m_Toggle;
    public GameObject objectToActivate;
    public List<GameObject> objectsToActivate;
    public bool multiObject = false;
    
    void Start()
    {
        if(multiObject)
        {
            m_Toggle = GetComponent<Toggle>();

            m_Toggle.onValueChanged.AddListener(delegate {
                switchColourAndSetActive();
            });
        }
    }

    public void switchColourAndSetActive()
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

    public void setObjectsActive()
    {
        MeshRenderer meshRenderer = GetComponent<MeshRenderer>();
        for (int i = 0; i < objectsToActivate.Count; i++)
        {
            if (meshRenderer.material.color != activeColor)
            {
                objectsToActivate[i].SetActive(true);
            }
            else
            {
                objectsToActivate[i].SetActive(false);
            }
        }
        switchOnlyColour();
    }
}

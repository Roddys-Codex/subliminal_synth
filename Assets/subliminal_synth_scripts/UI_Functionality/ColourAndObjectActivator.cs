using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.UI;

public class ColourAndObjectActivator : MonoBehaviour
{
    public Color activeColor;
    [FormerlySerializedAs("m_Toggle")] public Toggle toggleOnCurrentGameObject;
    public GameObject objectToActivate;
    public List<GameObject> objectsToActivate;
    public bool multiObject = false;
    
    void Start()
    {
        if(multiObject)
        {
            toggleOnCurrentGameObject = GetComponent<Toggle>();

            toggleOnCurrentGameObject.onValueChanged.AddListener(delegate {
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

    public void SwitchThisObjectColour()
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
        SwitchThisObjectColour();
    }

    public void setObjectsActiveByToggle()
    {
        objectsToActivate.ForEach(item =>
        {
            if (GetComponent<Toggle>().isOn)
            {
                item.SetActive(true);
            }
            else
            {
                item.SetActive(false);
            }
        });
        SwitchThisObjectColour();
    }
}

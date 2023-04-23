using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.UI;

public class ColourAndObjectActivator : MonoBehaviour
{
    public Color activeColor;
    [FormerlySerializedAs("objectToActivate")] public GameObject targetObjectToActivate;
    [FormerlySerializedAs("objectsToActivate")] public List<GameObject> targetObjectsToActivate;

    public void SwitchThisColourAndSetTargetActive()
    {

        if(GetComponent<MeshRenderer>().material.color!=activeColor)
        {
            GetComponent<MeshRenderer>().material.color = activeColor;
            targetObjectToActivate.SetActive(true);

        } else
        {
            GetComponent<MeshRenderer>().material.color = Color.white;
            targetObjectToActivate.SetActive(false);
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

    public void SetObjectsActiveByToggle()
    {
        targetObjectsToActivate.ForEach(item =>
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
    }

    public void ChangeColorTemporarily()
    {
        StartCoroutine(ChangeColorCoroutine());
    }

    private IEnumerator ChangeColorCoroutine()
    {
        MeshRenderer meshRenderer = targetObjectToActivate.GetComponent<MeshRenderer>();
        meshRenderer.material.color = activeColor;
        yield return new WaitForSeconds(1.5f);
        meshRenderer.material.color = Color.white;
    }
}

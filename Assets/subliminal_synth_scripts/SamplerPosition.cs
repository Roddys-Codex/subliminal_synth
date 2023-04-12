using UnityEngine;
using UnityEngine.EventSystems;

public class SamplerPosition : MonoBehaviour, IPointerClickHandler
{

    public int note;
    public bool active;
    public int position;

    public SamplerPosition(int note, bool active, int position)
    {
        this.note = note;
        this.active = active;
        this.position = position;
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        if (active == false)
        {
            active = true;
            GetComponent<MeshRenderer>().material.color = Color.cyan;
        }
        else
        {
            GetComponent<MeshRenderer>().material.color = Color.white;
            active = false;
        }
    }

}
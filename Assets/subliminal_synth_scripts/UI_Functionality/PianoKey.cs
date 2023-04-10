using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class PianoKey : MonoBehaviour, IPointerClickHandler, IPointerEnterHandler, IPointerExitHandler
{
    /// <summary> The mesh render. </summary>
    private MeshRenderer m_MeshRender;
    public SynthManager16th synth;
    public SynthManager8th synth8th;
    private Color originalColour;
    public Toggle timeToggle; 

    public int note = 60;

    /// <summary> Awakes this object. </summary>
    void Awake()
    {
        m_MeshRender = transform.GetComponent<MeshRenderer>();
        originalColour = m_MeshRender.material.color;
    }

    /// <summary> when pointer click, set the cube color to random color. </summary>
    /// <param name="eventData"> Current event data.</param>
    public void OnPointerClick(PointerEventData eventData)
    {
        m_MeshRender.material.color = new Color(Random.Range(0f, 1f), Random.Range(0f, 1f), Random.Range(0f, 1f));
        if(timeToggle.isOn)
        {
            synth.playANote(note);
        } else
        {
            synth8th.playANote(note);
        }
        
    }

        /// <summary> when pointer hover, set the cube color to green. </summary>
        /// <param name="eventData"> Current event data.</param>
        public void OnPointerEnter(PointerEventData eventData)
        {            
            m_MeshRender.material.color = Color.green;
        }

        /// <summary> when pointer exit hover, set the cube color to white. </summary>
        /// <param name="eventData"> Current event data.</param>
        public void OnPointerExit(PointerEventData eventData)
        {
            m_MeshRender.material.color = originalColour; 
        }
    
}

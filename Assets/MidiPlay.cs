using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MidiPlay : MonoBehaviour
{

    public MeshRenderer renderer;
    public Color activeColor;
    // Start is called before the first frame update
    void Start()
    {
        activeColor = Color.cyan;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void switchColour()
    {

        if(renderer.material.color!=activeColor)
        {
            renderer.material.color = activeColor;
        } else
        {
            renderer.material.color = Color.white;
        }
        
    }
}

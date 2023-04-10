using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EightNoteToggle : MonoBehaviour
{

    public Toggle toggle;
    public MeshRenderer renderer;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void toggleColor()
    {
        if(toggle.isOn)
        {
            renderer.material.color = Color.cyan;
        } else
        {
            renderer.material.color = Color.white;
        }
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ArrowPoint : MonoBehaviour
{
    public Transform transform;
    private bool sixteenth = true;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void moveArrow()
    {
        if(sixteenth==true)
        {
            transform.position = new Vector3(1.49f, 0.41f, 0f);
            sixteenth = false;
        } else
        {
            transform.position = new Vector3(1.49f, 0.05f, 0f);
            sixteenth = true;
        }
        
    }

}

using System;
using System.Collections;
using System.Collections.Generic;
using AudioHelm;
using TMPro;
using UnityEngine;
using UnityEngine.InputSystem.XR;

public class Parameter : MonoBehaviour
{
    public Param param;
    public TMP_Dropdown parameter;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void updateParam()
    {
        List<string> option = new List<string>();
        string[] allParams = Enum.GetNames(typeof(Param));
        //controller.UpdateAllParameters();
        int count = Enum.GetValues(typeof(CommonParam)).Length;
        //List<string> enu
        for (int i = 0; i < 16; i++)
        {
            option.Add(allParams[i]);
        }

        parameter.ClearOptions();
        parameter.AddOptions(option);
    }
}

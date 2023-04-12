using System;
using System.Collections.Generic;
using AudioHelm;
using TMPro;
using UnityEngine;

public class ParamUtil : MonoBehaviour
{
    public Param param;
    public TMP_Dropdown parameter;

    public void UpdateParam()
    {
        List<string> option = new List<string>();
        string[] allParams = Enum.GetNames(typeof(Param));
        int count = Enum.GetValues(typeof(CommonParam)).Length;
        for (int i = 0; i < count; i++)
        {
            option.Add(allParams[i]);
        }

        parameter.ClearOptions();
        parameter.AddOptions(option);
    }
}

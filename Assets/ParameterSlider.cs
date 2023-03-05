using System;
using System.Collections;
using System.Collections.Generic;
using AudioHelm;
using AudioSynthesis.Synthesis;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ParameterSlider : MonoBehaviour
{
    //public TMP_Dropdown parameter;
    public Slider paramSlider;
    public HelmController helmController;
    public List<HelmParameter> helmParameters;
    public Param param;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void setParameter()
    {
        //helmController.synthParameters[parameter.options[parameter.].text];
        //string value = parameter.options[parameter.value].text;
        //Debug.Log("VALUE = " + value);
        ////Param param;
        ////Param.TryParse(value, out param);
        //Enum.TryParse(value, out Param paramEnum);

        //HelmParameter helmParameter = new HelmParameter();
        //helmParameter.parameter = Param.kFilterCutoff;
        //Debug.Log("PARAM = " + paramEnum);
        //Debug.Log("FOUND PARAMETER = "+helmController.synthParameters.Find(p => p.parameter.Equals(param)).ToString());
        //if(!helmController.synthParameters.Contains(helmParameter))
        //{
            //helmController.AddParameter(paramEnum);
        //}
        
        helmController.SetParameterValue(param, paramSlider.value);
        //helmController.synthParameters.Find(p => p.parameter.Equals(paramEnum)).paramValue = paramSlider.value;
        //helmController.UpdateAllParameters();
    }
}

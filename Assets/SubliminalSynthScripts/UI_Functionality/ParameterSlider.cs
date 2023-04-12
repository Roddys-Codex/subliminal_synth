using System.Collections.Generic;
using AudioHelm;
using UnityEngine;
using UnityEngine.UI;

public class ParameterSlider : MonoBehaviour
{
    public Slider paramSlider;
    public HelmController helmController;
    public List<HelmParameter> helmParameters;
    public Param param;
    // Start is called before the first frame update
    void Start()
    {
        paramSlider.minValue = Native.HelmGetParameterMinimum((int)param);
        paramSlider.maxValue = Native.HelmGetParameterMaximum((int)param);
    }

    public void SetParameter()
    {
        helmController.SetParameterValue(param, paramSlider.value);
    }
}

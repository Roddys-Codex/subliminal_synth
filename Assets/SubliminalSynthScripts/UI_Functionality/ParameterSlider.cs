using AudioHelm;
using UnityEngine;
using UnityEngine.UI;

public class ParameterSlider : MonoBehaviour
{
    public Slider paramSlider;
    public HelmController helmController;
    public HelmParameter param;

    public string paramName;
    // Start is called before the first frame update
    void Start()
    {
        paramSlider.minValue = Native.HelmGetParameterMinimum((int)param.parameter);
        paramSlider.maxValue = Native.HelmGetParameterMaximum((int)param.parameter);
    }

    public void SetParameter()
    {
        helmController.SetParameterValue(param.parameter, paramSlider.value);
    }
}

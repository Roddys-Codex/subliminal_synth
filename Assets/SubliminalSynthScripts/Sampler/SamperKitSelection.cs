using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using AudioHelm;
using TMPro;
using Unity.VisualScripting;

public class SamperKitSelection : MonoBehaviour
{
    public List<Sampler> samplers;
    public TMP_Dropdown dropdown;
    public List<SamplerManager> samplerManagers;
    // Start is called before the first frame update
    void Start()
    {
        dropdown = GetComponent<TMP_Dropdown>();
        string[] options = new string[] { samplers[0].name, samplers[1].name, samplers[2].name, samplers[3].name, samplers[4].name, samplers[5].name };
        dropdown.ClearOptions();
        dropdown.AddOptions(new List<string>(options));
        dropdown.onValueChanged.AddListener(OnDropdownValueChanged);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnDropdownValueChanged(int index)
    {
        string selectedValue = dropdown.options[index].text;
        GameObject targetObject = GameObject.Find(selectedValue);
        Sampler targetSampler = targetObject.GetComponent<Sampler>();

        samplerManagers.ForEach(sampler =>
        {
            sampler.sampler = targetSampler;
        });
    }
}

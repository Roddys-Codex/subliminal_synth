using System;
using System.Collections;
using System.Collections.Generic;
using System.Dynamic;
using System.Reflection;
using AudioHelm;
using AudioSynthesis.Bank.Components;
using AudioSynthesis.Bank.Patches;
using AudioSynthesis.Synthesis;
using Newtonsoft.Json;
using TMPro;
using UnityEngine;
using static UnityEngine.InputSystem.LowLevel.InputStateHistory;
using static UnityEngine.Rendering.DebugUI;
using static UnityEngine.Rendering.PostProcessing.HistogramMonitor;

public class JSON_Map : MonoBehaviour
{
    string patchAuthor;
    string patchName;
    public TMP_InputField presetNameInputfield;

    public HelmController helmController;
    // Start is called before the first frame update
    void Start()
    {

        //HelmPatchFormat helmPatch = new HelmPatchFormat();
        //helmPatch.settings = new HelmPatchSettings();
        //Dictionary<string, float> settings = new Dictionary<string, float>();
        //foreach(Param param in Enum.GetValues(typeof(Param)))
        //{
        //    string paramName = param.ToString();
        //    float paramValue = helmController.GetParameterValue(param);
        //    settings.Add(paramName, paramValue);
        //}

        //String json = JsonUtility.ToJson(settings);
        //Debug.Log("SETTINGS = " + json);
        ////String patch = null;
        ////foreach (Param param in Enum.GetValues(typeof(Param)))
        ////{
        //    //Debug.Log("SETTINGS = " + helmPatch.settings.ToString());
        //    //JsonUtility.ToJson();
        ////}


    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void savePatch()
    {

        HelmPatchFormat helmPatch = new HelmPatchFormat();
        helmPatch.settings = new HelmPatchSettings();

        FieldInfo[] fields = typeof(HelmPatchSettings).GetFields();

        List<float> values = new List<float>();
        values.Add(0.0f);
        int index = 1;
        foreach (FieldInfo field in fields)
        {
            if (!field.FieldType.IsArray && !field.IsLiteral)
            {
   
                float paramValue = Native.HelmGetParameterValue(0, index);
                Param paramName = (Param)index;
                Debug.Log("PARAM: " + paramName.ToString() + " = " + paramValue);
                field.SetValue(helmPatch.settings, paramValue);
                index++;
            }
        }

        helmPatch.settings.modulations = helmController.modulationSetting.ToArray();
        helmPatch.author = patchAuthor;
        helmPatch.license = "free";
        helmPatch.patch_name = presetNameInputfield.text;
        helmPatch.synth_version= "1";
        helmPatch.folder_name = "Custom";
        string json = JsonConvert.SerializeObject(helmPatch, Formatting.Indented);
        Debug.Log("RESULT JSON  = " + json);
        System.IO.File.WriteAllText(@"Assets/AudioHelm/Presets/Custom/"+ helmPatch.patch_name + ".helm", json);

    }


}

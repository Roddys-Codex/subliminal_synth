using System;
using System.Collections;
using System.Collections.Generic;
using System.Dynamic;
using System.IO;
using System.Reflection;
using AudioHelm;
using AudioSynthesis.Bank.Components;
using AudioSynthesis.Bank.Patches;
using AudioSynthesis.Synthesis;
using Newtonsoft.Json;
using Newtonsoft.Json.Bson;
using TMPro;
using UnityEngine;
using static UnityEngine.InputSystem.LowLevel.InputStateHistory;
using static UnityEngine.Rendering.DebugUI;
using static UnityEngine.Rendering.PostProcessing.HistogramMonitor;
using Better;
using Better.StreamingAssets;
using Better.StreamingAssets.ZipArchive;

public class JSON_Map : MonoBehaviour
{
    string patchAuthor;
    string patchName;
    public TMP_InputField presetNameInputfield;

    public HelmController helmController;
    // Start is called before the first frame update
    void Start()
    {
        BSA_BetterStreamingAssets.Initialize();
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

    public HelmPatchFormat createPatch()
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
        helmPatch.synth_version = "1";
        helmPatch.folder_name = "Custom";
        string json = JsonConvert.SerializeObject(helmPatch, Formatting.Indented);
        Debug.Log("RESULT JSON  = " + json);
        return helmPatch;
    }

    public void writeToAndroid()
    {
        HelmPatchFormat patch = createPatch();
        // Get the path to the streaming assets directory
        string directoryPath = Path.Combine(Application.streamingAssetsPath, "Custom");

        // Create the directory if it doesn't exist
        if (!Directory.Exists(directoryPath))
        {
            Directory.CreateDirectory(directoryPath);
        }

        // Create a new file in the directory
        string filePath = Path.Combine(directoryPath, patch.patch_name + ".helm");
        byte[] data = System.Text.Encoding.UTF8.GetBytes(JsonConvert.SerializeObject(patch, Formatting.Indented));
        File.WriteAllBytes(filePath, data);

        // Print the path to the file for debugging purposes
        Debug.Log("File saved to: " + filePath);
    }


}

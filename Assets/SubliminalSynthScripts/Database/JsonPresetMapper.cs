using System.Collections.Generic;
using System.IO;
using System.Reflection;
using AudioHelm;
using Newtonsoft.Json;
using TMPro;
using UnityEngine;

public class JsonPresetMapper : MonoBehaviour
{
    string patchAuthor;
    string patchName;
    public TMP_InputField presetNameInputfield;

    public HelmController helmController;
    
    // Start is called before the first frame update
    void Start()
    {
        BSA_BetterStreamingAssets.Initialize();
    }

    public void WritePresetToAssets()
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

    private HelmPatchFormat CreatePatch()
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

    public void WritePresetToAndroid()
    {
        HelmPatchFormat patch = CreatePatch();
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

using System.Collections.Generic;
using System.IO;
using TMPro;
using UnityEngine;
using AudioHelm;

using System.Text.RegularExpressions;
using UnityEngine.XR;

public class PresetUtil : MonoBehaviour
{

    string filepath;
    public TMP_Dropdown folderDropdown;
    public TMP_Dropdown presetDowndown;
    public HelmController helmController;
    public StreamingManager streamingManager;
    public GameObject presetDropdownGameObject;
    public List<ParameterSlider> parameterSliders;
    
    public void LoadPreset()
    {
        HelmPatch patch = presetDropdownGameObject.AddComponent<HelmPatch>();
#if UNITY_EDITOR
        patch.LoadPatchData(filepath + presetDowndown.options[presetDowndown.value].text + ".helm");
#else
        patch.LoadPatchDataAndroid(filepath + presetDowndown.options[presetDowndown.value].text + ".helm");
#endif
        helmController.LoadPatch(patch);

        parameterSliders.ForEach(slider => 
                slider.paramSlider.value = Native.HelmGetParameterValue(0, (int)slider.param.parameter)
        );
    }

    public void UpdateFolder()
    {
        this.gameObject.SetActive(true);
#if UNITY_EDITOR
        filepath = Application.streamingAssetsPath + "/" + folderDropdown.options[folderDropdown.value].text + "/";
#else
        filepath = folderDropdown.options[folderDropdown.value].text + "/";
#endif
        Debug.Log("FILE PATH = " + filepath);
        
#if UNITY_EDITOR
        string[] files = System.IO.Directory.GetFiles(filepath, "*.helm", SearchOption.AllDirectories);
#else
        string[] files = BSA_BetterStreamingAssets.GetFiles(filepath, "*.helm", SearchOption.AllDirectories);
#endif
            
        List<string> option = new List<string>();
        string pattern = @"(?<=\/)[^\/]+(?=\.[^.]+$)";

        for (int i = 0; i < files.Length; i++)
        {
            Match match = Regex.Match(files[i], pattern);

            if (match.Success)
            {
                string result = match.Value;
                option.Add(result);
            }
            
            Debug.Log("File = " + files[i]);
        }
        
        foreach (string op in option)
        {
            Debug.Log("OPTION = " + op);
        }
        
        presetDowndown.ClearOptions();
        presetDowndown.AddOptions(option);
    }
}

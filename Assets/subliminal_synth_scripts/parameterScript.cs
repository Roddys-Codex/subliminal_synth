using System.Collections;
using System.Collections.Generic;
using System.IO;
using TMPro;
using UnityEngine;
using static TMPro.TMP_Dropdown;
using AudioHelm;
using MoreLinq;
using static System.Net.WebRequestMethods;
using UnityEngine.UI;
using System.Text.RegularExpressions;
using UnityEngine.Windows;
using NRKernal;

public class parameterScript : MonoBehaviour
{

    string filepath;
    public TMP_Dropdown folderDropdown;
    public TMP_Dropdown presetDowndown;
    public HelmController helmController;
    public StreamingManager streamingManager;
    public GameObject parameterScriptObject;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void loadPatch()
    {
        HelmPatch patch = parameterScriptObject.AddComponent<HelmPatch>();
        //Add HelmPatch patch = new HelmPatch();
        //string myString = StreamingManager.ReadFromString(filepath + presetDowndown.options[presetDowndown.value].text + ".helm");
#if UNITY_EDITOR
        patch.LoadPatchData(filepath + presetDowndown.options[presetDowndown.value].text + ".helm");
#else
        patch.LoadPatchDataAndroid(filepath + presetDowndown.options[presetDowndown.value].text + ".helm");
#endif
        helmController.LoadPatch(patch);
    }

    public void updateFolder()
    {
        this.gameObject.SetActive(true);
#if UNITY_EDITOR
        filepath = Application.streamingAssetsPath + "/" + folderDropdown.options[folderDropdown.value].text + "/";
#else
        filepath = folderDropdown.options[folderDropdown.value].text + "/";
#endif
        Debug.Log("FILE PATH = " + filepath);

        //filepath = "Assets/AudioHelm/Presets/" + folderDropdown.options[folderDropdown.value].text +"/";
#if UNITY_EDITOR
        string[] files = System.IO.Directory.GetFiles(filepath, "*.helm", SearchOption.AllDirectories);
#else
        string[] files = BSA_BetterStreamingAssets.GetFiles(filepath, "*.helm", SearchOption.AllDirectories);
#endif
        List<string> option = new List<string>();

        //string text = "ImageDimension=655x0;ThumbnailDimension=0x0";
        string pattern = @"(?<=\/)[^\/]+(?=\.[^.]+$)";

        files.ForEach(file =>
        {
            Match match = Regex.Match(file, pattern);

            if (match.Success)
            {
                string result = match.Value;
                option.Add(result);
            }
            
            Debug.Log("File = " + file);
            //Debug.Log("Matcher Value = " + match.Groups["fileName"].Value.ToString());
            //file.Remove(filepath.Length));
            //option.Add(Regex.Split(file, ""));
        });
            //option.Add(file.Substring(filepath.Length))
            //);
        foreach (string op in option)
        {
            Debug.Log("OPTION = " + op);
        }
        //Debug.Log("FILES = " + files[0]);
        presetDowndown.ClearOptions();
        //OptionData dropdownOptionData = new OptionData();
        //dropdownOptionData.text += files;
        presetDowndown.AddOptions(option);
    }


}

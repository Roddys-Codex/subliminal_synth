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
        HelmPatch patch = new HelmPatch();
        patch.LoadPatchData(filepath+ presetDowndown.options[presetDowndown.value].text +".helm");
        helmController.LoadPatch(patch);
    }

    public void updateFolder()
    {
        this.gameObject.SetActive(true);
        filepath = "Assets/AudioHelm/Presets/" + folderDropdown.options[folderDropdown.value].text +"/";

        string[] files = System.IO.Directory.GetFiles(filepath, "*.helm", SearchOption.AllDirectories);
        List<string> option = new List<string>();

        //string text = "ImageDimension=655x0;ThumbnailDimension=0x0";
        string pattern = @"/(?:[^/]*\/){3}([^.]*)\.";

        files.ForEach(file =>
        {
            Match match = Regex.Match(file, pattern);

            if (match.Success)
            {
                string result = match.Groups[1].Value;
                option.Add(match.Groups[1].Value);
            }
            
            Debug.Log("File = " + file);
            Debug.Log("Matcher Value = " + match.Groups["fileName"].Value.ToString());
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

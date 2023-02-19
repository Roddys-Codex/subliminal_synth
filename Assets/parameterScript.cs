using System.Collections;
using System.Collections.Generic;
using System.IO;
using TMPro;
using UnityEngine;
using static TMPro.TMP_Dropdown;
using AudioHelm;
using MoreLinq;
using static System.Net.WebRequestMethods;

public class parameterScript : MonoBehaviour
{

    string filepath = "Assets/AudioHelm/Presets/Arp/";
    public TMP_Dropdown arpDropDown;
    public HelmController helmController;
    // Start is called before the first frame update
    void Start()
    {
        string[] files = Directory.GetFiles(filepath, "*.helm", SearchOption.AllDirectories);
        List<string> option = new List<string>();
        //files.ForEach(file =>
        //    file.Remove(filepath.Length));
        //    //option.Add(file);
        //);
        // files.ForEach(file =>
        //    //file.Remove(filepath.Length));
        //    file.Substring(filepath.Length)
        //);
        files.ForEach(file =>
            //file.Remove(filepath.Length));
            option.Add(file.Substring(filepath.Length))
            );
        foreach (string op in option)
        {
            Debug.Log("OPTION = " + op);
        }
        //Debug.Log("FILES = " + files[0]);
        arpDropDown.ClearOptions();
        //OptionData dropdownOptionData = new OptionData();
        //dropdownOptionData.text += files;
        arpDropDown.AddOptions(option);


    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void loadPatch()
    {
        HelmPatch patch = new HelmPatch();
        patch.LoadPatchData(filepath+arpDropDown.options[arpDropDown.value].text);
        helmController.LoadPatch(patch);
    }


}

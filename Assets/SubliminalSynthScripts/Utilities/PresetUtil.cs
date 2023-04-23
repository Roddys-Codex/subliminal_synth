using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using TMPro;
using UnityEngine;
using AudioHelm;

using System.Text.RegularExpressions;
using Newtonsoft.Json;

public class PresetUtil : MonoBehaviour
{

    string filepath;
    public TMP_Dropdown folderDropdown;
    public TMP_Dropdown presetDowndown;
    public HelmController helmController;
    public StreamingManager streamingManager;
    public GameObject presetDropdownGameObject;
    public List<ParameterSlider> parameterSliders;

    public void Awake()
    {
            List<string> options = GetDropdownOptionsAsStringArray(folderDropdown.options);
            AssetsIntoPersistentData(options);
    }
    
    public List<string> GetDropdownOptionsAsStringArray(List<TMP_Dropdown.OptionData> folderDropdownOptions)
    {
            int optionCount = folderDropdownOptions.Count;
            List<string> optionsArray = new List<string>();

            for (int i = 0; i < optionCount; i++)
            {
                    optionsArray.Add(folderDropdownOptions[i].text);
            }
            Debug.Log("OPTIONS = " + optionsArray.ToString());
            return optionsArray;
    }

    private void AssetsIntoPersistentData(List<string> folderNames)
    {
            BSA_BetterStreamingAssets.Initialize();
            List<string> fileContents = new List<string>();

            foreach (string folderName in folderNames)
            { 

                    // Get all file names in the folder
                    string[] fileNames = BSA_BetterStreamingAssets.GetFiles("/"+folderName+"/", "*.helm", SearchOption.AllDirectories);
                    for (int i = 0; i < fileNames.Length; i++)
                    {
                            fileNames[i] = Path.GetFileName(fileNames[i]);
                    }
                    // string folderPath = Path.Combine(Application.streamingAssetsPath, folderName);
                    // string[] fileNames = Directory.GetFiles(folderPath, "*.helm", SearchOption.AllDirectories);
                    
                    // Loop through all file names and read the file content
                    foreach (string fileName in fileNames)
                    {
                            // Get the full path of the file in the BSA archive
                            string fullPath = Path.Combine(folderName, fileName);

                            // Read the contents of the file from the BSA archive
                            byte[] fileBytes = BSA_BetterStreamingAssets.ReadAllBytes(fullPath);

                            // Convert the file contents to a string and add it to the list
                            string fileContent = System.Text.Encoding.UTF8.GetString(fileBytes);
                            
                            
                            fileContents.Add(fileContent);
                            
                            CreateFolderIfNotExists(folderName);
                            WriteJsonToFile(folderName + "/" + fileName, fileContent);
                    }
            }
    }
    
    public void CreateFolderIfNotExists(string folderName)
    {
            // Create a path to the folder in the persistent data directory
            string folderPath = Path.Combine(Application.persistentDataPath, folderName);

            // Check if the folder already exists
            if (!Directory.Exists(folderPath))
            {
                    // If the folder does not exist, create it
                    Directory.CreateDirectory(folderPath);
            }
    }
    public void WriteJsonToFile(string path, string json)
    {
            // Create a path to the file in the persistent data directory
            string filePath = Path.Combine(Application.persistentDataPath, path);

            // Open a stream to the file
            using (StreamWriter streamWriter = File.CreateText(filePath))
            {
                    // Write the JSON string to the file
                    streamWriter.Write(json);
            }
    }
    public string ReadFileUsingBSA(string filePath)
    {
            string fullPath = Path.Combine(Application.streamingAssetsPath, filePath);
            byte[] fileBytes = BSA_BetterStreamingAssets.ReadAllBytes(fullPath);
            string fileContents = System.Text.Encoding.UTF8.GetString(fileBytes);
            return fileContents;
    }

    public void LoadPreset()
    {
        HelmPatch patch = presetDropdownGameObject.AddComponent<HelmPatch>();
        filepath = Path.Combine(Application.persistentDataPath, folderDropdown.options[folderDropdown.value].text + "/");
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
    
    public void ReadFromPersistentDataPath()
    {
            string folderPath = Path.Combine(Application.persistentDataPath, 
                    folderDropdown.options[folderDropdown.value].text + "/");
            List<string> files = new List<string>();
            
            if (Directory.Exists(folderPath))
            {
                    string[] fileArray = Directory.GetFiles(folderPath);
            
                    foreach (string file in fileArray)
                    {
                            string fileName = Path.GetFileName(file);
                            files.Add(fileName);
                    }
            }
            else
            {
                    Debug.LogError("Folder not found at " + folderPath);
            }
            
            List<string> option = new List<string>();
            string pattern = @"^([^.]+)";

            for (int i = 0; i < files.Count; i++)
            {           
                    option.Add(FileNameExtractor(files[i]));
            }
        
            foreach (string op in option)
            {
                    Debug.Log("OPTION = " + op);
            }
        
            presetDowndown.ClearOptions();
            presetDowndown.AddOptions(option);
    }
    
    public static string FileNameExtractor(string input)
    {
            string pattern = @"^([^.]+)";
            Regex regex = new Regex(pattern);
            Match match = regex.Match(input);
            return match.Groups[1].Value;
    }
}

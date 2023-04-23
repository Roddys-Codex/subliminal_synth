// Copyright 2017 Matt Tytel

using UnityEngine;
using System.IO;

namespace AudioHelm
{
    public class HelmPatch : MonoBehaviour
    {
        public Object patchObject;
        public HelmPatchFormat patchData;

        public void LoadPatchData(string filePath)
        {
            string patchText = File.ReadAllText(filePath);
            patchData = JsonUtility.FromJson<HelmPatchFormat>(patchText);
        }

        public void LoadPatchDataAndroid(string filePath)
        {
            string patchText = ReadFileToString(filePath);
            patchData = JsonUtility.FromJson<HelmPatchFormat>(patchText);
        }
        
        public static string[] ReadCustomFolder(string filePath)
        {
            string folderPath = Path.Combine(Application.persistentDataPath, "Custom");
            if (!Directory.Exists(folderPath))
            {
                Debug.LogError("Custom folder does not exist.");
                return null;
            }

            string[] fileNames = Directory.GetFiles(folderPath);
            return fileNames;
        }
        
        public string ReadFileToString(string filePath)
        {
            string fullPath = Path.Combine(Application.persistentDataPath, filePath);
            string fileContents = File.ReadAllText(fullPath);
            return fileContents;
        }
        
        public HelmPatchFormat GetDataHelmPatchFormat(string filePath)
        {
            string patchText = BSA_BetterStreamingAssets.ReadAllText(filePath);
            return JsonUtility.FromJson<HelmPatchFormat>(patchText);
        }
    }
}

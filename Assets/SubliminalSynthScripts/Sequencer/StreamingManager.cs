using UnityEngine;

public class StreamingManager : MonoBehaviour
{
    void Awake()
    {
        BSA_BetterStreamingAssets.Initialize();
    }

    public static string ReadFromString(string path)
    {
        if (!BSA_BetterStreamingAssets.FileExists(path))
        {
            Debug.LogErrorFormat("Streaming asset not found: {0}", path);
            return null;
        } else
        {
            return path;
        }
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StreamingManager : MonoBehaviour
{
    void Awake()
    {
        BSA_BetterStreamingAssets.Initialize();
    }
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
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

        //using (var stream = BSA_BetterStreamingAssets.OpenRead(path))
        //{
        //    var serializer = new System.Xml.Serialization.XmlSerializer(typeof(Foo));
        //    var serializer = new System.;
        //    return (Foo)serializer.Deserialize(stream);
        //}
    }
}

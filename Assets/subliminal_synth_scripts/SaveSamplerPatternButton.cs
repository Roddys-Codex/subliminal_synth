using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class SaveSamplerPatternButton : MonoBehaviour
{
    public DbConnection dbConn;
    public TMP_InputField savePattern_inputField;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void saveSamplerPattern()
    {
        dbConn.saveDrumPattern(savePattern_inputField.text);
    }
}

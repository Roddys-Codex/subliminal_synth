using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class LoadDrumPattern : MonoBehaviour
{
    public DbConnection dbConnection;
    public TMP_InputField pattern_name_input;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    public void loadPattern()
    {

        dbConnection.loadDrumPattern(pattern_name_input.text);
    }
}

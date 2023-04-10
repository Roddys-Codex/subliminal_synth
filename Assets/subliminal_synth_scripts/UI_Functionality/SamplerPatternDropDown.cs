using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class SamplerPatternDropDown : MonoBehaviour
{

    public DbConnection dbConn;

    // Start is called before the first frame update
    void Start()
    {
        TMP_Dropdown dropdown = GetComponent<TMP_Dropdown>();

        dropdown.AddOptions(dbConn.getSamplerPatternOptions());
    }

    public void updateSamplerPattern()
    {
        TMP_Dropdown dropdown = GetComponent<TMP_Dropdown>();

        dropdown.AddOptions(dbConn.getSamplerPatternOptions());
    }

    public void loadSamplerPattern()
    {
        TMP_Dropdown dropdown = GetComponent<TMP_Dropdown>();

        dbConn.LoadDrumPattern(dropdown.options[dropdown.value].text);
    }

}

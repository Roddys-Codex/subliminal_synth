using TMPro;
using UnityEngine;

public class SaveSamplerPatternButton : MonoBehaviour
{
    public DbConnection dbConn;
    public TMP_InputField savePattern_inputField;

    public void saveSamplerPattern()
    {
        dbConn.SaveDrumPattern(savePattern_inputField.text);
    }
}

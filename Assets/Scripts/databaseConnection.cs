//using System.Collections;
//using System.Collections.Generic;
//using UnityEngine;
//using System.Data;
//using Mono.Data.Sqlite;
//using System.IO;
//using System.Data.Common;

//public class databaseConnection : MonoBehaviour
//{

//    IDbConnection dbcon;
//    // Start is called before the first frame update
//    void Awake()
//    {
//        string connection = "URI=file:" + Application.persistentDataPath + "/" + "synth_manager;";
//        string security = "MultipleActiveResultSets=true;";
//        dbcon = new SqliteConnection(connection + security);

//        IDbCommand dbcmd = dbcon.CreateCommand();
//        string q_InsertData = "INSERT INTO my_table (val, id) VALUES (7, NULL);";
//        dbcmd.CommandText = q_InsertData;
//        dbcon.Open();
//        IDataReader result = dbcmd.ExecuteReader();
//        //Debug.Log(result);
//        dbcon.Close();

//    }

//    private void Start()
//    {
//        IDbCommand dbcmd = dbcon.CreateCommand();
//        dbcmd.CommandText =
//            "SELECT * FROM my_table";
//        dbcon.Open();
//        IDataReader reader = dbcmd.ExecuteReader();
//        reader.Close();
//        Debug.Log("READER  = " + reader.ToString());
//    }

//    // Update is called once per frame
//    void Update()
//    {
        
//    }

//    private void OnDestroy()
//    {
//        dbcon.Close();
//    }
//}

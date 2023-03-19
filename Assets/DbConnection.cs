using System;
using System.Collections;
using System.Collections.Generic;
using System.Data;
using Mono.Data.Sqlite;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Analytics;
using UnityEngine.UI;
using static System.Net.Mime.MediaTypeNames;
using UnityEngine.UIElements;
using Application = UnityEngine.Application;
using AudioHelm;
using static TMPro.TMP_Dropdown;
using static UnityEngine.UI.Dropdown;
using ForieroEngine;
using static DbConnection;

public class DbConnection : MonoBehaviour
{
    private string database_name = "synth_database";

    private string connectionString;
    public TMP_Text userList;
    public TMP_Text logList;
    public TMP_Text insertIntoSixteenthNote;

    public TMP_Text allPatternNamesAndPosition;
    public TMP_InputField query;
    //public InputField userNameInput;
    //public InputField styleInput;
    // Start is called before the first frame update
    public string user_name;
    public string style;
    public SynthManager16th synthManager16th;
    public SynthManager8th synthManager8th;
    public string pattern_name;
    public long pattern_id;
    public TMP_InputField patternNameInputField;
    public List<Note> noteList;
    public List<Note> noteList8th;
    public TMP_Dropdown patternDropDown;

    private List<string> drums = new List<string> { "kick", "snare", "fx_1", "fx_2", "fx_3", "fx_4", "fx_5", "fx_6", "fx_7", "fx_8", "fx_9", "fx_10" };
    public List<GameObject> drumObjects;
    SqliteConnection connection;

    public class DrumRow
    {
        public string drumName { get; set; }
        public SamplerPosition[] samplerPositions { get; set; }
    }

    public List<DrumRow> drumRows;

    void Start()
    {
        drumRows = new List<DrumRow>();
        int count = 0;
        drumObjects.ForEach(drum =>
        {
            DrumRow drumRow = new DrumRow();
            drumRow.samplerPositions = drum.GetComponentsInChildren<SamplerPosition>();
            drumRow.drumName = drums[count];
            count++;
            drumRows.Add(drumRow);

            Debug.Log("DRUM ROW " + count + " NAME = " + drumRow.drumName );
            Debug.Log("DRUM ROW COUNT " + drumRow.samplerPositions.Length );
        });

        
        connectionString = "URI=file:" + Application.persistentDataPath + "/" + database_name + ";MultipleActiveResultSets=true;";
        Debug.Log("Before connection");
        Debug.Log("CONNECTION STRING = "+connectionString);
        connection = new SqliteConnection(connectionString);
        connection.Open();
        // using (var connection = new SqliteConnection(connectionString))
        // {
        //     connection.Open();
        //     LogInfo();
        //     using (var command = connection.CreateCommand())
        //     {
        //         LogInfo();
        //         command.CommandText = "SELECT * FROM sixteenth_note_active JOIN sixteenth_note_pattern ON sixteenth_note_active.sixteenth_note_id=sixteenth_note_pattern.sixteenth_note_id JOIN pattern ON sixteenth_note_pattern.pattern_id=pattern.pattern_id;";
        //         LogInfo();
        //         using (IDataReader reader = command.ExecuteReader())
        //         {
        //             LogInfo();
        //             while (reader.Read())
        //             {
        //                 LogInfo();
        //                 Debug.Log("PATTERN NAME = " +reader["pattern_name"]);
        //             }
        //             LogInfo();
        //         }
        //         LogInfo();
        //     }
        //     LogInfo();
        //     connection.Close();
        // }
        // LogInfo();
        // getAllPatternNamesAndPosition();
        // Debug.Log("After connection");

        
        // connection = new SqliteConnection(connectionString);
        // Debug.Log("CONNECTION STRING = " + connectionString);
        // connection.Open();
        // user_name = "droddy/";
        // style = "metal";
        CreateDB();
        // DisplayPatterns();
        // LogInfo();    
        //AddUser();
        // getAllPatterns();
        // setPatternByName();
        queryPatternFromDb();



    }

    

    public void logQuery() {

        logList.text = "";
        using (var command = connection.CreateCommand())
        {
            // command.CommandText = "SELECT * FROM sixteenth_note_active JOIN sixteenth_note_pattern ON sixteenth_note_active.sixteenth_note_id=sixteenth_note_pattern.sixteenth_note_id JOIN pattern ON sixteenth_note_pattern.pattern_id=pattern.pattern_id;";
            command.CommandText = query.text;

            try {
                using (IDataReader reader = command.ExecuteReader())
                {
                    while (reader.Read())
                    {
                        var value1 = reader.GetValue(0); // On first iteration will be hello
                        var value2 = reader.GetValue(1); // On first iteration will be hello2
                        // var value3 = reader.GetValue(2); // On first iteration will be hello3
                        // var value4 = reader.GetValue(3); // On first iteration will be hello
                        // var value5 = reader.GetValue(4); // On first iteration will be hello2
                        // var value6 = reader.GetValue(5); // On first iteration will be hello3

                        Debug.Log(value1);
                        Debug.Log(value2);
                        // Debug.Log(value3);
                        // Debug.Log(value4);
                        // Debug.Log(value5);
                        // Debug.Log(value6);
                        logList.text += value1.ToString() + value2.ToString();
                    }
                    reader.Close();
                }
            } catch (Exception ex) {
                Debug.Log(ex);
            }

        }
        // return "string";
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnDestroy() {
        connection.Close();
    }

    public void CreateDB()
    {

        // using(var connection = new SqliteConnection(connectionString))
        // {
            // connection.Open();

            using (var command = connection.CreateCommand())
            {
                command.CommandText = "CREATE TABLE IF NOT EXISTS pattern (pattern_id INTEGER PRIMARY KEY, pattern_name TEXT NOT NULL); " +
                    "CREATE TABLE IF NOT EXISTS \"sixteenth_note\" ( sixteenth_note_id INTEGER PRIMARY KEY, pattern_id INTEGER, position INTEGER NOT NULL, active INTEGER NOT NULL, note INTEGER NOT NULL, velocity REAL NOT NULL," +
                    "FOREIGN KEY (pattern_id) REFERENCES pattern (pattern_id) ON DELETE CASCADE ON UPDATE NO ACTION);" +
                    "CREATE TABLE IF NOT EXISTS \"eighth_note\" ( eighth_note_id INTEGER PRIMARY KEY, pattern_id INTEGER, position INTEGER NOT NULL, active INTEGER NOT NULL,  note INTEGER NOT NULL, velocity REAL NOT NULL," +
                    "FOREIGN KEY (pattern_id) REFERENCES pattern (pattern_id) ON DELETE CASCADE ON UPDATE NO ACTION);" +
                    "CREATE TABLE IF NOT EXISTS drum_pattern (drum_pattern_id INTEGER PRIMARY KEY, drum_pattern_name TEXT NOT NULL UNIQUE);" +
                    "CREATE TABLE IF NOT EXISTS drum (drum_id INTEGER PRIMARY KEY, drum_name TEXT NOT NULL UNIQUE, note INTEGER NOT NULL);" +
                    "CREATE TABLE IF NOT EXISTS drum_row (drum_row_id INTEGER PRIMARY KEY, drum_pattern_id INTEGER NOT NULL, drum_id INTEGER NOT NULL, " +
                    "row_1 INTEGER DEFAULT 0 NOT NULL, " +
                    "row_2 INTEGER DEFAULT 0 NOT NULL, " +
                    "row_3 INTEGER DEFAULT 0 NOT NULL, " +
                    "row_4 INTEGER DEFAULT 0 NOT NULL, " +
                    "row_5 INTEGER DEFAULT 0 NOT NULL, " +
                    "row_6 INTEGER DEFAULT 0 NOT NULL, " +
                    "row_7 INTEGER DEFAULT 0 NOT NULL, " +
                    "row_8 INTEGER DEFAULT 0 NOT NULL, " +
                    "row_9 INTEGER DEFAULT 0 NOT NULL, " +
                    "row_10 INTEGER DEFAULT 0 NOT NULL, " +
                    "row_11 INTEGER DEFAULT 0 NOT NULL, " +
                    "row_12 INTEGER DEFAULT 0 NOT NULL, " +
                    "row_13 INTEGER DEFAULT 0 NOT NULL, " +
                    "row_14 INTEGER DEFAULT 0 NOT NULL, " +
                    "row_15 INTEGER DEFAULT 0 NOT NULL, " +
                    "row_16 INTEGER DEFAULT 0 NOT NULL, " +
                    "FOREIGN KEY (drum_pattern_id) REFERENCES drum_pattern (drum_pattern_id) ON DELETE CASCADE ON UPDATE NO ACTION," +
                    "FOREIGN KEY (drum_id) REFERENCES drum (drum_id) ON DELETE CASCADE ON UPDATE NO ACTION);" +
                    "INSERT OR IGNORE INTO drum (drum_name, note) VALUES( \"kick\", 60);" +
                    "INSERT OR IGNORE INTO drum (drum_name, note) VALUES( \"snare\", 61);" +
                    "INSERT OR IGNORE INTO drum (drum_name, note) VALUES( \"fx_1\", 62);" +
                    "INSERT OR IGNORE INTO drum (drum_name, note) VALUES( \"fx_2\", 63);" +
                    "INSERT OR IGNORE INTO drum (drum_name, note) VALUES( \"fx_3\", 64);" +
                    "INSERT OR IGNORE INTO drum (drum_name, note) VALUES( \"fx_4\", 65);" +
                    "INSERT OR IGNORE INTO drum (drum_name, note) VALUES( \"fx_5\", 66);" +
                    "INSERT OR IGNORE INTO drum (drum_name, note) VALUES( \"fx_6\", 67);" +
                    "INSERT OR IGNORE INTO drum (drum_name, note) VALUES( \"fx_7\", 68);" +
                    "INSERT OR IGNORE INTO drum (drum_name, note) VALUES( \"fx_8\", 69);" +
                    "INSERT OR IGNORE INTO drum (drum_name, note) VALUES( \"fx_9\", 70);" +
                    "INSERT OR IGNORE INTO drum (drum_name, note) VALUES( \"fx_10\", 71);";

                    // "CREATE TABLE IF NOT EXISTS eighth_note_pattern (eighth_note_pattern_id INTEGER PRIMARY KEY, eighth_note_id INTEGER, pattern_id INTEGER, " +
                    // "FOREIGN KEY (eighth_note_id) REFERENCES eighth_note (eighth_note_id) ON DELETE CASCADE ON UPDATE NO ACTION, FOREIGN KEY (pattern_id) REFERENCES pattern (pattern_id) ON DELETE CASCADE ON UPDATE NO ACTION); " +
                    // "CREATE TABLE IF NOT EXISTS sixteenth_note_pattern (sixteenth_note_pattern_id INTEGER PRIMARY KEY, sixteenth_note_id INTEGER, pattern_id INTEGER, " +
                    // "FOREIGN KEY (sixteenth_note_id) REFERENCES sixteenth_note (sixteenth_note_id) ON DELETE CASCADE ON UPDATE NO ACTION, FOREIGN KEY (pattern_id) REFERENCES pattern (pattern_id) ON DELETE CASCADE ON UPDATE NO ACTION); " +
                    // "CREATE TABLE IF NOT EXISTS eighth_note_inactive (eighth_note_inactive_id INTEGER PRIMARY KEY, position INTEGER NOT NULL, active INTEGER NOT NULL); " +
                    // "CREATE TABLE IF NOT EXISTS sixteenth_note_inactive (sixteenth_note_inactive_id INTEGER PRIMARY KEY, position INTEGER NOT NULL, active INTEGER NOT NULL);";
                command.ExecuteNonQuery();
            }
            // connection.Close();
        // }
    }
    public void DisplayUsers()
    {
        userList.text = "";
        using(var connection = new SqliteConnection(connectionString))
        {
            connection.Open();

            using(var command = connection.CreateCommand())
            {
                command.CommandText = "SELECT * FROM user ORDER BY user_name;";

                using (IDataReader reader = command.ExecuteReader())
                {
                    while (reader.Read())
                    {
                        userList.text += reader["user_name"] + "\t\t" + reader["style"] + "\n";
                    }
                    reader.Close();
                }
            }
        }
    }

    public void LogInfo()
    {
        userList.text = "";
        // using (var connection = new SqliteConnection(connectionString))
        // {
            // connection.Open();

            using (var command = connection.CreateCommand())
            {
                // command.CommandText = "SELECT * FROM sixteenth_note_active JOIN sixteenth_note_pattern ON sixteenth_note_active.sixteenth_note_id=sixteenth_note_pattern.sixteenth_note_id JOIN pattern ON sixteenth_note_pattern.pattern_id=pattern.pattern_id;";
                command.CommandText = "SELECT * FROM pattern;";

                using (IDataReader reader = command.ExecuteReader())
                {
                    while (reader.Read())
                    {
                        Debug.Log("PATTERN NAME = " + reader["pattern_name"]);
                        print("Database Debug - PATTERN NAME = "+ reader["pattern_name"]);
                        userList.text+=reader["pattern_name"];
                    }
                    reader.Close();
                }
                
            }
        // }
    }

    public void LogInfoMethod()
    {
        userList.text = "";
        // using (var connection = new SqliteConnection(connectionString))
        // {
        // connection.Open();

        using (var command = connection.CreateCommand())
        {
            // command.CommandText = "SELECT * FROM sixteenth_note_active JOIN sixteenth_note_pattern ON sixteenth_note_active.sixteenth_note_id=sixteenth_note_pattern.sixteenth_note_id JOIN pattern ON sixteenth_note_pattern.pattern_id=pattern.pattern_id;";
            command.CommandText = "SELECT * FROM sixteenth_note_pattern;";

            using (IDataReader reader = command.ExecuteReader())
            {
                while (reader.Read())
                {
                    Debug.Log("PATTERN NAME = " + reader["pattern_name"]);
                    print("Database Debug - PATTERN NAME = " + reader["pattern_name"]);
                    userList.text += reader["pattern_name"];
                }
                reader.Close();
            }

        }
        // }
    }

    public void queryPatternFromDb() {
        //Debug.Log("DROP DOWN VALUE = "+patternDropDown.value);
        patternDropDown.ClearOptions();
        using (var command = connection.CreateCommand())
        {
            // command.CommandText = "SELECT * FROM sixteenth_note_active JOIN sixteenth_note_pattern ON sixteenth_note_active.sixteenth_note_id=sixteenth_note_pattern.sixteenth_note_id JOIN pattern ON sixteenth_note_pattern.pattern_id=pattern.pattern_id;";
            command.CommandText = "SELECT * FROM pattern;";

            using (IDataReader reader = command.ExecuteReader())
            {
                List<string> options = new List<string>();
                while (reader.Read())
                {
                    Debug.Log("PATTERN NAME = " + reader["pattern_name"]);
                    print("Database Debug - PATTERN NAME = " + reader["pattern_name"]);
                    
                    options.Add((string)reader["pattern_name"]);
                    
                }
                patternDropDown.AddOptions(options);
                reader.Close();
            }

        }
        patternDropDown.RefreshShownValue();


    }

    public void LogInfo(String log)
    {
        // logList.text += log;
    }

    public void DisplaySequencerPositions()
    {
        userList.text = "";
        using (var connection = new SqliteConnection(connectionString))
        {
            connection.Open();

            using (var command = connection.CreateCommand())
            {
                command.CommandText = "SELECT * FROM sixteenth_note_active;";

                using (IDataReader reader = command.ExecuteReader())
                {
                    while (reader.Read())
                    {
                        userList.text += reader["position"] + "\t\t" + reader["active"] + "\n";
                    }
                }
            }
        }
    }

    public void DisplayPatterns()
    {
        userList.text = "";
        using (var connection = new SqliteConnection(connectionString))
        {
            connection.Open();

            using (var command = connection.CreateCommand())
            {
                command.CommandText = "SELECT * FROM sixteenth_note_active JOIN sixteenth_note_pattern ON sixteenth_note_active.sixteenth_note_id=sixteenth_note_pattern.sixteenth_note_id JOIN pattern ON sixteenth_note_pattern.pattern_id=pattern.pattern_id;";

                using (IDataReader reader = command.ExecuteReader())
                {
                    while (reader.Read())
                    {
                        userList.text += reader["pattern_name"];
                    }
                }
            }
        }
    }

    public void AddUser()
    {
        using (var connection = new SqliteConnection(connectionString))
        {
            connection.Open();

            using(var command = connection.CreateCommand())
            {
                command.CommandText = "INSERT INTO user (user_name) VALUES ('" + user_name + "');";
                command.ExecuteNonQuery();
            }
            connection.Close();
        }
        DisplayUsers();
    }
    public void saveDrumPattern(string drum_pattern_name)
    {

        using (var command = connection.CreateCommand())
        {
            // command.CommandText = "INSERT INTO pattern (pattern_name) VALUES ('" + pattern_name + "'); SELECT last_insert_rowid();";
            command.CommandText = "BEGIN TRANSACTION; INSERT INTO drum_pattern (drum_pattern_name) VALUES (\"" + drum_pattern_name + "\"); SELECT last_insert_rowid(); COMMIT TRANSACTION;";


            // command.ExecuteNonQuery();
            // command.CommandText = "SELECT last_insert_rowid()";
            pattern_id = (long)command.ExecuteScalar();
        }

        foreach (DrumRow drumRow in drumRows)
        {
            // synthManager16th.sequencerPositions.ForEach(sequencerPosition =>
            // {
            //foreach (SamplerPosition samplerPosition in drumRow.samplerPositions)
            //{
                // using (var connection = new SqliteConnection(connectionString))
                // {
                // connection.Open();

                
                
                    long drum_id;

                    using (var command = connection.CreateCommand())
                    {
                        // command.CommandText = "INSERT INTO sixteenth_note_pattern (sixteenth_note_id, pattern_id) VALUES ('" + sequencerPosition.positionObjectNumber.ToString() + "','" + pattern_id.ToString() + "');";
                        // CREATE TABLE IF NOT EXISTS \"sixteenth_note\" ( sixteenth_note_id INTEGER PRIMARY KEY, pattern_id INTEGER, position INTEGER NOT NULL, active INTEGER NOT NULL," +
                        command.CommandText = "BEGIN TRANSACTION; SELECT drum_id FROM drum WHERE drum.drum_name= \"" + drumRow.drumName + "\"; COMMIT TRANSACTION;";
                        drum_id = (long)command.ExecuteScalar();
                    }
                    using (var command = connection.CreateCommand())
                    {
                        command.CommandText = "BEGIN TRANSACTION; INSERT OR IGNORE INTO drum_row (drum_pattern_id, drum_id, row_1, row_2, row_3, row_4, row_5, row_6, row_7, row_8, row_9, row_10, row_11, row_12, row_13, row_14, row_15, row_16)" +
                            " VALUES (" +
                            "\"" + pattern_id
                            + "\", " + drum_id
                            + ", \"" + Convert.ToInt32(drumRow.samplerPositions[0].active)
                            + "\", \"" + Convert.ToInt32(drumRow.samplerPositions[1].active)
                            + "\", \"" + Convert.ToInt32(drumRow.samplerPositions[2].active)
                            + "\", \"" + Convert.ToInt32(drumRow.samplerPositions[3].active)
                            + "\", \"" + Convert.ToInt32(drumRow.samplerPositions[4].active)
                            + "\", \"" + Convert.ToInt32(drumRow.samplerPositions[5].active)
                            + "\", \"" + Convert.ToInt32(drumRow.samplerPositions[6].active)
                            + "\", \"" + Convert.ToInt32(drumRow.samplerPositions[7].active)
                            + "\", \"" + Convert.ToInt32(drumRow.samplerPositions[8].active)
                            + "\", \"" + Convert.ToInt32(drumRow.samplerPositions[9].active)
                            + "\", \"" + Convert.ToInt32(drumRow.samplerPositions[10].active)
                            + "\", \"" + Convert.ToInt32(drumRow.samplerPositions[11].active)
                            + "\", \"" + Convert.ToInt32(drumRow.samplerPositions[12].active)
                            + "\", \"" + Convert.ToInt32(drumRow.samplerPositions[13].active)
                            + "\", \"" + Convert.ToInt32(drumRow.samplerPositions[14].active)
                            + "\", \"" + Convert.ToInt32(drumRow.samplerPositions[15].active)
                            + "\"); COMMIT TRANSACTION;";
                        Debug.Log("COMMAND TEXT = " + command.CommandText);

                        //insertIntoSixteenthNote.text += command.CommandText;

                        try
                        {
                            command.ExecuteNonQuery();
                        }
                        catch (Exception ex)
                        {
                            // string code = ex.ErrorCode;
                            Debug.Log("Exception: " + ex);
                            logList.text += ("Exception: " + ex);
                        }

                    
                //}
            }
            // connection.Close();
            // }
        }

    }
    public void savePattern()
    {

        Debug.Log("Saving pattern.");
        pattern_name = patternNameInputField.text;
        // using (var connection = new SqliteConnection(connectionString))
        // {
            // connection.Open();
            
            using (var command = connection.CreateCommand())
            {
                // command.CommandText = "INSERT INTO pattern (pattern_name) VALUES ('" + pattern_name + "'); SELECT last_insert_rowid();";
                command.CommandText = "BEGIN TRANSACTION; INSERT INTO pattern (pattern_name) VALUES (\""+pattern_name+"\"); SELECT last_insert_rowid(); COMMIT TRANSACTION;";

                
                // command.ExecuteNonQuery();
                // command.CommandText = "SELECT last_insert_rowid()";
                pattern_id =  (long)command.ExecuteScalar();
            }
            // connection.Close();
        // }

        Debug.Log("PATTERN ID = " + pattern_id);

        foreach(SequencerPosition sequencerPosition in synthManager16th.sequencerPositions) {
        // synthManager16th.sequencerPositions.ForEach(sequencerPosition =>
        // {
            if(sequencerPosition.noteActive==true)
            {
                // using (var connection = new SqliteConnection(connectionString))
                // {
                    // connection.Open();

                    using (var command = connection.CreateCommand())
                    {
                    // command.CommandText = "INSERT INTO sixteenth_note_pattern (sixteenth_note_id, pattern_id) VALUES ('" + sequencerPosition.positionObjectNumber.ToString() + "','" + pattern_id.ToString() + "');";
                    // CREATE TABLE IF NOT EXISTS \"sixteenth_note\" ( sixteenth_note_id INTEGER PRIMARY KEY, pattern_id INTEGER, position INTEGER NOT NULL, active INTEGER NOT NULL," +
                        command.CommandText = "BEGIN TRANSACTION; INSERT INTO sixteenth_note (pattern_id, position, active, note, velocity) VALUES (\"" + pattern_id + "\", " + sequencerPosition.positionObjectNumber + ", 1, \""+sequencerPosition.note.note+"\", \""+sequencerPosition.note.velocity+"\"); COMMIT TRANSACTION;";
                        Debug.Log("COMMAND TEXT = "+command.CommandText);

                        //insertIntoSixteenthNote.text += command.CommandText;

                        try {
                            command.ExecuteNonQuery();
                        } catch (Exception ex) {
                            // string code = ex.ErrorCode;
                            Debug.Log("Exception: " + ex);
                            logList.text += ("Exception: " + ex);
                        }
                        
                    }
                    // connection.Close();
                // }
            }
        }

        foreach (SequencerPosition8th sequencerPosition in synthManager8th.sequencerPositions)
        {
            // synthManager16th.sequencerPositions.ForEach(sequencerPosition =>
            // {
            if (sequencerPosition.noteActive == true)
            {
                // using (var connection = new SqliteConnection(connectionString))
                // {
                // connection.Open();

                using (var command = connection.CreateCommand())
                {
                    // command.CommandText = "INSERT INTO sixteenth_note_pattern (sixteenth_note_id, pattern_id) VALUES ('" + sequencerPosition.positionObjectNumber.ToString() + "','" + pattern_id.ToString() + "');";
                    // CREATE TABLE IF NOT EXISTS \"sixteenth_note\" ( sixteenth_note_id INTEGER PRIMARY KEY, pattern_id INTEGER, position INTEGER NOT NULL, active INTEGER NOT NULL," +
                    command.CommandText = "BEGIN TRANSACTION; INSERT INTO eighth_note (pattern_id, position, active, note, velocity) VALUES (\"" + pattern_id + "\", " + sequencerPosition.positionObjectNumber + ", 1, \"" + sequencerPosition.note.note+ "\", \"" + sequencerPosition.note.velocity+ "\"); COMMIT TRANSACTION;";
                    Debug.Log("COMMAND TEXT = " + command.CommandText);

                    //insertIntoSixteenthNote.text += command.CommandText;

                    try
                    {
                        command.ExecuteNonQuery();
                    }
                    catch (Exception ex)
                    {
                        // string code = ex.ErrorCode;
                        Debug.Log("Exception: " + ex);
                        logList.text += ("Exception: " + ex);
                    }

                }
                // connection.Close();
                // }
            }
        }
        // });
        queryPatternFromDb();
    }

    public void getPatternByName() {
        Debug.Log("Getting pattern.");
        // using (var connection = new SqliteConnection(connectionString))
        // {
            // connection.Open();

            using (var command = connection.CreateCommand())
            {
                command.CommandText = "SELECT * FROM sixteenth_note_active JOIN sixteenth_note_pattern ON sixteenth_note_active.sixteenth_note_id=sixteenth_note_pattern.sixteenth_note_id JOIN pattern ON sixteenth_note_pattern.pattern_id=pattern.pattern_id WHERE pattern.pattern_name = '"+ pattern_name + "';";

                using (IDataReader reader = command.ExecuteReader())
                {
                    while (reader.Read())
                    {
                        userList.text += reader["position"];
                    }
                }
            }
            // connection.Close();
        // }
    }

    public void loadDrumPattern(string drum_pattern_name)
    {
        //List<DrumRow> drumRowListFromDB = new List<DrumRow>();
        
        //for (int i=0; i<drumRowListFromDB.Count; i++)
        //{
        //    drumRowListFromDB[i].samplerPositions = drumRows[i].samplerPositions;
        //}
        int count = 0;
        foreach (DrumRow drumRow in drumRows)
        {

            long drum_id;

            using (var command = connection.CreateCommand())
            {
                Debug.Log("DRUM NAME  = " + drumRow.drumName);
                // command.CommandText = "INSERT INTO sixteenth_note_pattern (sixteenth_note_id, pattern_id) VALUES ('" + sequencerPosition.positionObjectNumber.ToString() + "','" + pattern_id.ToString() + "');";
                // CREATE TABLE IF NOT EXISTS \"sixteenth_note\" ( sixteenth_note_id INTEGER PRIMARY KEY, pattern_id INTEGER, position INTEGER NOT NULL, active INTEGER NOT NULL," +
                command.CommandText = "BEGIN TRANSACTION; SELECT drum_id FROM drum WHERE drum.drum_name= \"" + drumRow.drumName + "\"; COMMIT TRANSACTION;";
                drum_id = (long)command.ExecuteScalar();
                Debug.Log("DRUM ID  = " + drum_id);
            }

            int note;
            using (var command = connection.CreateCommand())
            {
                // command.CommandText = "INSERT INTO sixteenth_note_pattern (sixteenth_note_id, pattern_id) VALUES ('" + sequencerPosition.positionObjectNumber.ToString() + "','" + pattern_id.ToString() + "');";
                // CREATE TABLE IF NOT EXISTS \"sixteenth_note\" ( sixteenth_note_id INTEGER PRIMARY KEY, pattern_id INTEGER, position INTEGER NOT NULL, active INTEGER NOT NULL," +
                command.CommandText = "BEGIN TRANSACTION; SELECT note FROM drum WHERE drum.drum_name= \"" + drumRow.drumName + "\"; COMMIT TRANSACTION;";
                long note_temp = (long)command.ExecuteScalar();
                note = Convert.ToInt32(note_temp);
                Debug.Log("DRUM NOTE  = " + note);
            }

            using (var command = connection.CreateCommand())
            {
                
                Debug.Log("Preparing query to load drum " + drumRow.drumName);
                command.CommandText = "SELECT * FROM drum_row JOIN drum_pattern ON drum_row.drum_pattern_id=drum_pattern.drum_pattern_id JOIN drum ON drum_row.drum_id=drum.drum_id WHERE drum_pattern.drum_pattern_name=\'"+drum_pattern_name+"\' AND drum.drum_id="+drum_id+";";
                Debug.Log("COMMAND TEXT = " + command.CommandText);
                
                // command.CommandText = "SELECT * FROM sixteenth_note_pattern;";

                try
                {
                    using (IDataReader reader = command.ExecuteReader())
                    {
                        while (reader.Read())
                        {
                            // TODO : FIND OUT IF THERE ARE ANY SIXTEENTH NOTE PATTERN IDs in PHONE DB BY PRINTING LINE BELOW
                            Debug.Log("DRUM PATTERN NAME = " + reader["drum_pattern_name"]);
                            int position = 0;
                            drumRows[count].samplerPositions[position].note = note;
                            drumRows[count].samplerPositions[position].active = Convert.ToBoolean(reader.GetValue(reader.GetOrdinal("row_1")));
                            position++;
                            drumRows[count].samplerPositions[position].note = note;
                            drumRows[count].samplerPositions[position].active = Convert.ToBoolean(reader.GetValue(reader.GetOrdinal("row_2")));
                            position++;
                            
                            drumRows[count].samplerPositions[position].note = note;
                            drumRows[count].samplerPositions[position].active = Convert.ToBoolean(reader.GetValue(reader.GetOrdinal("row_3")));
                            
                            position++;
                            
                            drumRows[count].samplerPositions[position].note = note;
                            drumRows[count].samplerPositions[position].active = Convert.ToBoolean(reader.GetValue(reader.GetOrdinal("row_4")));
                            
                            position++;
                            
                            drumRows[count].samplerPositions[position].note = note;
                            drumRows[count].samplerPositions[position].active = Convert.ToBoolean(reader.GetValue(reader.GetOrdinal("row_5")));
                            
                            position++;
                            
                            drumRows[count].samplerPositions[position].note = note;
                            drumRows[count].samplerPositions[position].active = Convert.ToBoolean(reader.GetValue(reader.GetOrdinal("row_6")));
                            
                            position++;
                            
                            drumRows[count].samplerPositions[position].note = note;
                            drumRows[count].samplerPositions[position].active = Convert.ToBoolean(reader.GetValue(reader.GetOrdinal("row_7")));
                            
                            position++;
                            
                            drumRows[count].samplerPositions[position].note = note;
                            drumRows[count].samplerPositions[position].active = Convert.ToBoolean(reader.GetValue(reader.GetOrdinal("row_8")));
                            
                            position++;
                            
                            drumRows[count].samplerPositions[position].note = note;
                            drumRows[count].samplerPositions[position].active = Convert.ToBoolean(reader.GetValue(reader.GetOrdinal("row_9")));
                            
                            position++;
                            
                            drumRows[count].samplerPositions[position].note = note;
                            drumRows[count].samplerPositions[position].active = Convert.ToBoolean(reader.GetValue(reader.GetOrdinal("row_10")));
                            
                            position++;
                            
                            drumRows[count].samplerPositions[position].note = note;
                            drumRows[count].samplerPositions[position].active = Convert.ToBoolean(reader.GetValue(reader.GetOrdinal("row_11")));
                            
                            position++;
                            
                            drumRows[count].samplerPositions[position].note = note;
                            drumRows[count].samplerPositions[position].active = Convert.ToBoolean(reader.GetValue(reader.GetOrdinal("row_12")));
                            
                            position++;
                            
                            drumRows[count].samplerPositions[position].note = note;
                            drumRows[count].samplerPositions[position].active = Convert.ToBoolean(reader.GetValue(reader.GetOrdinal("row_13")));
                            
                            position++;
                            
                            drumRows[count].samplerPositions[position].note = note;
                            drumRows[count].samplerPositions[position].active = Convert.ToBoolean(reader.GetValue(reader.GetOrdinal("row_14")));
                            
                            position++;
                            
                            drumRows[count].samplerPositions[position].note = note;
                            drumRows[count].samplerPositions[position].active = Convert.ToBoolean(reader.GetValue(reader.GetOrdinal("row_15")));
                            
                            position++;
                            
                            drumRows[count].samplerPositions[position].note = note;
                            drumRows[count].samplerPositions[position].active = Convert.ToBoolean(reader.GetValue(reader.GetOrdinal("row_16")));
                            

                        

                            drumRows[count].drumName = drumRow.drumName;

                            Debug.Log("DRUM ROW LIST FROM DB SIZE " + drumRows.Count);
                            Debug.Log("DRUM ROW LIST FROM DB NAME " + drumRows[count].drumName);

                            // / ExecuteEvents.Execute(synthManager16th.sequencerPositions[(int)reader["position"]], pointer, ExecuteEvents.OnPointerClick);
                        }
                    }
                }
                catch (Exception ex)
                {
                    Debug.Log("EXCEPTION FROM SIXTEENTH NOTE PATTERN QUERY. EX: " + ex);
                }

            }
            count++;
        }

        // drumRows = drumRowListFromDB;

        // int countTwo = 0;
        // drumObjects.ForEach(drum =>
        // {
        //     for(int i = 0; i < drumRowListFromDB[0].samplerPositions.Length; i++) {
        //         SamplerPosition samplerPosition = drum.GetComponent<SamplerPosition>();
        //         samplerPosition = drumRowListFromDB[countTwo].samplerPositions[i];
        //     }
        // });
    }

    public void setPatternByName()
    {
        Debug.Log("Clearing pattern.");
        synthManager16th.sequencer.AllNotesOff();
        synthManager16th.sequencerPositions.ForEach(position => {
            position.noteActive = false;
            position.renderer.material.color = Color.white;
            synthManager16th.sequencer.RemoveNote(position.note);
        });
        Debug.Log("Setting pattern.");
        
        pattern_name = patternDropDown.options[patternDropDown.value].text;
        Debug.Log("ITEM TEXT = " + patternDropDown.options[patternDropDown.value].text);
        Debug.Log("PATTERN NAME = " + pattern_name);
        // using (var connection = new SqliteConnection(connectionString))
        // {
        // connection.Open();

        using (var command = connection.CreateCommand())
        {
            Debug.Log("Preparing query to select active sixteenth notes.");
            command.CommandText = "SELECT * FROM sixteenth_note JOIN pattern ON sixteenth_note.pattern_id=pattern.pattern_id WHERE pattern.pattern_name = \"" + pattern_name + "\" AND sixteenth_note.active = 1;";
            // command.CommandText = "SELECT * FROM sixteenth_note_pattern;";

            try{
                using (IDataReader reader = command.ExecuteReader())
                {
                    while (reader.Read())
                    {
                        // TODO : FIND OUT IF THERE ARE ANY SIXTEENTH NOTE PATTERN IDs in PHONE DB BY PRINTING LINE BELOW
                        Debug.Log("SIXTEENTH NOTE PATTERN ID = " + reader["sixteenth_note_id"]);
                        // userList.text += reader["position"];
                        Debug.Log("READER POSITION NOTE = " + reader.GetInt32(reader.GetOrdinal("position")));
                        Debug.Log("READ OBJ = " + reader.ToString());
                        Note note = new Note();
                        note.note = reader.GetInt32(reader.GetOrdinal("note")); ;
                        note.start = reader.GetInt32(reader.GetOrdinal("position"));
                        note.end = reader.GetInt32(reader.GetOrdinal("position")) + 1;
                        note.velocity = reader.GetFloat(reader.GetOrdinal("velocity"));

                        synthManager16th.AddNote(note);
                        noteList.Add(note);
                        int pos = reader.GetInt32(reader.GetOrdinal("position"));
                        synthManager16th.sequencerPositions[reader.GetInt32(reader.GetOrdinal("position"))-1].note = note;
                        synthManager16th.sequencerPositions[reader.GetInt32(reader.GetOrdinal("position"))-1].noteActive = true;
                        synthManager16th.sequencerPositions[reader.GetInt32(reader.GetOrdinal("position"))-1].renderer.material.color = Color.cyan;
                        // / ExecuteEvents.Execute(synthManager16th.sequencerPositions[(int)reader["position"]], pointer, ExecuteEvents.OnPointerClick);
                    }
                }
            } catch(Exception ex) {
                Debug.Log("EXCEPTION FROM SIXTEENTH NOTE PATTERN QUERY. EX: " + ex);
            }
        }

        using (var command = connection.CreateCommand())
        {
            Debug.Log("Preparing query to select active eighth notes.");
            command.CommandText = "SELECT * FROM eighth_note JOIN pattern ON eighth_note.pattern_id=pattern.pattern_id WHERE pattern.pattern_name = \"" + pattern_name + "\" AND eighth_note.active = 1;";
            // command.CommandText = "SELECT * FROM sixteenth_note_pattern;";

            try
            {
                using (IDataReader reader = command.ExecuteReader())
                {
                    while (reader.Read())
                    {
                        // TODO : FIND OUT IF THERE ARE ANY SIXTEENTH NOTE PATTERN IDs in PHONE DB BY PRINTING LINE BELOW
                        Debug.Log("EIGHTH NOTE PATTERN ID = " + reader["eighth_note_id"]);
                        // userList.text += reader["position"];
                        Debug.Log("EIGHTH READER POSITION NOTE = " + reader.GetInt32(reader.GetOrdinal("position")));
                        Debug.Log("READ OBJ = " + reader.ToString());
                        Note note = new Note();
                        note.note = reader.GetInt32(reader.GetOrdinal("note")); ;
                        note.start = reader.GetInt32(reader.GetOrdinal("position"));
                        note.end = reader.GetInt32(reader.GetOrdinal("position")) + 1;
                        note.velocity = reader.GetFloat(reader.GetOrdinal("velocity"));

                        synthManager8th.AddNote(note);
                        noteList8th.Add(note);
                        int pos = reader.GetInt32(reader.GetOrdinal("position"));
                        Debug.Log("POSITION BEFORE DIVISION = " + pos);
                        pos = pos / 2;
                        Debug.Log("POSITION DIVIDED BY TWO = "+pos);
                        synthManager8th.sequencerPositions[pos].note = note;
                        synthManager8th.sequencerPositions[pos].noteActive = true;
                        synthManager8th.sequencerPositions[pos].renderer.material.color = Color.cyan;
                        // / ExecuteEvents.Execute(synthManager16th.sequencerPositions[(int)reader["position"]], pointer, ExecuteEvents.OnPointerClick);
                    }
                }
            }
            catch (Exception ex)
            {
                Debug.Log("EXCEPTION FROM SIXTEENTH NOTE PATTERN QUERY. EX: " + ex);
            }
        }
            // connection.Close();
        // }
    }

    public void getAllPatternNamesAndPosition()
    {
        Debug.Log("Getting pattern.");
        // using (var connection = new SqliteConnection(connectionString))
        // {
            // connection.Open();

            using (var command = connection.CreateCommand())
            {
                Debug.Log("Begin transaction.");
                command.CommandText = "BEGIN TRANSACTION; SELECT * FROM sixteenth_note_active JOIN sixteenth_note_pattern ON sixteenth_note_active.sixteenth_note_id=sixteenth_note_pattern.sixteenth_note_id JOIN pattern ON sixteenth_note_pattern.pattern_id=pattern.pattern_id; END TRANSACTION;";
                Debug.Log("Transaction end.");
                using (IDataReader reader = command.ExecuteReader())
                {
                    Debug.Log("Reader start.");
                    while (reader.Read())
                    {
                        Debug.Log("Reader continue.");
                        allPatternNamesAndPosition.text += (reader["pattern_name"] + " POSITION = " + reader["position"]);
                    }
                }
            }
            // connection.Close();
        // }
    }

    public void getSchema()
    {
        Debug.Log("Getting pattern.");
        // using (var connection = new SqliteConnection(connectionString))
        // {
            // connection.Open();

            using (var command = connection.CreateCommand())
            {
                Debug.Log("Begin transaction.");
                command.CommandText = "BEGIN TRANSACTION; .schema END TRANSACTION;";
                Debug.Log("Transaction end.");
                using (IDataReader reader = command.ExecuteReader())
                {
                    Debug.Log("Reader start.");
                    while (reader.Read())
                    {
                        Debug.Log("Reader continue.");
                        allPatternNamesAndPosition.text += (reader["pattern_name"] + " POSITION = " + reader["position"]);
                    }
                }
            }
            // connection.Close();
        // }
    }

    public void updatePatternName() {
        this.pattern_name = patternNameInputField.text;
        //setPatternByName();
    }

    public void clearPattern()
    {
        Debug.Log("Clearing pattern.");
        synthManager16th.sequencer.AllNotesOff();
        synthManager16th.sequencerPositions.ForEach(position => {
            position.noteActive = false;
            position.renderer.material.color = Color.white;
        });
        noteList.ForEach(note => {
            synthManager16th.sequencer.RemoveNote(note);
        });
        noteList.Clear();
    }

    public static Int32 GetNextID(SqliteConnection AConnection)
    {
        Int32 result = -1;

        using (SqliteCommand cmd = AConnection.CreateCommand())
        {
            cmd.CommandText = "SELECT last_insert_rowid();";
            AConnection.Open();
            using (SqliteDataReader r = cmd.ExecuteReader())
            {
                if (r.Read())
                    result = (Int32)r.GetInt64(0);
            }
        }
        AConnection.Close();
        return result;
    }
}

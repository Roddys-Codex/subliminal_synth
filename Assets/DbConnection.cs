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
    
    SqliteConnection connection;

    void Start()
    {
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
                    "CREATE TABLE IF NOT EXISTS \"sixteenth_note\" ( sixteenth_note_id INTEGER PRIMARY KEY, pattern_id INTEGER, position INTEGER NOT NULL, active INTEGER NOT NULL," +
                    "FOREIGN KEY (pattern_id) REFERENCES pattern (pattern_id) ON DELETE CASCADE ON UPDATE NO ACTION);" +
                    "CREATE TABLE IF NOT EXISTS \"eighth_note\" ( eighth_note_id INTEGER PRIMARY KEY, pattern_id INTEGER, position INTEGER NOT NULL, active INTEGER NOT NULL," +
                    "FOREIGN KEY (pattern_id) REFERENCES pattern (pattern_id) ON DELETE CASCADE ON UPDATE NO ACTION);";
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
                        command.CommandText = "BEGIN TRANSACTION; INSERT INTO sixteenth_note (pattern_id, position, active) VALUES (\"" + pattern_id + "\", " + sequencerPosition.positionObjectNumber + ", 1); COMMIT TRANSACTION;";
                        Debug.Log("COMMAND TEXT = "+command.CommandText);

                        insertIntoSixteenthNote.text += command.CommandText;

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
        // });

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
        
        pattern_name = patternNameInputField.text;
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
                            note.note = 60;
                            note.start = reader.GetInt32(reader.GetOrdinal("position"));
                            note.end = reader.GetInt32(reader.GetOrdinal("position")) + 1;
                            note.velocity = 1.0f;

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

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

    public string connectionString;
    public TMP_Text userList;
    //public InputField userNameInput;
    //public InputField styleInput;
    // Start is called before the first frame update
    public string user_name;
    public string style;
    public SynthManager16th synthManager16th;
    public SynthManager8th synthManager8th;
    public String pattern_name;
    public long pattern_id;
    public TMP_InputField patternNameInputField;
    public List<Note> noteList;

    void Start()
    {
        connectionString = "URI=file:" + Application.persistentDataPath + "/" + database_name + ";MultipleActiveResultSets=true;";
        Debug.Log("CONNECTION STRING = " + connectionString);
        user_name = "droddy";
        style = "metal";
        CreateDB();
        //AddUser();
        // getAllPatterns();
        setPatternByName();
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void CreateDB()
    {

        using(var connection = new SqliteConnection(connectionString))
        {
            connection.Open();

            using (var command = connection.CreateCommand())
            {
                command.CommandText = "CREATE TABLE IF NOT EXISTS user (user_name VARCHAR(30), genre VARCHAR(20)); " +
                    "CREATE TABLE IF NOT EXISTS \"sixteenth_note_active\" ( sixteenth_note_id INTEGER PRIMARY KEY, position INTEGER NOT NULL, active INTEGER NOT NULL); " +
                    "CREATE TABLE IF NOT EXISTS \"eighth_note_active\" (eighth_note_id INTEGER PRIMARY KEY, position INTEGER NOT NULL, active INTEGER NOT NULL); " +
                    "CREATE TABLE IF NOT EXISTS pattern (pattern_id INTEGER PRIMARY KEY, pattern_name TEXT NOT NULL); " +
                    "CREATE TABLE IF NOT EXISTS eighth_note_pattern (eighth_note_pattern_id INTEGER PRIMARY KEY, eighth_note_id INTEGER, pattern_id INTEGER, " +
                    "FOREIGN KEY (eighth_note_id) REFERENCES eighth_note (eighth_note_id) ON DELETE CASCADE ON UPDATE NO ACTION, FOREIGN KEY (pattern_id) REFERENCES pattern (pattern_id) ON DELETE CASCADE ON UPDATE NO ACTION); " +
                    "CREATE TABLE IF NOT EXISTS sixteenth_note_pattern (sixteenth_note_pattern_id INTEGER PRIMARY KEY, sixteenth_note_id INTEGER, pattern_id INTEGER, " +
                    "FOREIGN KEY (sixteenth_note_id) REFERENCES sixteenth_note (sixteenth_note_id) ON DELETE CASCADE ON UPDATE NO ACTION, FOREIGN KEY (pattern_id) REFERENCES pattern (pattern_id) ON DELETE CASCADE ON UPDATE NO ACTION); " +
                    "CREATE TABLE IF NOT EXISTS eighth_note_inactive (eighth_note_inactive_id INTEGER PRIMARY KEY, position INTEGER NOT NULL, active INTEGER NOT NULL); " +
                    "CREATE TABLE IF NOT EXISTS sixteenth_note_inactive (sixteenth_note_inactive_id INTEGER PRIMARY KEY, position INTEGER NOT NULL, active INTEGER NOT NULL);";
                command.ExecuteNonQuery();
            }
            connection.Close();
        }
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
                }
            }
        }
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
        using (var connection = new SqliteConnection(connectionString))
        {
            connection.Open();
            
            using (var command = connection.CreateCommand())
            {
                command.CommandText = "INSERT INTO pattern (pattern_name) VALUES ('" + pattern_name + "'); SELECT last_insert_rowid();";
                // command.ExecuteNonQuery();
                // command.CommandText = "SELECT last_insert_rowid()";
                pattern_id =  (long)command.ExecuteScalar();
            }
            connection.Close();
        }

        Debug.Log("PATTERN ID = " + pattern_id);

        synthManager16th.sequencerPositions.ForEach(sequencerPosition =>
        {
            if(sequencerPosition.noteActive==true)
            {
                using (var connection = new SqliteConnection(connectionString))
                {
                    connection.Open();

                    using (var command = connection.CreateCommand())
                    {
                        command.CommandText = "INSERT INTO sixteenth_note_pattern (sixteenth_note_id, pattern_id) VALUES ('" + sequencerPosition.positionObjectNumber + "','" + pattern_id + "');";
                        command.ExecuteNonQuery();
                    }
                    connection.Close();
                }
            }
        });

    }

    public void getPatternByName() {
        Debug.Log("Getting pattern.");
        using (var connection = new SqliteConnection(connectionString))
        {
            connection.Open();

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
            connection.Close();
        }
    }

    public void setPatternByName()
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
        Debug.Log("Setting pattern.");
        
        pattern_name = patternNameInputField.text;
        using (var connection = new SqliteConnection(connectionString))
        {
            connection.Open();

            using (var command = connection.CreateCommand())
            {
                command.CommandText = "SELECT * FROM sixteenth_note_active JOIN sixteenth_note_pattern ON sixteenth_note_active.sixteenth_note_id=sixteenth_note_pattern.sixteenth_note_id JOIN pattern ON sixteenth_note_pattern.pattern_id=pattern.pattern_id WHERE pattern.pattern_name = '" + pattern_name + "';";

                using (IDataReader reader = command.ExecuteReader())
                {
                    while (reader.Read())
                    {
                        // userList.text += reader["position"];
                        Debug.Log("READER POSITION NOTE = " + reader.GetInt32(reader.GetOrdinal("position")));
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
                        // ExecuteEvents.Execute(synthManager16th.sequencerPositions[(int)reader["position"]], pointer, ExecuteEvents.OnPointerClick);
                    }
                }
            }
            connection.Close();
        }
    }

    public void getAllPatterns()
    {
        Debug.Log("Getting pattern.");
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
            connection.Close();
        }
    }

    public void updatePatternName() {
        this.pattern_name = patternNameInputField.text;
        setPatternByName();
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

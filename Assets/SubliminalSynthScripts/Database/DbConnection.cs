using System;
using System.Collections.Generic;
using System.Data;
using Mono.Data.Sqlite;
using TMPro;
using UnityEngine;
using Application = UnityEngine.Application;
using AudioHelm;
using UnityEngine.Serialization;

public class DbConnection : MonoBehaviour
{
    private string database_name = "synth_database";

    private string connectionString;
    public TMP_Text logList;

    public TMP_Text allPatternNamesAndPosition;
    public SynthManager16th synthManager16th;
    public SynthManager8th synthManager8th;
    public string pattern_name;
    public long pattern_id;
    public TMP_InputField patternNameInputField;
    public List<Note> noteList;
    public List<Note> noteList8th;

    [FormerlySerializedAs("patternDropDown")]
    public TMP_Dropdown seqPatternDropDown;

    private List<string> drums = new List<string>
        { "kick", "snare", "fx_1", "fx_2", "fx_3", "fx_4", "fx_5", "fx_6", "fx_7", "fx_8", "fx_9", "fx_10" };

    public List<GameObject> drumObjects;
    SqliteConnection connection;

    public class DrumRow
    {
        public string drumName { get; set; }
        public SamplerPosition[] samplerPositions { get; set; }
    }

    public List<DrumRow> drumRows;

    void Awake()
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
        });
        connectionString = "URI=file:" + Application.persistentDataPath + "/" + database_name +
                           ";MultipleActiveResultSets=true;";
        Debug.Log("CONNECTION STRING = " + connectionString);
        connection = new SqliteConnection(connectionString);
        connection.Open();
        CreateDB();
        PopulateSeqPatternDropdown();
    }

    void OnDestroy()
    {
        connection.Close();
    }

    public void CreateDB()
    {
        using (var command = connection.CreateCommand())
        {
            command.CommandText =
                "CREATE TABLE IF NOT EXISTS pattern (pattern_id INTEGER PRIMARY KEY, pattern_name TEXT NOT NULL); " +
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
            command.ExecuteNonQuery();
        }
    }

    public void PrintSeqPatternsSavedInDb()
    {
        using (var command = connection.CreateCommand())
        {
            command.CommandText = "SELECT * FROM pattern;";

            using (IDataReader reader = command.ExecuteReader())
            {
                while (reader.Read())
                {
                    Debug.Log("PATTERN NAME = " + reader["pattern_name"]);
                    print("Database Debug - PATTERN NAME = " + reader["pattern_name"]);
                }

                reader.Close();
            }
        }
    }

    public void PopulateSeqPatternDropdown()
    {
        seqPatternDropDown.ClearOptions();
        using (var command = connection.CreateCommand())
        {
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

                seqPatternDropDown.AddOptions(options);
                reader.Close();
            }
        }

        seqPatternDropDown.RefreshShownValue();
    }

    public void SaveDrumPattern(string drumPatternName)
    {
        using (var command = connection.CreateCommand())
        {
            command.CommandText = "BEGIN TRANSACTION; INSERT INTO drum_pattern (drum_pattern_name) VALUES (\"" +
                                  drumPatternName + "\"); SELECT last_insert_rowid(); COMMIT TRANSACTION;";

            pattern_id = (long)command.ExecuteScalar();
        }

        foreach (DrumRow drumRow in drumRows)
        {
            long drum_id;

            using (var command = connection.CreateCommand())
            {
                command.CommandText = "BEGIN TRANSACTION; SELECT drum_id FROM drum WHERE drum.drum_name= \"" +
                                      drumRow.drumName + "\"; COMMIT TRANSACTION;";
                drum_id = (long)command.ExecuteScalar();
            }

            using (var command = connection.CreateCommand())
            {
                command.CommandText =
                    "BEGIN TRANSACTION; INSERT OR IGNORE INTO drum_row (drum_pattern_id, drum_id, row_1, row_2, row_3, row_4, row_5, row_6, row_7, row_8, row_9, row_10, row_11, row_12, row_13, row_14, row_15, row_16)" +
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
                try
                {
                    command.ExecuteNonQuery();
                }
                catch (Exception ex)
                {
                    Debug.Log("Exception: " + ex);
                    logList.text += ("Exception: " + ex);
                }
            }
        }
    }

    public void SaveSeqPattern()
    {
        Debug.Log("Saving pattern.");
        pattern_name = patternNameInputField.text;
        using (var command = connection.CreateCommand())
        {
            command.CommandText = "BEGIN TRANSACTION; INSERT INTO pattern (pattern_name) VALUES (\"" + pattern_name +
                                  "\"); SELECT last_insert_rowid(); COMMIT TRANSACTION;";

            pattern_id = (long)command.ExecuteScalar();
        }

        Debug.Log("PATTERN ID = " + pattern_id);

        foreach (SequencerPosition sequencerPosition in synthManager16th.sequencerPositions)
        {
            if (sequencerPosition.noteActive)
            {
                using (var command = connection.CreateCommand())
                {
                    command.CommandText =
                        "BEGIN TRANSACTION; INSERT INTO sixteenth_note (pattern_id, position, active, note, velocity) VALUES (\"" +
                        pattern_id + "\", " + sequencerPosition.positionObjectNumber + ", 1, \"" +
                        sequencerPosition.note.note + "\", \"" + sequencerPosition.note.velocity +
                        "\"); COMMIT TRANSACTION;";
                    Debug.Log("COMMAND TEXT = " + command.CommandText);
                    try
                    {
                        command.ExecuteNonQuery();
                    }
                    catch (Exception ex)
                    {
                        Debug.Log("Exception: " + ex);
                        logList.text += ("Exception: " + ex);
                    }
                }
            }
        }

        foreach (SequencerPosition8th sequencerPosition in synthManager8th.sequencerPositions)
        {
            if (sequencerPosition.noteActive == true)
            {
                using (var command = connection.CreateCommand())
                {
                    command.CommandText =
                        "BEGIN TRANSACTION; INSERT INTO eighth_note (pattern_id, position, active, note, velocity) VALUES (\"" +
                        pattern_id + "\", " + sequencerPosition.positionObjectNumber + ", 1, \"" +
                        sequencerPosition.note.note + "\", \"" + sequencerPosition.note.velocity +
                        "\"); COMMIT TRANSACTION;";
                    Debug.Log("COMMAND TEXT = " + command.CommandText);
                    try
                    {
                        command.ExecuteNonQuery();
                    }
                    catch (Exception ex)
                    {
                        Debug.Log("Exception: " + ex);
                        logList.text += ("Exception: " + ex);
                    }
                }
            }
        }

        PopulateSeqPatternDropdown();
    }


    public void LoadDrumPattern(string drumPatternName)
    {
        int count = 0;
        foreach (DrumRow drumRow in drumRows)
        {
            long drum_id;

            using (var command = connection.CreateCommand())
            {
                Debug.Log("DRUM NAME  = " + drumRow.drumName);
                command.CommandText = "BEGIN TRANSACTION; SELECT drum_id FROM drum WHERE drum.drum_name= \"" +
                                      drumRow.drumName + "\"; COMMIT TRANSACTION;";
                drum_id = (long)command.ExecuteScalar();
                Debug.Log("DRUM ID  = " + drum_id);
            }

            int note;
            using (var command = connection.CreateCommand())
            {
                command.CommandText = "BEGIN TRANSACTION; SELECT note FROM drum WHERE drum.drum_name= \"" +
                                      drumRow.drumName + "\"; COMMIT TRANSACTION;";
                long note_temp = (long)command.ExecuteScalar();
                note = Convert.ToInt32(note_temp);
                Debug.Log("DRUM NOTE  = " + note);
            }

            using (var command = connection.CreateCommand())
            {
                Debug.Log("Preparing query to load drum " + drumRow.drumName);
                command.CommandText =
                    "SELECT * FROM drum_row JOIN drum_pattern ON drum_row.drum_pattern_id=drum_pattern.drum_pattern_id JOIN drum ON drum_row.drum_id=drum.drum_id WHERE drum_pattern.drum_pattern_name=\'" +
                    drumPatternName + "\' AND drum.drum_id=" + drum_id + ";";
                Debug.Log("COMMAND TEXT = " + command.CommandText);

                try
                {
                    using (IDataReader reader = command.ExecuteReader())
                    {
                        while (reader.Read())
                        {
                            Debug.Log("DRUM PATTERN NAME = " + reader["drum_pattern_name"]);
                            int position = 0;
                            drumRows[count].samplerPositions[position].note = note;
                            drumRows[count].samplerPositions[position].active =
                                Convert.ToBoolean(reader.GetValue(reader.GetOrdinal("row_1")));
                            position++;
                            drumRows[count].samplerPositions[position].note = note;
                            drumRows[count].samplerPositions[position].active =
                                Convert.ToBoolean(reader.GetValue(reader.GetOrdinal("row_2")));
                            position++;

                            drumRows[count].samplerPositions[position].note = note;
                            drumRows[count].samplerPositions[position].active =
                                Convert.ToBoolean(reader.GetValue(reader.GetOrdinal("row_3")));

                            position++;

                            drumRows[count].samplerPositions[position].note = note;
                            drumRows[count].samplerPositions[position].active =
                                Convert.ToBoolean(reader.GetValue(reader.GetOrdinal("row_4")));

                            position++;

                            drumRows[count].samplerPositions[position].note = note;
                            drumRows[count].samplerPositions[position].active =
                                Convert.ToBoolean(reader.GetValue(reader.GetOrdinal("row_5")));

                            position++;

                            drumRows[count].samplerPositions[position].note = note;
                            drumRows[count].samplerPositions[position].active =
                                Convert.ToBoolean(reader.GetValue(reader.GetOrdinal("row_6")));

                            position++;

                            drumRows[count].samplerPositions[position].note = note;
                            drumRows[count].samplerPositions[position].active =
                                Convert.ToBoolean(reader.GetValue(reader.GetOrdinal("row_7")));

                            position++;

                            drumRows[count].samplerPositions[position].note = note;
                            drumRows[count].samplerPositions[position].active =
                                Convert.ToBoolean(reader.GetValue(reader.GetOrdinal("row_8")));

                            position++;

                            drumRows[count].samplerPositions[position].note = note;
                            drumRows[count].samplerPositions[position].active =
                                Convert.ToBoolean(reader.GetValue(reader.GetOrdinal("row_9")));

                            position++;

                            drumRows[count].samplerPositions[position].note = note;
                            drumRows[count].samplerPositions[position].active =
                                Convert.ToBoolean(reader.GetValue(reader.GetOrdinal("row_10")));

                            position++;

                            drumRows[count].samplerPositions[position].note = note;
                            drumRows[count].samplerPositions[position].active =
                                Convert.ToBoolean(reader.GetValue(reader.GetOrdinal("row_11")));

                            position++;

                            drumRows[count].samplerPositions[position].note = note;
                            drumRows[count].samplerPositions[position].active =
                                Convert.ToBoolean(reader.GetValue(reader.GetOrdinal("row_12")));

                            position++;

                            drumRows[count].samplerPositions[position].note = note;
                            drumRows[count].samplerPositions[position].active =
                                Convert.ToBoolean(reader.GetValue(reader.GetOrdinal("row_13")));

                            position++;

                            drumRows[count].samplerPositions[position].note = note;
                            drumRows[count].samplerPositions[position].active =
                                Convert.ToBoolean(reader.GetValue(reader.GetOrdinal("row_14")));

                            position++;

                            drumRows[count].samplerPositions[position].note = note;
                            drumRows[count].samplerPositions[position].active =
                                Convert.ToBoolean(reader.GetValue(reader.GetOrdinal("row_15")));

                            position++;

                            drumRows[count].samplerPositions[position].note = note;
                            drumRows[count].samplerPositions[position].active =
                                Convert.ToBoolean(reader.GetValue(reader.GetOrdinal("row_16")));


                            drumRows[count].drumName = drumRow.drumName;

                            Debug.Log("DRUM ROW LIST FROM DB SIZE " + drumRows.Count);
                            Debug.Log("DRUM ROW LIST FROM DB NAME " + drumRows[count].drumName);
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
    }

    public void LoadSeqPattern()
    {
        Debug.Log("Clearing 16th pattern.");
        synthManager16th.sequencer.AllNotesOff();
        synthManager16th.sequencerPositions.ForEach(position =>
        {
            position.noteActive = false;
            position.renderer.material.color = Color.white;
            synthManager16th.sequencer.RemoveNote(position.note);
        });
        Debug.Log("Clearing 8th pattern.");
        synthManager8th.sequencer.AllNotesOff();
        synthManager8th.sequencerPositions.ForEach(position =>
        {
            position.noteActive = false;
            position.renderer.material.color = Color.white;
            synthManager8th.sequencer.RemoveNote(position.note);
        });
        Debug.Log("Setting pattern.");

        pattern_name = seqPatternDropDown.options[seqPatternDropDown.value].text;
        Debug.Log("ITEM TEXT = " + seqPatternDropDown.options[seqPatternDropDown.value].text);
        Debug.Log("PATTERN NAME = " + pattern_name);

        using (var command = connection.CreateCommand())
        {
            Debug.Log("Preparing query to select active sixteenth notes.");
            command.CommandText =
                "SELECT * FROM sixteenth_note JOIN pattern ON sixteenth_note.pattern_id=pattern.pattern_id WHERE pattern.pattern_name = \"" +
                pattern_name + "\" AND sixteenth_note.active = 1;";

            try
            {
                using (IDataReader reader = command.ExecuteReader())
                {
                    while (reader.Read())
                    {
                        // TODO : FIND OUT IF THERE ARE ANY SIXTEENTH NOTE PATTERN IDs in PHONE DB BY PRINTING LINE BELOW
                        Debug.Log("SIXTEENTH NOTE PATTERN ID = " + reader["sixteenth_note_id"]);
                        Debug.Log("READER POSITION NOTE = " + reader.GetInt32(reader.GetOrdinal("position")));
                        Debug.Log("READ OBJ = " + reader.ToString());
                        Note note = new Note();
                        note.note = reader.GetInt32(reader.GetOrdinal("note"));
                        ;
                        note.start = reader.GetInt32(reader.GetOrdinal("position"));
                        note.end = reader.GetInt32(reader.GetOrdinal("position")) + 1;
                        note.velocity = reader.GetFloat(reader.GetOrdinal("velocity"));

                        synthManager16th.AddNote(note);
                        noteList.Add(note);
                        int pos = reader.GetInt32(reader.GetOrdinal("position"));
                        synthManager16th.sequencerPositions[reader.GetInt32(reader.GetOrdinal("position"))].note = note;
                        synthManager16th.sequencerPositions[reader.GetInt32(reader.GetOrdinal("position"))].noteActive =
                            true;
                        synthManager16th.sequencerPositions[reader.GetInt32(reader.GetOrdinal("position"))].renderer
                            .material.color = Color.cyan;
                    }
                }
            }
            catch (Exception ex)
            {
                Debug.Log("EXCEPTION FROM SIXTEENTH NOTE PATTERN QUERY. EX: " + ex);
            }
        }

        using (var command = connection.CreateCommand())
        {
            Debug.Log("Preparing query to select active eighth notes.");
            command.CommandText =
                "SELECT * FROM eighth_note JOIN pattern ON eighth_note.pattern_id=pattern.pattern_id WHERE pattern.pattern_name = \"" +
                pattern_name + "\" AND eighth_note.active = 1;";

            try
            {
                using (IDataReader reader = command.ExecuteReader())
                {
                    while (reader.Read())
                    {
                        // TODO : FIND OUT IF THERE ARE ANY SIXTEENTH NOTE PATTERN IDs in PHONE DB BY PRINTING LINE BELOW
                        Debug.Log("EIGHTH NOTE PATTERN ID = " + reader["eighth_note_id"]);
                        Debug.Log("EIGHTH READER POSITION NOTE = " + reader.GetInt32(reader.GetOrdinal("position")));
                        Debug.Log("READ OBJ = " + reader.ToString());
                        Note note = new Note();
                        note.note = reader.GetInt32(reader.GetOrdinal("note"));
                        ;
                        note.start = reader.GetInt32(reader.GetOrdinal("position"));
                        note.end = reader.GetInt32(reader.GetOrdinal("position")) + 1;
                        note.velocity = reader.GetFloat(reader.GetOrdinal("velocity"));

                        synthManager8th.AddNote(note);
                        noteList8th.Add(note);
                        int pos = reader.GetInt32(reader.GetOrdinal("position"));
                        Debug.Log("POSITION BEFORE DIVISION = " + pos);
                        pos = pos / 2;
                        Debug.Log("POSITION DIVIDED BY TWO = " + pos);
                        synthManager8th.sequencerPositions[pos].note = note;
                        synthManager8th.sequencerPositions[pos].noteActive = true;
                        synthManager8th.sequencerPositions[pos].renderer.material.color = Color.cyan;
                    }
                }
            }
            catch (Exception ex)
            {
                Debug.Log("EXCEPTION FROM SIXTEENTH NOTE PATTERN QUERY. EX: " + ex);
            }
        }
    }

    public void clearPattern()
    {
        Debug.Log("Clearing pattern.");
        synthManager16th.sequencer.AllNotesOff();
        synthManager16th.sequencerPositions.ForEach(position =>
        {
            position.noteActive = false;
            position.renderer.material.color = Color.white;
        });
        noteList.ForEach(note => { synthManager16th.sequencer.RemoveNote(note); });
        noteList.Clear();
    }

    public static Int32 GetLastInsertID(SqliteConnection AConnection)
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

    public List<TMP_Dropdown.OptionData> getSamplerPatternOptions()
    {
        List<TMP_Dropdown.OptionData> optionList = new List<TMP_Dropdown.OptionData>();

        using (var command = connection.CreateCommand())
        {
            command.CommandText = "SELECT drum_pattern_name FROM drum_pattern;";

            using (IDataReader reader = command.ExecuteReader())
            {
                while (reader.Read())
                {
                    TMP_Dropdown.OptionData Option = new TMP_Dropdown.OptionData();
                    Option.text = reader.GetString(reader.GetOrdinal("drum_pattern_name"));
                    optionList.Add(Option);
                }
            }
        }

        return optionList;
    }
}

using System.Collections;
using System.Collections.Generic;
using AudioHelm;
using UnityEngine;

public interface Position 
{
    public delegate void NoteActivated(Note note, bool noteActive);
    public event NoteActivated OnNote;

    public delegate void NoteDeactivated(Note note, bool noteActive);
    public event NoteActivated OffNote;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

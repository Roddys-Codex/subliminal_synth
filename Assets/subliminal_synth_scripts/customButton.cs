using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class customButton : Button
{
    private ButtonClickedEvent m_OnClick = new ButtonClickedEvent();

    public ButtonClickedEvent onClick
    {
        get { return m_OnClick; }
        set { m_OnClick = value; }
    }
}

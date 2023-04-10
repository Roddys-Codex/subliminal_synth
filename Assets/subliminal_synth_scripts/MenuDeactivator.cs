using System.Collections.Generic;
using UnityEngine;
using Toggle = UnityEngine.UI.Toggle;

public class MenuDeactivator : MonoBehaviour
{
    public GameObject selectedMenu;
    public GameObject selectedButton;
    public List<GameObject> allMenus;
    public List<GameObject> allButtons;
    public MeshRenderer defaultColour;
    public Toggle m_Toggle;
    
    public void DeactivateAllOtherMenus()
    {
        allMenus.ForEach(menu => {
            if ((menu != selectedMenu) && (menu.activeSelf == true)) {
                menu.SetActive(false);
            }
        });

        allButtons.ForEach(button =>
        {
            MeshRenderer mesh = button.GetComponent<MeshRenderer>();
            Toggle toggle = button.GetComponent<Toggle>();
            mesh.material.color = Color.white;
            toggle.SetIsOnWithoutNotify(false);
        });
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.UIElements;
using Toggle = UnityEngine.UI.Toggle;

public class AllOtherMenusOff : MonoBehaviour
{
    public GameObject selectedMenu;
    public GameObject selectedButton;
    public List<GameObject> allMenus;
    public List<GameObject> allButtons;
    public MeshRenderer defaultColour;
    public Toggle m_Toggle;

    // Start is called before the first frame update
    void Start()
    {
        //Add listener for when the state of the Toggle changes, to take action
        //m_Toggle.onValueChanged.AddListener(delegate {
        //    deactivateAllOtherMenus();
        //});
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void deactivateAllOtherMenus()
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

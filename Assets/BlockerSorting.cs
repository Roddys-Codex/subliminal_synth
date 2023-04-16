using UnityEngine;

public class BlockerSorting : MonoBehaviour
{
    void Start()
    {
        // Get the ID of the custom sorting layer
        int blockerLayerID = SortingLayer.NameToID("Blocker");

        // Set the sorting layer of this object to the custom layer
        Renderer renderer = GetComponent<Renderer>();
        renderer.sortingLayerID = blockerLayerID;
    }
}
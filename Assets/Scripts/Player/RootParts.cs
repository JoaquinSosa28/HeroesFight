using UnityEngine;

[System.Serializable()]
public class DictionaryNeededBodyPartAndTransform : SerializableDictionaryBase<NeededBodyParts, Transform> { }

public class RootParts : MonoBehaviour {
    public DictionaryNeededBodyPartAndTransform neededBodyParts = new DictionaryNeededBodyPartAndTransform();
}

//If I ever need to use a body part put it here
public enum NeededBodyParts {
    HEAD,
    LEFT_HAND,
    RIGHT_HAND,
    CHEST,
    LEFT_HAND_DIRECTION,
    RIGHT_HAND_DIRECTION,
    LEFT_LEG_DIRECTION,
    RIGHT_LEG_DIRECTION
}

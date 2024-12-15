using UnityEngine;

public class AmmoWidget : MonoBehaviour {
    public TMPro.TMP_Text ammoText;

    public void Refresh(int ammoCount, int maxAmmo) {
        ammoText.text = ammoCount.ToString() + "/" + maxAmmo;
    }

    public void ToggleUI(bool setActive) {
        gameObject.SetActive(setActive);
    }
}

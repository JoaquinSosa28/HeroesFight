using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class SettingsMenu : MonoBehaviour {

    private const string GRAPHICS_KEY = "graphics";

    Resolution[] resolutions;

    [SerializeField] 
    private TMP_Dropdown resolutionDropdown;
    
    [SerializeField] 
    private TMP_Dropdown graphicsDropdown;

    private void Start() {
        resolutions = Screen.resolutions;

        resolutionDropdown.ClearOptions();

        List<string> options = new List<string>();
        int currentResolutionIndex = 0;

        for(int i = 0; i < resolutions.Length; i++) {
            string option = resolutions[i].width + " x " + resolutions[i].height;
            options.Add(option);

            if(resolutions[i].width == Screen.width &&
                resolutions[i].height == Screen.height) {
                currentResolutionIndex = i;
            }
        }

        resolutionDropdown.AddOptions(options);
        resolutionDropdown.value = currentResolutionIndex;
        resolutionDropdown.RefreshShownValue();

        int qualityIndex = PlayerPrefs.GetInt(GRAPHICS_KEY, -5);

        if (qualityIndex == -5) {
            graphicsDropdown.value = QualitySettings.GetQualityLevel();
            graphicsDropdown.RefreshShownValue();
        } else {
            graphicsDropdown.value = qualityIndex;
            graphicsDropdown.RefreshShownValue();
            SetQuality(qualityIndex);
        }

        print(QualitySettings.GetQualityLevel());
    }

    public void SetQuality(int qualityIndex) {
        QualitySettings.SetQualityLevel(qualityIndex);
        PlayerPrefs.SetInt(GRAPHICS_KEY, qualityIndex);
    }

    public void SetFullscreen(bool isFullscreen) {
        Screen.fullScreen = isFullscreen;
    }

    public void SetResolution(int resolutionIndex) {
        Resolution resolution = resolutions[resolutionIndex];

        Screen.SetResolution(resolution.width, resolution.height, Screen.fullScreen);
    }
}

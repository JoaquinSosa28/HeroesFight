using Cinemachine;
using UnityEngine;

public class WeaponRecoil : MonoBehaviour {
    [HideInInspector] public CharacterAiming characterAiming;
    [HideInInspector] public CinemachineImpulseSource cameraShake;
    [HideInInspector] public Animator rigController;
    [HideInInspector] public CharacterStateManager csm;

    public float NORMAL_RECOIL_MULTIPLIER = 1.0f;
    public float AIMING_RECOIL_MULTIPLIER = 0.4f;

    public float recoilMultiplier;
    public Vector2[] recoilPattern;

    public float duration;

    float verticalRecoil;
    float horizontalRecoil;
    float time;
    int index;
    string weaponName;

    WeaponManager activeWeapon;

    public void setupRecoil(WeaponManager activeWeapon, CharacterStateManager csm, 
                            CharacterAiming characterAiming, Animator rigController) {
        this.activeWeapon = activeWeapon;
        this.csm = csm;
        this.characterAiming = characterAiming;
        this.rigController = rigController;

        if (activeWeapon.hasAuthority)
            cameraShake = GetComponent<CinemachineImpulseSource>();
    }

    public void ResetRecoil() {
        index = 0;
    }

    int NextIndex(int index) {
        return (index + 1) % recoilPattern.Length;
    }

    public void GenerateRecoil(string weaponName) {
        if (!activeWeapon.hasAuthority) return;
        time = duration;

        cameraShake.GenerateImpulse(Camera.main.transform.forward);

        horizontalRecoil = recoilPattern[index].x;
        verticalRecoil = recoilPattern[index].y;

        index = NextIndex(index);
        this.weaponName = weaponName;
        rigController.Play("weapon_recoil_" + weaponName, 1, 0.0f);
    }

    // Update is called once per frame
    void Update() {
        if (!activeWeapon.hasAuthority) return;

        recoilMultiplier = csm.isAiming ? AIMING_RECOIL_MULTIPLIER : NORMAL_RECOIL_MULTIPLIER;

        if (time > 0)
        {
            characterAiming.yAxis.Value -= ((verticalRecoil * Time.deltaTime) / duration) * recoilMultiplier;
            characterAiming.xAxis.Value -= ((horizontalRecoil * Time.deltaTime) / duration) * recoilMultiplier;
            time -= Time.deltaTime;
        }

    }
}

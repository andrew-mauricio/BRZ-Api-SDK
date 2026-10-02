// ==========================================================================
//  APrimalWeaponGPS — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
//
//  BRZ Api — MIT, Copyright (c) 2026 andrew-mauricio.
//
//  Uma casca sobre `void*`: sem vtable, sem membro, nada do nosso codigo dentro
//  do seu DLL alem de `inline`. Voce compila com o compilador que quiser.
//
//  O CAMPO e' resolvido pelo NOME, em tempo de execucao, pela reflexao viva da
//  build que esta' rodando — e nao por offset cravado aqui, que apodreceria na
//  proxima atualizacao do jogo sem ninguem notar.
//
//  A FUNCAO vem da tabela de simbolos desta build. Simbolo que so' existe por
//  inferencia de posicao e' RECUSADO com o nome no log, em vez de chutado: um
//  endereco errado nao devolve valor esquisito, ele derruba o servidor ou faz
//  outra coisa com sucesso.
// ==========================================================================
#ifndef BRZ_SDK_JOGO_APRIMALWEAPONGPS_H
#define BRZ_SDK_JOGO_APRIMALWEAPONGPS_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FName;
struct UAnimMontage;
struct UMaterialInstanceDynamic;
struct USkeletalMeshComponent;
struct UStaticMesh;
struct UStaticMeshComponent;

#include "AShooterWeapon_Melee.h"

struct APrimalWeaponGPS : public AShooterWeapon_Melee
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalWeaponGPS"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGPS.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNot
    // endereco: casamento de bytes com a build de referencia
    void AnimNotifyCustomEvent(unsigned long long a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, unsigned long long, void*, void*, void*>(this, "APrimalWeaponGPS.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGPS.AttachOtherMeshes()
    // endereco: casamento de bytes com a build de referencia
    void AttachOtherMeshes() const
    {
        NativeCall<void>(this, "APrimalWeaponGPS.AttachOtherMeshes()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGPS.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "APrimalWeaponGPS.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGPS.DetachOtherMeshes()
    // endereco: casamento de bytes com a build de referencia
    void DetachOtherMeshes() const
    {
        NativeCall<void>(this, "APrimalWeaponGPS.DetachOtherMeshes()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGPS.DrawHUD(AShooterHUD*)
    // endereco: casamento de bytes com a build de referencia
    void DrawHUD(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalWeaponGPS.DrawHUD(AShooterHUD*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGPS.HideGPS1P()
    // endereco: casamento de bytes com a build de referencia
    void HideGPS1P() const
    {
        NativeCall<void>(this, "APrimalWeaponGPS.HideGPS1P()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWeaponGPS.IsShowingGPS()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro IsShowingGPS() const
    {
        return NativeCall<void*>(this, "APrimalWeaponGPS.IsShowingGPS()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWeaponGPS.IsShowingMap()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro IsShowingMap() const
    {
        return NativeCall<void*>(this, "APrimalWeaponGPS.IsShowingMap()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGPS.OnEquip()
    // endereco: casamento de bytes com a build de referencia
    void OnEquip() const
    {
        NativeCall<void>(this, "APrimalWeaponGPS.OnEquip()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGPS.OnEquipFinished()
    // endereco: casamento de bytes com a build de referencia
    void OnEquipFinished() const
    {
        NativeCall<void>(this, "APrimalWeaponGPS.OnEquipFinished()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGPS.PlayUnequipAnimation()
    // endereco: casamento de bytes com a build de referencia
    void PlayUnequipAnimation() const
    {
        NativeCall<void>(this, "APrimalWeaponGPS.PlayUnequipAnimation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGPS.RefreshMapMarkers()
    // endereco: casamento de bytes com a build de referencia
    void RefreshMapMarkers() const
    {
        NativeCall<void>(this, "APrimalWeaponGPS.RefreshMapMarkers()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWeaponGPS.RefreshUseCompass()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void RefreshUseCompass() const
    {
        NativeCall<void>(this, "APrimalWeaponGPS.RefreshUseCompass()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGPS.RemoveMarkersFromView()
    // endereco: casamento de bytes com a build de referencia
    void RemoveMarkersFromView() const
    {
        NativeCall<void>(this, "APrimalWeaponGPS.RemoveMarkersFromView()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWeaponGPS.SelectMeleeAttackAnim(int)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SelectMeleeAttackAnim(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalWeaponGPS.SelectMeleeAttackAnim(int)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalWeaponGPS.ServerSetUseCompassInsteadOfGPS(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerSetUseCompassInsteadOfGPS(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalWeaponGPS.ServerSetUseCompassInsteadOfGPS(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGPS.ServerSetUseCompassInsteadOfGPS_Implementation(bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void ServerSetUseCompassInsteadOfGPS_Implementation(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalWeaponGPS.ServerSetUseCompassInsteadOfGPS_Implementation(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWeaponGPS.ServerShowNone()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerShowNone() const
    {
        NativeCall<void>(this, "APrimalWeaponGPS.ServerShowNone()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGPS.SetAndShowCompass()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void SetAndShowCompass() const
    {
        NativeCall<void>(this, "APrimalWeaponGPS.SetAndShowCompass()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGPS.SetAndShowGPS()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void SetAndShowGPS() const
    {
        NativeCall<void>(this, "APrimalWeaponGPS.SetAndShowGPS()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGPS.SetGPSMeshHidden()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void SetGPSMeshHidden() const
    {
        NativeCall<void>(this, "APrimalWeaponGPS.SetGPSMeshHidden()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGPS.SetMapMeshHidden()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void SetMapMeshHidden() const
    {
        NativeCall<void>(this, "APrimalWeaponGPS.SetMapMeshHidden()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGPS.SetUseCompass(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetUseCompass(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalWeaponGPS.SetUseCompass(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGPS.ShowBoth()
    // endereco: casamento de bytes com a build de referencia
    void ShowBoth() const
    {
        NativeCall<void>(this, "APrimalWeaponGPS.ShowBoth()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGPS.ShowGPSOnly()
    // endereco: casamento de bytes com a build de referencia
    void ShowGPSOnly() const
    {
        NativeCall<void>(this, "APrimalWeaponGPS.ShowGPSOnly()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGPS.ShowMapOnly()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void ShowMapOnly() const
    {
        NativeCall<void>(this, "APrimalWeaponGPS.ShowMapOnly()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGPS.ShowNone()
    // endereco: casamento de bytes com a build de referencia
    void ShowNone() const
    {
        NativeCall<void>(this, "APrimalWeaponGPS.ShowNone()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGPS.StartFire(bool)
    // classe: a funcao mora em AShooterWeapon, e APrimalWeaponGPS herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void StartFire(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterWeapon.StartFire(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGPS.StartReload(bool)
    // classe: a funcao mora em AShooterWeapon_Melee, e APrimalWeaponGPS herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void StartReload(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterWeapon_Melee.StartReload(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGPS.StartSecondaryAction()
    // classe: a funcao mora em AShooterWeapon_Melee, e APrimalWeaponGPS herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void StartSecondaryAction() const
    {
        NativeCall<void>(this, "AShooterWeapon_Melee.StartSecondaryAction()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGPS.StopFire()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void StopFire() const
    {
        NativeCall<void>(this, "APrimalWeaponGPS.StopFire()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGPS.StopSecondaryAction()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void StopSecondaryAction() const
    {
        NativeCall<void>(this, "APrimalWeaponGPS.StopSecondaryAction()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGPS.SwitchBetweenCompassAndGPS(bool)
    // endereco: casamento de bytes com a build de referencia
    void SwitchBetweenCompassAndGPS(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalWeaponGPS.SwitchBetweenCompassAndGPS(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGPS.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "APrimalWeaponGPS.Tick(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGPS.UpdateCurrentMarker()
    // endereco: casamento de bytes com a build de referencia
    void UpdateCurrentMarker() const
    {
        NativeCall<void>(this, "APrimalWeaponGPS.UpdateCurrentMarker()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGPS.UpdateDinoMapMarkers()
    // endereco: casamento de bytes com a build de referencia
    void UpdateDinoMapMarkers() const
    {
        NativeCall<void>(this, "APrimalWeaponGPS.UpdateDinoMapMarkers()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGPS.UpdateFirstPersonMeshes(bool)
    // endereco: casamento de bytes com a build de referencia
    void UpdateFirstPersonMeshes(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalWeaponGPS.UpdateFirstPersonMeshes(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGPS.UpdateMapTextureParameters()
    // endereco: casamento de bytes com a build de referencia
    void UpdateMapTextureParameters() const
    {
        NativeCall<void>(this, "APrimalWeaponGPS.UpdateMapTextureParameters()");
    }

    UStaticMesh*& AssetSM_BalloonMarkerMeshField() const
    { return *GetNativePointerField<UStaticMesh**>(this, "APrimalWeaponGPS.AssetSM_BalloonMarkerMesh"); }
    UStaticMesh*& AssetSM_MarkerMeshField() const
    { return *GetNativePointerField<UStaticMesh**>(this, "APrimalWeaponGPS.AssetSM_MarkerMesh"); }
    UStaticMesh*& AssetSM_PlayerMarkerMeshField() const
    { return *GetNativePointerField<UStaticMesh**>(this, "APrimalWeaponGPS.AssetSM_PlayerMarkerMesh"); }
    FName& CompassAttachPoint1PField() const
    { return *GetNativePointerField<FName*>(this, "APrimalWeaponGPS.CompassAttachPoint1P"); }
    FName& CompassCenterParameterNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalWeaponGPS.CompassCenterParameterName"); }
    float& CompassInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.CompassInterpSpeed"); }
    USkeletalMeshComponent*& CompassMesh1PField() const
    { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalWeaponGPS.CompassMesh1P"); }
    USkeletalMeshComponent*& CompassMesh3PField() const
    { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalWeaponGPS.CompassMesh3P"); }
    float& CompassNorthAngleField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.CompassNorthAngle"); }
    BrzCampoPonteiro CurrentCompassAngleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponGPS.CurrentCompassAngle")); }
    float& CurrentSwingAngleField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.CurrentSwingAngle"); }
    float& CurrentSwingFactorField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.CurrentSwingFactor"); }
    float& CurrentSwingTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.CurrentSwingTime"); }
    FName& DigitParameterNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalWeaponGPS.DigitParameterName"); }
    BrzCampoPonteiro DisplayCompassAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponGPS.DisplayCompassAnim")); }
    BrzCampoPonteiro DisplayGPSAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponGPS.DisplayGPSAnim")); }
    BrzCampoPonteiro DisplayMapAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponGPS.DisplayMapAnim")); }
    FName& FogOfWarTextureParameterNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalWeaponGPS.FogOfWarTextureParameterName"); }
    FName& GPSBoneName1PField() const
    { return *GetNativePointerField<FName*>(this, "APrimalWeaponGPS.GPSBoneName1P"); }
    int& GPSCompassMaterialIndexField() const
    { return *GetNativePointerField<int*>(this, "APrimalWeaponGPS.GPSCompassMaterialIndex"); }
    UMaterialInstanceDynamic*& GPSCompassMaterialInstanceField() const
    { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "APrimalWeaponGPS.GPSCompassMaterialInstance"); }
    BrzCampoPonteiro ItemBalloonLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponGPS.ItemBalloonLocation")); }
    UStaticMeshComponent*& ItemBalloonMarkerComponentField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalWeaponGPS.ItemBalloonMarkerComponent"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PlayerLocationMArkerComponent` +8 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x11E0; confianca alta)
    void*& LastPlayerMarkerLocationField() const
    { return BrzCampoAncorado<void*>(this, "PlayerLocationMArkerComponent", 8); }
    UMaterialInstanceDynamic*& LatitudeDigit1_MIField() const
    { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "APrimalWeaponGPS.LatitudeDigit1_MI"); }
    UMaterialInstanceDynamic*& LatitudeDigit2_MIField() const
    { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "APrimalWeaponGPS.LatitudeDigit2_MI"); }
    UMaterialInstanceDynamic*& LatitudeDigit3_MIField() const
    { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "APrimalWeaponGPS.LatitudeDigit3_MI"); }
    int& LatitudeMaterialIndex1Field() const
    { return *GetNativePointerField<int*>(this, "APrimalWeaponGPS.LatitudeMaterialIndex1"); }
    int& LatitudeMaterialIndex2Field() const
    { return *GetNativePointerField<int*>(this, "APrimalWeaponGPS.LatitudeMaterialIndex2"); }
    int& LatitudeMaterialIndex3Field() const
    { return *GetNativePointerField<int*>(this, "APrimalWeaponGPS.LatitudeMaterialIndex3"); }
    float& LatitudeOriginField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.LatitudeOrigin"); }
    float& LatitudeScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.LatitudeScale"); }
    UMaterialInstanceDynamic*& LongitudeDigit1_MIField() const
    { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "APrimalWeaponGPS.LongitudeDigit1_MI"); }
    UMaterialInstanceDynamic*& LongitudeDigit2_MIField() const
    { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "APrimalWeaponGPS.LongitudeDigit2_MI"); }
    UMaterialInstanceDynamic*& LongitudeDigit3_MIField() const
    { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "APrimalWeaponGPS.LongitudeDigit3_MI"); }
    int& LongitudeMaterialIndex1Field() const
    { return *GetNativePointerField<int*>(this, "APrimalWeaponGPS.LongitudeMaterialIndex1"); }
    int& LongitudeMaterialIndex2Field() const
    { return *GetNativePointerField<int*>(this, "APrimalWeaponGPS.LongitudeMaterialIndex2"); }
    int& LongitudeMaterialIndex3Field() const
    { return *GetNativePointerField<int*>(this, "APrimalWeaponGPS.LongitudeMaterialIndex3"); }
    float& LongitudeOriginField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.LongitudeOrigin"); }
    float& LongitudeScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.LongitudeScale"); }
    FName& MapAttachPoint3PField() const
    { return *GetNativePointerField<FName*>(this, "APrimalWeaponGPS.MapAttachPoint3P"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MarkerComponents` +16 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x11C8; confianca alta)
    TArray<void*>& MapMarkersField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "MarkerComponents", 16); }
    int& MapMaterialIndexField() const
    { return *GetNativePointerField<int*>(this, "APrimalWeaponGPS.MapMaterialIndex"); }
    USkeletalMeshComponent*& MapMesh3PField() const
    { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalWeaponGPS.MapMesh3P"); }
    UMaterialInstanceDynamic*& Map_MIField() const
    { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "APrimalWeaponGPS.Map_MI"); }
    TArray<UStaticMeshComponent*>& MarkerComponentsField() const
    { return *GetNativePointerField<TArray<UStaticMeshComponent*>*>(this, "APrimalWeaponGPS.MarkerComponents"); }
    float& MarkerMapScaleXField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.MarkerMapScaleX"); }
    float& MarkerMapScaleYField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.MarkerMapScaleY"); }
    float& MarkerOffsetZField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.MarkerOffsetZ"); }
    BrzCampoPonteiro MarkerRotationMaxField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponGPS.MarkerRotationMax")); }
    BrzCampoPonteiro MarkerRotationMinField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponGPS.MarkerRotationMin")); }
    BrzCampoPonteiro MarkerTextColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponGPS.MarkerTextColor")); }
    int& MaxMapMarkersField() const
    { return *GetNativePointerField<int*>(this, "APrimalWeaponGPS.MaxMapMarkers"); }
    float& MaxSwingAngleField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.MaxSwingAngle"); }
    BrzCampoPonteiro MeleeCompassAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponGPS.MeleeCompassAnim")); }
    BrzCampoPonteiro MeleeCompassMapAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponGPS.MeleeCompassMapAnim")); }
    BrzCampoPonteiro MeleeGPSAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponGPS.MeleeGPSAnim")); }
    BrzCampoPonteiro MeleeMapAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponGPS.MeleeMapAnim")); }
    UStaticMeshComponent*& PlayerLocationMArkerComponentField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalWeaponGPS.PlayerLocationMArkerComponent"); }
    BrzCampoPonteiro PlayerMarkerTextColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponGPS.PlayerMarkerTextColor")); }
    int& PreviousBalloonLatitudeNumberField() const
    { return *GetNativePointerField<int*>(this, "APrimalWeaponGPS.PreviousBalloonLatitudeNumber"); }
    int& PreviousBalloonLongitudeNumberField() const
    { return *GetNativePointerField<int*>(this, "APrimalWeaponGPS.PreviousBalloonLongitudeNumber"); }
    int& PreviousLatitudeNumberField() const
    { return *GetNativePointerField<int*>(this, "APrimalWeaponGPS.PreviousLatitudeNumber"); }
    int& PreviousLongitudeNumberField() const
    { return *GetNativePointerField<int*>(this, "APrimalWeaponGPS.PreviousLongitudeNumber"); }
    float& PreviousPawnYawField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.PreviousPawnYaw"); }
    float& SwingSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponGPS.SwingSpeed"); }
    UAnimMontage*& TPV_GPSOnlyIdleField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalWeaponGPS.TPV_GPSOnlyIdle"); }
    UAnimMontage*& TPV_MapAndGPSIdleField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalWeaponGPS.TPV_MapAndGPSIdle"); }
    UAnimMontage*& TPV_MapOnlyIdleField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalWeaponGPS.TPV_MapOnlyIdle"); }
    BrzCampoPonteiro UnequipCompassAndMapAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponGPS.UnequipCompassAndMapAnim")); }
    BrzCampoPonteiro UnequipCompassAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponGPS.UnequipCompassAnim")); }
    BrzCampoPonteiro UnequipGPSAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponGPS.UnequipGPSAnim")); }
    BrzCampoPonteiro UnequipMapAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponGPS.UnequipMapAnim")); }
    BrzCampoPonteiro ZoomInCompassAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponGPS.ZoomInCompassAnim")); }
    BrzCampoPonteiro ZoomInGPSAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponGPS.ZoomInGPSAnim")); }
    BrzCampoPonteiro ZoomInMapAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponGPS.ZoomInMapAnim")); }
    BrzCampoPonteiro ZoomOutCompassAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponGPS.ZoomOutCompassAnim")); }
    BrzCampoPonteiro ZoomOutGPSAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponGPS.ZoomOutGPSAnim")); }
    BrzCampoPonteiro ZoomOutMapAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponGPS.ZoomOutMapAnim")); }
    BrzCampoPonteiro bShowGPSField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponGPS.bShowGPS")); }
    BrzCampoPonteiro bShowMapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponGPS.bShowMap")); }
    BrzCampoPonteiro bUseCompassInsteadOfGPSField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponGPS.bUseCompassInsteadOfGPS")); }
    BrzCampoPonteiro bWasFirstPersonField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponGPS.bWasFirstPerson")); }
    BrzCampoPonteiro bZoomInGPSField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponGPS.bZoomInGPS")); }
    BrzCampoPonteiro bZoomInMapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponGPS.bZoomInMap")); }
    BitFieldValue<bool, unsigned __int32> bShowMap()
    { return { (void*)this, "bShowMap" }; }
    BitFieldValue<bool, unsigned __int32> bShowGPS()
    { return { (void*)this, "bShowGPS" }; }
    BitFieldValue<bool, unsigned __int32> bUseCompassInsteadOfGPS()
    { return { (void*)this, "bUseCompassInsteadOfGPS" }; }
    BitFieldValue<bool, unsigned __int32> bZoomInMap()
    { return { (void*)this, "bZoomInMap" }; }
    BitFieldValue<bool, unsigned __int32> bZoomInGPS()
    { return { (void*)this, "bZoomInGPS" }; }
    BitFieldValue<bool, unsigned __int32> bWasFirstPerson()
    { return { (void*)this, "bWasFirstPerson" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALWEAPONGPS_H

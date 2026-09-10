// ==========================================================================
//  APrimalWeaponElectronicBinoculars — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALWEAPONELECTRONICBINOCULARS_H
#define BRZ_SDK_JOGO_APRIMALWEAPONELECTRONICBINOCULARS_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AShooterPlayerController;
struct UMaterialInstanceDynamic;
struct UMaterialInterface;
struct USceneComponent;

#include "AShooterWeapon_Melee.h"

struct APrimalWeaponElectronicBinoculars : public AShooterWeapon_Melee
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalWeaponElectronicBinoculars"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponElectronicBinoculars.ClientSetActivateNightVision_Implementation(signedchar)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=194]]
    void ClientSetActivateNightVision_Implementation(char a0) const
    {
        NativeCall<void, char>(this, "APrimalWeaponElectronicBinoculars.ClientSetActivateNightVision_Implementation(signedchar)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponElectronicBinoculars.DrawHUD(AShooterHUD*)
    // endereco: casamento de bytes com a build de referencia
    void DrawHUD(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalWeaponElectronicBinoculars.DrawHUD(AShooterHUD*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponElectronicBinoculars.GetPC()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    AShooterPlayerController* GetPC() const
    {
        return NativeCall<AShooterPlayerController*>(this, "APrimalWeaponElectronicBinoculars.GetPC()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWeaponElectronicBinoculars.GetZoomFloat()
    // endereco: casamento de bytes com a build de referencia
    float GetZoomFloat() const
    {
        return NativeCall<float>(this, "APrimalWeaponElectronicBinoculars.GetZoomFloat()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponElectronicBinoculars.PostInitializeComponents()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=136+grafo=4/4]]
    void PostInitializeComponents() const
    {
        NativeCall<void>(this, "APrimalWeaponElectronicBinoculars.PostInitializeComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponElectronicBinoculars.ServerSetActivateNightVision_Implementation(signedchar)
    // endereco: casamento de bytes com a build de referencia
    void ServerSetActivateNightVision_Implementation(char a0) const
    {
        NativeCall<void, char>(this, "APrimalWeaponElectronicBinoculars.ServerSetActivateNightVision_Implementation(signedchar)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWeaponElectronicBinoculars.SetBinocularsTargeting(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetBinocularsTargeting(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalWeaponElectronicBinoculars.SetBinocularsTargeting(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponElectronicBinoculars.SetOwningPawn(AShooterCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void SetOwningPawn(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalWeaponElectronicBinoculars.SetOwningPawn(AShooterCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponElectronicBinoculars.StartSecondaryAction()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=45]]
    void StartSecondaryAction() const
    {
        NativeCall<void>(this, "APrimalWeaponElectronicBinoculars.StartSecondaryAction()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponElectronicBinoculars.StopSecondaryAction()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=43]]
    void StopSecondaryAction() const
    {
        NativeCall<void>(this, "APrimalWeaponElectronicBinoculars.StopSecondaryAction()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponElectronicBinoculars.Tick(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=59]]
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "APrimalWeaponElectronicBinoculars.Tick(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponElectronicBinoculars.ZoomIn()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=63]]
    void ZoomIn() const
    {
        NativeCall<void>(this, "APrimalWeaponElectronicBinoculars.ZoomIn()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponElectronicBinoculars.ZoomOut()
    // endereco: casamento de bytes com a build de referencia
    void ZoomOut() const
    {
        NativeCall<void>(this, "APrimalWeaponElectronicBinoculars.ZoomOut()");
    }

    USceneComponent*& AudioListenerField() const
    { return *GetNativePointerField<USceneComponent**>(this, "APrimalWeaponElectronicBinoculars.AudioListener"); }
    float& CompSizeField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.CompSize"); }
    float& CompassInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.CompassInterpSpeed"); }
    float& CompassNorthAngleField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.CompassNorthAngle"); }
    BrzCampoPonteiro CurrentCompassAngleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponElectronicBinoculars.CurrentCompassAngle")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LatLongInterpSpeed` +4, medido na build 25090264
    //  (offset absoluto medido: 0x1194; confianca alta)
    float& CurrentLatField() const
    { return BrzCampoAncorado<float>(this, "LatLongInterpSpeed", 4); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LatLongInterpSpeed` +8, medido na build 25090264
    //  (offset absoluto medido: 0x1198; confianca alta)
    float& CurrentLongField() const
    { return BrzCampoAncorado<float>(this, "LatLongInterpSpeed", 8); }
    float& DistanceSizeField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.DistanceSize"); }
    float& DistanceXField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.DistanceX"); }
    float& DistanceYField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.DistanceY"); }
    float& LatLongInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.LatLongInterpSpeed"); }
    UMaterialInterface*& LatitudeMIField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalWeaponElectronicBinoculars.LatitudeMI"); }
    UMaterialInstanceDynamic*& LatitudeMIDField() const
    { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "APrimalWeaponElectronicBinoculars.LatitudeMID"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxTargetingFOV` +16, medido na build 25090264
    //  (offset absoluto medido: 0x11E8; confianca alta)
    float& LatitudeNumberField() const
    { return BrzCampoAncorado<float>(this, "MaxTargetingFOV", 16); }
    float& LatitudeOriginField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.LatitudeOrigin"); }
    float& LatitudeScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.LatitudeScale"); }
    UMaterialInterface*& LongitudeMIField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalWeaponElectronicBinoculars.LongitudeMI"); }
    UMaterialInstanceDynamic*& LongitudeMIDField() const
    { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "APrimalWeaponElectronicBinoculars.LongitudeMID"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxTargetingFOV` +20, medido na build 25090264
    //  (offset absoluto medido: 0x11EC; confianca alta)
    float& LongitudeNumberField() const
    { return BrzCampoAncorado<float>(this, "MaxTargetingFOV", 20); }
    float& LongitudeOriginField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.LongitudeOrigin"); }
    float& LongitudeScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.LongitudeScale"); }
    float& MaxTargetingFOVField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.MaxTargetingFOV"); }
    float& MinTargetingFOVField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.MinTargetingFOV"); }
    BrzCampoPonteiro NightVisionBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponElectronicBinoculars.NightVisionBuff")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxTargetingFOV` +8, medido na build 25090264
    //  (offset absoluto medido: 0x11E0; confianca alta)
    AShooterPlayerController*& PCField() const
    { return BrzCampoAncorado<AShooterPlayerController*>(this, "MaxTargetingFOV", 8); }
    UMaterialInterface*& ScopeCompassMIField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalWeaponElectronicBinoculars.ScopeCompassMI"); }
    UMaterialInstanceDynamic*& ScopeCompassMIDField() const
    { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "APrimalWeaponElectronicBinoculars.ScopeCompassMID"); }
    float& SoundFadeInSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.SoundFadeInSpeed"); }
    float& XPosDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.XPosDistance"); }
    float& YPosDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponElectronicBinoculars.YPosDistance"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxTargetingFOV` +25, medido na build 25090264
    //  (offset absoluto medido: 0x11F1; confianca alta)
    bool& bFromGamepadLeftField() const
    { return BrzCampoAncorado<bool>(this, "MaxTargetingFOV", 25); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxTargetingFOV` +24, medido na build 25090264
    //  (offset absoluto medido: 0x11F0; confianca alta)
    void*& bHasApplyedNightVisionBuffField() const
    { return BrzCampoAncorado<void*>(this, "MaxTargetingFOV", 24); }
    bool& bZoomOutField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponElectronicBinoculars.bZoomOut"); }
    BitFieldValue<bool, unsigned __int32> bIsNightVisionOn()
    { return { (void*)this, "bIsNightVisionOn" }; }
    BitFieldValue<bool, unsigned __int32> bZoomIn()
    { return { (void*)this, "bZoomIn" }; }
    BitFieldValue<bool, unsigned __int32> bZoomOut()
    { return { (void*)this, "bZoomOut" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALWEAPONELECTRONICBINOCULARS_H

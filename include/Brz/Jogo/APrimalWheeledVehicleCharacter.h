// ==========================================================================
//  APrimalWheeledVehicleCharacter — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALWHEELEDVEHICLECHARACTER_H
#define BRZ_SDK_JOGO_APRIMALWHEELEDVEHICLECHARACTER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UAudioComponent;
struct UObject;

#include "APrimalDinoCharacter.h"

struct APrimalWheeledVehicleCharacter : public APrimalDinoCharacter
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalWheeledVehicleCharacter"); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWheeledVehicleCharacter.AlignVehicleWithGround()
    // endereco: casamento de bytes com a build de referencia
    void AlignVehicleWithGround() const
    {
        NativeCall<void>(this, "APrimalWheeledVehicleCharacter.AlignVehicleWithGround()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.BPNetSetCharacterMovementVelocity(bool,UE::Math::TVector<double>,
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPNetSetCharacterMovementVelocity(bool a0, void* a1, bool a2, int a3) const
    {
        return NativeCall<void*, bool, void*, bool, int>(this, "APrimalWheeledVehicleCharacter.BPNetSetCharacterMovementVelocity(bool,UE::Math::TVector<double>,bool,EMovementMode)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.BPNetSetCharacterMovementVelocity_WithLocationOfImpulse(bool,UE::
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=53]]
    BrzPonteiro BPNetSetCharacterMovementVelocity_WithLocationOfImpulse(bool a0, void* a1, bool a2, int a3, void* a4) const
    {
        return NativeCall<void*, bool, void*, bool, int, void*>(this, "APrimalWheeledVehicleCharacter.BPNetSetCharacterMovementVelocity_WithLocationOfImpulse(bool,UE::Math::TVector<double>,bool,EMovementMode,UE::Math::TVector<double>)", a0, a1, a2, a3, a4);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWheeledVehicleCharacter.BPShouldCameraFollowBehindVehicle()
    // endereco: casamento de bytes com a build de referencia
    bool BPShouldCameraFollowBehindVehicle() const
    {
        return NativeCall<bool>(this, "APrimalWheeledVehicleCharacter.BPShouldCameraFollowBehindVehicle()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.BPShouldWeRestrictMovementToLocation(UE::Math::TVector<double>,UE
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPShouldWeRestrictMovementToLocation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalWheeledVehicleCharacter.BPShouldWeRestrictMovementToLocation(UE::Math::TVector<double>,UE::Math::TVector<double>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.BeginPlay()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=1823+grafo=19/19]]
    BrzPonteiro BeginPlay() const
    {
        return NativeCall<void*>(this, "APrimalWheeledVehicleCharacter.BeginPlay()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWheeledVehicleCharacter.CalcAimRotation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=63]]
    void CalcAimRotation() const
    {
        NativeCall<void>(this, "APrimalWheeledVehicleCharacter.CalcAimRotation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWheeledVehicleCharacter.CanActivateRearModule()
    // endereco: cache_pdb_25090264
    bool CanActivateRearModule() const
    {
        return NativeCall<bool>(this, "APrimalWheeledVehicleCharacter.CanActivateRearModule()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.CanActivateRearModule_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=95]]
    BrzPonteiro CanActivateRearModule_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalWheeledVehicleCharacter.CanActivateRearModule_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWheeledVehicleCharacter.CanDeactivateRearModule()
    // endereco: cache_pdb_25090264
    bool CanDeactivateRearModule() const
    {
        return NativeCall<bool>(this, "APrimalWheeledVehicleCharacter.CanDeactivateRearModule()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.CanRide(AShooterCharacter*,unsignedchar*,unsignedchar*,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanRide(void* a0, void* a1, void* a2, bool a3, bool a4) const
    {
        return NativeCall<void*, void*, void*, void*, bool, bool>(this, "APrimalWheeledVehicleCharacter.CanRide(AShooterCharacter*,unsignedchar*,unsignedchar*,bool,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.CanTakePassenger(APrimalCharacter*,int,bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanTakePassenger(void* a0, int a1, bool a2, bool a3, bool a4) const
    {
        return NativeCall<void*, void*, int, bool, bool, bool>(this, "APrimalWheeledVehicleCharacter.CanTakePassenger(APrimalCharacter*,int,bool,bool,bool)", a0, a1, a2, a3, a4);
    }

    // dump_sobre_sdk_287a0
    //   APrimalWheeledVehicleCharacter.ClearRider(bool,bool,bool,int,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void ClearRider(bool a0, bool a1, bool a2, int a3, bool a4, bool a5) const
    {
        NativeCall<void, bool, bool, bool, int, bool, bool>(this, "APrimalWheeledVehicleCharacter.ClearRider(bool,bool,bool,int,bool,bool)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.ClearRiderCodeNextTick()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=11]]
    BrzPonteiro ClearRiderCodeNextTick() const
    {
        return NativeCall<void*>(this, "APrimalWheeledVehicleCharacter.ClearRiderCodeNextTick()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.ConvertCapsuleLocationToMeshLocation(UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ConvertCapsuleLocationToMeshLocation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalWheeledVehicleCharacter.ConvertCapsuleLocationToMeshLocation(UE::Math::TVector<double>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.ConvertMeshLocationToCapsuleLocation(UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ConvertMeshLocationToCapsuleLocation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalWheeledVehicleCharacter.ConvertMeshLocationToCapsuleLocation(UE::Math::TVector<double>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.DecrementRearModuleFuel_Implementation(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DecrementRearModuleFuel_Implementation(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalWheeledVehicleCharacter.DecrementRearModuleFuel_Implementation(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWheeledVehicleCharacter.DisplayDebug(UCanvas*,FDebugDisplayInfo&,float&,float&)
    // endereco: casamento de bytes com a build de referencia
    void DisplayDebug(void* a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, void*, void*, void*, void*>(this, "APrimalWheeledVehicleCharacter.DisplayDebug(UCanvas*,FDebugDisplayInfo&,float&,float&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.GamepadThrottle(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GamepadThrottle(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalWheeledVehicleCharacter.GamepadThrottle(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.GetActorCenterTraceLocation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetActorCenterTraceLocation() const
    {
        return NativeCall<void*>(this, "APrimalWheeledVehicleCharacter.GetActorCenterTraceLocation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWheeledVehicleCharacter.GetCameraRelatedCollisionHeight(float&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void GetCameraRelatedCollisionHeight(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalWheeledVehicleCharacter.GetCameraRelatedCollisionHeight(float&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWheeledVehicleCharacter.GetDebugVehicleComponent()
    // endereco: casamento de bytes com a build de referencia
    UObject* GetDebugVehicleComponent() const
    {
        return NativeCall<UObject*>(this, "APrimalWheeledVehicleCharacter.GetDebugVehicleComponent()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.GetDefaultMeshRelativeOffset()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDefaultMeshRelativeOffset() const
    {
        return NativeCall<void*>(this, "APrimalWheeledVehicleCharacter.GetDefaultMeshRelativeOffset()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.GetDescriptiveName()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDescriptiveName() const
    {
        return NativeCall<void*>(this, "APrimalWheeledVehicleCharacter.GetDescriptiveName()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.GetEngineRotationSpeed()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetEngineRotationSpeed() const
    {
        return NativeCall<void*>(this, "APrimalWheeledVehicleCharacter.GetEngineRotationSpeed()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.GetFloatingHUDLocation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetFloatingHUDLocation() const
    {
        return NativeCall<void*>(this, "APrimalWheeledVehicleCharacter.GetFloatingHUDLocation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWheeledVehicleCharacter.GetFuelPercent()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=113]]
    float GetFuelPercent() const
    {
        return NativeCall<float>(this, "APrimalWheeledVehicleCharacter.GetFuelPercent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWheeledVehicleCharacter.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSize
    // endereco: casamento de bytes com a build de referencia
    void GetMultiUseEntries(void* a0, void* a1, int a2) const
    {
        NativeCall<void, void*, void*, int>(this, "APrimalWheeledVehicleCharacter.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWheeledVehicleCharacter.GetNumWheelsOnGround()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    int GetNumWheelsOnGround() const
    {
        return NativeCall<int>(this, "APrimalWheeledVehicleCharacter.GetNumWheelsOnGround()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWheeledVehicleCharacter.GetOwningClientPing()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    float GetOwningClientPing() const
    {
        return NativeCall<float>(this, "APrimalWheeledVehicleCharacter.GetOwningClientPing()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWheeledVehicleCharacter.GetRearModuleContinuousCostValue()
    // endereco: cache_pdb_25090264
    float GetRearModuleContinuousCostValue() const
    {
        return NativeCall<float>(this, "APrimalWheeledVehicleCharacter.GetRearModuleContinuousCostValue()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.GetRearModuleFuelPercentage_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetRearModuleFuelPercentage_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalWheeledVehicleCharacter.GetRearModuleFuelPercentage_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWheeledVehicleCharacter.GetRearModuleInitialCostValue()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=113]]
    float GetRearModuleInitialCostValue() const
    {
        return NativeCall<float>(this, "APrimalWheeledVehicleCharacter.GetRearModuleInitialCostValue()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWheeledVehicleCharacter.GetRearModuleMaxFuelValue()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=113]]
    float GetRearModuleMaxFuelValue() const
    {
        return NativeCall<float>(this, "APrimalWheeledVehicleCharacter.GetRearModuleMaxFuelValue()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWheeledVehicleCharacter.GetRearModuleMinimumFuelRequiredValue()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=113]]
    float GetRearModuleMinimumFuelRequiredValue() const
    {
        return NativeCall<float>(this, "APrimalWheeledVehicleCharacter.GetRearModuleMinimumFuelRequiredValue()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWheeledVehicleCharacter.GetRearModuleRegenDelayValue()
    // endereco: cache_pdb_25090264
    float GetRearModuleRegenDelayValue() const
    {
        return NativeCall<float>(this, "APrimalWheeledVehicleCharacter.GetRearModuleRegenDelayValue()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWheeledVehicleCharacter.GetRearModuleRegenRateValue()
    // endereco: cache_pdb_25090264
    float GetRearModuleRegenRateValue() const
    {
        return NativeCall<float>(this, "APrimalWheeledVehicleCharacter.GetRearModuleRegenRateValue()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWheeledVehicleCharacter.GetRearModuleReleaseCostValue()
    // endereco: cache_pdb_25090264
    float GetRearModuleReleaseCostValue() const
    {
        return NativeCall<float>(this, "APrimalWheeledVehicleCharacter.GetRearModuleReleaseCostValue()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.GetShooterHUDDebugString_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetShooterHUDDebugString_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalWheeledVehicleCharacter.GetShooterHUDDebugString_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWheeledVehicleCharacter.GetSteerMultiplier()
    // endereco: casamento de bytes com a build de referencia
    float GetSteerMultiplier() const
    {
        return NativeCall<float>(this, "APrimalWheeledVehicleCharacter.GetSteerMultiplier()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.GetSteerMultiplier_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=55]]
    BrzPonteiro GetSteerMultiplier_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalWheeledVehicleCharacter.GetSteerMultiplier_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWheeledVehicleCharacter.GetSteeringAssistIntensity()
    // endereco: cache_pdb_25090264
    float GetSteeringAssistIntensity() const
    {
        return NativeCall<float>(this, "APrimalWheeledVehicleCharacter.GetSteeringAssistIntensity()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.GetSteeringAssistIntensity_Implementation()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetSteeringAssistIntensity_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalWheeledVehicleCharacter.GetSteeringAssistIntensity_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWheeledVehicleCharacter.GetTimeSinceSteeringInput()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=114]]
    double GetTimeSinceSteeringInput() const
    {
        return NativeCall<double>(this, "APrimalWheeledVehicleCharacter.GetTimeSinceSteeringInput()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWheeledVehicleCharacter.GetTimeSinceThrottleInput()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=114]]
    double GetTimeSinceThrottleInput() const
    {
        return NativeCall<double>(this, "APrimalWheeledVehicleCharacter.GetTimeSinceThrottleInput()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWheeledVehicleCharacter.GetTimeSinceThrottleInputAfterNoSteeringOrThrottleInput()
    // endereco: cache_pdb_25090264
    double GetTimeSinceThrottleInputAfterNoSteeringOrThrottleInput() const
    {
        return NativeCall<double>(this, "APrimalWheeledVehicleCharacter.GetTimeSinceThrottleInputAfterNoSteeringOrThrottleInput()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWheeledVehicleCharacter.GetTimeSinceThrottleInputReleasedWhenNotUsingCameraSteering()
    // endereco: cache_pdb_25090264
    double GetTimeSinceThrottleInputReleasedWhenNotUsingCameraSteering() const
    {
        return NativeCall<double>(this, "APrimalWheeledVehicleCharacter.GetTimeSinceThrottleInputReleasedWhenNotUsingCameraSteering()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWheeledVehicleCharacter.GetVehicleMovementComponent()
    // endereco: cache_pdb_25090264
    UObject* GetVehicleMovementComponent() const
    {
        return NativeCall<UObject*>(this, "APrimalWheeledVehicleCharacter.GetVehicleMovementComponent()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.IsCapsuleTraceClear(UE::Math::TVector<double>,UE::Math::TVector<d
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsCapsuleTraceClear(void* a0, void* a1, float a2, float a3, bool a4, void* a5) const
    {
        return NativeCall<void*, void*, void*, float, float, bool, void*>(this, "APrimalWheeledVehicleCharacter.IsCapsuleTraceClear(UE::Math::TVector<double>,UE::Math::TVector<double>,float,float,bool,FHitResult&)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWheeledVehicleCharacter.IsCurrentlyUsingCameraSteering()
    // endereco: casamento de bytes com a build de referencia
    bool IsCurrentlyUsingCameraSteering() const
    {
        return NativeCall<bool>(this, "APrimalWheeledVehicleCharacter.IsCurrentlyUsingCameraSteering()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.IsCurrentlyUsingCameraSteering_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=24]]
    BrzPonteiro IsCurrentlyUsingCameraSteering_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalWheeledVehicleCharacter.IsCurrentlyUsingCameraSteering_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.IsMoving()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsMoving() const
    {
        return NativeCall<void*>(this, "APrimalWheeledVehicleCharacter.IsMoving()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.JustTurned()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=50]]
    BrzPonteiro JustTurned() const
    {
        return NativeCall<void*>(this, "APrimalWheeledVehicleCharacter.JustTurned()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.LaunchCharacter(UE::Math::TVector<double>,bool,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=72]]
    BrzPonteiro LaunchCharacter(void* a0, bool a1, bool a2) const
    {
        return NativeCall<void*, void*, bool, bool>(this, "APrimalWheeledVehicleCharacter.LaunchCharacter(UE::Math::TVector<double>,bool,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.LaunchCharacter_WithLocationOfImpulse(UE::Math::TVector<double>,b
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=72]]
    BrzPonteiro LaunchCharacter_WithLocationOfImpulse(void* a0, bool a1, bool a2, void* a3) const
    {
        return NativeCall<void*, void*, bool, bool, void*>(this, "APrimalWheeledVehicleCharacter.LaunchCharacter_WithLocationOfImpulse(UE::Math::TVector<double>,bool,bool,UE::Math::TVector<double>)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWheeledVehicleCharacter.ModifySteeringInput(float,bool)
    // endereco: casamento de bytes com a build de referencia
    float ModifySteeringInput(float a0, bool a1) const
    {
        return NativeCall<float, float, bool>(this, "APrimalWheeledVehicleCharacter.ModifySteeringInput(float,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.ModifySteeringInput_Implementation(float,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ModifySteeringInput_Implementation(float a0, bool a1) const
    {
        return NativeCall<void*, float, bool>(this, "APrimalWheeledVehicleCharacter.ModifySteeringInput_Implementation(float,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.MoveForward(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=703+grafo=4/5]]
    BrzPonteiro MoveForward(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalWheeledVehicleCharacter.MoveForward(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.MoveRight(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=401]]
    BrzPonteiro MoveRight(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalWheeledVehicleCharacter.MoveRight(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.MultiUpdateTransformParams(FServerToSimulatedClientMovementParams
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MultiUpdateTransformParams(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalWheeledVehicleCharacter.MultiUpdateTransformParams(FServerToSimulatedClientMovementParams&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.MultiUpdateTransformParams_Implementation(FServerToSimulatedClien
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=389]]
    BrzPonteiro MultiUpdateTransformParams_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalWheeledVehicleCharacter.MultiUpdateTransformParams_Implementation(FServerToSimulatedClientMovementParams&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.MulticastLaunchVehicle_NoOffset(UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MulticastLaunchVehicle_NoOffset(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalWheeledVehicleCharacter.MulticastLaunchVehicle_NoOffset(UE::Math::TVector<double>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.MulticastLaunchVehicle_NoOffset_Implementation(UE::Math::TVector<
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MulticastLaunchVehicle_NoOffset_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalWheeledVehicleCharacter.MulticastLaunchVehicle_NoOffset_Implementation(UE::Math::TVector<double>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.MulticastLaunchVehicle_WithRotation(UE::Math::TVector<double>,UE:
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro MulticastLaunchVehicle_WithRotation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalWheeledVehicleCharacter.MulticastLaunchVehicle_WithRotation(UE::Math::TVector<double>,UE::Math::TVector<double>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.MulticastLaunchVehicle_WithRotation_Implementation(UE::Math::TVec
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MulticastLaunchVehicle_WithRotation_Implementation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalWheeledVehicleCharacter.MulticastLaunchVehicle_WithRotation_Implementation(UE::Math::TVector<double>,UE::Math::TVector<double>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.MulticastSyncPhysicsState_Implementation(UE::Math::TVector<double
    // endereco: cache_pdb_25090264
    BrzPonteiro MulticastSyncPhysicsState_Implementation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalWheeledVehicleCharacter.MulticastSyncPhysicsState_Implementation(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalWheeledVehicleCharacter.MulticastTeleport(UE::Math::TVector<double>&,UE::Math::TRotator<d
    // endereco: casamento de bytes com a build de referencia
    void MulticastTeleport(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalWheeledVehicleCharacter.MulticastTeleport(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.MulticastTeleport_Implementation(UE::Math::TVector<double>&,UE::M
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=170]]
    BrzPonteiro MulticastTeleport_Implementation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalWheeledVehicleCharacter.MulticastTeleport_Implementation(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalWheeledVehicleCharacter.MulticastUpdateRearModuleState(bool,float,double)
    // endereco: casamento de bytes com a build de referencia
    void MulticastUpdateRearModuleState(bool a0, float a1, double a2) const
    {
        NativeCall<void, bool, float, double>(this, "APrimalWheeledVehicleCharacter.MulticastUpdateRearModuleState(bool,float,double)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWheeledVehicleCharacter.NetHonk_Implementation(bool)
    // endereco: cache_pdb_25090264
    void NetHonk_Implementation(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalWheeledVehicleCharacter.NetHonk_Implementation(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.OnCharMoveCompAddImpulse_Implementation(UE::Math::TVector<double>
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnCharMoveCompAddImpulse_Implementation(void* a0, bool a1, float a2, bool a3) const
    {
        return NativeCall<void*, void*, bool, float, bool>(this, "APrimalWheeledVehicleCharacter.OnCharMoveCompAddImpulse_Implementation(UE::Math::TVector<double>,bool,float,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.OnCharMoveCompAddImpulse_WithLocationOfImpulse_Implementation(UE:
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnCharMoveCompAddImpulse_WithLocationOfImpulse_Implementation(void* a0, bool a1, float a2, bool a3, void* a4) const
    {
        return NativeCall<void*, void*, bool, float, bool, void*>(this, "APrimalWheeledVehicleCharacter.OnCharMoveCompAddImpulse_WithLocationOfImpulse_Implementation(UE::Math::TVector<double>,bool,float,bool,UE::Math::TVector<double>)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.OnMovementModeChanged(EMovementMode,unsignedchar)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=86]]
    BrzPonteiro OnMovementModeChanged(int a0, unsigned char a1) const
    {
        return NativeCall<void*, int, unsigned char>(this, "APrimalWheeledVehicleCharacter.OnMovementModeChanged(EMovementMode,unsignedchar)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWheeledVehicleCharacter.OnRep_ClientBeginPlayTransform()
    // endereco: casamento de bytes com a build de referencia
    void OnRep_ClientBeginPlayTransform() const
    {
        NativeCall<void>(this, "APrimalWheeledVehicleCharacter.OnRep_ClientBeginPlayTransform()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.OnSaddleStructLoaded(APrimalStructure*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=138]]
    BrzPonteiro OnSaddleStructLoaded(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalWheeledVehicleCharacter.OnSaddleStructLoaded(APrimalStructure*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWheeledVehicleCharacter.OverrideCameraSweepChannel(ECollisionChannel&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void OverrideCameraSweepChannel(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalWheeledVehicleCharacter.OverrideCameraSweepChannel(ECollisionChannel&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.OverridesVehicleWheelProperties()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=64]]
    BrzPonteiro OverridesVehicleWheelProperties() const
    {
        return NativeCall<void*>(this, "APrimalWheeledVehicleCharacter.OverridesVehicleWheelProperties()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.PerformVehicleTeleport(UE::Math::TVector<double>&,UE::Math::TRota
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PerformVehicleTeleport(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalWheeledVehicleCharacter.PerformVehicleTeleport(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWheeledVehicleCharacter.PostInitializeComponents()
    // endereco: casamento de bytes com a build de referencia
    void PostInitializeComponents() const
    {
        NativeCall<void>(this, "APrimalWheeledVehicleCharacter.PostInitializeComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWheeledVehicleCharacter.ReceiveHit(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,bool
    // endereco: casamento de bytes com a build de referencia
    void ReceiveHit(void* a0, void* a1, void* a2, bool a3, void* a4, void* a5, void* a6, void* a7) const
    {
        NativeCall<void, void*, void*, void*, bool, void*, void*, void*, void*>(this, "APrimalWheeledVehicleCharacter.ReceiveHit(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,bool,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,FHitResult&)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.ResetServerValidation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro ResetServerValidation() const
    {
        return NativeCall<void*>(this, "APrimalWheeledVehicleCharacter.ResetServerValidation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.ServerIsAirborne()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerIsAirborne() const
    {
        return NativeCall<void*>(this, "APrimalWheeledVehicleCharacter.ServerIsAirborne()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.ServerUpdateTransformParams(FOwningClientToServerMovementParams&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerUpdateTransformParams(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalWheeledVehicleCharacter.ServerUpdateTransformParams(FOwningClientToServerMovementParams&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.ServerUpdateTransformParams_Implementation(FOwningClientToServerM
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerUpdateTransformParams_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalWheeledVehicleCharacter.ServerUpdateTransformParams_Implementation(FOwningClientToServerMovementParams&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.SetActorLocationAndRotation_Vehicle(UE::Math::TVector<double>,UE:
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetActorLocationAndRotation_Vehicle(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "APrimalWheeledVehicleCharacter.SetActorLocationAndRotation_Vehicle(UE::Math::TVector<double>,UE::Math::TRotator<double>,ETeleportType)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.SetActorLocation_Vehicle(UE::Math::TVector<double>,ETeleportType)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetActorLocation_Vehicle(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "APrimalWheeledVehicleCharacter.SetActorLocation_Vehicle(UE::Math::TVector<double>,ETeleportType)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.SetActorRotation_Vehicle(UE::Math::TRotator<double>,ETeleportType
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetActorRotation_Vehicle(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "APrimalWheeledVehicleCharacter.SetActorRotation_Vehicle(UE::Math::TRotator<double>,ETeleportType)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.SetActorTransform_Vehicle(UE::Math::TTransform<double>,ETeleportT
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetActorTransform_Vehicle(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "APrimalWheeledVehicleCharacter.SetActorTransform_Vehicle(UE::Math::TTransform<double>,ETeleportType)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWheeledVehicleCharacter.SetRider(AShooterCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void SetRider(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalWheeledVehicleCharacter.SetRider(AShooterCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWheeledVehicleCharacter.SetupPlayerInputComponent(UInputComponent*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=881+grafo=11/11]]
    void SetupPlayerInputComponent(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalWheeledVehicleCharacter.SetupPlayerInputComponent(UInputComponent*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWheeledVehicleCharacter.ShouldCameraFollowBehindVehicle()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=112]]
    bool ShouldCameraFollowBehindVehicle() const
    {
        return NativeCall<bool>(this, "APrimalWheeledVehicleCharacter.ShouldCameraFollowBehindVehicle()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.ShouldCameraFollowBehindVehicle_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=93]]
    BrzPonteiro ShouldCameraFollowBehindVehicle_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalWheeledVehicleCharacter.ShouldCameraFollowBehindVehicle_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.StartGamepadBrake()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartGamepadBrake() const
    {
        return NativeCall<void*>(this, "APrimalWheeledVehicleCharacter.StartGamepadBrake()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.StartGamepadThrottle()
    // endereco: cache_pdb_25090264
    BrzPonteiro StartGamepadThrottle() const
    {
        return NativeCall<void*>(this, "APrimalWheeledVehicleCharacter.StartGamepadThrottle()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.StartUsingRearModule_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartUsingRearModule_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalWheeledVehicleCharacter.StartUsingRearModule_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWheeledVehicleCharacter.Stasis()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=68]]
    void Stasis() const
    {
        NativeCall<void>(this, "APrimalWheeledVehicleCharacter.Stasis()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWheeledVehicleCharacter.StaticRegisterNativesAPrimalWheeledVehicleCharacter()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=34]]
    static void StaticRegisterNativesAPrimalWheeledVehicleCharacter()
    {
        NativeCall<void>(nullptr, "APrimalWheeledVehicleCharacter.StaticRegisterNativesAPrimalWheeledVehicleCharacter()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.StopGamepadBrake()
    // endereco: cache_pdb_25090264
    BrzPonteiro StopGamepadBrake() const
    {
        return NativeCall<void*>(this, "APrimalWheeledVehicleCharacter.StopGamepadBrake()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.StopGamepadThrottle()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=96]]
    BrzPonteiro StopGamepadThrottle() const
    {
        return NativeCall<void*>(this, "APrimalWheeledVehicleCharacter.StopGamepadThrottle()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWheeledVehicleCharacter.StopUsingRearModule()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=96]]
    void StopUsingRearModule() const
    {
        NativeCall<void>(this, "APrimalWheeledVehicleCharacter.StopUsingRearModule()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.StopUsingRearModule_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=18]]
    BrzPonteiro StopUsingRearModule_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalWheeledVehicleCharacter.StopUsingRearModule_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.SwapRootComponent(UPrimitiveComponent*,UPrimitiveComponent*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SwapRootComponent(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalWheeledVehicleCharacter.SwapRootComponent(UPrimitiveComponent*,UPrimitiveComponent*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.TeleportTo(UE::Math::TVector<double>&,UE::Math::TRotator<double>&
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TeleportTo(void* a0, void* a1, bool a2, bool a3) const
    {
        return NativeCall<void*, void*, void*, bool, bool>(this, "APrimalWheeledVehicleCharacter.TeleportTo(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,bool,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.TeleportVehicleTo(UE::Math::TVector<double>&,UE::Math::TRotator<d
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=98]]
    BrzPonteiro TeleportVehicleTo(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalWheeledVehicleCharacter.TeleportVehicleTo(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWheeledVehicleCharacter.ThrottleInput()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ThrottleInput() const
    {
        NativeCall<void>(this, "APrimalWheeledVehicleCharacter.ThrottleInput()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Tick(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalWheeledVehicleCharacter.Tick(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.TickCollisionState(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TickCollisionState(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalWheeledVehicleCharacter.TickCollisionState(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.TickGamepadInput()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TickGamepadInput() const
    {
        return NativeCall<void*>(this, "APrimalWheeledVehicleCharacter.TickGamepadInput()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.TickPrediction(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TickPrediction(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalWheeledVehicleCharacter.TickPrediction(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.TickReplication(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TickReplication(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalWheeledVehicleCharacter.TickReplication(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.TickSimulation(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TickSimulation(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalWheeledVehicleCharacter.TickSimulation(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.TickStepDamage(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TickStepDamage(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalWheeledVehicleCharacter.TickStepDamage(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWheeledVehicleCharacter.TryMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    bool TryMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<bool, void*, int, int>(this, "APrimalWheeledVehicleCharacter.TryMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWheeledVehicleCharacter.TurnInput(float)
    // endereco: casamento de bytes com a build de referencia
    void TurnInput(float a0) const
    {
        NativeCall<void, float>(this, "APrimalWheeledVehicleCharacter.TurnInput(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.Unstasis()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=31]]
    BrzPonteiro Unstasis() const
    {
        return NativeCall<void*>(this, "APrimalWheeledVehicleCharacter.Unstasis()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.UpdateAirControl(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateAirControl(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalWheeledVehicleCharacter.UpdateAirControl(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.UpdatePhysicsState()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdatePhysicsState() const
    {
        return NativeCall<void*>(this, "APrimalWheeledVehicleCharacter.UpdatePhysicsState()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalWheeledVehicleCharacter.UpdateRearModuleResource(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void UpdateRearModuleResource(float a0) const
    {
        NativeCall<void, float>(this, "APrimalWheeledVehicleCharacter.UpdateRearModuleResource(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.UpdateRearModuleResource_Implementation(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=101]]
    BrzPonteiro UpdateRearModuleResource_Implementation(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalWheeledVehicleCharacter.UpdateRearModuleResource_Implementation(float)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalWheeledVehicleCharacter.UpdateRearModuleState(bool,float,double)
    // endereco: casamento de bytes com a build de referencia
    void UpdateRearModuleState(bool a0, float a1, double a2) const
    {
        NativeCall<void, bool, float, double>(this, "APrimalWheeledVehicleCharacter.UpdateRearModuleState(bool,float,double)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.UpdateRearModuleState_Implementation(bool,float,double)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=117]]
    BrzPonteiro UpdateRearModuleState_Implementation(bool a0, float a1, double a2) const
    {
        return NativeCall<void*, bool, float, double>(this, "APrimalWheeledVehicleCharacter.UpdateRearModuleState_Implementation(bool,float,double)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.UpdateSaddleStructureCollision()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro UpdateSaddleStructureCollision() const
    {
        return NativeCall<void*>(this, "APrimalWheeledVehicleCharacter.UpdateSaddleStructureCollision()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.UpdateSimulationState(bool&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateSimulationState(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalWheeledVehicleCharacter.UpdateSimulationState(bool&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWheeledVehicleCharacter.UpdateVehicleSteering()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=38]]
    void UpdateVehicleSteering() const
    {
        NativeCall<void>(this, "APrimalWheeledVehicleCharacter.UpdateVehicleSteering()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWheeledVehicleCharacter.UpdateWheelEffects(float)
    // endereco: casamento de bytes com a build de referencia
    void UpdateWheelEffects(float a0) const
    {
        NativeCall<void, float>(this, "APrimalWheeledVehicleCharacter.UpdateWheelEffects(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.ValidateLocation(UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ValidateLocation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalWheeledVehicleCharacter.ValidateLocation(UE::Math::TVector<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.ValidateOverTimeOwningClientMovementParams(FOwningClientToServerM
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ValidateOverTimeOwningClientMovementParams(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalWheeledVehicleCharacter.ValidateOverTimeOwningClientMovementParams(FOwningClientToServerMovementParams&,bool&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.ValidateOwningClientMovementParams(FOwningClientToServerMovementP
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ValidateOwningClientMovementParams(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalWheeledVehicleCharacter.ValidateOwningClientMovementParams(FOwningClientToServerMovementParams&,bool&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWheeledVehicleCharacter.ValidatePredictedTransform(UE::Math::TTransform<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ValidatePredictedTransform(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalWheeledVehicleCharacter.ValidatePredictedTransform(UE::Math::TTransform<double>&)", a0);
    }

    float& AerialRotationAccelerationField() const
    { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.AerialRotationAcceleration"); }
    float& AerialRotationDragField() const
    { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.AerialRotationDrag"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `RearModuleMinimumFuelRequired` +16, medido na build 25090264
    //  (offset absoluto medido: 0x2EB8; confianca alta)
    void*& AnalogBrakeField() const
    { return BrzCampoAncorado<void*>(this, "RearModuleMinimumFuelRequired", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `RearModuleMinimumFuelRequired` +12, medido na build 25090264
    //  (offset absoluto medido: 0x2EB4; confianca alta)
    void*& AnalogThrottleField() const
    { return BrzCampoAncorado<void*>(this, "RearModuleMinimumFuelRequired", 12); }
    float& BackForceField() const
    { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.BackForce"); }
    float& CameraRotationInterpolationSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.CameraRotationInterpolationSpeed"); }
    BrzCampoPonteiro CenterTraceLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWheeledVehicleCharacter.CenterTraceLocationOffset")); }
    BrzCampoPonteiro ClientMeshBeginPlayTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWheeledVehicleCharacter.ClientMeshBeginPlayTransform")); }
    float& CurrentRearModuleFuelField() const
    { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.CurrentRearModuleFuel"); }
    float& CurrentSteeringInputField() const
    { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.CurrentSteeringInput"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `RearModuleMinimumFuelRequired` +8, medido na build 25090264
    //  (offset absoluto medido: 0x2EB0; confianca alta)
    float& DefaultAngularDampingField() const
    { return BrzCampoAncorado<float>(this, "RearModuleMinimumFuelRequired", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `RearModuleMinimumFuelRequired` +4, medido na build 25090264
    //  (offset absoluto medido: 0x2EAC; confianca alta)
    float& DefaultLinearDampingField() const
    { return BrzCampoAncorado<float>(this, "RearModuleMinimumFuelRequired", 4); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LocalSpaceAerialRotationVelocity` +24, medido na build 25090264
    //  (offset absoluto medido: 0x2D38; confianca alta)
    void*& DirectionLastLeftGround2DField() const
    { return BrzCampoAncorado<void*>(this, "LocalSpaceAerialRotationVelocity", 24); }
    BrzCampoPonteiro DustPSCField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWheeledVehicleCharacter.DustPSC")); }
    UAudioComponent*& EngineACField() const
    { return *GetNativePointerField<UAudioComponent**>(this, "APrimalWheeledVehicleCharacter.EngineAC"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxFlyingFalsePositives` +4, medido na build 25090264
    //  (offset absoluto medido: 0x2EC8; confianca alta)
    void*& FlyingFalsePositiveCountField() const
    { return BrzCampoAncorado<void*>(this, "MaxFlyingFalsePositives", 4); }
    float& ForwardInputTimeoutField() const
    { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.ForwardInputTimeout"); }
    UAudioComponent*& HonkACField() const
    { return *GetNativePointerField<UAudioComponent**>(this, "APrimalWheeledVehicleCharacter.HonkAC"); }
    BrzCampoPonteiro LastBaseRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWheeledVehicleCharacter.LastBaseRotation")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastRearModuleUseTime` +16, medido na build 25090264
    //  (offset absoluto medido: 0x2E40; confianca alta)
    void*& LastFrameHadCollisionField() const
    { return BrzCampoAncorado<void*>(this, "LastRearModuleUseTime", 16); }
    BrzCampoPonteiro LastFullyValidatedLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWheeledVehicleCharacter.LastFullyValidatedLocation")); }
    double& LastManualCameraInputTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalWheeledVehicleCharacter.LastManualCameraInputTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastRearModuleUseTime` +8, medido na build 25090264
    //  (offset absoluto medido: 0x2E38; confianca alta)
    void*& LastOwningClientUpdateServerTimeField() const
    { return BrzCampoAncorado<void*>(this, "LastRearModuleUseTime", 8); }
    BrzCampoPonteiro LastPredictedTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWheeledVehicleCharacter.LastPredictedTransform")); }
    double& LastRearModuleUseTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalWheeledVehicleCharacter.LastRearModuleUseTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastPredictedTransform` +96, medido na build 25090264
    //  (offset absoluto medido: 0x2C90; confianca media)
    void*& LastReplicatedTransformField() const
    { return BrzCampoAncorado<void*>(this, "LastPredictedTransform", 96); }
    double& LastSteeringInputTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalWheeledVehicleCharacter.LastSteeringInputTime"); }
    double& LastTeleportTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalWheeledVehicleCharacter.LastTeleportTime"); }
    float& LastThrottleInputField() const
    { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.LastThrottleInput"); }
    double& LastThrottleInputAfterTimeoutTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalWheeledVehicleCharacter.LastThrottleInputAfterTimeoutTime"); }
    double& LastThrottleInputTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalWheeledVehicleCharacter.LastThrottleInputTime"); }
    double& LastThrottleReleaseTimeWhenNotUsingCameraSteeringField() const
    { return *GetNativePointerField<double*>(this, "APrimalWheeledVehicleCharacter.LastThrottleReleaseTimeWhenNotUsingCameraSteering"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxFlyingFalsePositives` +36, medido na build 25090264
    //  (offset absoluto medido: 0x2EE8; confianca media)
    void*& LastTimeCheckedAntiFlyCheckField() const
    { return BrzCampoAncorado<void*>(this, "MaxFlyingFalsePositives", 36); }
    double& LastTimeTurnedInputField() const
    { return *GetNativePointerField<double*>(this, "APrimalWheeledVehicleCharacter.LastTimeTurnedInput"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxFlyingFalsePositives` +12, medido na build 25090264
    //  (offset absoluto medido: 0x2ED0; confianca alta)
    void*& LastValidatedVelocityField() const
    { return BrzCampoAncorado<void*>(this, "MaxFlyingFalsePositives", 12); }
    BrzCampoPonteiro LocalSpaceAerialRotationVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWheeledVehicleCharacter.LocalSpaceAerialRotationVelocity")); }
    BrzCampoPonteiro LocationAtPrevFrameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWheeledVehicleCharacter.LocationAtPrevFrame")); }
    float& ManualCameraInputTimeoutField() const
    { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.ManualCameraInputTimeout"); }
    float& MaxAerialRotationSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.MaxAerialRotationSpeed"); }
    int& MaxFlyingFalsePositivesField() const
    { return *GetNativePointerField<int*>(this, "APrimalWheeledVehicleCharacter.MaxFlyingFalsePositives"); }
    float& MaxRearModuleAirborneHackCheckTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.MaxRearModuleAirborneHackCheckTime"); }
    float& MaxRearModuleFuelField() const
    { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.MaxRearModuleFuel"); }
    float& MinimumDamageSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.MinimumDamageSpeed"); }
    BrzCampoPonteiro OnRearModAbilityEndedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWheeledVehicleCharacter.OnRearModAbilityEnded")); }
    BrzCampoPonteiro OwningClientPingToPredictionSteeringScalarCurveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWheeledVehicleCharacter.OwningClientPingToPredictionSteeringScalarCurve")); }
    BrzCampoPonteiro OwningClientPingToPredictionVelocityScalarCurveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWheeledVehicleCharacter.OwningClientPingToPredictionVelocityScalarCurve")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxFlyingFalsePositives` +44, medido na build 25090264
    //  (offset absoluto medido: 0x2EF0; confianca media)
    void*& RearModuleAirborneHackCheckStartTimeField() const
    { return BrzCampoAncorado<void*>(this, "MaxFlyingFalsePositives", 44); }
    float& RearModuleContinuousCostField() const
    { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.RearModuleContinuousCost"); }
    float& RearModuleInitialCostField() const
    { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.RearModuleInitialCost"); }
    float& RearModuleMinimumFuelRequiredField() const
    { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.RearModuleMinimumFuelRequired"); }
    float& RearModuleRegenDelayField() const
    { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.RearModuleRegenDelay"); }
    float& RearModuleRegenRateField() const
    { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.RearModuleRegenRate"); }
    float& RearModuleReleaseCostField() const
    { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.RearModuleReleaseCost"); }
    float& RequiredGravityDecelerationField() const
    { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.RequiredGravityDeceleration"); }
    float& RetainPlayerCameraRotationWhileMovingForField() const
    { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.RetainPlayerCameraRotationWhileMovingFor"); }
    BrzCampoPonteiro ServerFPSSteeringScalarCurveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWheeledVehicleCharacter.ServerFPSSteeringScalarCurve")); }
    BrzCampoPonteiro ServerFPSVelocityScalarCurveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWheeledVehicleCharacter.ServerFPSVelocityScalarCurve")); }
    float& SimpleMoverightSteerMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.SimpleMoverightSteerMultiplier"); }
    BrzCampoPonteiro SimulatedClientPingToInterpolationScalarCurveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWheeledVehicleCharacter.SimulatedClientPingToInterpolationScalarCurve")); }
    UAudioComponent*& SkidACField() const
    { return *GetNativePointerField<UAudioComponent**>(this, "APrimalWheeledVehicleCharacter.SkidAC"); }
    float& SkidStartTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.SkidStartTime"); }
    float& SteeringAssistIntensityField() const
    { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.SteeringAssistIntensity"); }
    float& SteeringInputTimeoutField() const
    { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.SteeringInputTimeout"); }
    float& TeleportCooldownField() const
    { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.TeleportCooldown"); }
    float& UpForceField() const
    { return *GetNativePointerField<float*>(this, "APrimalWheeledVehicleCharacter.UpForce"); }
    BrzCampoPonteiro VehicleMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWheeledVehicleCharacter.VehicleMovement")); }
    BitFieldValue<bool, unsigned __int32> bAllowFlying()
    { return { (void*)this, "bAllowFlying" }; }
    BitFieldValue<bool, unsigned __int32> bAutoSwitchToCameraSteering()
    { return { (void*)this, "bAutoSwitchToCameraSteering" }; }
    BitFieldValue<bool, unsigned __int32> bEnableDebugDraw()
    { return { (void*)this, "bEnableDebugDraw" }; }
    BitFieldValue<bool, unsigned __int32> bEnableDebugSimulation()
    { return { (void*)this, "bEnableDebugSimulation" }; }
    BitFieldValue<bool, unsigned __int32> bFollowCamera()
    { return { (void*)this, "bFollowCamera" }; }
    BitFieldValue<bool, unsigned __int32> bGamepadBrakeActive()
    { return { (void*)this, "bGamepadBrakeActive" }; }
    BitFieldValue<bool, unsigned __int32> bGamepadBrakeActive_Analog()
    { return { (void*)this, "bGamepadBrakeActive_Analog" }; }
    BitFieldValue<bool, unsigned __int32> bGamepadLeftShoulderActive()
    { return { (void*)this, "bGamepadLeftShoulderActive" }; }
    BitFieldValue<bool, unsigned __int32> bGamepadRightShoulderActive()
    { return { (void*)this, "bGamepadRightShoulderActive" }; }
    BitFieldValue<bool, unsigned __int32> bGamepadThrottleActive()
    { return { (void*)this, "bGamepadThrottleActive" }; }
    BitFieldValue<bool, unsigned __int32> bGamepadThrottleActive_Analog()
    { return { (void*)this, "bGamepadThrottleActive_Analog" }; }
    BitFieldValue<bool, unsigned __int32> bHasReregisteredVehicleOnce()
    { return { (void*)this, "bHasReregisteredVehicleOnce" }; }
    BitFieldValue<bool, unsigned __int32> bIsUsingRearModule()
    { return { (void*)this, "bIsUsingRearModule" }; }
    BitFieldValue<bool, unsigned __int32> bSkidding()
    { return { (void*)this, "bSkidding" }; }
    BitFieldValue<bool, unsigned __int32> bTiresTouchingGround()
    { return { (void*)this, "bTiresTouchingGround" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPShouldCameraFollowBehindVehicle()
    { return { (void*)this, "bUseBPShouldCameraFollowBehindVehicle" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPShouldWeRestrictMovementToLocation()
    { return { (void*)this, "bUseBPShouldWeRestrictMovementToLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseCameraBasedSteering()
    { return { (void*)this, "bUseCameraBasedSteering" }; }
    BitFieldValue<bool, unsigned __int32> bWasUsingCameraSteering()
    { return { (void*)this, "bWasUsingCameraSteering" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALWHEELEDVEHICLECHARACTER_H

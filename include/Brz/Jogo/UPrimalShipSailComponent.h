// ==========================================================================
//  UPrimalShipSailComponent — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALSHIPSAILCOMPONENT_H
#define BRZ_SDK_JOGO_UPRIMALSHIPSAILCOMPONENT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FActorComponentTickFunction;
struct FName;


struct UPrimalShipSailComponent
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalShipSailComponent"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipSailComponent.AddFireBuff(int)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro AddFireBuff(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalShipSailComponent.AddFireBuff(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipSailComponent.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BeginPlay() const
    {
        return NativeCall<void*>(this, "UPrimalShipSailComponent.BeginPlay()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipSailComponent.CanSailBeRepaired(AShooterPlayerController*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanSailBeRepaired(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "UPrimalShipSailComponent.CanSailBeRepaired(AShooterPlayerController*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipSailComponent.ConsumeSailRepairRequirementsPercent(UPrimalInventoryComponent*,float,U
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ConsumeSailRepairRequirementsPercent(void* a0, float a1, void* a2) const
    {
        return NativeCall<void*, void*, float, void*>(this, "UPrimalShipSailComponent.ConsumeSailRepairRequirementsPercent(UPrimalInventoryComponent*,float,UPrimalInventoryComponent*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipSailComponent.GetSailComponentOpenRatio(USceneComponent*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetSailComponentOpenRatio(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalShipSailComponent.GetSailComponentOpenRatio(USceneComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipSailComponent.GetSailThrottleWindMult()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSailThrottleWindMult() const
    {
        return NativeCall<void*>(this, "UPrimalShipSailComponent.GetSailThrottleWindMult()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipSailComponent.Net_SetUnMannedGoalAngle(float)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro Net_SetUnMannedGoalAngle(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalShipSailComponent.Net_SetUnMannedGoalAngle(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipSailComponent.Net_SetUnMannedThrottleRatio(float)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro Net_SetUnMannedThrottleRatio(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalShipSailComponent.Net_SetUnMannedThrottleRatio(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipSailComponent.OnRep_SetCanvasHealth()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro OnRep_SetCanvasHealth() const
    {
        return NativeCall<void*>(this, "UPrimalShipSailComponent.OnRep_SetCanvasHealth()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipSailComponent.OnStructurePlacedNotify(APlayerController*,UE::Math::TVector<double>,UE
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro OnStructurePlacedNotify(void* a0, void* a1, void* a2, void* a3, void* a4, unsigned long long a5, bool a6) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, unsigned long long, bool>(this, "UPrimalShipSailComponent.OnStructurePlacedNotify(APlayerController*,UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TRotator<double>,APawn*,FName,bool)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipSailComponent.RepairSailCheckTimer()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RepairSailCheckTimer() const
    {
        return NativeCall<void*>(this, "UPrimalShipSailComponent.RepairSailCheckTimer()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipSailComponent.ServerSetSailCanvasHealth_Implementation(float,bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro ServerSetSailCanvasHealth_Implementation(float a0, bool a1) const
    {
        return NativeCall<void*, float, bool>(this, "UPrimalShipSailComponent.ServerSetSailCanvasHealth_Implementation(float,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipSailComponent.SetFireIntensity(float)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SetFireIntensity(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalShipSailComponent.SetFireIntensity(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipSailComponent.SetSailOpenRatio(float)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SetSailOpenRatio(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalShipSailComponent.SetSailOpenRatio(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipSailComponent.StartSailRepair()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=455+grafo=5/5]]
    BrzPonteiro StartSailRepair() const
    {
        return NativeCall<void*>(this, "UPrimalShipSailComponent.StartSailRepair()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipSailComponent.TestMeetsSailRepairRequirementsPercent(UPrimalInventoryComponent*,float
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TestMeetsSailRepairRequirementsPercent(void* a0, float a1, void* a2) const
    {
        return NativeCall<void*, void*, float, void*>(this, "UPrimalShipSailComponent.TestMeetsSailRepairRequirementsPercent(UPrimalInventoryComponent*,float,UPrimalInventoryComponent*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipSailComponent.TickCriticalShipStructure(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TickCriticalShipStructure(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalShipSailComponent.TickCriticalShipStructure(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipSailComponent.UpdateCapturedWindPercent()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateCapturedWindPercent() const
    {
        return NativeCall<void*>(this, "UPrimalShipSailComponent.UpdateCapturedWindPercent()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipSailComponent.`vcall'{1376,{flat}}()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro _vcall__1376__flat__() const
    {
        return NativeCall<void*>(this, "UPrimalShipSailComponent.`vcall'{1376,{flat}}()");
    }

    float& AdditionalSailRepairPercentNextIntervalField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.AdditionalSailRepairPercentNextInterval"); }
    float& AllowedMountDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.AllowedMountDistance"); }
    TArray<void*>& AssetUserDataField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalShipSailComponent.AssetUserData"); }
    TArray<void*>& ComponentTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalShipSailComponent.ComponentTags"); }
    int& CreationMethodField() const
    { return *GetNativePointerField<int*>(this, "UPrimalShipSailComponent.CreationMethod"); }
    float& CurrentBurnPercentageField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.CurrentBurnPercentage"); }
    float& CurrentRotationAngleField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.CurrentRotationAngle"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UPrimalShipSailComponent.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalShipSailComponent.CustomTag"); }
    BrzCampoPonteiro DefaultRiggingPegLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.DefaultRiggingPegLocOffset")); }
    BrzCampoPonteiro DefaultRiggingPegRotOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.DefaultRiggingPegRotOffset")); }
    float& EffectiveWindPctField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.EffectiveWindPct"); }
    BrzCampoPonteiro ExtraRiggingOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.ExtraRiggingOffset")); }
    int& FinalPlacementIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalShipSailComponent.FinalPlacementIndex"); }
    float& FireIntensityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.FireIntensity"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `UnfurlSoundOpenPercentTriggers` +16, medido na build 25535041
    //  (offset absoluto medido: 0x2C8; confianca alta)
    void*& HasTriggeredUnfurlAtThresholdIndexField() const
    { return BrzCampoAncorado<void*>(this, "UnfurlSoundOpenPercentTriggers", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MastRiggingPegOffsetRight` +104, medido na build 25535041
    //  (offset absoluto medido: 0x518; confianca media)
    void*& InitialModSailAttachmentTimerField() const
    { return BrzCampoAncorado<void*>(this, "MastRiggingPegOffsetRight", 104); }
    BrzCampoPonteiro IsReservedToBeMannedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.IsReservedToBeManned")); }
    FName& LeftPegRiggingBoneNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalShipSailComponent.LeftPegRiggingBoneName"); }
    FName& LeftPegRiggingBoneSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalShipSailComponent.LeftPegRiggingBoneSocketName"); }
    FName& LeftRiggingBoneNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalShipSailComponent.LeftRiggingBoneName"); }
    FName& LeftRiggingBoneSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalShipSailComponent.LeftRiggingBoneSocketName"); }
    BrzCampoPonteiro MastRiggingOffsetLeftField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.MastRiggingOffsetLeft")); }
    BrzCampoPonteiro MastRiggingOffsetRightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.MastRiggingOffsetRight")); }
    BrzCampoPonteiro MastRiggingPegOffsetLeftField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.MastRiggingPegOffsetLeft")); }
    BrzCampoPonteiro MastRiggingPegOffsetRightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.MastRiggingPegOffsetRight")); }
    float& MaxAcceptableAngleDiffToGatherWindField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.MaxAcceptableAngleDiffToGatherWind"); }
    float& MaxFireIntensityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.MaxFireIntensity"); }
    float& MaxFireIntensityEdgeGlowYField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.MaxFireIntensityEdgeGlowY"); }
    float& MaxFireIntensityEdgeHeatField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.MaxFireIntensityEdgeHeat"); }
    float& MaxModShipSailPegRiggingDistField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.MaxModShipSailPegRiggingDist"); }
    float& MaxModShipSailRiggingDistField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.MaxModShipSailRiggingDist"); }
    float& MaxPossibleRotationAngleField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.MaxPossibleRotationAngle"); }
    float& MinDeadZoneInputField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.MinDeadZoneInput"); }
    float& MinEffectivenessFromWindCapturedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.MinEffectivenessFromWindCaptured"); }
    float& MinFireIntensityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.MinFireIntensity"); }
    float& MinFireIntensityEdgeGlowYField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.MinFireIntensityEdgeGlowY"); }
    float& MinFireIntensityEdgeHeatField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.MinFireIntensityEdgeHeat"); }
    float& MinWindEffectivenessSteeringForceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.MinWindEffectivenessSteeringForceMultiplier"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bDontRefreshSeatsLocations` +12, medido na build 25535041
    //  (offset absoluto medido: 0x5B4; confianca alta)
    void*& ModifiedSailSeatSocketNameLField() const
    { return BrzCampoAncorado<void*>(this, "bDontRefreshSeatsLocations", 12); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bDontRefreshSeatsLocations` +4, medido na build 25535041
    //  (offset absoluto medido: 0x5AC; confianca alta)
    void*& ModifiedSailSeatSocketNameRField() const
    { return BrzCampoAncorado<void*>(this, "bDontRefreshSeatsLocations", 4); }
    float& NPCUnboardDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.NPCUnboardDistance"); }
    float& NPC_UseLocation_OffsetFromMastField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.NPC_UseLocation_OffsetFromMast"); }
    int& NumOfCurrentFiresField() const
    { return *GetNativePointerField<int*>(this, "UPrimalShipSailComponent.NumOfCurrentFires"); }
    BrzCampoPonteiro OnComponentActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.OnComponentActivated")); }
    BrzCampoPonteiro OnComponentDeactivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.OnComponentDeactivated")); }
    float& PowMultipleForSpeedFalloffFromDamageField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.PowMultipleForSpeedFalloffFromDamage"); }
    float& PowMultipleForWindFalloffField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.PowMultipleForWindFalloff"); }
    FActorComponentTickFunction& PrimaryComponentTickField() const
    { return *GetNativePointerField<FActorComponentTickFunction*>(this, "UPrimalShipSailComponent.PrimaryComponentTick"); }
    float& RaftRiderSailRotationRangeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.RaftRiderSailRotationRange"); }
    float& RaftRiderSailRotationRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.RaftRiderSailRotationRate"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NPC_UseLocation_OffsetFromMast` +4, medido na build 25535041
    //  (offset absoluto medido: 0x244; confianca alta)
    float& RepairCheckIntervalField() const
    { return BrzCampoAncorado<float>(this, "NPC_UseLocation_OffsetFromMast", 4); }
    float& RepairSailAmountRemainingField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.RepairSailAmountRemaining"); }
    float& RiderRotateInputField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.RiderRotateInput"); }
    float& RiderThrottleInputField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.RiderThrottleInput"); }
    int& RiggingIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalShipSailComponent.RiggingIndex"); }
    BrzCampoPonteiro RiggingPegSocketOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.RiggingPegSocketOffset")); }
    FName& RightPegRiggingBoneNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalShipSailComponent.RightPegRiggingBoneName"); }
    FName& RightPegRiggingBoneSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalShipSailComponent.RightPegRiggingBoneSocketName"); }
    FName& RightRiggingBoneNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalShipSailComponent.RightRiggingBoneName"); }
    FName& RightRiggingBoneSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalShipSailComponent.RightRiggingBoneSocketName"); }
    float& SailAngularDampingField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.SailAngularDamping"); }
    BrzCampoPonteiro SailBillowSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.SailBillowSound")); }
    BrzCampoPonteiro SailBillowSoundComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.SailBillowSoundComponent")); }
    BrzCampoPonteiro SailBillowWithWindSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.SailBillowWithWindSound")); }
    FName& SailCanvasCollisionNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalShipSailComponent.SailCanvasCollisionName"); }
    int& SailCanvasMaterialIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalShipSailComponent.SailCanvasMaterialIndex"); }
    BrzCampoPonteiro SailFullWindBillowSoundComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.SailFullWindBillowSoundComponent")); }
    BrzCampoPonteiro SailFurlSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.SailFurlSound")); }
    BrzCampoPonteiro SailFurlUnfurlSoundComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.SailFurlUnfurlSoundComponent")); }
    float& SailLinearDampingField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.SailLinearDamping"); }
    BrzCampoPonteiro SailMaterialIndicesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.SailMaterialIndices")); }
    float& SailOpenPercentToAllowBillowSFXField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.SailOpenPercentToAllowBillowSFX"); }
    float& SailOpenPercentToTriggerTautSFXField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.SailOpenPercentToTriggerTautSFX"); }
    float& SailRepairPercentPerIntervalField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.SailRepairPercentPerInterval"); }
    BrzCampoPonteiro SailRepairResourceRequirementsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.SailRepairResourceRequirements")); }
    float& SailRotationSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.SailRotationSpeed"); }
    BrzCampoPonteiro SailStructureSettingsClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.SailStructureSettingsClass")); }
    BrzCampoPonteiro SailTautSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.SailTautSound")); }
    BrzCampoPonteiro SailTurnSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.SailTurnSound")); }
    BrzCampoPonteiro SailTurnSoundComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.SailTurnSoundComponent")); }
    BrzCampoPonteiro SailUnfurlSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.SailUnfurlSound")); }
    float& SailUnitsField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.SailUnits"); }
    float& Sail_AdditionalMaxVelocityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_AdditionalMaxVelocity"); }
    float& Sail_CanvasHealthField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_CanvasHealth"); }
    float& Sail_CanvasMaxHealthField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_CanvasMaxHealth"); }
    BrzCampoPonteiro Sail_CanvasStartScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.Sail_CanvasStartScale")); }
    float& Sail_ClientOpenSpeedMultField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_ClientOpenSpeedMult"); }
    float& Sail_ClosedMinZScaleField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_ClosedMinZScale"); }
    float& Sail_CurrentOpenRatioField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_CurrentOpenRatio"); }
    float& Sail_ExtraAdditionalMaxVelocity_MultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_ExtraAdditionalMaxVelocity_Multiplier"); }
    float& Sail_InterpStopThresholdField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_InterpStopThreshold"); }
    float& Sail_MaxMovementWeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_MaxMovementWeight"); }
    float& Sail_MaxMovementWeight_MultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_MaxMovementWeight_Multiplier"); }
    float& Sail_MaxVelocityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_MaxVelocity"); }
    unsigned char& Sail_NumOfSailsField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalShipSailComponent.Sail_NumOfSails"); }
    float& Sail_OpenSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_OpenSpeed"); }
    float& Sail_OpenSpeed_MultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_OpenSpeed_Multiplier"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MastRiggingPegOffsetRight` +100, medido na build 25535041
    //  (offset absoluto medido: 0x514; confianca media)
    void*& Sail_PreviousCanvasHealthField() const
    { return BrzCampoAncorado<void*>(this, "MastRiggingPegOffsetRight", 100); }
    BrzCampoPonteiro Sail_StartEndPercentOfThrottlePerSailField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.Sail_StartEndPercentOfThrottlePerSail")); }
    float& Sail_SteeringForce_AtVelocityMaxField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_SteeringForce_AtVelocityMax"); }
    float& Sail_SteeringForce_AtVelocityMax_MultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_SteeringForce_AtVelocityMax_Multiplier"); }
    float& Sail_SteeringOpenRatioPowerField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_SteeringOpenRatioPower"); }
    float& Sail_ThrottleForceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_ThrottleForce"); }
    float& Sail_ThrottleForceWindMult_MaxField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_ThrottleForceWindMult_Max"); }
    float& Sail_ThrottleForceWindMult_MinField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_ThrottleForceWindMult_Min"); }
    float& Sail_ThrottleForce_MultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_ThrottleForce_Multiplier"); }
    float& Sail_UnMannedGoalAngleField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_UnMannedGoalAngle"); }
    float& Sail_UnMannedThrottleRatioField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_UnMannedThrottleRatio"); }
    float& Sail_WindMaxField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_WindMax"); }
    float& Sail_WindMinField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_WindMin"); }
    float& Sail_WindThrottleForceScalePowerField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.Sail_WindThrottleForceScalePower"); }
    BrzCampoPonteiro SeatingAnimLeftField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.SeatingAnimLeft")); }
    BrzCampoPonteiro SeatingAnimRightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.SeatingAnimRight")); }
    float& StatMult_AccelerationField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.StatMult_Acceleration"); }
    float& StatMult_MaxAcceptableAngleDiffToGatherWindField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.StatMult_MaxAcceptableAngleDiffToGatherWind"); }
    float& StatMult_MaxMovementWeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.StatMult_MaxMovementWeight"); }
    float& StatMult_MaxVelocityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.StatMult_MaxVelocity"); }
    float& StatMult_TurningEffectivenessField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.StatMult_TurningEffectiveness"); }
    BrzCampoPonteiro TradeWindSCsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.TradeWindSCs")); }
    BrzCampoPonteiro TradeWind_FXSocketNamesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.TradeWind_FXSocketNames")); }
    BrzCampoPonteiro TradeWind_FX_HighField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.TradeWind_FX_High")); }
    BrzCampoPonteiro TradeWind_FX_LowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.TradeWind_FX_Low")); }
    BrzCampoPonteiro TradeWind_FX_MidField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.TradeWind_FX_Mid")); }
    int& UCSSerializationIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalShipSailComponent.UCSSerializationIndex"); }
    BrzCampoPonteiro UnfurlSoundOpenPercentTriggersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.UnfurlSoundOpenPercentTriggers")); }
    BrzCampoPonteiro UnfurledMaterialParamNamesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.UnfurledMaterialParamNames")); }
    BrzCampoPonteiro UnfurledMaterialParamsOffOnPercentOpenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.UnfurledMaterialParamsOffOnPercentOpen")); }
    BrzCampoPonteiro WindDirectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.WindDirection")); }
    float& WindLevelToBeVisiblyFullField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.WindLevelToBeVisiblyFull"); }
    float& WindPercentToCutOffBillowSFXField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.WindPercentToCutOffBillowSFX"); }
    float& WindPercentToTriggerTautSFXField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.WindPercentToTriggerTautSFX"); }
    float& WindPercentageField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.WindPercentage"); }
    float& WindSpeed_NonOceanVolume_DefaultField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipSailComponent.WindSpeed_NonOceanVolume_Default"); }
    BrzCampoPonteiro bAlwaysReplicatePropertyConditionalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bAlwaysReplicatePropertyConditional")); }
    BrzCampoPonteiro bAutoActivateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bAutoActivate")); }
    BrzCampoPonteiro bCanEverAffectNavigationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bCanEverAffectNavigation")); }
    BrzCampoPonteiro bDedicatedForceTickingEveryFrameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bDedicatedForceTickingEveryFrame")); }
    BrzCampoPonteiro bDontRefreshSeatsLocationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bDontRefreshSeatsLocations")); }
    BrzCampoPonteiro bEcnhorchedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bEcnhorched")); }
    BrzCampoPonteiro bEditableWhenInheritedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bEditableWhenInherited")); }
    BrzCampoPonteiro bFirstTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bFirstTick")); }
    BrzCampoPonteiro bFlushSkeletonField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bFlushSkeleton")); }
    BrzCampoPonteiro bHasMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bHasMultiUseEntries")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NPCUnboardDistance` +4, medido na build 25535041
    //  (offset absoluto medido: 0x230; confianca alta)
    void*& bHasPlayedTautSoundField() const
    { return BrzCampoAncorado<void*>(this, "NPCUnboardDistance", 4); }
    BrzCampoPonteiro bHideLadderControlsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bHideLadderControls")); }
    BrzCampoPonteiro bIgnoreWindEffectivenessField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bIgnoreWindEffectiveness")); }
    BrzCampoPonteiro bIsActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bIsActive")); }
    BrzCampoPonteiro bIsEditorOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bIsEditorOnly")); }
    BrzCampoPonteiro bIsMannedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bIsManned")); }
    BrzCampoPonteiro bIsPlacingOnModShipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bIsPlacingOnModShip")); }
    BrzCampoPonteiro bIsSailRepairingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bIsSailRepairing")); }
    BrzCampoPonteiro bModifiedSailRiggingForModShipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bModifiedSailRiggingForModShip")); }
    BrzCampoPonteiro bNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bNetAddressable")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bPreventNPCHandIKField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bPreventNPCHandIK")); }
    BrzCampoPonteiro bPreventOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bPreventOnClient")); }
    BrzCampoPonteiro bPreventOnConsolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bPreventOnConsoles")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventOnNonDedicatedHostField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bPreventOnNonDedicatedHost")); }
    BrzCampoPonteiro bPutSailControlsInRootMultiUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bPutSailControlsInRootMultiUse")); }
    BrzCampoPonteiro bReallyCanUseShipThrottleUnmannedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bReallyCanUseShipThrottleUnmanned")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bReplicates")); }
    BrzCampoPonteiro bRiggingPegOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bRiggingPegOnly")); }
    BrzCampoPonteiro bShooterCharacterRiderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bShooterCharacterRider")); }
    BrzCampoPonteiro bSpawnWithFullHealthField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bSpawnWithFullHealth")); }
    BrzCampoPonteiro bStasisPreventUnregisterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bStasisPreventUnregister")); }
    BrzCampoPonteiro bUpdateSailsVisualsByPercentageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bUpdateSailsVisualsByPercentage")); }
    BrzCampoPonteiro bUseBPOnComponentCreatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bUseBPOnComponentCreated")); }
    BrzCampoPonteiro bUseBPOnComponentDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bUseBPOnComponentDestroyed")); }
    BrzCampoPonteiro bUseBPOnComponentTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bUseBPOnComponentTick")); }
    BrzCampoPonteiro bUseConstantSailInterpolationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bUseConstantSailInterpolation")); }
    BrzCampoPonteiro bUseSailSoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bUseSailSounds")); }
    BrzCampoPonteiro bUseSeatNumInHandSocketNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bUseSeatNumInHandSocketName")); }
    BrzCampoPonteiro bUsesBillowMaterialParamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipSailComponent.bUsesBillowMaterialParam")); }
    BitFieldValue<bool, unsigned __int32> IsReservedToBeManned()
    { return { (void*)this, "IsReservedToBeManned" }; }
    BitFieldValue<bool, unsigned __int32> bDontRefreshSeatsLocations()
    { return { (void*)this, "bDontRefreshSeatsLocations" }; }
    BitFieldValue<bool, unsigned __int32> bEcnhorched()
    { return { (void*)this, "bEcnhorched" }; }
    BitFieldValue<bool, unsigned __int32> bFirstTick()
    { return { (void*)this, "bFirstTick" }; }
    BitFieldValue<bool, unsigned __int32> bFlushSkeleton()
    { return { (void*)this, "bFlushSkeleton" }; }
    BitFieldValue<bool, unsigned __int32> bHideLadderControls()
    { return { (void*)this, "bHideLadderControls" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreWindEffectiveness()
    { return { (void*)this, "bIgnoreWindEffectiveness" }; }
    BitFieldValue<bool, unsigned __int32> bIsManned()
    { return { (void*)this, "bIsManned" }; }
    BitFieldValue<bool, unsigned __int32> bIsPlacingOnModShip()
    { return { (void*)this, "bIsPlacingOnModShip" }; }
    BitFieldValue<bool, unsigned __int32> bIsSailRepairing()
    { return { (void*)this, "bIsSailRepairing" }; }
    BitFieldValue<bool, unsigned __int32> bModifiedSailRiggingForModShip()
    { return { (void*)this, "bModifiedSailRiggingForModShip" }; }
    BitFieldValue<bool, unsigned __int32> bPreventNPCHandIK()
    { return { (void*)this, "bPreventNPCHandIK" }; }
    BitFieldValue<bool, unsigned __int32> bPutSailControlsInRootMultiUse()
    { return { (void*)this, "bPutSailControlsInRootMultiUse" }; }
    BitFieldValue<bool, unsigned __int32> bReallyCanUseShipThrottleUnmanned()
    { return { (void*)this, "bReallyCanUseShipThrottleUnmanned" }; }
    BitFieldValue<bool, unsigned __int32> bRiggingPegOnly()
    { return { (void*)this, "bRiggingPegOnly" }; }
    BitFieldValue<bool, unsigned __int32> bShooterCharacterRider()
    { return { (void*)this, "bShooterCharacterRider" }; }
    BitFieldValue<bool, unsigned __int32> bSpawnWithFullHealth()
    { return { (void*)this, "bSpawnWithFullHealth" }; }
    BitFieldValue<bool, unsigned __int32> bUpdateSailsVisualsByPercentage()
    { return { (void*)this, "bUpdateSailsVisualsByPercentage" }; }
    BitFieldValue<bool, unsigned __int32> bUseConstantSailInterpolation()
    { return { (void*)this, "bUseConstantSailInterpolation" }; }
    BitFieldValue<bool, unsigned __int32> bUseSailSounds()
    { return { (void*)this, "bUseSailSounds" }; }
    BitFieldValue<bool, unsigned __int32> bUseSeatNumInHandSocketName()
    { return { (void*)this, "bUseSeatNumInHandSocketName" }; }
    BitFieldValue<bool, unsigned __int32> bUsesBillowMaterialParam()
    { return { (void*)this, "bUsesBillowMaterialParam" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALSHIPSAILCOMPONENT_H

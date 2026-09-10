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
    // endereco: cache_pdb_25090264
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
    // endereco: cache_pdb_25090264
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
    // endereco: cache_pdb_25090264
    BrzPonteiro Net_SetUnMannedGoalAngle(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalShipSailComponent.Net_SetUnMannedGoalAngle(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipSailComponent.Net_SetUnMannedThrottleRatio(float)
    // endereco: cache_pdb_25090264
    BrzPonteiro Net_SetUnMannedThrottleRatio(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalShipSailComponent.Net_SetUnMannedThrottleRatio(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipSailComponent.OnRep_SetCanvasHealth()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro OnRep_SetCanvasHealth() const
    {
        return NativeCall<void*>(this, "UPrimalShipSailComponent.OnRep_SetCanvasHealth()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipSailComponent.OnStructurePlacedNotify(APlayerController*,UE::Math::TVector<double>,UE
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro ServerSetSailCanvasHealth_Implementation(float a0, bool a1) const
    {
        return NativeCall<void*, float, bool>(this, "UPrimalShipSailComponent.ServerSetSailCanvasHealth_Implementation(float,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipSailComponent.SetFireIntensity(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro SetFireIntensity(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalShipSailComponent.SetFireIntensity(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipSailComponent.SetSailOpenRatio(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro SetSailOpenRatio(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalShipSailComponent.SetSailOpenRatio(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipSailComponent.StartSailRepair()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=455+grafo=6/6]]
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
    //  ancorado em `UnfurlSoundOpenPercentTriggers` +16, medido na build 25090264
    //  (offset absoluto medido: 0x2C8; confianca alta)
    void*& HasTriggeredUnfurlAtThresholdIndexField() const
    { return BrzCampoAncorado<void*>(this, "UnfurlSoundOpenPercentTriggers", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MastRiggingPegOffsetRight` +104, medido na build 25090264
    //  (offset absoluto medido: 0x518; confianca media)
    void*& InitialModSailAttachmentTimerField() const
    { return BrzCampoAncorado<void*>(this, "MastRiggingPegOffsetRight", 104); }
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
    //  ancorado em `bDontRefreshSeatsLocations` +12, medido na build 25090264
    //  (offset absoluto medido: 0x5B4; confianca alta)
    void*& ModifiedSailSeatSocketNameLField() const
    { return BrzCampoAncorado<void*>(this, "bDontRefreshSeatsLocations", 12); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bDontRefreshSeatsLocations` +4, medido na build 25090264
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
    //  ancorado em `NPC_UseLocation_OffsetFromMast` +4, medido na build 25090264
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
    //  ancorado em `MastRiggingPegOffsetRight` +100, medido na build 25090264
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
    BitFieldValue<bool, unsigned __int32> bAlwaysReplicatePropertyConditional()
    { return { (void*)this, "bAlwaysReplicatePropertyConditional" }; }
    BitFieldValue<bool, unsigned __int32> bAutoActivate()
    { return { (void*)this, "bAutoActivate" }; }
    BitFieldValue<bool, unsigned __int32> bCanEverAffectNavigation()
    { return { (void*)this, "bCanEverAffectNavigation" }; }
    BitFieldValue<bool, unsigned __int32> bDedicatedForceTickingEveryFrame()
    { return { (void*)this, "bDedicatedForceTickingEveryFrame" }; }
    BitFieldValue<bool, unsigned __int32> bEditableWhenInherited()
    { return { (void*)this, "bEditableWhenInherited" }; }
    BitFieldValue<bool, unsigned __int32> bHasMultiUseEntries()
    { return { (void*)this, "bHasMultiUseEntries" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NPCUnboardDistance` +4, medido na build 25090264
    //  (offset absoluto medido: 0x230; confianca alta)
    void*& bHasPlayedTautSoundField() const
    { return BrzCampoAncorado<void*>(this, "NPCUnboardDistance", 4); }
    BitFieldValue<bool, unsigned __int32> bIsActive()
    { return { (void*)this, "bIsActive" }; }
    BitFieldValue<bool, unsigned __int32> bIsEditorOnly()
    { return { (void*)this, "bIsEditorOnly" }; }
    BitFieldValue<bool, unsigned __int32> bNetAddressable()
    { return { (void*)this, "bNetAddressable" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyInitialReplication()
    { return { (void*)this, "bOnlyInitialReplication" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyRelevantToOwner()
    { return { (void*)this, "bOnlyRelevantToOwner" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnClient()
    { return { (void*)this, "bPreventOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnConsoles()
    { return { (void*)this, "bPreventOnConsoles" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnDedicatedServer()
    { return { (void*)this, "bPreventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnNonDedicatedHost()
    { return { (void*)this, "bPreventOnNonDedicatedHost" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateUsingRegisteredSubObjectList()
    { return { (void*)this, "bReplicateUsingRegisteredSubObjectList" }; }
    BitFieldValue<bool, unsigned __int32> bReplicates()
    { return { (void*)this, "bReplicates" }; }
    BitFieldValue<bool, unsigned __int32> bStasisPreventUnregister()
    { return { (void*)this, "bStasisPreventUnregister" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentCreated()
    { return { (void*)this, "bUseBPOnComponentCreated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentDestroyed()
    { return { (void*)this, "bUseBPOnComponentDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentTick()
    { return { (void*)this, "bUseBPOnComponentTick" }; }
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

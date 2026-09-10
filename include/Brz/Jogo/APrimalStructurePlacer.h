// ==========================================================================
//  APrimalStructurePlacer — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALSTRUCTUREPLACER_H
#define BRZ_SDK_JOGO_APRIMALSTRUCTUREPLACER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct APrimalStructure;
struct FItemNetID;
struct FName;
struct UTexture2D;

#include "AInfo.h"

struct APrimalStructurePlacer : public AInfo
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalStructurePlacer"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructurePlacer.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "APrimalStructurePlacer.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructurePlacer.BeginState(EPrimalStructurePlacerState)
    // endereco: casamento de bytes com a build de referencia
    void BeginState(int a0) const
    {
        NativeCall<void, int>(this, "APrimalStructurePlacer.BeginState(EPrimalStructurePlacerState)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructurePlacer.CanDrawBuildingUI()
    // endereco: cache_pdb_25090264
    BrzPonteiro CanDrawBuildingUI() const
    {
        return NativeCall<void*>(this, "APrimalStructurePlacer.CanDrawBuildingUI()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructurePlacer.CanStartPlacingStructure()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool CanStartPlacingStructure() const
    {
        return NativeCall<bool>(this, "APrimalStructurePlacer.CanStartPlacingStructure()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructurePlacer.CancelPlacingStructure(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void CancelPlacingStructure(int a0) const
    {
        NativeCall<void, int>(this, "APrimalStructurePlacer.CancelPlacingStructure(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructurePlacer.ConfirmPlacingStructure(bool)
    // endereco: casamento de bytes com a build de referencia
    bool ConfirmPlacingStructure(bool a0) const
    {
        return NativeCall<bool, bool>(this, "APrimalStructurePlacer.ConfirmPlacingStructure(bool)", a0);
    }

    // jogo_confirmou_dump
    //   APrimalStructurePlacer.CycleNextStructureToPlace()
    // endereco: casamento de bytes com a build de referencia
    void CycleNextStructureToPlace() const
    {
        NativeCall<void>(this, "APrimalStructurePlacer.CycleNextStructureToPlace()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructurePlacer.CyclePlacingRotationMode()
    // endereco: cache_pdb_25090264
    void CyclePlacingRotationMode() const
    {
        NativeCall<void>(this, "APrimalStructurePlacer.CyclePlacingRotationMode()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructurePlacer.CycleSnapPoint(bool)
    // endereco: casamento de bytes com a build de referencia
    void CycleSnapPoint(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalStructurePlacer.CycleSnapPoint(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructurePlacer.CycleYawIncrement()
    // endereco: cache_pdb_25090264
    void CycleYawIncrement() const
    {
        NativeCall<void>(this, "APrimalStructurePlacer.CycleYawIncrement()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructurePlacer.DrawHUD(AShooterHUD*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    void DrawHUD(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructurePlacer.DrawHUD(AShooterHUD*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructurePlacer.DrawStructurePreviewHUD(AShooterHUD*,APrimalStructure*)
    // endereco: casamento de bytes com a build de referencia
    void DrawStructurePreviewHUD(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalStructurePlacer.DrawStructurePreviewHUD(AShooterHUD*,APrimalStructure*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructurePlacer.EndState(EPrimalStructurePlacerState)
    // endereco: casamento de bytes com a build de referencia
    void EndState(int a0) const
    {
        NativeCall<void, int>(this, "APrimalStructurePlacer.EndState(EPrimalStructurePlacerState)", a0);
    }

    // dump_sobre_sdk_287a0
    //   APrimalStructurePlacer.FinalStructurePlacement(APlayerController*,int,UE::Math::TVector<double>,
    // endereco: casamento de bytes com a build de referencia
    void FinalStructurePlacement(void* a0, int a1, void* a2, void* a3, void* a4, unsigned long long a5, void* a6, void* a7, bool a8, bool a9, int a10) const
    {
        NativeCall<void, void*, int, void*, void*, void*, unsigned long long, void*, void*, bool, bool, int>(this, "APrimalStructurePlacer.FinalStructurePlacement(APlayerController*,int,UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TRotator<double>,FItemNetID,FPlacementData,FBPNetExecParams,bool,bool,int)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructurePlacer.GetLastPlacementProperties(UE::Math::TVector<double>&,UE::Math::TRotator<
    // endereco: cache_pdb_25090264
    BrzPonteiro GetLastPlacementProperties(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalStructurePlacer.GetLastPlacementProperties(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,UE::Math::TRotator<double>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructurePlacer.GetStructureToStartPlacing(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetStructureToStartPlacing(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructurePlacer.GetStructureToStartPlacing(UPrimalItem*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructurePlacer.GotoState(EPrimalStructurePlacerState)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GotoState(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalStructurePlacer.GotoState(EPrimalStructurePlacerState)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructurePlacer.HandleOnUseAction(bool)
    // endereco: casamento de bytes com a build de referencia
    bool HandleOnUseAction(bool a0) const
    {
        return NativeCall<bool, bool>(this, "APrimalStructurePlacer.HandleOnUseAction(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructurePlacer.HandleOnUseActionTimer()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=124]]
    void HandleOnUseActionTimer() const
    {
        NativeCall<void>(this, "APrimalStructurePlacer.HandleOnUseActionTimer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructurePlacer.HandleSnapCycleAction(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    bool HandleSnapCycleAction(bool a0, bool a1) const
    {
        return NativeCall<bool, bool, bool>(this, "APrimalStructurePlacer.HandleSnapCycleAction(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructurePlacer.HandleSnapCycleActionTimer()
    // endereco: cache_pdb_25090264
    void HandleSnapCycleActionTimer() const
    {
        NativeCall<void>(this, "APrimalStructurePlacer.HandleSnapCycleActionTimer()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructurePlacer.HandleToggleCancelAction(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro HandleToggleCancelAction(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalStructurePlacer.HandleToggleCancelAction(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructurePlacer.HandleToggleCancelActionTimer()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=172+grafo=3/3]]
    void HandleToggleCancelActionTimer() const
    {
        NativeCall<void>(this, "APrimalStructurePlacer.HandleToggleCancelActionTimer()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructurePlacer.HandleToggleGhostAction(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=622+grafo=12/12]]
    BrzPonteiro HandleToggleGhostAction(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalStructurePlacer.HandleToggleGhostAction(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructurePlacer.HandleToggleGhostActionTimer()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=36]]
    void HandleToggleGhostActionTimer() const
    {
        NativeCall<void>(this, "APrimalStructurePlacer.HandleToggleGhostActionTimer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructurePlacer.IsPlacingActive()
    // endereco: cache_pdb_25090264
    bool IsPlacingActive() const
    {
        return NativeCall<bool>(this, "APrimalStructurePlacer.IsPlacingActive()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructurePlacer.SetChoosingRotation(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=28]]
    void SetChoosingRotation(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalStructurePlacer.SetChoosingRotation(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructurePlacer.SetForceDisplayMissionAreaStructureNoBuildZones(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetForceDisplayMissionAreaStructureNoBuildZones(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalStructurePlacer.SetForceDisplayMissionAreaStructureNoBuildZones(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructurePlacer.StartPlacingStructure(TSubclassOf<APrimalStructure>,FItemNetID&,bool)
    // endereco: casamento de bytes com a build de referencia
    void StartPlacingStructure(void* a0, void* a1, bool a2) const
    {
        NativeCall<void, void*, void*, bool>(this, "APrimalStructurePlacer.StartPlacingStructure(TSubclassOf<APrimalStructure>,FItemNetID&,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructurePlacer.StartPlacingStructure(int,FItemNetID&,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void StartPlacingStructure(int a0, void* a1, bool a2, bool a3) const
    {
        NativeCall<void, int, void*, bool, bool>(this, "APrimalStructurePlacer.StartPlacingStructure(int,FItemNetID&,bool,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructurePlacer.TestStructurePlacement(TSubclassOf<APrimalStructure>,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    bool TestStructurePlacement(void* a0, bool a1, bool a2) const
    {
        return NativeCall<bool, void*, bool, bool>(this, "APrimalStructurePlacer.TestStructurePlacement(TSubclassOf<APrimalStructure>,bool,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructurePlacer.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "APrimalStructurePlacer.Tick(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructurePlacer.ToggleDebugStructures()
    // endereco: cache_pdb_25090264
    BrzPonteiro ToggleDebugStructures() const
    {
        return NativeCall<void*>(this, "APrimalStructurePlacer.ToggleDebugStructures()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructurePlacer.ToggleExtendedRange(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ToggleExtendedRange(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructurePlacer.ToggleExtendedRange(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructurePlacer.TryStartPlacingTargetStructure()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryStartPlacingTargetStructure() const
    {
        return NativeCall<void*>(this, "APrimalStructurePlacer.TryStartPlacingTargetStructure()");
    }

    FName& AltPitchAxisNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructurePlacer.AltPitchAxisName"); }
    float& AltPitchSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructurePlacer.AltPitchSpeed"); }
    FName& AltRotationAxisNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructurePlacer.AltRotationAxisName"); }
    float& AltRotationSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructurePlacer.AltRotationSpeed"); }
    APrimalStructure*& CurrentPlacingStructureField() const
    { return *GetNativePointerField<APrimalStructure**>(this, "APrimalStructurePlacer.CurrentPlacingStructure"); }
    int& CurrentPlacingStructureIndexField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructurePlacer.CurrentPlacingStructureIndex"); }
    APrimalStructure*& CurrentSnapTargetField() const
    { return *GetNativePointerField<APrimalStructure**>(this, "APrimalStructurePlacer.CurrentSnapTarget"); }
    int& CurrentStateField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructurePlacer.CurrentState"); }
    TWeakObjectPtr<void>& CurrentlyPlacingWithItemField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalStructurePlacer.CurrentlyPlacingWithItem"); }
    BrzCampoPonteiro ExtendedRangeBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructurePlacer.ExtendedRangeBuff")); }
    UTexture2D*& GamepadButtonGiveDefaultWeaponField() const
    { return *GetNativePointerField<UTexture2D**>(this, "APrimalStructurePlacer.GamepadButtonGiveDefaultWeapon"); }
    UTexture2D*& GamepadButtonUseField() const
    { return *GetNativePointerField<UTexture2D**>(this, "APrimalStructurePlacer.GamepadButtonUse"); }
    UTexture2D*& GamepadReloadField() const
    { return *GetNativePointerField<UTexture2D**>(this, "APrimalStructurePlacer.GamepadReload"); }
    BrzCampoPonteiro GhostStructureClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructurePlacer.GhostStructureClass")); }
    FString& HoldGiveDefaultWeaponStringField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructurePlacer.HoldGiveDefaultWeaponString"); }
    FString& HoldUseStringField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructurePlacer.HoldUseString"); }
    FString& KeyGiveDefaultWeaponStringField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructurePlacer.KeyGiveDefaultWeaponString"); }
    FString& KeyReloadStringField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructurePlacer.KeyReloadString"); }
    FString& KeyUseStringField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructurePlacer.KeyUseString"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NumVariantsString` +24, medido na build 25090264
    //  (offset absoluto medido: 0x648; confianca alta)
    void*& LastExtendedRangeRequestTimeField() const
    { return BrzCampoAncorado<void*>(this, "NumVariantsString", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NumVariantsString` +40, medido na build 25090264
    //  (offset absoluto medido: 0x658; confianca media)
    void*& LastHitLocField() const
    { return BrzCampoAncorado<void*>(this, "NumVariantsString", 40); }
    FString& NumVariantsStringField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructurePlacer.NumVariantsString"); }
    FName& PitchAxisNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructurePlacer.PitchAxisName"); }
    float& PitchSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructurePlacer.PitchSpeed"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NumVariantsString` +32, medido na build 25090264
    //  (offset absoluto medido: 0x650; confianca alta)
    FItemNetID& PlaceUsingItemIDField() const
    { return BrzCampoAncorado<FItemNetID>(this, "NumVariantsString", 32); }
    TArray<void*>& PlaceableStructuresField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructurePlacer.PlaceableStructures"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NumVariantsString` +16, medido na build 25090264
    //  (offset absoluto medido: 0x640; confianca alta)
    float& PlacementAdjustHeightAmtField() const
    { return BrzCampoAncorado<float>(this, "NumVariantsString", 16); }
    int& PlacingAlignmentModeField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructurePlacer.PlacingAlignmentMode"); }
    int& PlacingRotationModeField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructurePlacer.PlacingRotationMode"); }
    FString& PressGiveDefaultWeaponStringField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructurePlacer.PressGiveDefaultWeaponString"); }
    FString& PressUseStringField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructurePlacer.PressUseString"); }
    BrzCampoPonteiro PreviewMaterialLuminanceCurveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructurePlacer.PreviewMaterialLuminanceCurve")); }
    FName& RotationAxisNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructurePlacer.RotationAxisName"); }
    BrzCampoPonteiro RotationIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructurePlacer.RotationIcon")); }
    float& RotationIconScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructurePlacer.RotationIconScale"); }
    float& RotationIconSizeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructurePlacer.RotationIconSize"); }
    float& RotationSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructurePlacer.RotationSpeed"); }
    BrzCampoPonteiro StructurePreventionBoundsBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructurePlacer.StructurePreventionBoundsBuff")); }
    BrzCampoPonteiro TogglePlannedStructuresIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructurePlacer.TogglePlannedStructuresIcon")); }
    float& YawOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructurePlacer.YawOffset"); }
    float& YawOffsetIncrementField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructurePlacer.YawOffsetIncrement"); }
    BitFieldValue<bool, unsigned __int32> bDebugStructures()
    { return { (void*)this, "bDebugStructures" }; }
    BitFieldValue<bool, unsigned __int32> bForceDisplayMissionAreaStructureNoBuildZones()
    { return { (void*)this, "bForceDisplayMissionAreaStructureNoBuildZones" }; }
    BitFieldValue<bool, unsigned __int32> bIsCheating()
    { return { (void*)this, "bIsCheating" }; }
    BitFieldValue<bool, unsigned __int32> bLastPlacementWasSnapped()
    { return { (void*)this, "bLastPlacementWasSnapped" }; }
    BitFieldValue<bool, unsigned __int32> bLastPlacementOnSaddle()
    { return { (void*)this, "bLastPlacementOnSaddle" }; }
    BitFieldValue<bool, unsigned __int32> bIsPlacementFlipped()
    { return { (void*)this, "bIsPlacementFlipped" }; }
    BitFieldValue<bool, unsigned __int32> bLockCameraDuringChooseRotation()
    { return { (void*)this, "bLockCameraDuringChooseRotation" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreOptionalSnaps()
    { return { (void*)this, "bIgnoreOptionalSnaps" }; }
    BitFieldValue<bool, unsigned __int32> bIsPlacingGhostStructures()
    { return { (void*)this, "bIsPlacingGhostStructures" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALSTRUCTUREPLACER_H

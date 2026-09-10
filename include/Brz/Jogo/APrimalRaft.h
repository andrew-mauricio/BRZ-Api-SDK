// ==========================================================================
//  APrimalRaft — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALRAFT_H
#define BRZ_SDK_JOGO_APRIMALRAFT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UAudioComponent;
struct USoundBase;
struct UTexture2D;

#include "APrimalDinoCharacter.h"

struct APrimalRaft : public APrimalDinoCharacter
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalRaft"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalRaft.AllowExtendedCraftingFunctionality()
    // endereco: cache_pdb_25090264
    bool AllowExtendedCraftingFunctionality() const
    {
        return NativeCall<bool>(this, "APrimalRaft.AllowExtendedCraftingFunctionality()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalRaft.Anchor()
    // endereco: cache_pdb_25090264
    BrzPonteiro Anchor() const
    {
        return NativeCall<void*>(this, "APrimalRaft.Anchor()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalRaft.BPOverrideSwimmingVelocity(UE::Math::TVector<double>,UE::Math::TVector<double>,float
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOverrideSwimmingVelocity(void* a0, void* a1, float a2, float a3, float a4) const
    {
        return NativeCall<void*, void*, void*, float, float, float>(this, "APrimalRaft.BPOverrideSwimmingVelocity(UE::Math::TVector<double>,UE::Math::TVector<double>,float,float,float)", a0, a1, a2, a3, a4);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalRaft.BP_OverrideSwimmingAcceleration(UE::Math::TVector<double>&,float)
    // endereco: casamento de bytes com a build de referencia
    void BP_OverrideSwimmingAcceleration(void* a0, float a1) const
    {
        NativeCall<void, void*, float>(this, "APrimalRaft.BP_OverrideSwimmingAcceleration(UE::Math::TVector<double>&,float)", a0, a1);
    }

    // dump_sobre_sdk_287a0
    //   APrimalRaft.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "APrimalRaft.BeginPlay()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalRaft.CanAnchor()
    // endereco: cache_pdb_25090264
    BrzPonteiro CanAnchor() const
    {
        return NativeCall<void*>(this, "APrimalRaft.CanAnchor()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalRaft.CanAnchorAtCurrentOceanLocation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanAnchorAtCurrentOceanLocation() const
    {
        return NativeCall<void*>(this, "APrimalRaft.CanAnchorAtCurrentOceanLocation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalRaft.CanCombineMoves()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanCombineMoves() const
    {
        return NativeCall<void*>(this, "APrimalRaft.CanCombineMoves()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalRaft.CanEvaluateOceanState()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro CanEvaluateOceanState() const
    {
        return NativeCall<void*>(this, "APrimalRaft.CanEvaluateOceanState()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalRaft.CanOrder(APrimalCharacter*,bool)
    // endereco: casamento de bytes com a build de referencia
    bool CanOrder(void* a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "APrimalRaft.CanOrder(APrimalCharacter*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalRaft.CanPlayerCheatAnchor(APlayerController*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=218+chamadores=4+grafo=3/3]]
    BrzPonteiro CanPlayerCheatAnchor(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalRaft.CanPlayerCheatAnchor(APlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalRaft.CanStartAnchorStateChange(APlayerController*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanStartAnchorStateChange(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalRaft.CanStartAnchorStateChange(APlayerController*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalRaft.EnsureDecayClocksInitialized()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro EnsureDecayClocksInitialized() const
    {
        return NativeCall<void*>(this, "APrimalRaft.EnsureDecayClocksInitialized()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalRaft.GetDescriptiveName()
    // endereco: casamento de bytes com a build de referencia
    void GetDescriptiveName(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalRaft.GetDescriptiveName()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalRaft.GetEntryDescription()
    // endereco: casamento de bytes com a build de referencia
    void GetEntryDescription(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalRaft.GetEntryDescription()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalRaft.GetEntryIcon(UObject*,bool)
    // classe: a funcao mora em APrimalDinoCharacter, e APrimalRaft herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    UTexture2D* GetEntryIcon(void* a0, bool a1) const
    {
        return NativeCall<UTexture2D*, void*, bool>(this, "APrimalDinoCharacter.GetEntryIcon(UObject*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalRaft.GetEntryString()
    // endereco: casamento de bytes com a build de referencia
    void GetEntryString(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalRaft.GetEntryString()", retorno);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalRaft.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<3
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMultiUseEntries(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "APrimalRaft.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalRaft.HasAnchorOccupant()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro HasAnchorOccupant() const
    {
        return NativeCall<void*>(this, "APrimalRaft.HasAnchorOccupant()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalRaft.IsInOcean()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro IsInOcean() const
    {
        return NativeCall<void*>(this, "APrimalRaft.IsInOcean()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalRaft.MoveForward(float)
    // endereco: casamento de bytes com a build de referencia
    void MoveForward(float a0) const
    {
        NativeCall<void, float>(this, "APrimalRaft.MoveForward(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalRaft.MoveRight(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=77]]
    void MoveRight(float a0) const
    {
        NativeCall<void, float>(this, "APrimalRaft.MoveRight(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalRaft.OnDeserializedByGame(EOnDeserializationType::Type)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=58]]
    void OnDeserializedByGame(int a0) const
    {
        NativeCall<void, int>(this, "APrimalRaft.OnDeserializedByGame(EOnDeserializationType::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalRaft.OnMovementModeChanged(EMovementMode,unsignedchar)
    // endereco: casamento de bytes com a build de referencia
    void OnMovementModeChanged(int a0, unsigned char a1) const
    {
        NativeCall<void, int, unsigned char>(this, "APrimalRaft.OnMovementModeChanged(EMovementMode,unsignedchar)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalRaft.OverrideSwimmingAcceleration(UE::Math::TVector<double>&,float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=152]]
    void OverrideSwimmingAcceleration(void* a0, float a1) const
    {
        NativeCall<void, void*, float>(this, "APrimalRaft.OverrideSwimmingAcceleration(UE::Math::TVector<double>&,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalRaft.OverrideSwimmingVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float
    // endereco: casamento de bytes com a build de referencia
    void OverrideSwimmingVelocity(void* a0, void* a1, void* a2, void* a3, float a4) const
    {
        NativeCall<void, void*, void*, void*, void*, float>(this, "APrimalRaft.OverrideSwimmingVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float&,float&,float)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalRaft.PlayDying(float,FDamageEvent&,APawn*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PlayDying(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, float, void*, void*, void*>(this, "APrimalRaft.PlayDying(float,FDamageEvent&,APawn*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalRaft.PostInitializeComponents()
    // endereco: casamento de bytes com a build de referencia
    void PostInitializeComponents() const
    {
        NativeCall<void>(this, "APrimalRaft.PostInitializeComponents()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalRaft.PostNetReceiveLocationAndRotation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PostNetReceiveLocationAndRotation() const
    {
        return NativeCall<void*>(this, "APrimalRaft.PostNetReceiveLocationAndRotation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalRaft.PreventCharacterBasing(AActor*,UPrimitiveComponent*)
    // endereco: casamento de bytes com a build de referencia
    bool PreventCharacterBasing(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "APrimalRaft.PreventCharacterBasing(AActor*,UPrimitiveComponent*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalRaft.RefreshPhysicsVolumeForAnchor()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro RefreshPhysicsVolumeForAnchor() const
    {
        return NativeCall<void*>(this, "APrimalRaft.RefreshPhysicsVolumeForAnchor()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalRaft.ServerHandleNetExecCommand(APlayerController*,FName,FBPNetExecParams&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerHandleNetExecCommand(void* a0, unsigned long long a1, void* a2) const
    {
        return NativeCall<void*, void*, unsigned long long, void*>(this, "APrimalRaft.ServerHandleNetExecCommand(APlayerController*,FName,FBPNetExecParams&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalRaft.SetAnchorPropertyDirty()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro SetAnchorPropertyDirty() const
    {
        return NativeCall<void*>(this, "APrimalRaft.SetAnchorPropertyDirty()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalRaft.ShouldBlockMovementForAnchor()
    // endereco: casamento de bytes com a build de referencia
    bool ShouldBlockMovementForAnchor() const
    {
        return NativeCall<bool>(this, "APrimalRaft.ShouldBlockMovementForAnchor()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalRaft.ShouldIgnoreHitResult(UWorld*,FHitResult&,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShouldIgnoreHitResult(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalRaft.ShouldIgnoreHitResult(UWorld*,FHitResult&,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalRaft.ShouldTreadWater()
    // endereco: cache_pdb_25090264
    bool ShouldTreadWater() const
    {
        return NativeCall<bool>(this, "APrimalRaft.ShouldTreadWater()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalRaft.SyncAllyRangeDecayTime()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=59]]
    BrzPonteiro SyncAllyRangeDecayTime() const
    {
        return NativeCall<void*>(this, "APrimalRaft.SyncAllyRangeDecayTime()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalRaft.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "APrimalRaft.Tick(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalRaft.TryAnchor(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryAnchor(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalRaft.TryAnchor(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalRaft.TryAutoUnanchorForUse(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool TryAutoUnanchorForUse(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalRaft.TryAutoUnanchorForUse(APlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalRaft.TryGetWaterVolume()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro TryGetWaterVolume() const
    {
        return NativeCall<void*>(this, "APrimalRaft.TryGetWaterVolume()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalRaft.TryMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<void*, void*, int, int>(this, "APrimalRaft.TryMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalRaft.Unanchor()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro Unanchor() const
    {
        return NativeCall<void*>(this, "APrimalRaft.Unanchor()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalRaft.Unstasis()
    // endereco: casamento de bytes com a build de referencia
    void Unstasis() const
    {
        NativeCall<void>(this, "APrimalRaft.Unstasis()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalRaft.UpdateAllyRangeDecayTime(double)
    // endereco: cache_pdb_25090264
    BrzPonteiro UpdateAllyRangeDecayTime(double a0) const
    {
        return NativeCall<void*, double>(this, "APrimalRaft.UpdateAllyRangeDecayTime(double)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalRaft.UpdateDecayPreventionState()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateDecayPreventionState() const
    {
        return NativeCall<void*>(this, "APrimalRaft.UpdateDecayPreventionState()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalRaft.UpdateSwimmingState()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=171]]
    void UpdateSwimmingState() const
    {
        NativeCall<void>(this, "APrimalRaft.UpdateSwimmingState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalRaft.ValidateAnchorState()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro ValidateAnchorState() const
    {
        return NativeCall<void*>(this, "APrimalRaft.ValidateAnchorState()");
    }

    BrzCampoPonteiro AnchorLoweringIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRaft.AnchorLoweringIcon")); }
    float& AnchorMaximumDistanceFromShoreField() const
    { return *GetNativePointerField<float*>(this, "APrimalRaft.AnchorMaximumDistanceFromShore"); }
    float& AnchorMaximumTraceDepthField() const
    { return *GetNativePointerField<float*>(this, "APrimalRaft.AnchorMaximumTraceDepth"); }
    float& AnchorMinimumWaveDampingField() const
    { return *GetNativePointerField<float*>(this, "APrimalRaft.AnchorMinimumWaveDamping"); }
    BrzCampoPonteiro AnchorRaisingIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalRaft.AnchorRaisingIcon")); }
    float& AnchoredAutoDestroyTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalRaft.AnchoredAutoDestroyTime"); }
    double& AutoAnchorCountdownStartTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalRaft.AutoAnchorCountdownStartTime"); }
    float& AutoAnchorDelaySecField() const
    { return *GetNativePointerField<float*>(this, "APrimalRaft.AutoAnchorDelaySec"); }
    TObjectPtr<UTexture2D>& IconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalRaft.Icon"); }
    double& LastAnchorLiftedPersistentTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalRaft.LastAnchorLiftedPersistentTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnchoredAutoDestroyTime` +12, medido na build 25090264
    //  (offset absoluto medido: 0x2AE4; confianca alta)
    int& LastFrameDisabledForcedVelcoityDirectionField() const
    { return BrzCampoAncorado<int>(this, "AnchoredAutoDestroyTime", 12); }
    double& LastRaftAllyRangePersistentTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalRaft.LastRaftAllyRangePersistentTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnchoredAutoDestroyTime` +4, medido na build 25090264
    //  (offset absoluto medido: 0x2ADC; confianca alta)
    float& LastTracedWaterZField() const
    { return BrzCampoAncorado<float>(this, "AnchoredAutoDestroyTime", 4); }
    UAudioComponent*& MovingSoundComponentField() const
    { return *GetNativePointerField<UAudioComponent**>(this, "APrimalRaft.MovingSoundComponent"); }
    USoundBase*& MovingSoundCueField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalRaft.MovingSoundCue"); }
    double& NetworkCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalRaft.NetworkCreationTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnchoredAutoDestroyTime` +8, medido na build 25090264
    //  (offset absoluto medido: 0x2AE0; confianca alta)
    int& NoWaterTriesField() const
    { return BrzCampoAncorado<int>(this, "AnchoredAutoDestroyTime", 8); }
    float& SurfaceAdjustmentZInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalRaft.SurfaceAdjustmentZInterpSpeed"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastRaftAllyRangePersistentTime` +8, medido na build 25090264
    //  (offset absoluto medido: 0x2AB8; confianca alta)
    double& TimeSinceLastFadeOutField() const
    { return BrzCampoAncorado<double>(this, "LastRaftAllyRangePersistentTime", 8); }
    float& UnAnchoredAutoDestroyTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalRaft.UnAnchoredAutoDestroyTime"); }
    BitFieldValue<bool, unsigned __int32> bRaftAllowCrafting()
    { return { (void*)this, "bRaftAllowCrafting" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideSwimmingVelocity()
    { return { (void*)this, "bBPOverrideSwimmingVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideSwimmingAcceleration()
    { return { (void*)this, "bBPOverrideSwimmingAcceleration" }; }
    BitFieldValue<bool, unsigned __int32> bAllowOverrideUpdatesWhenNoRaftRider()
    { return { (void*)this, "bAllowOverrideUpdatesWhenNoRaftRider" }; }
    BitFieldValue<bool, unsigned __int32> bDisableGravityAdjustement()
    { return { (void*)this, "bDisableGravityAdjustement" }; }
    BitFieldValue<bool, unsigned __int32> bUseTracedSurfaceAdjustment()
    { return { (void*)this, "bUseTracedSurfaceAdjustment" }; }
    BitFieldValue<bool, unsigned __int32> bRaftAllowWalkingState()
    { return { (void*)this, "bRaftAllowWalkingState" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTargetingBasedCharacters()
    { return { (void*)this, "bAllowTargetingBasedCharacters" }; }
    BitFieldValue<bool, unsigned __int32> bAutoUnanchorOnDrive()
    { return { (void*)this, "bAutoUnanchorOnDrive" }; }
    BitFieldValue<bool, unsigned __int32> bCanAnchor()
    { return { (void*)this, "bCanAnchor" }; }
    BitFieldValue<bool, unsigned __int32> bCheatAnchored()
    { return { (void*)this, "bCheatAnchored" }; }
    BitFieldValue<bool, unsigned __int32> bIsAnchored()
    { return { (void*)this, "bIsAnchored" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALRAFT_H

// ==========================================================================
//  APrimalStructureElevatorPlatform — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALSTRUCTUREELEVATORPLATFORM_H
#define BRZ_SDK_JOGO_APRIMALSTRUCTUREELEVATORPLATFORM_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct USoundBase;
struct UTexture2D;

#include "APrimalStructure.h"

struct APrimalStructureElevatorPlatform : public APrimalStructure
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalStructureElevatorPlatform"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureElevatorPlatform.Activate(APlayerController*,bool,EPrimalStructureElevatorState,
    // endereco: casamento de bytes com a build de referencia
    void Activate(void* a0, bool a1, int a2, float a3) const
    {
        NativeCall<void, void*, bool, int, float>(this, "APrimalStructureElevatorPlatform.Activate(APlayerController*,bool,EPrimalStructureElevatorState,float)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureElevatorPlatform.AddLiftedActor(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddLiftedActor(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureElevatorPlatform.AddLiftedActor(APrimalCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureElevatorPlatform.AllowStructureAccess(APlayerController*)
    // classe: a funcao mora em APrimalStructure, e APrimalStructureElevatorPlatform herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    bool AllowStructureAccess(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructure.AllowStructureAccess(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureElevatorPlatform.ApplyPinCode(AShooterPlayerController*,int,bool,int)
    // endereco: casamento de bytes com a build de referencia
    bool ApplyPinCode(void* a0, int a1, bool a2, int a3) const
    {
        return NativeCall<bool, void*, int, bool, int>(this, "APrimalStructureElevatorPlatform.ApplyPinCode(AShooterPlayerController*,int,bool,int)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureElevatorPlatform.BPElevatorStopped(bool,EPrimalStructureElevatorState)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPElevatorStopped(bool a0, int a1) const
    {
        return NativeCall<void*, bool, int>(this, "APrimalStructureElevatorPlatform.BPElevatorStopped(bool,EPrimalStructureElevatorState)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureElevatorPlatform.BeginPlay()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=121]]
    void BeginPlay() const
    {
        NativeCall<void>(this, "APrimalStructureElevatorPlatform.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureElevatorPlatform.CalculateTrackHeight()
    // endereco: casamento de bytes com a build de referencia
    void CalculateTrackHeight() const
    {
        NativeCall<void>(this, "APrimalStructureElevatorPlatform.CalculateTrackHeight()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureElevatorPlatform.CanBeActivated()
    // endereco: cache_pdb_25090264
    BrzPonteiro CanBeActivated() const
    {
        return NativeCall<void*>(this, "APrimalStructureElevatorPlatform.CanBeActivated()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureElevatorPlatform.CanOpen(APlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=105]]
    bool CanOpen(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructureElevatorPlatform.CanOpen(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureElevatorPlatform.ClientMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    void ClientMultiUse(void* a0, int a1, int a2) const
    {
        NativeCall<void, void*, int, int>(this, "APrimalStructureElevatorPlatform.ClientMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // jogo_confirmou_dump
    //   APrimalStructureElevatorPlatform.Deactivate(bool,bool,float)
    // endereco: casamento de bytes com a build de referencia
    void Deactivate(bool a0, bool a1, float a2) const
    {
        NativeCall<void, bool, bool, float>(this, "APrimalStructureElevatorPlatform.Deactivate(bool,bool,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureElevatorPlatform.Demolish(APlayerController*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void Demolish(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalStructureElevatorPlatform.Demolish(APlayerController*,AActor*)", a0, a1);
    }

    // dump_sobre_sdk_287a0
    //   APrimalStructureElevatorPlatform.Destroyed()
    // endereco: casamento de bytes com a build de referencia
    void Destroyed() const
    {
        NativeCall<void>(this, "APrimalStructureElevatorPlatform.Destroyed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureElevatorPlatform.GetAllTrackStructures(TArray<AActor*,TSizedDefaultAllocator<32>
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void GetAllTrackStructures(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureElevatorPlatform.GetAllTrackStructures(TArray<AActor*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureElevatorPlatform.GetCurrentLiftedWeight()
    // endereco: cache_pdb_25090264
    float GetCurrentLiftedWeight() const
    {
        return NativeCall<float>(this, "APrimalStructureElevatorPlatform.GetCurrentLiftedWeight()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureElevatorPlatform.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSi
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=315]]
    void GetMultiUseEntries(void* a0, void* a1, int a2) const
    {
        NativeCall<void, void*, void*, int>(this, "APrimalStructureElevatorPlatform.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureElevatorPlatform.GetTrackMultiUseEntries(APlayerController*,TArray<FMultiUseEntr
    // endereco: casamento de bytes com a build de referencia
    void GetTrackMultiUseEntries(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalStructureElevatorPlatform.GetTrackMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureElevatorPlatform.HasReachedMaxWeight()
    // endereco: cache_pdb_25090264
    bool HasReachedMaxWeight() const
    {
        return NativeCall<bool>(this, "APrimalStructureElevatorPlatform.HasReachedMaxWeight()");
    }

    // dump_sobre_sdk_287a0
    //   APrimalStructureElevatorPlatform.IsAllowedToBuild(APlayerController*,UE::Math::TVector<double>,U
    // endereco: casamento de bytes com a build de referencia
    long long IsAllowedToBuild(void* a0, void* a1, void* a2, void* a3, bool a4, void* a5, bool a6, bool a7, void* a8) const
    {
        return NativeCall<long long, void*, void*, void*, void*, bool, void*, bool, bool, void*>(this, "APrimalStructureElevatorPlatform.IsAllowedToBuild(APlayerController*,UE::Math::TVector<double>,UE::Math::TRotator<double>,FPlacementData&,bool,UE::Math::TRotator<double>,bool,bool,APawn*)", a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureElevatorPlatform.NetExecCommand(FName,FNetExecParams&)
    // endereco: casamento de bytes com a build de referencia
    bool NetExecCommand(unsigned long long a0, void* a1) const
    {
        return NativeCall<bool, unsigned long long, void*>(this, "APrimalStructureElevatorPlatform.NetExecCommand(FName,FNetExecParams&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureElevatorPlatform.OnRep_bIsActivated()
    // endereco: casamento de bytes com a build de referencia
    void OnRep_bIsActivated() const
    {
        NativeCall<void>(this, "APrimalStructureElevatorPlatform.OnRep_bIsActivated()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureElevatorPlatform.PlatformIsActive(TEnumAsByte<EPrimalStructureElevatorState>&)
    // endereco: cache_pdb_25090264
    BrzPonteiro PlatformIsActive(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureElevatorPlatform.PlatformIsActive(TEnumAsByte<EPrimalStructureElevatorState>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureElevatorPlatform.PostNetReceiveLocationAndRotation()
    // endereco: casamento de bytes com a build de referencia
    void PostNetReceiveLocationAndRotation() const
    {
        NativeCall<void>(this, "APrimalStructureElevatorPlatform.PostNetReceiveLocationAndRotation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureElevatorPlatform.RemoveLiftedActor(APrimalCharacter*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro RemoveLiftedActor(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureElevatorPlatform.RemoveLiftedActor(APrimalCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureElevatorPlatform.ServerActivate(APlayerController*,bool,EPrimalStructureElevator
    // endereco: casamento de bytes com a build de referencia
    void ServerActivate(void* a0, bool a1, int a2, float a3) const
    {
        NativeCall<void, void*, bool, int, float>(this, "APrimalStructureElevatorPlatform.ServerActivate(APlayerController*,bool,EPrimalStructureElevatorState,float)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureElevatorPlatform.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "APrimalStructureElevatorPlatform.Tick(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureElevatorPlatform.TryMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    bool TryMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<bool, void*, int, int>(this, "APrimalStructureElevatorPlatform.TryMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureElevatorPlatform.UpdateLocation(float)
    // endereco: casamento de bytes com a build de referencia
    void UpdateLocation(float a0) const
    {
        NativeCall<void, float>(this, "APrimalStructureElevatorPlatform.UpdateLocation(float)", a0);
    }

    TObjectPtr<UTexture2D>& CallToMeIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureElevatorPlatform.CallToMeIcon"); }
    TArray<TWeakObjectPtr<void>>& CarriedActorsField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APrimalStructureElevatorPlatform.CarriedActors"); }
    //  no cache antigo este campo se chamava CarriedRagdolls.
    //  nesta build ele e' `StartMovingSound` — resolve por NOME.
    TArray<TWeakObjectPtr<void>>& CarriedRagdollsField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APrimalStructureElevatorPlatform.StartMovingSound"); }
    float& ClientLocationInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.ClientLocationInterpSpeed"); }
    float& ClientLocationInterpSpeedDownField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.ClientLocationInterpSpeedDown"); }
    float& CurrentLiftedWeightField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.CurrentLiftedWeight"); }
    unsigned int& CurrentPinCodeField() const
    { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureElevatorPlatform.CurrentPinCode"); }
    int& CurrentStateField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureElevatorPlatform.CurrentState"); }
    TObjectPtr<UTexture2D>& DelevateIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureElevatorPlatform.DelevateIcon"); }
    //  no cache antigo este campo se chamava DistanceRepTimer.
    //  nesta build ele e' `DownObstructionTraceLength` — resolve por NOME.
    float& DistanceRepTimerField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.DownObstructionTraceLength"); }
    float& DistanceToTravelField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.DistanceToTravel"); }
    float& DownObstructionTraceLengthField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.DownObstructionTraceLength"); }
    float& DownSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.DownSpeed"); }
    TObjectPtr<UTexture2D>& ElevateIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureElevatorPlatform.ElevateIcon"); }
    float& HeightField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.Height"); }
    float& MaxCarryWeightField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.MaxCarryWeight"); }
    float& MaxHeightField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.MaxHeight"); }
    float& MinHeightField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.MinHeight"); }
    float& ReplicatedZField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.ReplicatedZ"); }
    float& SpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.Speed"); }
    BrzCampoPonteiro StartLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureElevatorPlatform.StartLocation")); }
    USoundBase*& StartMovingSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureElevatorPlatform.StartMovingSound"); }
    TObjectPtr<UTexture2D>& StopIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureElevatorPlatform.StopIcon"); }
    USoundBase*& StopMovingSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureElevatorPlatform.StopMovingSound"); }
    float& TrackTraceLengthField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.TrackTraceLength"); }
    float& TraveledDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.TraveledDistance"); }
    float& UpObstructionTraceLengthField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorPlatform.UpObstructionTraceLength"); }
    BitFieldValue<bool, unsigned __int32> bIsActivated()
    { return { (void*)this, "bIsActivated" }; }
    BitFieldValue<bool, unsigned __int32> bWasActivated()
    { return { (void*)this, "bWasActivated" }; }
    BitFieldValue<bool, unsigned __int32> bUpdateLocation()
    { return { (void*)this, "bUpdateLocation" }; }
    BitFieldValue<bool, unsigned __int32> bAddElevatorMultiUseEntries()
    { return { (void*)this, "bAddElevatorMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bIsLocked()
    { return { (void*)this, "bIsLocked" }; }
    BitFieldValue<bool, unsigned __int32> bIsPinLocked()
    { return { (void*)this, "bIsPinLocked" }; }
    BitFieldValue<bool, unsigned __int32> bAdminOnlyAccess()
    { return { (void*)this, "bAdminOnlyAccess" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPElevatorStopped()
    { return { (void*)this, "bUseBPElevatorStopped" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALSTRUCTUREELEVATORPLATFORM_H

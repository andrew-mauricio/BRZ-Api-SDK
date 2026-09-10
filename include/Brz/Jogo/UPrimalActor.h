// ==========================================================================
//  UPrimalActor — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALACTOR_H
#define BRZ_SDK_JOGO_UPRIMALACTOR_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct FName;
struct UMovementComponent;
struct UObject;
struct UPrimitiveComponent;
struct USceneComponent;
struct UTexture2D;

#include "UObject.h"

struct UPrimalActor : public UObject
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalActor"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.AddControllingMatineeActor(AMatineeActor&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=261]]
    void AddControllingMatineeActor(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalActor.AddControllingMatineeActor(AMatineeActor&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalActor.AllowGrappling()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool AllowGrappling() const
    {
        return NativeCall<bool>(this, "UPrimalActor.AllowGrappling()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.AllowIgnoreCharacterEncroachment(UPrimitiveComponent*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    bool AllowIgnoreCharacterEncroachment(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "UPrimalActor.AllowIgnoreCharacterEncroachment(UPrimitiveComponent*,AActor*)", a0, a1);
    }

    // jogo_confirmou_dump
    //   UPrimalActor.AllowManualMultiUseActivation(APlayerController*,int)
    // endereco: casamento de bytes com a build de referencia
    bool AllowManualMultiUseActivation(void* a0, int a1) const
    {
        return NativeCall<bool, void*, int>(this, "UPrimalActor.AllowManualMultiUseActivation(APlayerController*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.AllowSaving()
    // endereco: casamento de bytes com a build de referencia
    bool AllowSaving() const
    {
        return NativeCall<bool>(this, "UPrimalActor.AllowSaving()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.AllowSeamlessTravel()
    // endereco: casamento de bytes com a build de referencia
    bool AllowSeamlessTravel() const
    {
        return NativeCall<bool>(this, "UPrimalActor.AllowSeamlessTravel()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalActor.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AnimNotifyCustomEvent(unsigned long long a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, unsigned long long, void*, void*, void*>(this, "UPrimalActor.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalActor.AnimNotifyCustomState_Begin(FName,USkeletalMeshComponent*,UAnimSequenceBase*,float,
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AnimNotifyCustomState_Begin(unsigned long long a0, void* a1, void* a2, float a3, void* a4) const
    {
        return NativeCall<void*, unsigned long long, void*, void*, float, void*>(this, "UPrimalActor.AnimNotifyCustomState_Begin(FName,USkeletalMeshComponent*,UAnimSequenceBase*,float,UAnimNotifyState*)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalActor.AnimNotifyCustomState_End(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNot
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AnimNotifyCustomState_End(unsigned long long a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, unsigned long long, void*, void*, void*>(this, "UPrimalActor.AnimNotifyCustomState_End(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotifyState*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.AnimNotifyCustomState_Tick(FName,USkeletalMeshComponent*,UAnimSequenceBase*,float,U
    // endereco: casamento de bytes com a build de referencia
    void AnimNotifyCustomState_Tick(unsigned long long a0, void* a1, void* a2, float a3, void* a4) const
    {
        NativeCall<void, unsigned long long, void*, void*, float, void*>(this, "UPrimalActor.AnimNotifyCustomState_Tick(FName,USkeletalMeshComponent*,UAnimSequenceBase*,float,UAnimNotifyState*)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalActor.BPAllowActorSpawn(UWorld*,UE::Math::TVector<double>,UE::Math::TRotator<double>,AAct
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPAllowActorSpawn(void* a0, void* a1, void* a2, void* a3, void* a4) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*>(this, "UPrimalActor.BPAllowActorSpawn(UWorld*,UE::Math::TVector<double>,UE::Math::TRotator<double>,AActor*,APawn*)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.BPAttachedRootComponent()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPAttachedRootComponent() const
    {
        NativeCall<void>(this, "UPrimalActor.BPAttachedRootComponent()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalActor.BPClientDoMultiUse(APlayerController*,int,FName)
    // endereco: casamento de bytes com a build de referencia
    void BPClientDoMultiUse(void* a0, int a1, unsigned long long a2) const
    {
        NativeCall<void, void*, int, unsigned long long>(this, "UPrimalActor.BPClientDoMultiUse(APlayerController*,int,FName)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalActor.BPConsumeSetPinCode(APlayerController*,int,bool,int)
    // endereco: casamento de bytes com a build de referencia
    bool BPConsumeSetPinCode(void* a0, int a1, bool a2, int a3) const
    {
        return NativeCall<bool, void*, int, bool, int>(this, "UPrimalActor.BPConsumeSetPinCode(APlayerController*,int,bool,int)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalActor.BPConsumeUsePinCode(AActor*,APlayerController*,int,bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPConsumeUsePinCode(void* a0, void* a1, int a2, bool a3) const
    {
        return NativeCall<bool, void*, void*, int, bool>(this, "UPrimalActor.BPConsumeUsePinCode(AActor*,APlayerController*,int,bool)", a0, a1, a2, a3);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalActor.BPControlRigNotify(FName,FName,FHitResult&,UE::Math::TVector<double>&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPControlRigNotify(unsigned long long a0, unsigned long long a1, void* a2, void* a3) const
    {
        NativeCall<void, unsigned long long, unsigned long long, void*, void*>(this, "UPrimalActor.BPControlRigNotify(FName,FName,FHitResult&,UE::Math::TVector<double>&)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalActor.BPCustomIsRelevantForClient(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool BPCustomIsRelevantForClient(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalActor.BPCustomIsRelevantForClient(APlayerController*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalActor.BPDrawMultiUseCustomEntry(int,FName,APlayerController*,UCanvas*,UE::Math::TVector2<
    // endereco: casamento de bytes com a build de referencia
    void BPDrawMultiUseCustomEntry(int a0, unsigned long long a1, void* a2, void* a3, void* a4) const
    {
        NativeCall<void, int, unsigned long long, void*, void*, void*>(this, "UPrimalActor.BPDrawMultiUseCustomEntry(int,FName,APlayerController*,UCanvas*,UE::Math::TVector2<double>&)", a0, a1, a2, a3, a4);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalActor.BPDrawMultiUseEntry(FMultiUseEntry&,APlayerController*,UCanvas*,UE::Math::TVector2<
    // endereco: casamento de bytes com a build de referencia
    void BPDrawMultiUseEntry(void* a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, void*, void*, void*, void*>(this, "UPrimalActor.BPDrawMultiUseEntry(FMultiUseEntry&,APlayerController*,UCanvas*,UE::Math::TVector2<double>&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalActor.BPFilterMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAlloc
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=312+bytes40+chamadores=2+grafo=4/4]]
    BrzPonteiro BPFilterMultiUseEntries(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalActor.BPFilterMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalActor.BPGetActorEyesViewPoint(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro BPGetActorEyesViewPoint(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalActor.BPGetActorEyesViewPoint(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalActor.BPGetBonesToHideOnAllocation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetBonesToHideOnAllocation() const
    {
        return NativeCall<void*>(this, "UPrimalActor.BPGetBonesToHideOnAllocation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalActor.BPGetCameraCollisionIgnoreActors(TArray<AActor*,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetCameraCollisionIgnoreActors(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalActor.BPGetCameraCollisionIgnoreActors(TArray<AActor*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalActor.BPGetCustomBlueprintData(FName,FBPNetExecParams&,FBPNetExecParams&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetCustomBlueprintData(unsigned long long a0, void* a1, void* a2) const
    {
        return NativeCall<void*, unsigned long long, void*, void*>(this, "UPrimalActor.BPGetCustomBlueprintData(FName,FBPNetExecParams&,FBPNetExecParams&)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalActor.BPGetExtraSpecialBlueprintInt(int)
    // endereco: casamento de bytes com a build de referencia
    int BPGetExtraSpecialBlueprintInt(int a0) const
    {
        return NativeCall<int, int>(this, "UPrimalActor.BPGetExtraSpecialBlueprintInt(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalActor.BPGetMultiUseCenterText(APlayerController*,int,FString&,FLinearColor&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetMultiUseCenterText(void* a0, int a1, const FString& a2, void* a3) const
    {
        return NativeCall<void*, void*, int, void*, void*>(this, "UPrimalActor.BPGetMultiUseCenterText(APlayerController*,int,FString&,FLinearColor&)", a0, a1, const_cast<FString*>(&a2), a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro BPGetMultiUseCenterText(void* a0, int a1, FString* a2, void* a3) const
    { return BPGetMultiUseCenterText(a0, a1, *a2, a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalActor.BPGetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocato
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=312+bytes40+grafo=4/4]]
    BrzPonteiro BPGetMultiUseEntries(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalActor.BPGetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalActor.BPGetOrbitCamTargetLocation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetOrbitCamTargetLocation() const
    {
        return NativeCall<void*>(this, "UPrimalActor.BPGetOrbitCamTargetLocation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalActor.BPGetShowDebugAnimationComponents(TArray<USkeletalMeshComponent*,TSizedDefaultAlloc
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetShowDebugAnimationComponents(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalActor.BPGetShowDebugAnimationComponents(TArray<USkeletalMeshComponent*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalActor.BPGetVehicleRotationAngularVelocityForWheel(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    float BPGetVehicleRotationAngularVelocityForWheel(int a0) const
    {
        return NativeCall<float, int>(this, "UPrimalActor.BPGetVehicleRotationAngularVelocityForWheel(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalActor.BPGetVehicleSteerAngleForWheel(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    float BPGetVehicleSteerAngleForWheel(int a0) const
    {
        return NativeCall<float, int>(this, "UPrimalActor.BPGetVehicleSteerAngleForWheel(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalActor.BPGetVehicleSuspensionOffsetForWheel(int)
    // endereco: casamento de bytes com a build de referencia
    float BPGetVehicleSuspensionOffsetForWheel(int a0) const
    {
        return NativeCall<float, int>(this, "UPrimalActor.BPGetVehicleSuspensionOffsetForWheel(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalActor.BPIgnoreAttachedSoundMultipliers(USoundBase*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=66+chamadores=6]]
    bool BPIgnoreAttachedSoundMultipliers(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalActor.BPIgnoreAttachedSoundMultipliers(USoundBase*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalActor.BPIsASoft(TSoftClassPtr<AActor>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPIsASoft(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalActor.BPIsASoft(TSoftClassPtr<AActor>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.BPOverrideServerMultiUseAcceptRange_Implementation()
    // endereco: casamento de bytes com a build de referencia
    float BPOverrideServerMultiUseAcceptRange_Implementation() const
    {
        return NativeCall<float>(this, "UPrimalActor.BPOverrideServerMultiUseAcceptRange_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalActor.BPOverrideUILocation(APlayerController*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=101+chamadores=2]]
    BrzPonteiro BPOverrideUILocation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalActor.BPOverrideUILocation(APlayerController*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalActor.BPPostInitializeComponents()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPPostInitializeComponents() const
    {
        NativeCall<void>(this, "UPrimalActor.BPPostInitializeComponents()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalActor.BPPreInitializeComponents()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPPreInitializeComponents() const
    {
        NativeCall<void>(this, "UPrimalActor.BPPreInitializeComponents()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalActor.BPPreventAttachments(UObject*)
    // endereco: casamento de bytes com a build de referencia
    bool BPPreventAttachments(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalActor.BPPreventAttachments(UObject*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalActor.BPSetNetworkAndStasisRangeMultiplier(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPSetNetworkAndStasisRangeMultiplier(float a0) const
    {
        NativeCall<void, float>(this, "UPrimalActor.BPSetNetworkAndStasisRangeMultiplier(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalActor.BPShouldAddUI_Implementation(TSubclassOf<UUserWidget>,AActor*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPShouldAddUI_Implementation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalActor.BPShouldAddUI_Implementation(TSubclassOf<UUserWidget>,AActor*)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalActor.BPTryMultiUse(APlayerController*,int,FName)
    // endereco: casamento de bytes com a build de referencia
    bool BPTryMultiUse(void* a0, int a1, unsigned long long a2) const
    {
        return NativeCall<bool, void*, int, unsigned long long>(this, "UPrimalActor.BPTryMultiUse(APlayerController*,int,FName)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalActor.BP_GetHUDWorldDrawLocation(FName)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro BP_GetHUDWorldDrawLocation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "UPrimalActor.BP_GetHUDWorldDrawLocation(FName)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalActor.BP_OverrideTargetingLocation(AActor*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro BP_OverrideTargetingLocation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalActor.BP_OverrideTargetingLocation(AActor*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalActor.CanMoveThroughActor(AActor*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool CanMoveThroughActor(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalActor.CanMoveThroughActor(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.ChangeActorTeam(int)
    // endereco: casamento de bytes com a build de referencia
    void ChangeActorTeam(int a0) const
    {
        NativeCall<void, int>(this, "UPrimalActor.ChangeActorTeam(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.CheckBPAllowActorSpawn(UWorld*,UE::Math::TVector<double>&,UE::Math::TRotator<double
    // endereco: casamento de bytes com a build de referencia
    bool CheckBPAllowActorSpawn(void* a0, void* a1, void* a2, void* a3, void* a4) const
    {
        return NativeCall<bool, void*, void*, void*, void*, void*>(this, "UPrimalActor.CheckBPAllowActorSpawn(UWorld*,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,AActor*,APawn*)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.ClientMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    void ClientMultiUse(void* a0, int a1, int a2) const
    {
        NativeCall<void, void*, int, int>(this, "UPrimalActor.ClientMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.ControlRigNotify(FName,FName,FHitResult&,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    void ControlRigNotify(unsigned long long a0, unsigned long long a1, void* a2, void* a3) const
    {
        NativeCall<void, unsigned long long, unsigned long long, void*, void*>(this, "UPrimalActor.ControlRigNotify(FName,FName,FHitResult&,UE::Math::TVector<double>&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalActor.CreateNaniteMeshesNotReversedAndAttach(TArray<UStaticMesh*,TSizedDefaultAllocator<3
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CreateNaniteMeshesNotReversedAndAttach(void* a0, void* a1, const FString& a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UPrimalActor.CreateNaniteMeshesNotReversedAndAttach(TArray<UStaticMesh*,TSizedDefaultAllocator<32>>,USceneComponent*,FString)", a0, a1, const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro CreateNaniteMeshesNotReversedAndAttach(void* a0, void* a1, FString* a2) const
    { return CreateNaniteMeshesNotReversedAndAttach(a0, a1, *a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.DrawBasicFloatingHUD(AHUD*)
    // endereco: casamento de bytes com a build de referencia
    void DrawBasicFloatingHUD(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalActor.DrawBasicFloatingHUD(AHUD*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalActor.EnableUpdateSkeletalMeshKinematics()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EnableUpdateSkeletalMeshKinematics() const
    {
        return NativeCall<void*>(this, "UPrimalActor.EnableUpdateSkeletalMeshKinematics()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.FilterMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocat
    // endereco: casamento de bytes com a build de referencia
    void FilterMultiUseEntries(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "UPrimalActor.FilterMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalActor.FindComponentByName(TSubclassOf<UActorComponent>,FName,bool)
    // endereco: casamento de bytes com a build de referencia
    USceneComponent* FindComponentByName(void* a0, unsigned long long a1, bool a2) const
    {
        return NativeCall<USceneComponent*, void*, unsigned long long, bool>(this, "UPrimalActor.FindComponentByName(TSubclassOf<UActorComponent>,FName,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.ForceAllowsInventoryUse(UObject*)
    // endereco: cache_pdb_25090264
    bool ForceAllowsInventoryUse(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalActor.ForceAllowsInventoryUse(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.ForceInfiniteDrawDistanceOnComponent(UPrimitiveComponent*)
    // endereco: casamento de bytes com a build de referencia
    bool ForceInfiniteDrawDistanceOnComponent(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalActor.ForceInfiniteDrawDistanceOnComponent(UPrimitiveComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.ForceReplicateNow(bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void ForceReplicateNow(bool a0, bool a1, bool a2) const
    {
        NativeCall<void, bool, bool, bool>(this, "UPrimalActor.ForceReplicateNow(bool,bool,bool)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalActor.ForceReplicateNowIfNoChannel()
    // endereco: casamento de bytes com a build de referencia
    void ForceReplicateNowIfNoChannel() const
    {
        NativeCall<void>(this, "UPrimalActor.ForceReplicateNowIfNoChannel()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalActor.GetActorViewDirection()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetActorViewDirection() const
    {
        return NativeCall<void*>(this, "UPrimalActor.GetActorViewDirection()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.GetAllSceneComponents(TArray<USceneComponent*,TSizedDefaultAllocator<32>>&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=256+chamadores=2]]
    void GetAllSceneComponents(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalActor.GetAllSceneComponents(TArray<USceneComponent*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.GetApproachRadius()
    // endereco: casamento de bytes com a build de referencia
    float GetApproachRadius() const
    {
        return NativeCall<float>(this, "UPrimalActor.GetApproachRadius()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalActor.GetHUDWorldDrawLocation(FName&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetHUDWorldDrawLocation(const FName& a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalActor.GetHUDWorldDrawLocation(FName&)", const_cast<FName*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GetHUDWorldDrawLocation(FName* a0) const
    { return GetHUDWorldDrawLocation(*a0); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalActor.GetInterpolatedRotation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetInterpolatedRotation() const
    {
        return NativeCall<void*>(this, "UPrimalActor.GetInterpolatedRotation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalActor.GetInterpolatedVelocity()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=67]]
    BrzPonteiro GetInterpolatedVelocity() const
    {
        return NativeCall<void*>(this, "UPrimalActor.GetInterpolatedVelocity()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.GetIsMapActor()
    // endereco: casamento de bytes com a build de referencia
    bool GetIsMapActor() const
    {
        return NativeCall<bool>(this, "UPrimalActor.GetIsMapActor()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.GetLastGameplayRelevantTime()
    // endereco: casamento de bytes com a build de referencia
    double GetLastGameplayRelevantTime() const
    {
        return NativeCall<double>(this, "UPrimalActor.GetLastGameplayRelevantTime()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    void GetLifetimeReplicatedProps(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalActor.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.GetMultiUseCenterText(APlayerController*,int,FString&,FLinearColor&)
    // endereco: casamento de bytes com a build de referencia
    bool GetMultiUseCenterText(void* a0, int a1, const FString& a2, void* a3) const
    {
        return NativeCall<bool, void*, int, void*, void*>(this, "UPrimalActor.GetMultiUseCenterText(APlayerController*,int,FString&,FLinearColor&)", a0, a1, const_cast<FString*>(&a2), a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool GetMultiUseCenterText(void* a0, int a1, FString* a2, void* a3) const
    { return GetMultiUseCenterText(a0, a1, *a2, a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<
    // endereco: casamento de bytes com a build de referencia
    void GetMultiUseEntries(void* a0, void* a1, int a2) const
    {
        NativeCall<void, void*, void*, int>(this, "UPrimalActor.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.GetMultiUseIcon(APlayerController*,FMultiUseEntry)
    // endereco: casamento de bytes com a build de referencia
    UTexture2D* GetMultiUseIcon(void* a0, void* a1) const
    {
        return NativeCall<UTexture2D*, void*, void*>(this, "UPrimalActor.GetMultiUseIcon(APlayerController*,FMultiUseEntry)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalActor.GetMultiUseIconBP(APlayerController*,FMultiUseEntry)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMultiUseIconBP(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalActor.GetMultiUseIconBP(APlayerController*,FMultiUseEntry)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalActor.GetNetCullDistance()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetNetCullDistance() const
    {
        return NativeCall<void*>(this, "UPrimalActor.GetNetCullDistance()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.GetNetStasisAndRangeMultiplier(bool)
    // endereco: casamento de bytes com a build de referencia
    float GetNetStasisAndRangeMultiplier(bool a0) const
    {
        return NativeCall<float, bool>(this, "UPrimalActor.GetNetStasisAndRangeMultiplier(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.GetNetworkRangeMultiplier()
    // endereco: casamento de bytes com a build de referencia
    float GetNetworkRangeMultiplier() const
    {
        return NativeCall<float>(this, "UPrimalActor.GetNetworkRangeMultiplier()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalActor.GetOrbitCamTargetLocation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetOrbitCamTargetLocation() const
    {
        return NativeCall<void*>(this, "UPrimalActor.GetOrbitCamTargetLocation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalActor.GetOrbitCamZoomParams(float&,float&,float&,float&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetOrbitCamZoomParams(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "UPrimalActor.GetOrbitCamZoomParams(float&,float&,float&,float&)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalActor.GetShooterHUDDebugString()
    // endereco: casamento de bytes com a build de referencia
    void GetShooterHUDDebugString(void* retorno) const
    {
        NativeCall<void, void*>(this, "UPrimalActor.GetShooterHUDDebugString()", retorno);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalActor.GetShooterHUDDebugString_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetShooterHUDDebugString_Implementation() const
    {
        return NativeCall<void*>(this, "UPrimalActor.GetShooterHUDDebugString_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalActor.GetSocketTransform(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSocketTransform(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "UPrimalActor.GetSocketTransform(FName)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalActor.GetTargetActorForDyeUI()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    UObject* GetTargetActorForDyeUI() const
    {
        return NativeCall<UObject*>(this, "UPrimalActor.GetTargetActorForDyeUI()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalActor.GetTargetPathfindingLocation(AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTargetPathfindingLocation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalActor.GetTargetPathfindingLocation(AActor*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalActor.GetTargetingLocation(AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTargetingLocation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalActor.GetTargetingLocation(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.GetUsablePriority()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=113]]
    float GetUsablePriority() const
    {
        return NativeCall<float>(this, "UPrimalActor.GetUsablePriority()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.GetWheelOptionByUseIndex(APlayerController*,int)
    // endereco: casamento de bytes com a build de referencia
    void GetWheelOptionByUseIndex(void* retorno, void* a0, int a1) const
    {
        NativeCall<void, void*, void*, int>(this, "UPrimalActor.GetWheelOptionByUseIndex(APlayerController*,int)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.GetWheelOptionInfo(APlayerController*,int)
    // endereco: casamento de bytes com a build de referencia
    void GetWheelOptionInfo(void* retorno, void* a0, int a1) const
    {
        NativeCall<void, void*, void*, int>(this, "UPrimalActor.GetWheelOptionInfo(APlayerController*,int)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.GetWheelOptionInfoBP(APlayerController*,int)
    // endereco: casamento de bytes com a build de referencia
    void GetWheelOptionInfoBP(void* retorno, void* a0, int a1) const
    {
        NativeCall<void, void*, void*, int>(this, "UPrimalActor.GetWheelOptionInfoBP(APlayerController*,int)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.InputDismissPOI(APlayerController*,int)
    // endereco: casamento de bytes com a build de referencia
    void InputDismissPOI(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "UPrimalActor.InputDismissPOI(APlayerController*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.InventoryItemDropped(UObject*)
    // endereco: casamento de bytes com a build de referencia
    void InventoryItemDropped(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalActor.InventoryItemDropped(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.InventoryItemUsed(UObject*)
    // endereco: casamento de bytes com a build de referencia
    void InventoryItemUsed(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalActor.InventoryItemUsed(UObject*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalActor.IsAlliedWithOtherTeam(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsAlliedWithOtherTeam(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalActor.IsAlliedWithOtherTeam(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.IsMatineeControlled()
    // endereco: casamento de bytes com a build de referencia
    bool IsMatineeControlled() const
    {
        return NativeCall<bool>(this, "UPrimalActor.IsMatineeControlled()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalActor.IsMultiMeshPaintable()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=112+chamadores=3]]
    bool IsMultiMeshPaintable() const
    {
        return NativeCall<bool>(this, "UPrimalActor.IsMultiMeshPaintable()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.IsValidUnStasisCaster()
    // endereco: casamento de bytes com a build de referencia
    bool IsValidUnStasisCaster() const
    {
        return NativeCall<bool>(this, "UPrimalActor.IsValidUnStasisCaster()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.MatineeUpdated()
    // endereco: casamento de bytes com a build de referencia
    void MatineeUpdated() const
    {
        NativeCall<void>(this, "UPrimalActor.MatineeUpdated()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.ModifyHudMultiUseLoc(UE::Math::TVector2<double>&,APlayerController*,int)
    // endereco: casamento de bytes com a build de referencia
    void ModifyHudMultiUseLoc(void* a0, void* a1, int a2) const
    {
        NativeCall<void, void*, void*, int>(this, "UPrimalActor.ModifyHudMultiUseLoc(UE::Math::TVector2<double>&,APlayerController*,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.MulticastProperty(FName,bool)
    // endereco: casamento de bytes com a build de referencia
    void MulticastProperty(unsigned long long a0, bool a1) const
    {
        NativeCall<void, unsigned long long, bool>(this, "UPrimalActor.MulticastProperty(FName,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalActor.MulticastPropertyToPlayer(FName,APlayerController*,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=227]]
    void MulticastPropertyToPlayer(unsigned long long a0, void* a1, bool a2) const
    {
        NativeCall<void, unsigned long long, void*, bool>(this, "UPrimalActor.MulticastPropertyToPlayer(FName,APlayerController*,bool)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalActor.OffsetHUDFromBottomScreenY(AHUD*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=142]]
    float OffsetHUDFromBottomScreenY(void* a0) const
    {
        return NativeCall<float, void*>(this, "UPrimalActor.OffsetHUDFromBottomScreenY(AHUD*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalActor.OffsetHUDFromCenterScreenY(AHUD*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=142]]
    float OffsetHUDFromCenterScreenY(void* a0) const
    {
        return NativeCall<float, void*>(this, "UPrimalActor.OffsetHUDFromCenterScreenY(AHUD*)", a0);
    }

    // dump_sobre_sdk_287a0
    //   UPrimalActor.OffsetHUDFromCenterScreenY_Implementation(AHUD*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    float OffsetHUDFromCenterScreenY_Implementation(void* a0) const
    {
        return NativeCall<float, void*>(this, "UPrimalActor.OffsetHUDFromCenterScreenY_Implementation(AHUD*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.OnUROPostInterpolation_AnyThread(float,USkeletalMeshComponent*,FAnimationEvaluation
    // endereco: cache_pdb_25090264
    void OnUROPostInterpolation_AnyThread(float a0, void* a1, void* a2) const
    {
        NativeCall<void, float, void*, void*>(this, "UPrimalActor.OnUROPostInterpolation_AnyThread(float,USkeletalMeshComponent*,FAnimationEvaluationContext&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.PlaySoundOnActor(USoundCue*,float,float)
    // endereco: casamento de bytes com a build de referencia
    void PlaySoundOnActor(void* a0, float a1, float a2) const
    {
        NativeCall<void, void*, float, float>(this, "UPrimalActor.PlaySoundOnActor(USoundCue*,float,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.PreventCharacterBasing(AActor*,UPrimitiveComponent*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool PreventCharacterBasing(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "UPrimalActor.PreventCharacterBasing(AActor*,UPrimitiveComponent*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalActor.PrimalOnComponentAdded(UActorComponent*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro PrimalOnComponentAdded(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalActor.PrimalOnComponentAdded(UActorComponent*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalActor.RealtimeThrottledTick(double)
    // endereco: casamento de bytes com a build de referencia
    void RealtimeThrottledTick(double a0) const
    {
        NativeCall<void, double>(this, "UPrimalActor.RealtimeThrottledTick(double)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalActor.RecieveMatineeUpdated()
    // endereco: casamento de bytes com a build de referencia
    void RecieveMatineeUpdated() const
    {
        NativeCall<void>(this, "UPrimalActor.RecieveMatineeUpdated()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.RemoveControllingMatineeActor(AMatineeActor&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=107]]
    void RemoveControllingMatineeActor(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalActor.RemoveControllingMatineeActor(AMatineeActor&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.SetDesiredRepGraphBehavior(EReplicationGraphBehavior)
    // endereco: casamento de bytes com a build de referencia
    void SetDesiredRepGraphBehavior(int a0) const
    {
        NativeCall<void, int>(this, "UPrimalActor.SetDesiredRepGraphBehavior(EReplicationGraphBehavior)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalActor.SetMultiUseEntryName(FMultiUseEntry&,FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetMultiUseEntryName(void* a0, unsigned long long a1) const
    {
        return NativeCall<void*, void*, unsigned long long>(this, "UPrimalActor.SetMultiUseEntryName(FMultiUseEntry&,FName)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalActor.ShouldMovementUndermeshCheck()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=60]]
    bool ShouldMovementUndermeshCheck() const
    {
        return NativeCall<bool>(this, "UPrimalActor.ShouldMovementUndermeshCheck()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalActor.ShouldSkipForceUpdateWhenAimedCharacter()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShouldSkipForceUpdateWhenAimedCharacter() const
    {
        return NativeCall<void*>(this, "UPrimalActor.ShouldSkipForceUpdateWhenAimedCharacter()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.StaticRegisterNativesUPrimalActor()
    // endereco: casamento de bytes com a build de referencia
    static void StaticRegisterNativesUPrimalActor()
    {
        NativeCall<void>(nullptr, "UPrimalActor.StaticRegisterNativesUPrimalActor()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.TargetingTeamChanged()
    // endereco: casamento de bytes com a build de referencia
    void TargetingTeamChanged() const
    {
        NativeCall<void>(this, "UPrimalActor.TargetingTeamChanged()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalActor.TemplateAllowActorSpawn(UWorld*,UE::Math::TVector<double>&,UE::Math::TRotator<doubl
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TemplateAllowActorSpawn(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "UPrimalActor.TemplateAllowActorSpawn(UWorld*,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,FActorSpawnParameters&)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.TryMultiUse(APlayerController*,int,int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool TryMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<bool, void*, int, int>(this, "UPrimalActor.TryMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalActor.UseNetworkRangeScaling()
    // endereco: casamento de bytes com a build de referencia
    bool UseNetworkRangeScaling() const
    {
        return NativeCall<bool>(this, "UPrimalActor.UseNetworkRangeScaling()");
    }

    TObjectPtr<AActor>& ActorUsingQuickActionField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "UPrimalActor.ActorUsingQuickAction"); }
    float& ClientReplicationSendNowThresholdField() const
    { return *GetNativePointerField<float*>(this, "UPrimalActor.ClientReplicationSendNowThreshold"); }
    TArray<void*>& ControllingMatineeActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalActor.ControllingMatineeActors"); }
    int& CustomActorFlagsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalActor.CustomActorFlags"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UPrimalActor.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalActor.CustomTag"); }
    int& DefaultStasisComponentOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalActor.DefaultStasisComponentOctreeFlags"); }
    int& DefaultStasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalActor.DefaultStasisedOctreeFlags"); }
    int& DefaultUnstasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalActor.DefaultUnstasisedOctreeFlags"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `StasisCheckComponent` +8, medido na build 25090264
    //  (offset absoluto medido: 0x128; confianca alta)
    UMovementComponent*& DeferredMovementComponentField() const
    { return BrzCampoAncorado<UMovementComponent*>(this, "StasisCheckComponent", 8); }
    unsigned char& DesiredRepGraphBehaviorField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalActor.DesiredRepGraphBehavior"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DefaultUnstasisedOctreeFlags` +8, medido na build 25090264
    //  (offset absoluto medido: 0x1C8; confianca alta)
    int& ForceImmediateReplicationFrameField() const
    { return BrzCampoAncorado<int>(this, "DefaultUnstasisedOctreeFlags", 8); }
    double& ForceMaximumReplicationRateUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalActor.ForceMaximumReplicationRateUntilTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CustomActorFlags` +4, medido na build 25090264
    //  (offset absoluto medido: 0x1AC; confianca alta)
    int& LastActorForceReplicationFrameField() const
    { return BrzCampoAncorado<int>(this, "CustomActorFlags", 4); }
    double& LastActorForceReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalActor.LastActorForceReplicationTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OriginalCreationTime` +8, medido na build 25090264
    //  (offset absoluto medido: 0x170; confianca alta)
    long long& LastActorUnstasisedCycleField() const
    { return BrzCampoAncorado<long long>(this, "OriginalCreationTime", 8); }
    double& LastEnterStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalActor.LastEnterStasisTime"); }
    double& LastExitStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalActor.LastExitStasisTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CustomActorFlags` +12, medido na build 25090264
    //  (offset absoluto medido: 0x1B4; confianca alta)
    int& LastFrameCalculatedNetworkRangeMultiplierField() const
    { return BrzCampoAncorado<int>(this, "CustomActorFlags", 12); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OriginalCreationTime` +16, medido na build 25090264
    //  (offset absoluto medido: 0x178; confianca alta)
    unsigned long long& LastFrameUnStasisField() const
    { return BrzCampoAncorado<unsigned long long>(this, "OriginalCreationTime", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NetCriticalPriorityAdjustment` +4, medido na build 25090264
    //  (offset absoluto medido: 0x1D0; confianca alta)
    void*& LastOnlyInitialReplicationPreReplicationFrameField() const
    { return BrzCampoAncorado<void*>(this, "NetCriticalPriorityAdjustment", 4); }
    TWeakObjectPtr<void>& LastPostProcessVolumeSoundField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalActor.LastPostProcessVolumeSound"); }
    double& LastPreReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalActor.LastPreReplicationTime"); }
    FString& LastSelectedWindSourceComponentNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalActor.LastSelectedWindSourceComponentName"); }
    double& LastThrottledTickTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalActor.LastThrottledTickTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DefaultUnstasisedOctreeFlags` +4, medido na build 25090264
    //  (offset absoluto medido: 0x1C4; confianca alta)
    void*& LastUnstasisFrameCounterField() const
    { return BrzCampoAncorado<void*>(this, "DefaultUnstasisedOctreeFlags", 4); }
    int& NetCriticalPriorityAdjustmentField() const
    { return *GetNativePointerField<int*>(this, "UPrimalActor.NetCriticalPriorityAdjustment"); }
    float& NetCullDistanceSquaredDormantField() const
    { return *GetNativePointerField<float*>(this, "UPrimalActor.NetCullDistanceSquaredDormant"); }
    float& NetworkAndStasisRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalActor.NetworkAndStasisRangeMultiplier"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CustomActorFlags` +8, medido na build 25090264
    //  (offset absoluto medido: 0x1B0; confianca alta)
    int& NetworkDormantChildrenOpIdxField() const
    { return BrzCampoAncorado<int>(this, "CustomActorFlags", 8); }
    float& NetworkRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalActor.NetworkRangeMultiplier"); }
    TArray<void*>& NetworkSpatializationChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalActor.NetworkSpatializationChildren"); }
    TArray<void*>& NetworkSpatializationChildrenDormantField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalActor.NetworkSpatializationChildrenDormant"); }
    TObjectPtr<AActor>& NetworkSpatializationParentField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "UPrimalActor.NetworkSpatializationParent"); }
    BrzCampoPonteiro OnActorCustomEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalActor.OnActorCustomEvent")); }
    BrzCampoPonteiro OnMatineeUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalActor.OnMatineeUpdated")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OnMatineeUpdated` +16, medido na build 25090264
    //  (offset absoluto medido: 0xD0; confianca alta)
    void*& OnMatineeUpdatedRawField() const
    { return BrzCampoAncorado<void*>(this, "OnMatineeUpdated", 16); }
    BrzCampoPonteiro OnSemaphoreTakenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalActor.OnSemaphoreTaken")); }
    BrzCampoPonteiro OnTargetingTeamChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalActor.OnTargetingTeamChanged")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OnTargetingTeamChanged` +16, medido na build 25090264
    //  (offset absoluto medido: 0xA8; confianca alta)
    void*& OnTeamChangedForActorField() const
    { return BrzCampoAncorado<void*>(this, "OnTargetingTeamChanged", 16); }
    double& OriginalCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalActor.OriginalCreationTime"); }
    float& OverrideStasisComponentRadiusField() const
    { return *GetNativePointerField<float*>(this, "UPrimalActor.OverrideStasisComponentRadius"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OriginalCreationTime` +24, medido na build 25090264
    //  (offset absoluto medido: 0x180; confianca alta)
    void*& PlayerScaledNetworkAndStasisRangeMultiplierField() const
    { return BrzCampoAncorado<void*>(this, "OriginalCreationTime", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NetCullDistanceSquaredDormant` +4, medido na build 25090264
    //  (offset absoluto medido: 0x190; confianca alta)
    void*& PreviousStasisRangeMultField() const
    { return BrzCampoAncorado<void*>(this, "NetCullDistanceSquaredDormant", 4); }
    BrzCampoPonteiro RepGraphBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalActor.RepGraphBehavior")); }
    float& ReplicationIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalActor.ReplicationIntervalMultiplier"); }
    TObjectPtr<UPrimitiveComponent>& StasisCheckComponentField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "UPrimalActor.StasisCheckComponent"); }
    TArray<TWeakObjectPtr<void>>& StasisUnRegisteredComponentsField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "UPrimalActor.StasisUnRegisteredComponents"); }
    int& TargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "UPrimalActor.TargetingTeam"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastPostProcessVolumeSound` +8, medido na build 25090264
    //  (offset absoluto medido: 0x78; confianca alta)
    TArray<void*>& TimerStasisStoreField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "LastPostProcessVolumeSound", 8); }
    double& UnstasisLastInRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalActor.UnstasisLastInRangeTime"); }
    BitFieldValue<bool, unsigned __int32> bIsShooterPlayerController()
    { return { (void*)this, "bIsShooterPlayerController" }; }
    BitFieldValue<bool, unsigned __int32> bIsPrimalDino()
    { return { (void*)this, "bIsPrimalDino" }; }
    BitFieldValue<bool, unsigned __int32> bIsShooterCharacter()
    { return { (void*)this, "bIsShooterCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bIsPrimalCharacter()
    { return { (void*)this, "bIsPrimalCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bIsPrimalStructure()
    { return { (void*)this, "bIsPrimalStructure" }; }
    BitFieldValue<bool, unsigned __int32> bIsPrimalStructureExplosive()
    { return { (void*)this, "bIsPrimalStructureExplosive" }; }
    BitFieldValue<bool, unsigned __int32> bIsInstancedFoliage()
    { return { (void*)this, "bIsInstancedFoliage" }; }
    BitFieldValue<bool, unsigned __int32> bPreventSaving()
    { return { (void*)this, "bPreventSaving" }; }
    BitFieldValue<bool, unsigned __int32> bEnableMultiUse()
    { return { (void*)this, "bEnableMultiUse" }; }
    BitFieldValue<bool, unsigned __int32> bBlueprintMultiUseEntries()
    { return { (void*)this, "bBlueprintMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bUseCanMoveThroughActor()
    { return { (void*)this, "bUseCanMoveThroughActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPFilterMultiUseEntries()
    { return { (void*)this, "bUseBPFilterMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMultiUseCenterText()
    { return { (void*)this, "bUseBPGetMultiUseCenterText" }; }
    BitFieldValue<bool, unsigned __int32> bMultiUseCenterHUD()
    { return { (void*)this, "bMultiUseCenterHUD" }; }
    BitFieldValue<bool, unsigned __int32> bUseNetworkSpatialization()
    { return { (void*)this, "bUseNetworkSpatialization" }; }
    BitFieldValue<bool, unsigned __int32> bNetworkSpatializationForceRelevancyCheck()
    { return { (void*)this, "bNetworkSpatializationForceRelevancyCheck" }; }
    BitFieldValue<bool, unsigned __int32> bNetUseClientRelevancy()
    { return { (void*)this, "bNetUseClientRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bAttachmentReplicationUseNetworkParent()
    { return { (void*)this, "bAttachmentReplicationUseNetworkParent" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPChangedActorTeam()
    { return { (void*)this, "bUseBPChangedActorTeam" }; }
    BitFieldValue<bool, unsigned __int32> bForceNetworkSpatialization()
    { return { (void*)this, "bForceNetworkSpatialization" }; }
    BitFieldValue<bool, unsigned __int32> bForcedHudDrawingRequiresSameTeam()
    { return { (void*)this, "bForcedHudDrawingRequiresSameTeam" }; }
    BitFieldValue<bool, unsigned __int32> bIsMapActor()
    { return { (void*)this, "bIsMapActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnlyPointForLevelBounds()
    { return { (void*)this, "bUseOnlyPointForLevelBounds" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCheckForErrors()
    { return { (void*)this, "bUseBPCheckForErrors" }; }
    BitFieldValue<bool, unsigned __int32> bHasHighVolumeRPCs()
    { return { (void*)this, "bHasHighVolumeRPCs" }; }
    BitFieldValue<bool, unsigned __int32> bAutoStasis()
    { return { (void*)this, "bAutoStasis" }; }
    BitFieldValue<bool, unsigned __int32> bClimbable()
    { return { (void*)this, "bClimbable" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPDrawEntry()
    { return { (void*)this, "bUseBPDrawEntry" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCliffPlatforms()
    { return { (void*)this, "bPreventCliffPlatforms" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideUILocation()
    { return { (void*)this, "bUseBPOverrideUILocation" }; }
    BitFieldValue<bool, unsigned __int32> bStasised()
    { return { (void*)this, "bStasised" }; }
    BitFieldValue<bool, unsigned __int32> bPreventActorStasis()
    { return { (void*)this, "bPreventActorStasis" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetBonesToHideOnAllocation()
    { return { (void*)this, "bUseBPGetBonesToHideOnAllocation" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateHidden()
    { return { (void*)this, "bReplicateHidden" }; }
    BitFieldValue<bool, unsigned __int32> bPendingUnstasis()
    { return { (void*)this, "bPendingUnstasis" }; }
    BitFieldValue<bool, unsigned __int32> bHibernateChange()
    { return { (void*)this, "bHibernateChange" }; }
    BitFieldValue<bool, unsigned __int32> bSavedWhenStasised()
    { return { (void*)this, "bSavedWhenStasised" }; }
    BitFieldValue<bool, unsigned __int32> bLoadedFromSaveGame()
    { return { (void*)this, "bLoadedFromSaveGame" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCharacterBasing()
    { return { (void*)this, "bPreventCharacterBasing" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCharacterBasingAllowSteppingUp()
    { return { (void*)this, "bPreventCharacterBasingAllowSteppingUp" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreNetworkRangeScaling()
    { return { (void*)this, "bIgnoreNetworkRangeScaling" }; }
    BitFieldValue<bool, unsigned __int32> bForceReplicateDormantChildrenWithoutSpatialRelevancy()
    { return { (void*)this, "bForceReplicateDormantChildrenWithoutSpatialRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventSeamlessTravel()
    { return { (void*)this, "bForcePreventSeamlessTravel" }; }
    BitFieldValue<bool, unsigned __int32> bPreventLevelBoundsRelevant()
    { return { (void*)this, "bPreventLevelBoundsRelevant" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInventoryItemUsed()
    { return { (void*)this, "bUseBPInventoryItemUsed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInventoryItemDropped()
    { return { (void*)this, "bUseBPInventoryItemDropped" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideTargetingLocation()
    { return { (void*)this, "bUseBPOverrideTargetingLocation" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowNetMulticast()
    { return { (void*)this, "bForceAllowNetMulticast" }; }
    BitFieldValue<bool, unsigned __int32> bBPInventoryItemUsedHandlesDurability()
    { return { (void*)this, "bBPInventoryItemUsedHandlesDurability" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceAllowsInventoryUse()
    { return { (void*)this, "bUseBPForceAllowsInventoryUse" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysRelevantPrimalStructure()
    { return { (void*)this, "bAlwaysRelevantPrimalStructure" }; }
    BitFieldValue<bool, unsigned __int32> bPreventNPCSpawnFloor()
    { return { (void*)this, "bPreventNPCSpawnFloor" }; }
    BitFieldValue<bool, unsigned __int32> bForceHiddenReplication()
    { return { (void*)this, "bForceHiddenReplication" }; }
    BitFieldValue<bool, unsigned __int32> bNetCritical()
    { return { (void*)this, "bNetCritical" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyReplicateOnNetForcedUpdate()
    { return { (void*)this, "bOnlyReplicateOnNetForcedUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bPreventRegularForceNetUpdate()
    { return { (void*)this, "bPreventRegularForceNetUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyInitialReplication()
    { return { (void*)this, "bOnlyInitialReplication" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnDedicatedServer()
    { return { (void*)this, "bPreventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bUseAttachmentReplication()
    { return { (void*)this, "bUseAttachmentReplication" }; }
    BitFieldValue<bool, unsigned __int32> bStasisComponentRadiusForceDistanceCheck()
    { return { (void*)this, "bStasisComponentRadiusForceDistanceCheck" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoredByCharacterEncroachment()
    { return { (void*)this, "bIgnoredByCharacterEncroachment" }; }
    BitFieldValue<bool, unsigned __int32> bNetMulticasting()
    { return { (void*)this, "bNetMulticasting" }; }
    BitFieldValue<bool, unsigned __int32> bDormantNetMulticastForceFullReplication()
    { return { (void*)this, "bDormantNetMulticastForceFullReplication" }; }
    BitFieldValue<bool, unsigned __int32> bForceIgnoreSpatialComponent()
    { return { (void*)this, "bForceIgnoreSpatialComponent" }; }
    BitFieldValue<bool, unsigned __int32> bWasForceIgnoreSpatialComponent()
    { return { (void*)this, "bWasForceIgnoreSpatialComponent" }; }
    BitFieldValue<bool, unsigned __int32> bWillStasisAfterSpawn()
    { return { (void*)this, "bWillStasisAfterSpawn" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetHUDDrawLocationOffset()
    { return { (void*)this, "bUseBPGetHUDDrawLocationOffset" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventAttachments()
    { return { (void*)this, "bUseBPPreventAttachments" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetShowDebugAnimationComponents()
    { return { (void*)this, "bUseBPGetShowDebugAnimationComponents" }; }
    BitFieldValue<bool, unsigned __int32> bUnstreamComponentsUseEndOverlap()
    { return { (void*)this, "bUnstreamComponentsUseEndOverlap" }; }
    BitFieldValue<bool, unsigned __int32> bWantsPerformanceThrottledTick()
    { return { (void*)this, "bWantsPerformanceThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bAddedPerformanceThrottledTick()
    { return { (void*)this, "bAddedPerformanceThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bAddedTagsList()
    { return { (void*)this, "bAddedTagsList" }; }
    BitFieldValue<bool, unsigned __int32> bWantsServerThrottledTick()
    { return { (void*)this, "bWantsServerThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bAddedServerThrottledTick()
    { return { (void*)this, "bAddedServerThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bBPPreInitializeComponents()
    { return { (void*)this, "bBPPreInitializeComponents" }; }
    BitFieldValue<bool, unsigned __int32> bBPPostInitializeComponents()
    { return { (void*)this, "bBPPostInitializeComponents" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCustomIsRelevantForClient()
    { return { (void*)this, "bUseBPCustomIsRelevantForClient" }; }
    BitFieldValue<bool, unsigned __int32> bUseStasisGrid()
    { return { (void*)this, "bUseStasisGrid" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysCreatePhysicsState()
    { return { (void*)this, "bAlwaysCreatePhysicsState" }; }
    BitFieldValue<bool, unsigned __int32> bForceInfiniteDrawDistance()
    { return { (void*)this, "bForceInfiniteDrawDistance" }; }
    BitFieldValue<bool, unsigned __int32> bIsFromChildActorComponent()
    { return { (void*)this, "bIsFromChildActorComponent" }; }
    BitFieldValue<bool, unsigned __int32> bIsDestroyedFromChildActorComponent()
    { return { (void*)this, "bIsDestroyedFromChildActorComponent" }; }
    BitFieldValue<bool, unsigned __int32> bIsValidUnstasisCaster()
    { return { (void*)this, "bIsValidUnstasisCaster" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowActorSpawn()
    { return { (void*)this, "bUseBPAllowActorSpawn" }; }
    BitFieldValue<bool, unsigned __int32> bWantsRealtimeThrottledTick()
    { return { (void*)this, "bWantsRealtimeThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bAddedRealtimeThrottledTick()
    { return { (void*)this, "bAddedRealtimeThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bRealtimeThrottledTickUseNativeTick()
    { return { (void*)this, "bRealtimeThrottledTickUseNativeTick" }; }
    BitFieldValue<bool, unsigned __int32> bDesiredRepGraphBehaviorHasBeenSet()
    { return { (void*)this, "bDesiredRepGraphBehaviorHasBeenSet" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyDontClearNetworkChildren()
    { return { (void*)this, "bDestroyDontClearNetworkChildren" }; }
    BitFieldValue<bool, unsigned __int32> bForceNonBlockingHits()
    { return { (void*)this, "bForceNonBlockingHits" }; }
    BitFieldValue<bool, unsigned __int32> bUseActorNotifyCustomEventBP()
    { return { (void*)this, "bUseActorNotifyCustomEventBP" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetCameraCollisionIgnoreActors()
    { return { (void*)this, "bUseBPGetCameraCollisionIgnoreActors" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMultiUseCenterTextWithName()
    { return { (void*)this, "bUseBPGetMultiUseCenterTextWithName" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetOrbitCamTargetLocation()
    { return { (void*)this, "bUseBPGetOrbitCamTargetLocation" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALACTOR_H

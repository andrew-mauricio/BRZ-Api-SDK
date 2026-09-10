// ==========================================================================
//  APrimalPawn — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALPAWN_H
#define BRZ_SDK_JOGO_APRIMALPAWN_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AController;
struct APlayerController;

#include "APawn.h"

struct APrimalPawn : public APawn
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalPawn"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalPawn.AllowMovementMode(EMovementMode,unsignedchar)
    // endereco: casamento de bytes com a build de referencia
    bool AllowMovementMode(int a0, unsigned char a1) const
    {
        return NativeCall<bool, int, unsigned char>(this, "APrimalPawn.AllowMovementMode(EMovementMode,unsignedchar)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalPawn.BPAcknowledgeServerCorrection(float,UE::Math::TVector<double>,UE::Math::TVector<doub
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPAcknowledgeServerCorrection(float a0, void* a1, void* a2, void* a3, unsigned long long a4, bool a5, bool a6, unsigned char a7) const
    {
        return NativeCall<void*, float, void*, void*, void*, unsigned long long, bool, bool, unsigned char>(this, "APrimalPawn.BPAcknowledgeServerCorrection(float,UE::Math::TVector<double>,UE::Math::TVector<double>,UPrimitiveComponent*,FName,bool,bool,unsignedchar)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalPawn.BPAdjustMoveDeltaTime(float)
    // endereco: casamento de bytes com a build de referencia
    float BPAdjustMoveDeltaTime(float a0) const
    {
        return NativeCall<float, float>(this, "APrimalPawn.BPAdjustMoveDeltaTime(float)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalPawn.BPCanCombineMoves()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPCanCombineMoves() const
    {
        return NativeCall<bool>(this, "APrimalPawn.BPCanCombineMoves()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalPawn.BPModifyRootMotionDeltaRotation(UE::Math::TRotator<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPModifyRootMotionDeltaRotation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalPawn.BPModifyRootMotionDeltaRotation(UE::Math::TRotator<double>&)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalPawn.BPSetupPlayerInputComponent(UInputComponent*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPSetupPlayerInputComponent(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalPawn.BPSetupPlayerInputComponent(UInputComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalPawn.BP_PreventMovementMode(EMovementMode,unsignedchar)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BP_PreventMovementMode(int a0, unsigned char a1) const
    {
        return NativeCall<void*, int, unsigned char>(this, "APrimalPawn.BP_PreventMovementMode(EMovementMode,unsignedchar)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalPawn.GetCharacterController()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    AController* GetCharacterController() const
    {
        return NativeCall<AController*>(this, "APrimalPawn.GetCharacterController()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalPawn.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=185+grafo=5/5]]
    void GetLifetimeReplicatedProps(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalPawn.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalPawn.GetOwnerController()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=272]]
    APlayerController* GetOwnerController() const
    {
        return NativeCall<APlayerController*>(this, "APrimalPawn.GetOwnerController()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalPawn.InitInputComponent()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=26]]
    void InitInputComponent() const
    {
        NativeCall<void>(this, "APrimalPawn.InitInputComponent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalPawn.InterceptInputEvent(FString&)
    // endereco: casamento de bytes com a build de referencia
    void InterceptInputEvent(const FString& a0) const
    {
        NativeCall<void, void*>(this, "APrimalPawn.InterceptInputEvent(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void InterceptInputEvent(FString* a0) const
    { InterceptInputEvent(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalPawn.IsLocallyControlledByPlayer()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=52]]
    bool IsLocallyControlledByPlayer() const
    {
        return NativeCall<bool>(this, "APrimalPawn.IsLocallyControlledByPlayer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalPawn.SetLastMovementDesiredRotation(UE::Math::TRotator<double>&)
    // endereco: cache_pdb_25090264
    void SetLastMovementDesiredRotation(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalPawn.SetLastMovementDesiredRotation(UE::Math::TRotator<double>&)", a0);
    }

    float& HarvestingDestructionMeshRangeMultiplerField() const
    { return *GetNativePointerField<float*>(this, "APrimalPawn.HarvestingDestructionMeshRangeMultipler"); }
    BrzCampoPonteiro LastMovementDesiredRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPawn.LastMovementDesiredRotation")); }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventMovementMode()
    { return { (void*)this, "bUseBPPreventMovementMode" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateDesiredRotation()
    { return { (void*)this, "bReplicateDesiredRotation" }; }
    BitFieldValue<bool, unsigned __int32> bIsPlayingTurningAnim()
    { return { (void*)this, "bIsPlayingTurningAnim" }; }
    BitFieldValue<bool, unsigned __int32> bClearOnConsume()
    { return { (void*)this, "bClearOnConsume" }; }
    BitFieldValue<bool, unsigned __int32> bUse_ModifySavedMoveAcceleration_PreRep()
    { return { (void*)this, "bUse_ModifySavedMoveAcceleration_PreRep" }; }
    BitFieldValue<bool, unsigned __int32> bUse_ModifySavedMoveAcceleration_PostRep()
    { return { (void*)this, "bUse_ModifySavedMoveAcceleration_PostRep" }; }
    BitFieldValue<bool, unsigned __int32> bSetDefaultMovementMode()
    { return { (void*)this, "bSetDefaultMovementMode" }; }
    BitFieldValue<bool, unsigned __int32> bPreventHUDInitialization()
    { return { (void*)this, "bPreventHUDInitialization" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanCombineMoves()
    { return { (void*)this, "bUseBPCanCombineMoves" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALPAWN_H

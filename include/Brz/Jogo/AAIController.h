// ==========================================================================
//  AAIController — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_AAICONTROLLER_H
#define BRZ_SDK_JOGO_AAICONTROLLER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct UBrainComponent;

#include "APrimalController.h"

struct AAIController : public APrimalController
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AAIController"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AAIController.CleanupBrainComponent()
    // endereco: cache_pdb_25090264
    void CleanupBrainComponent() const
    {
        NativeCall<void>(this, "AAIController.CleanupBrainComponent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AAIController.ClearFocus(unsignedchar)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=109]]
    void ClearFocus(unsigned char a0) const
    {
        NativeCall<void, unsigned char>(this, "AAIController.ClearFocus(unsignedchar)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AAIController.DisplayDebug(UCanvas*,FDebugDisplayInfo&,float&,float&)
    // endereco: casamento de bytes com a build de referencia
    void DisplayDebug(void* a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, void*, void*, void*, void*>(this, "AAIController.DisplayDebug(UCanvas*,FDebugDisplayInfo&,float&,float&)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AAIController.GetDebugIcon()
    // endereco: casamento de bytes com a build de referencia
    void GetDebugIcon(void* retorno) const
    {
        NativeCall<void, void*>(this, "AAIController.GetDebugIcon()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AAIController.GetFocusActor()
    // endereco: thunk
    AActor* GetFocusActor() const
    {
        return NativeCall<AActor*>(this, "AAIController.GetFocusActor()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AAIController.GetGameplayTaskDefaultPriority()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    unsigned char GetGameplayTaskDefaultPriority() const
    {
        return NativeCall<unsigned char>(this, "AAIController.GetGameplayTaskDefaultPriority()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AAIController.GetPathFollowingAgent()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetPathFollowingAgent() const
    {
        return NativeCall<void*>(this, "AAIController.GetPathFollowingAgent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AAIController.IsFollowingAPath()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    bool IsFollowingAPath() const
    {
        return NativeCall<bool>(this, "AAIController.IsFollowingAPath()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AAIController.LineOfSightTo(AActor*,UE::Math::TVector<double>,bool)
    // endereco: casamento de bytes com a build de referencia
    bool LineOfSightTo(void* a0, void* a1, bool a2) const
    {
        return NativeCall<bool, void*, void*, bool>(this, "AAIController.LineOfSightTo(AActor*,UE::Math::TVector<double>,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AAIController.OnPossess(APawn*)
    // endereco: casamento de bytes com a build de referencia
    void OnPossess(void* a0) const
    {
        NativeCall<void, void*>(this, "AAIController.OnPossess(APawn*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AAIController.OnUnPossess()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=93]]
    void OnUnPossess() const
    {
        NativeCall<void>(this, "AAIController.OnUnPossess()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AAIController.PostInitializeComponents()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=315]]
    void PostInitializeComponents() const
    {
        NativeCall<void>(this, "AAIController.PostInitializeComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AAIController.PostRegisterAllComponents()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=41]]
    void PostRegisterAllComponents() const
    {
        NativeCall<void>(this, "AAIController.PostRegisterAllComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AAIController.Reset()
    // endereco: casamento de bytes com a build de referencia
    void Reset() const
    {
        NativeCall<void>(this, "AAIController.Reset()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AAIController.RunBehaviorTree(UBehaviorTree*)
    // endereco: casamento de bytes com a build de referencia
    bool RunBehaviorTree(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AAIController.RunBehaviorTree(UBehaviorTree*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AAIController.SetFocalPoint(UE::Math::TVector<double>,unsignedchar)
    // endereco: casamento de bytes com a build de referencia
    void SetFocalPoint(void* a0, unsigned char a1) const
    {
        NativeCall<void, void*, unsigned char>(this, "AAIController.SetFocalPoint(UE::Math::TVector<double>,unsignedchar)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AAIController.SetFocus(AActor*,unsignedchar)
    // endereco: casamento de bytes com a build de referencia
    void SetFocus(void* a0, unsigned char a1) const
    {
        NativeCall<void, void*, unsigned char>(this, "AAIController.SetFocus(AActor*,unsignedchar)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AAIController.SetPawn(APawn*)
    // endereco: casamento de bytes com a build de referencia
    void SetPawn(void* a0) const
    {
        NativeCall<void, void*>(this, "AAIController.SetPawn(APawn*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AAIController.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "AAIController.Tick(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AAIController.UpdateControlRotation(float,bool)
    // endereco: casamento de bytes com a build de referencia
    void UpdateControlRotation(float a0, bool a1) const
    {
        NativeCall<void, float, bool>(this, "AAIController.UpdateControlRotation(float,bool)", a0, a1);
    }

    BrzCampoPonteiro ActionsCompField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AAIController.ActionsComp")); }
    BrzCampoPonteiro BlackboardField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AAIController.Blackboard")); }
    TObjectPtr<UBrainComponent>& BrainComponentField() const
    { return *GetNativePointerField<TObjectPtr<UBrainComponent>*>(this, "AAIController.BrainComponent"); }
    BrzCampoPonteiro CachedGameplayTasksComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AAIController.CachedGameplayTasksComponent")); }
    BrzCampoPonteiro DefaultNavigationFilterClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AAIController.DefaultNavigationFilterClass")); }
    BrzCampoPonteiro PathFollowingComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AAIController.PathFollowingComponent")); }
    BrzCampoPonteiro PerceptionComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AAIController.PerceptionComponent")); }
    BrzCampoPonteiro ReceiveMoveCompletedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AAIController.ReceiveMoveCompleted")); }
    BitFieldValue<bool, unsigned __int32> bStartAILogicOnPossess()
    { return { (void*)this, "bStartAILogicOnPossess" }; }
    BitFieldValue<bool, unsigned __int32> bStopAILogicOnUnposses()
    { return { (void*)this, "bStopAILogicOnUnposses" }; }
    BitFieldValue<bool, unsigned __int32> bLOSflag()
    { return { (void*)this, "bLOSflag" }; }
    BitFieldValue<bool, unsigned __int32> bSkipExtraLOSChecks()
    { return { (void*)this, "bSkipExtraLOSChecks" }; }
    BitFieldValue<bool, unsigned __int32> bAllowStrafe()
    { return { (void*)this, "bAllowStrafe" }; }
    BitFieldValue<bool, unsigned __int32> bWantsPlayerState()
    { return { (void*)this, "bWantsPlayerState" }; }
    BitFieldValue<bool, unsigned __int32> bLastRequestedMoveToLocationWasPlayerCommand()
    { return { (void*)this, "bLastRequestedMoveToLocationWasPlayerCommand" }; }
    BitFieldValue<bool, unsigned __int32> bSetControlRotationFromPawnOrientation()
    { return { (void*)this, "bSetControlRotationFromPawnOrientation" }; }
    BitFieldValue<bool, unsigned __int32> bExecutingRotateToFace()
    { return { (void*)this, "bExecutingRotateToFace" }; }

};

#endif  // BRZ_SDK_JOGO_AAICONTROLLER_H

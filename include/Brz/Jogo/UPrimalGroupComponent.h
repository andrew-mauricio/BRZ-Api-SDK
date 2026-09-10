// ==========================================================================
//  UPrimalGroupComponent — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALGROUPCOMPONENT_H
#define BRZ_SDK_JOGO_UPRIMALGROUPCOMPONENT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FActorComponentTickFunction;
struct FName;


struct UPrimalGroupComponent
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalGroupComponent"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.AddToGroup(UPrimalGroupComponent*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddToGroup(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalGroupComponent.AddToGroup(UPrimalGroupComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.BPIsTeamAllowedToJoinGroup(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPIsTeamAllowedToJoinGroup(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalGroupComponent.BPIsTeamAllowedToJoinGroup(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.BPOnGrantedLeadership(UPrimalGroupComponent*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=53+chamadores=3]]
    BrzPonteiro BPOnGrantedLeadership(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalGroupComponent.BPOnGrantedLeadership(UPrimalGroupComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BeginPlay() const
    {
        return NativeCall<void*>(this, "UPrimalGroupComponent.BeginPlay()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.CalculateAttackerPriorityWeight_Implementation(APrimalDinoAIController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CalculateAttackerPriorityWeight_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalGroupComponent.CalculateAttackerPriorityWeight_Implementation(APrimalDinoAIController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.GetBestGroupLeader()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetBestGroupLeader() const
    {
        return NativeCall<void*>(this, "UPrimalGroupComponent.GetBestGroupLeader()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.GetGroupMembers()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetGroupMembers() const
    {
        return NativeCall<void*>(this, "UPrimalGroupComponent.GetGroupMembers()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.GetGroupSize()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=111+chamadores=2]]
    BrzPonteiro GetGroupSize() const
    {
        return NativeCall<void*>(this, "UPrimalGroupComponent.GetGroupSize()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.GetHighPriorityActor()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetHighPriorityActor() const
    {
        return NativeCall<void*>(this, "UPrimalGroupComponent.GetHighPriorityActor()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.HandleUnstasis()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro HandleUnstasis() const
    {
        return NativeCall<void*>(this, "UPrimalGroupComponent.HandleUnstasis()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.HasGroup()
    // endereco: cache_pdb_25090264
    BrzPonteiro HasGroup() const
    {
        return NativeCall<void*>(this, "UPrimalGroupComponent.HasGroup()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.HasGroup_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    BrzPonteiro HasGroup_Implementation() const
    {
        return NativeCall<void*>(this, "UPrimalGroupComponent.HasGroup_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.IsAllowedToJoinGroup(UPrimalGroupComponent*)
    // endereco: cache_pdb_25090264
    BrzPonteiro IsAllowedToJoinGroup(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalGroupComponent.IsAllowedToJoinGroup(UPrimalGroupComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.IsAllowedToJoinGroup_Implementation(UPrimalGroupComponent*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsAllowedToJoinGroup_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalGroupComponent.IsAllowedToJoinGroup_Implementation(UPrimalGroupComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.IsBetterLeader(UPrimalGroupComponent*,UPrimalGroupComponent*)
    // endereco: cache_pdb_25090264
    BrzPonteiro IsBetterLeader(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalGroupComponent.IsBetterLeader(UPrimalGroupComponent*,UPrimalGroupComponent*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.IsBetterLeader_Implementation(UPrimalGroupComponent*,UPrimalGroupComponent
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsBetterLeader_Implementation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalGroupComponent.IsBetterLeader_Implementation(UPrimalGroupComponent*,UPrimalGroupComponent*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.IsGroupFull()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=112]]
    BrzPonteiro IsGroupFull() const
    {
        return NativeCall<void*>(this, "UPrimalGroupComponent.IsGroupFull()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.IsGroupFull_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsGroupFull_Implementation() const
    {
        return NativeCall<void*>(this, "UPrimalGroupComponent.IsGroupFull_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.IsGroupLeader()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsGroupLeader() const
    {
        return NativeCall<void*>(this, "UPrimalGroupComponent.IsGroupLeader()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.IsGroupLeader_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro IsGroupLeader_Implementation() const
    {
        return NativeCall<void*>(this, "UPrimalGroupComponent.IsGroupLeader_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.IsWhitelisted(UPrimalGroupComponent*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsWhitelisted(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalGroupComponent.IsWhitelisted(UPrimalGroupComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.OnGroupChanged(EGroupChangeType)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=129+chamadores=10]]
    BrzPonteiro OnGroupChanged(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalGroupComponent.OnGroupChanged(EGroupChangeType)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.OnGroupChanged_Implementation(EGroupChangeType)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnGroupChanged_Implementation(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalGroupComponent.OnGroupChanged_Implementation(EGroupChangeType)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.OnHighPriorityActorDestroyed_Implementation(AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnHighPriorityActorDestroyed_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalGroupComponent.OnHighPriorityActorDestroyed_Implementation(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.OverrideGroupMemberRandomWanderLocation(UE::Math::TVector<double>&,UE::Mat
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro OverrideGroupMemberRandomWanderLocation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalGroupComponent.OverrideGroupMemberRandomWanderLocation(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.OverrideGroupMemberRandomWanderLocation_Implementation(UE::Math::TVector<d
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OverrideGroupMemberRandomWanderLocation_Implementation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalGroupComponent.OverrideGroupMemberRandomWanderLocation_Implementation(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.ReceiveGroupEvent(FName&,UPrimalGroupComponent*,FBPNetExecParams&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ReceiveGroupEvent(const FName& a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UPrimalGroupComponent.ReceiveGroupEvent(FName&,UPrimalGroupComponent*,FBPNetExecParams&)", const_cast<FName*>(&a0), a1, a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ReceiveGroupEvent(FName* a0, void* a1, void* a2) const
    { return ReceiveGroupEvent(*a0, a1, a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.RemoveFromGroup()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveFromGroup() const
    {
        return NativeCall<void*>(this, "UPrimalGroupComponent.RemoveFromGroup()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.SendGroupEvent_Implementation(FName&,FBPNetExecParams&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SendGroupEvent_Implementation(const FName& a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalGroupComponent.SendGroupEvent_Implementation(FName&,FBPNetExecParams&)", const_cast<FName*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro SendGroupEvent_Implementation(FName* a0, void* a1) const
    { return SendGroupEvent_Implementation(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.SetGroupLeader(UPrimalGroupComponent*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetGroupLeader(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalGroupComponent.SetGroupLeader(UPrimalGroupComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.SetHighPriorityActor(AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetHighPriorityActor(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalGroupComponent.SetHighPriorityActor(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.StartUpdateAttackPrioritiesTimer()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro StartUpdateAttackPrioritiesTimer() const
    {
        return NativeCall<void*>(this, "UPrimalGroupComponent.StartUpdateAttackPrioritiesTimer()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.StartUpdateGroupTimer()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro StartUpdateGroupTimer() const
    {
        return NativeCall<void*>(this, "UPrimalGroupComponent.StartUpdateGroupTimer()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.StartUpdateHighPriorityActorTimer()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro StartUpdateHighPriorityActorTimer() const
    {
        return NativeCall<void*>(this, "UPrimalGroupComponent.StartUpdateHighPriorityActorTimer()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.StopUpdateAttackPrioritiesTimer()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StopUpdateAttackPrioritiesTimer() const
    {
        return NativeCall<void*>(this, "UPrimalGroupComponent.StopUpdateAttackPrioritiesTimer()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.StopUpdateGroupTimer()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StopUpdateGroupTimer() const
    {
        return NativeCall<void*>(this, "UPrimalGroupComponent.StopUpdateGroupTimer()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.StopUpdateHighPriorityActorTimer()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StopUpdateHighPriorityActorTimer() const
    {
        return NativeCall<void*>(this, "UPrimalGroupComponent.StopUpdateHighPriorityActorTimer()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.UpdateAttackPriorities()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateAttackPriorities() const
    {
        return NativeCall<void*>(this, "UPrimalGroupComponent.UpdateAttackPriorities()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.UpdateGroup()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateGroup() const
    {
        return NativeCall<void*>(this, "UPrimalGroupComponent.UpdateGroup()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.UpdateHighPriorityActor()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateHighPriorityActor() const
    {
        return NativeCall<void*>(this, "UPrimalGroupComponent.UpdateHighPriorityActor()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGroupComponent.VerifyGroup()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro VerifyGroup() const
    {
        return NativeCall<void*>(this, "UPrimalGroupComponent.VerifyGroup()");
    }

    BrzCampoPonteiro ActorTagWhitelistField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGroupComponent.ActorTagWhitelist")); }
    TArray<void*>& AssetUserDataField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGroupComponent.AssetUserData"); }
    TArray<void*>& ComponentTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGroupComponent.ComponentTags"); }
    int& CreationMethodField() const
    { return *GetNativePointerField<int*>(this, "UPrimalGroupComponent.CreationMethod"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UPrimalGroupComponent.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalGroupComponent.CustomTag"); }
    BrzCampoPonteiro GroupControllersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGroupComponent.GroupControllers")); }
    BrzCampoPonteiro GroupLeaderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGroupComponent.GroupLeader")); }
    BrzCampoPonteiro GroupLeaderConditionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGroupComponent.GroupLeaderCondition")); }
    BrzCampoPonteiro GroupLeaderPriotizeMemberTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGroupComponent.GroupLeaderPriotizeMemberType")); }
    BrzCampoPonteiro GroupMemberTypeCapsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGroupComponent.GroupMemberTypeCaps")); }
    BrzCampoPonteiro GroupMembersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGroupComponent.GroupMembers")); }
    float& GroupSearchRadiusField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGroupComponent.GroupSearchRadius"); }
    FName& GroupTypeNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalGroupComponent.GroupTypeName"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OwningPrimalCharacter` +8, medido na build 25090264
    //  (offset absoluto medido: 0x1A0; confianca alta)
    void*& HighPriorityActorField() const
    { return BrzCampoAncorado<void*>(this, "OwningPrimalCharacter", 8); }
    float& LastUpdatedGroupTimeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGroupComponent.LastUpdatedGroupTime"); }
    float& LastUpdatedHighPriorityActorTimeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGroupComponent.LastUpdatedHighPriorityActorTime"); }
    int& MaxAttackersPerTargetField() const
    { return *GetNativePointerField<int*>(this, "UPrimalGroupComponent.MaxAttackersPerTarget"); }
    int& MaxGroupSizeField() const
    { return *GetNativePointerField<int*>(this, "UPrimalGroupComponent.MaxGroupSize"); }
    float& MaxWanderDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGroupComponent.MaxWanderDistance"); }
    BrzCampoPonteiro MyGroupMemberTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGroupComponent.MyGroupMemberType")); }
    BrzCampoPonteiro OnComponentActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGroupComponent.OnComponentActivated")); }
    BrzCampoPonteiro OnComponentDeactivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGroupComponent.OnComponentDeactivated")); }
    BrzCampoPonteiro OwningPrimalCharacterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGroupComponent.OwningPrimalCharacter")); }
    FActorComponentTickFunction& PrimaryComponentTickField() const
    { return *GetNativePointerField<FActorComponentTickFunction*>(this, "UPrimalGroupComponent.PrimaryComponentTick"); }
    int& UCSSerializationIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalGroupComponent.UCSSerializationIndex"); }
    float& UpdateAttackPrioritiesIntervalField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGroupComponent.UpdateAttackPrioritiesInterval"); }
    BrzCampoPonteiro UpdateAttackPrioritiesTimerHandleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGroupComponent.UpdateAttackPrioritiesTimerHandle")); }
    float& UpdateGroupIntervalField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGroupComponent.UpdateGroupInterval"); }
    BrzCampoPonteiro UpdateGroupTimerHandleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGroupComponent.UpdateGroupTimerHandle")); }
    float& UpdateHighPriorityActorIntervalField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGroupComponent.UpdateHighPriorityActorInterval"); }
    BrzCampoPonteiro UpdateHighPriorityActorTimerHandleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGroupComponent.UpdateHighPriorityActorTimerHandle")); }
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
    BitFieldValue<bool, unsigned __int32> bAutoRefillGroup()
    { return { (void*)this, "bAutoRefillGroup" }; }
    BitFieldValue<bool, unsigned __int32> bGroupUsesHighPriorityActor()
    { return { (void*)this, "bGroupUsesHighPriorityActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPIsTeamAllowedToJoinGroup()
    { return { (void*)this, "bUseBPIsTeamAllowedToJoinGroup" }; }
    BitFieldValue<bool, unsigned __int32> bUseGroupLeaderPriotizeMemberType()
    { return { (void*)this, "bUseGroupLeaderPriotizeMemberType" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALGROUPCOMPONENT_H

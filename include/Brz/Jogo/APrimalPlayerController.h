// ==========================================================================
//  APrimalPlayerController — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALPLAYERCONTROLLER_H
#define BRZ_SDK_JOGO_APRIMALPLAYERCONTROLLER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

#include "APlayerController.h"

struct APrimalPlayerController : public APlayerController
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalPlayerController"); }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalPlayerController.ClientNotifyReconnected(APawn*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ClientNotifyReconnected(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalPlayerController.ClientNotifyReconnected(APawn*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalPlayerController.ClientNotifyRespawned(APawn*,bool)
    // endereco: casamento de bytes com a build de referencia
    void ClientNotifyRespawned(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "APrimalPlayerController.ClientNotifyRespawned(APawn*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalPlayerController.ClientProcessNetExecCommandBP(AActor*,FName,FBPNetExecParams)
    // endereco: cache_pdb_25090264
    void ClientProcessNetExecCommandBP(void* a0, unsigned long long a1, void* a2) const
    {
        NativeCall<void, void*, unsigned long long, void*>(this, "APrimalPlayerController.ClientProcessNetExecCommandBP(AActor*,FName,FBPNetExecParams)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalPlayerController.ClientProcessNetExecCommandBP_Implementation(AActor*,FName,FBPNetExecPar
    // endereco: casamento de bytes com a build de referencia
    void ClientProcessNetExecCommandBP_Implementation(void* a0, unsigned long long a1, void* a2) const
    {
        NativeCall<void, void*, unsigned long long, void*>(this, "APrimalPlayerController.ClientProcessNetExecCommandBP_Implementation(AActor*,FName,FBPNetExecParams)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalPlayerController.ClientProcessNetExecCommandUnreliableBP(AActor*,FName,FBPNetExecParams)
    // endereco: cache_pdb_25090264
    void ClientProcessNetExecCommandUnreliableBP(void* a0, unsigned long long a1, void* a2) const
    {
        NativeCall<void, void*, unsigned long long, void*>(this, "APrimalPlayerController.ClientProcessNetExecCommandUnreliableBP(AActor*,FName,FBPNetExecParams)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalPlayerController.ClientProcessNetExecCommand_Implementation(AActor*,FName,FNetExecParams)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void ClientProcessNetExecCommand_Implementation(void* a0, unsigned long long a1, void* a2) const
    {
        NativeCall<void, void*, unsigned long long, void*>(this, "APrimalPlayerController.ClientProcessNetExecCommand_Implementation(AActor*,FName,FNetExecParams)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalPlayerController.ClientProcessSimpleNetExecCommandBP_Implementation(AActor*,FName)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=217+grafo=3/3]]
    void ClientProcessSimpleNetExecCommandBP_Implementation(void* a0, unsigned long long a1) const
    {
        NativeCall<void, void*, unsigned long long>(this, "APrimalPlayerController.ClientProcessSimpleNetExecCommandBP_Implementation(AActor*,FName)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalPlayerController.ClientProcessSimpleNetExecCommandUnreliableBP_Implementation(AActor*,FNa
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=149+grafo=3/3]]
    void ClientProcessSimpleNetExecCommandUnreliableBP_Implementation(void* a0, unsigned long long a1) const
    {
        NativeCall<void, void*, unsigned long long>(this, "APrimalPlayerController.ClientProcessSimpleNetExecCommandUnreliableBP_Implementation(AActor*,FName)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalPlayerController.ClientSendNetExecCommandToServer(AActor*,FName,FBPNetExecParams&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientSendNetExecCommandToServer(void* a0, unsigned long long a1, void* a2, bool a3) const
    {
        return NativeCall<void*, void*, unsigned long long, void*, bool>(this, "APrimalPlayerController.ClientSendNetExecCommandToServer(AActor*,FName,FBPNetExecParams&,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalPlayerController.ClientSetHUD_Implementation(TSubclassOf<AHUD>)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=98]]
    void ClientSetHUD_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalPlayerController.ClientSetHUD_Implementation(TSubclassOf<AHUD>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalPlayerController.ComponentPropertyServerToClients(UActorComponent*,FName,TArray<unsignedc
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=9]]
    BrzPonteiro ComponentPropertyServerToClients(void* a0, unsigned long long a1, void* a2) const
    {
        return NativeCall<void*, void*, unsigned long long, void*>(this, "APrimalPlayerController.ComponentPropertyServerToClients(UActorComponent*,FName,TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalPlayerController.ComponentPropertyServerToClientsUnreliable(UActorComponent*,FName,TArray
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=9]]
    BrzPonteiro ComponentPropertyServerToClientsUnreliable(void* a0, unsigned long long a1, void* a2) const
    {
        return NativeCall<void*, void*, unsigned long long, void*>(this, "APrimalPlayerController.ComponentPropertyServerToClientsUnreliable(UActorComponent*,FName,TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalPlayerController.ComponentPropertyServerToClients_Implementation(UActorComponent*,FName,T
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ComponentPropertyServerToClients_Implementation(void* a0, unsigned long long a1, void* a2) const
    {
        return NativeCall<void*, void*, unsigned long long, void*>(this, "APrimalPlayerController.ComponentPropertyServerToClients_Implementation(UActorComponent*,FName,TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalPlayerController.GetLevelStreamingPawnViewLocation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=285]]
    BrzPonteiro GetLevelStreamingPawnViewLocation() const
    {
        return NativeCall<void*>(this, "APrimalPlayerController.GetLevelStreamingPawnViewLocation()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalPlayerController.HandleRespawned(APawn*,bool)
    // endereco: casamento de bytes com a build de referencia
    void HandleRespawned(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "APrimalPlayerController.HandleRespawned(APawn*,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalPlayerController.NetConnectionHasActiveActor(AActor*)
    // endereco: casamento de bytes com a build de referencia
    bool NetConnectionHasActiveActor(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalPlayerController.NetConnectionHasActiveActor(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalPlayerController.PropertyServerToClients(AActor*,FName,TArray<unsignedchar,TSizedDefaultA
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=9]]
    void PropertyServerToClients(void* a0, unsigned long long a1, void* a2) const
    {
        NativeCall<void, void*, unsigned long long, void*>(this, "APrimalPlayerController.PropertyServerToClients(AActor*,FName,TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalPlayerController.PropertyServerToClientsUnreliable(AActor*,FName,TArray<unsignedchar,TSiz
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=9]]
    void PropertyServerToClientsUnreliable(void* a0, unsigned long long a1, void* a2) const
    {
        NativeCall<void, void*, unsigned long long, void*>(this, "APrimalPlayerController.PropertyServerToClientsUnreliable(AActor*,FName,TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalPlayerController.PropertyServerToClientsUnreliable_Implementation(AActor*,FName,TArray<un
    // endereco: cache_pdb_25090264
    void PropertyServerToClientsUnreliable_Implementation(void* a0, unsigned long long a1, void* a2) const
    {
        NativeCall<void, void*, unsigned long long, void*>(this, "APrimalPlayerController.PropertyServerToClientsUnreliable_Implementation(AActor*,FName,TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalPlayerController.ServerProcessNetExecCommand(AActor*,FName,FBPNetExecParams)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=254+grafo=9/9]]
    BrzPonteiro ServerProcessNetExecCommand(void* a0, unsigned long long a1, void* a2) const
    {
        return NativeCall<void*, void*, unsigned long long, void*>(this, "APrimalPlayerController.ServerProcessNetExecCommand(AActor*,FName,FBPNetExecParams)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalPlayerController.ServerProcessNetExecCommand_Implementation(AActor*,FName,FBPNetExecParam
    // endereco: casamento de bytes com a build de referencia
    void ServerProcessNetExecCommand_Implementation(void* a0, unsigned long long a1, void* a2) const
    {
        NativeCall<void, void*, unsigned long long, void*>(this, "APrimalPlayerController.ServerProcessNetExecCommand_Implementation(AActor*,FName,FBPNetExecParams)", a0, a1, a2);
    }

    BrzCampoPonteiro PreviousRotationInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerController.PreviousRotationInput")); }
    BitFieldValue<bool, unsigned __int32> bLockedInputUI()
    { return { (void*)this, "bLockedInputUI" }; }
    BitFieldValue<bool, unsigned __int32> bPossessedAnyPawn()
    { return { (void*)this, "bPossessedAnyPawn" }; }
    BitFieldValue<bool, unsigned __int32> bCheatPlayer()
    { return { (void*)this, "bCheatPlayer" }; }
    BitFieldValue<bool, unsigned __int32> bForceSpawnedNotification()
    { return { (void*)this, "bForceSpawnedNotification" }; }
    BitFieldValue<bool, unsigned __int32> bShowExtendedInfoKey()
    { return { (void*)this, "bShowExtendedInfoKey" }; }
    BitFieldValue<bool, unsigned __int32> bIsAdmin()
    { return { (void*)this, "bIsAdmin" }; }
    BitFieldValue<bool, unsigned __int32> bForceShowMouseCursor()
    { return { (void*)this, "bForceShowMouseCursor" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALPLAYERCONTROLLER_H

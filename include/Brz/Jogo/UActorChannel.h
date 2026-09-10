// ==========================================================================
//  UActorChannel — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UACTORCHANNEL_H
#define BRZ_SDK_JOGO_UACTORCHANNEL_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UActorChannel
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UActorChannel"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.AddedToChannelPool()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddedToChannelPool() const
    {
        return NativeCall<void*>(this, "UActorChannel.AddedToChannelPool()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.AppendExportBunches(TArray<FOutBunch*,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AppendExportBunches(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UActorChannel.AppendExportBunches(TArray<FOutBunch*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.AppendMustBeMappedGuids(FOutBunch*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AppendMustBeMappedGuids(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UActorChannel.AppendMustBeMappedGuids(FOutBunch*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.BecomeDormant()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    BrzPonteiro BecomeDormant() const
    {
        return NativeCall<void*>(this, "UActorChannel.BecomeDormant()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.BreakAndReleaseReferences()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BreakAndReleaseReferences() const
    {
        return NativeCall<void*>(this, "UActorChannel.BreakAndReleaseReferences()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.CanStopTicking()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro CanStopTicking() const
    {
        return NativeCall<void*>(this, "UActorChannel.CanStopTicking()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.CleanUp(bool,EChannelCloseReason)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CleanUp(bool a0, int a1) const
    {
        return NativeCall<void*, bool, int>(this, "UActorChannel.CleanUp(bool,EChannelCloseReason)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.CleanupReplicators(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CleanupReplicators(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UActorChannel.CleanupReplicators(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.Close(EChannelCloseReason)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Close(int a0) const
    {
        return NativeCall<void*, int>(this, "UActorChannel.Close(EChannelCloseReason)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.CreateReplicator(UObject*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CreateReplicator(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "UActorChannel.CreateReplicator(UObject*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.Describe()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Describe() const
    {
        return NativeCall<void*>(this, "UActorChannel.Describe()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.DestroyActorAndComponents()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DestroyActorAndComponents() const
    {
        return NativeCall<void*>(this, "UActorChannel.DestroyActorAndComponents()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.DoSubObjectReplication(FOutBunch&,FReplicationFlags&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DoSubObjectReplication(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UActorChannel.DoSubObjectReplication(FOutBunch&,FReplicationFlags&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.FindReplicator(UObject*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindReplicator(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UActorChannel.FindReplicator(UObject*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.GetAdditionalRequiredBunches(FOutBunch&,EChannelGetAdditionalRequiredBunchesFlags)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAdditionalRequiredBunches(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "UActorChannel.GetAdditionalRequiredBunches(FOutBunch&,EChannelGetAdditionalRequiredBunchesFlags)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.GetNetFieldExportGroupForClassNetCache(UClass*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetNetFieldExportGroupForClassNetCache(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UActorChannel.GetNetFieldExportGroupForClassNetCache(UClass*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.GetOrCreateNetFieldExportGroupForClassNetCache(UObject*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetOrCreateNetFieldExportGroupForClassNetCache(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UActorChannel.GetOrCreateNetFieldExportGroupForClassNetCache(UObject*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.Init(UNetConnection*,int,EChannelCreateFlags)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Init(void* a0, int a1, int a2) const
    {
        return NativeCall<void*, void*, int, int>(this, "UActorChannel.Init(UNetConnection*,int,EChannelCreateFlags)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.IsActorReadyForReplication()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    BrzPonteiro IsActorReadyForReplication() const
    {
        return NativeCall<void*>(this, "UActorChannel.IsActorReadyForReplication()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.NotifyActorChannelOpen(AActor*,FInBunch&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NotifyActorChannelOpen(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UActorChannel.NotifyActorChannelOpen(AActor*,FInBunch&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.PrepareForRemoteFunction(UObject*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PrepareForRemoteFunction(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UActorChannel.PrepareForRemoteFunction(UObject*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.Primal_ReceivedNakRange(int,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Primal_ReceivedNakRange(int a0, int a1) const
    {
        return NativeCall<void*, int, int>(this, "UActorChannel.Primal_ReceivedNakRange(int,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.ProcessBunch(FInBunch&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ProcessBunch(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UActorChannel.ProcessBunch(FInBunch&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.ProcessQueuedBunches()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ProcessQueuedBunches() const
    {
        return NativeCall<void*>(this, "UActorChannel.ProcessQueuedBunches()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.QueueRemoteFunctionBunch(UObject*,UFunction*,FOutBunch&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro QueueRemoteFunctionBunch(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UActorChannel.QueueRemoteFunctionBunch(UObject*,UFunction*,FOutBunch&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.ReadContentBlockHeader(FInBunch&,bool&,bool&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ReadContentBlockHeader(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UActorChannel.ReadContentBlockHeader(FInBunch&,bool&,bool&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.ReadFieldHeaderAndPayload(UObject*,FClassNetCache*,FNetFieldExportGroup*,FNetBitRe
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ReadFieldHeaderAndPayload(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, void*>(this, "UActorChannel.ReadFieldHeaderAndPayload(UObject*,FClassNetCache*,FNetFieldExportGroup*,FNetBitReader&,FFieldNetCache**,FNetBitReader&)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.ReadyForDormancy(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ReadyForDormancy(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UActorChannel.ReadyForDormancy(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.ReceivedBunch(FInBunch&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ReceivedBunch(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UActorChannel.ReceivedBunch(FInBunch&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.ReceivedNak(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ReceivedNak(int a0) const
    {
        return NativeCall<void*, int>(this, "UActorChannel.ReceivedNak(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.ReleaseReferences(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ReleaseReferences(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UActorChannel.ReleaseReferences(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.ReplicateActor()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ReplicateActor() const
    {
        return NativeCall<void*>(this, "UActorChannel.ReplicateActor()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.Serialize(FArchive&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Serialize(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UActorChannel.Serialize(FArchive&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.SetChannelActor(AActor*,ESetChannelActorFlags)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetChannelActor(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "UActorChannel.SetChannelActor(AActor*,ESetChannelActorFlags)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.SetClosingFlag()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetClosingFlag() const
    {
        return NativeCall<void*>(this, "UActorChannel.SetClosingFlag()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.SetCurrentSubObjectOwner(AActor*)
    // endereco: cache_pdb_25090264
    BrzPonteiro SetCurrentSubObjectOwner(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UActorChannel.SetCurrentSubObjectOwner(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.StartBecomingDormant()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartBecomingDormant() const
    {
        return NativeCall<void*>(this, "UActorChannel.StartBecomingDormant()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.Tick()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Tick() const
    {
        return NativeCall<void*>(this, "UActorChannel.Tick()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.UpdateDeletedSubObjects(FOutBunch&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateDeletedSubObjects(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UActorChannel.UpdateDeletedSubObjects(FOutBunch&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.WriteContentBlockHeader(UObject*,FNetBitWriter&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro WriteContentBlockHeader(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "UActorChannel.WriteContentBlockHeader(UObject*,FNetBitWriter&,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.WriteContentBlockPayload(UObject*,FNetBitWriter&,bool,FNetBitWriter&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro WriteContentBlockPayload(void* a0, void* a1, bool a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, bool, void*>(this, "UActorChannel.WriteContentBlockPayload(UObject*,FNetBitWriter&,bool,FNetBitWriter&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorChannel.WriteFieldHeaderAndPayload(FNetBitWriter&,FClassNetCache*,FFieldNetCache*,FNetFiel
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro WriteFieldHeaderAndPayload(void* a0, void* a1, void* a2, void* a3, void* a4, bool a5) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, bool>(this, "UActorChannel.WriteFieldHeaderAndPayload(FNetBitWriter&,FClassNetCache*,FFieldNetCache*,FNetFieldExportGroup*,FNetBitWriter&,bool)", a0, a1, a2, a3, a4, a5);
    }

    // ── SOBRECARGAS QUE NAO CABEM EM C++ ─────────────────────────────
    //
    //  Estas existem no jogo, e a chave delas resolve normalmente por
    //  `GetAddress` / `NativeCall`. O que nao cabe e' a DECLARACAO: em C
    //  os parametros viram os mesmos da que ficou, ou a diferenca esta'
    //  so' no retorno — e C++ nao sobrecarrega por retorno.
    //
    //  Para chamar uma destas, use `NativeCall` direto com a chave:
    //    UActorChannel.SetCurrentSubObjectOwner(UActorComponent*)
    //      (colide com UActorChannel.SetCurrentSubObjectOwner(AActor*))

    BrzCampoPonteiro ActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UActorChannel.Actor")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `Actor` +8, medido na build 25090264
    //  (offset absoluto medido: 0x78; confianca media)
    void*& ActorNetGUIDField() const
    { return BrzCampoAncorado<void*>(this, "Actor", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `Actor` +48, medido na build 25090264
    //  (offset absoluto medido: 0xA0; confianca media)
    void*& ActorReplicatorField() const
    { return BrzCampoAncorado<void*>(this, "Actor", 48); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `Actor` +44, medido na build 25090264
    //  (offset absoluto medido: 0x9C; confianca media)
    void*& ChannelSubObjectDirtyCountField() const
    { return BrzCampoAncorado<void*>(this, "Actor", 44); }
    BrzCampoPonteiro ConnectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UActorChannel.Connection")); }
    BrzCampoPonteiro CreateSubObjectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UActorChannel.CreateSubObjects")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `Actor` +16, medido na build 25090264
    //  (offset absoluto medido: 0x80; confianca media)
    float& CustomTimeDilationField() const
    { return BrzCampoAncorado<float>(this, "Actor", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `Actor` +32, medido na build 25090264
    //  (offset absoluto medido: 0x90; confianca media)
    double& LastUpdateTimeField() const
    { return BrzCampoAncorado<double>(this, "Actor", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `Actor` +168, medido na build 25090264
    //  (offset absoluto medido: 0x118; confianca baixa)
    void*& PendingGuidResolvesField() const
    { return BrzCampoAncorado<void*>(this, "Actor", 168); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `Actor` +160, medido na build 25090264
    //  (offset absoluto medido: 0x110; confianca baixa)
    void*& QueuedBunchStartTimeField() const
    { return BrzCampoAncorado<void*>(this, "Actor", 160); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `Actor` +144, medido na build 25090264
    //  (offset absoluto medido: 0x100; confianca baixa)
    void*& QueuedBunchesField() const
    { return BrzCampoAncorado<void*>(this, "Actor", 144); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `Actor` +24, medido na build 25090264
    //  (offset absoluto medido: 0x88; confianca media)
    void*& RelevantTimeField() const
    { return BrzCampoAncorado<void*>(this, "Actor", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `Actor` +64, medido na build 25090264
    //  (offset absoluto medido: 0xB0; confianca media)
    void*& ReplicationMapField() const
    { return BrzCampoAncorado<void*>(this, "Actor", 64); }
};

#endif  // BRZ_SDK_JOGO_UACTORCHANNEL_H

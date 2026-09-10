// ==========================================================================
//  UPrimalMassSubsystem — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALMASSSUBSYSTEM_H
#define BRZ_SDK_JOGO_UPRIMALMASSSUBSYSTEM_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UPrimalMassSubsystem
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalMassSubsystem"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalMassSubsystem.CreateArchetypes()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CreateArchetypes() const
    {
        return NativeCall<void*>(this, "UPrimalMassSubsystem.CreateArchetypes()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalMassSubsystem.DoesSupportWorldType(EWorldType::Type)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro DoesSupportWorldType(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalMassSubsystem.DoesSupportWorldType(EWorldType::Type)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalMassSubsystem.Initialize(FSubsystemCollectionBase&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    BrzPonteiro Initialize(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalMassSubsystem.Initialize(FSubsystemCollectionBase&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalMassSubsystem.OnMassMoverDied(APrimalCharacter*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=141+grafo=3/3]]
    BrzPonteiro OnMassMoverDied(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalMassSubsystem.OnMassMoverDied(APrimalCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalMassSubsystem.OnMoveSegmentUpdated(AActor*,UPathFollowingComponent*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnMoveSegmentUpdated(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalMassSubsystem.OnMoveSegmentUpdated(AActor*,UPathFollowingComponent*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalMassSubsystem.OnWorldBeginPlay(UWorld&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnWorldBeginPlay(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalMassSubsystem.OnWorldBeginPlay(UWorld&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalMassSubsystem.PathFinished(AActor*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro PathFinished(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalMassSubsystem.PathFinished(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalMassSubsystem.PathUpdated(AActor*,UPathFollowingComponent*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PathUpdated(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalMassSubsystem.PathUpdated(AActor*,UPathFollowingComponent*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalMassSubsystem.RemoveActorFromMassMover(AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveActorFromMassMover(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalMassSubsystem.RemoveActorFromMassMover(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalMassSubsystem.TurnActorIntoMassMover(AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TurnActorIntoMassMover(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalMassSubsystem.TurnActorIntoMassMover(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalMassSubsystem.UpdateMovementVariables(AActor*)
    // endereco: cache_pdb_25090264
    BrzPonteiro UpdateMovementVariables(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalMassSubsystem.UpdateMovementVariables(AActor*)", a0);
    }

    BrzCampoPonteiro EntityManagerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalMassSubsystem.EntityManager")); }
};

#endif  // BRZ_SDK_JOGO_UPRIMALMASSSUBSYSTEM_H

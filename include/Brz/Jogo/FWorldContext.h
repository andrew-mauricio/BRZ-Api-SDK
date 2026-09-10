// ==========================================================================
//  FWorldContext — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FWORLDCONTEXT_H
#define BRZ_SDK_JOGO_FWORLDCONTEXT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UGameInstance;


struct FWorldContext
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FWorldContext"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FWorldContext.SetCurrentWorld(UWorld*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetCurrentWorld(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FWorldContext.SetCurrentWorld(UWorld*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FWorldContext.operator=(FWorldContext&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro operator_(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FWorldContext.operator=(FWorldContext&)", a0);
    }

    BrzCampoPonteiro ActiveNetDriversField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldContext.ActiveNetDrivers")); }
    BrzCampoPonteiro GameViewportField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldContext.GameViewport")); }
    BrzCampoPonteiro LastRemoteURLField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldContext.LastRemoteURL")); }
    BrzCampoPonteiro LastURLField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldContext.LastURL")); }
    BrzCampoPonteiro LoadedLevelsForPendingMapChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldContext.LoadedLevelsForPendingMapChange")); }
    BrzCampoPonteiro ObjectReferencersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldContext.ObjectReferencers")); }
    TObjectPtr<UGameInstance>& OwningGameInstanceField() const
    { return *GetNativePointerField<TObjectPtr<UGameInstance>*>(this, "FWorldContext.OwningGameInstance"); }
    BrzCampoPonteiro PackagesToFullyLoadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldContext.PackagesToFullyLoad")); }
    BrzCampoPonteiro PendingLevelStreamingStatusUpdatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldContext.PendingLevelStreamingStatusUpdates")); }
    BrzCampoPonteiro PendingNetGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldContext.PendingNetGame")); }
};

#endif  // BRZ_SDK_JOGO_FWORLDCONTEXT_H

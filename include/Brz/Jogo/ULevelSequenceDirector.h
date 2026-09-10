// ==========================================================================
//  ULevelSequenceDirector — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ULEVELSEQUENCEDIRECTOR_H
#define BRZ_SDK_JOGO_ULEVELSEQUENCEDIRECTOR_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UPlayer;


struct ULevelSequenceDirector
{
    static UClass* StaticClass()
    { return BrzClassePorNome("ULevelSequenceDirector"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelSequenceDirector.FindSequenceInstance()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindSequenceInstance() const
    {
        return NativeCall<void*>(this, "ULevelSequenceDirector.FindSequenceInstance()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelSequenceDirector.GetBoundActor(FMovieSceneObjectBindingID)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetBoundActor(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ULevelSequenceDirector.GetBoundActor(FMovieSceneObjectBindingID)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelSequenceDirector.GetBoundActors(FMovieSceneObjectBindingID)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetBoundActors(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ULevelSequenceDirector.GetBoundActors(FMovieSceneObjectBindingID)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelSequenceDirector.GetBoundObject(FMovieSceneObjectBindingID)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetBoundObject(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ULevelSequenceDirector.GetBoundObject(FMovieSceneObjectBindingID)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelSequenceDirector.GetBoundObjects(FMovieSceneObjectBindingID)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetBoundObjects(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ULevelSequenceDirector.GetBoundObjects(FMovieSceneObjectBindingID)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelSequenceDirector.GetCurrentTime()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCurrentTime() const
    {
        return NativeCall<void*>(this, "ULevelSequenceDirector.GetCurrentTime()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelSequenceDirector.GetRootSequenceTime()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetRootSequenceTime() const
    {
        return NativeCall<void*>(this, "ULevelSequenceDirector.GetRootSequenceTime()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelSequenceDirector.GetSequence()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSequence() const
    {
        return NativeCall<void*>(this, "ULevelSequenceDirector.GetSequence()");
    }

    BrzCampoPonteiro InstanceIDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelSequenceDirector.InstanceId")); }
    unsigned short& InstanceIdField() const
    { return *GetNativePointerField<unsigned short*>(this, "ULevelSequenceDirector.InstanceId"); }
    unsigned short& InstanceSerialField() const
    { return *GetNativePointerField<unsigned short*>(this, "ULevelSequenceDirector.InstanceSerial"); }
    int& MovieScenePlayerIndexField() const
    { return *GetNativePointerField<int*>(this, "ULevelSequenceDirector.MovieScenePlayerIndex"); }
    TObjectPtr<UPlayer>& PlayerField() const
    { return *GetNativePointerField<TObjectPtr<UPlayer>*>(this, "ULevelSequenceDirector.Player"); }
    int& SubSequenceIDField() const
    { return *GetNativePointerField<int*>(this, "ULevelSequenceDirector.SubSequenceID"); }
    TWeakObjectPtr<void>& WeakLinkerField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "ULevelSequenceDirector.WeakLinker"); }
    BitFieldValue<bool, unsigned __int32> bSequenceDirectorHideUI()
    { return { (void*)this, "bSequenceDirectorHideUI" }; }

};

#endif  // BRZ_SDK_JOGO_ULEVELSEQUENCEDIRECTOR_H

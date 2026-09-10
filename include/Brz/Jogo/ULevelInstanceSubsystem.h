// ==========================================================================
//  ULevelInstanceSubsystem — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ULEVELINSTANCESUBSYSTEM_H
#define BRZ_SDK_JOGO_ULEVELINSTANCESUBSYSTEM_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct ULevelInstanceSubsystem
{
    static UClass* StaticClass()
    { return BrzClassePorNome("ULevelInstanceSubsystem"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelInstanceSubsystem.GetLevelInstanceLevel(ILevelInstanceInterface*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetLevelInstanceLevel(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ULevelInstanceSubsystem.GetLevelInstanceLevel(ILevelInstanceInterface*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelInstanceSubsystem.GetLevelInstanceLevelStreaming(ILevelInstanceInterface*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetLevelInstanceLevelStreaming(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ULevelInstanceSubsystem.GetLevelInstanceLevelStreaming(ILevelInstanceInterface*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelInstanceSubsystem.GetOwningLevel(ULevel*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetOwningLevel(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "ULevelInstanceSubsystem.GetOwningLevel(ULevel*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelInstanceSubsystem.GetOwningLevelInstance(ULevel*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetOwningLevelInstance(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ULevelInstanceSubsystem.GetOwningLevelInstance(ULevel*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelInstanceSubsystem.IsLoaded(ILevelInstanceInterface*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsLoaded(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ULevelInstanceSubsystem.IsLoaded(ILevelInstanceInterface*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelInstanceSubsystem.IsLoading(ILevelInstanceInterface*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsLoading(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ULevelInstanceSubsystem.IsLoading(ILevelInstanceInterface*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelInstanceSubsystem.OnUpdateStreamingState()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro OnUpdateStreamingState() const
    {
        return NativeCall<void*>(this, "ULevelInstanceSubsystem.OnUpdateStreamingState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelInstanceSubsystem.RegisterLoadedLevelStreamingLevelInstance(ULevelStreamingLevelInstance*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RegisterLoadedLevelStreamingLevelInstance(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ULevelInstanceSubsystem.RegisterLoadedLevelStreamingLevelInstance(ULevelStreamingLevelInstance*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelInstanceSubsystem.RequestLoadLevelInstance(ILevelInstanceInterface*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RequestLoadLevelInstance(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "ULevelInstanceSubsystem.RequestLoadLevelInstance(ILevelInstanceInterface*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelInstanceSubsystem.UnloadLevelInstance(FLevelInstanceID&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UnloadLevelInstance(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ULevelInstanceSubsystem.UnloadLevelInstance(FLevelInstanceID&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelInstanceSubsystem.UpdateStreamingStateInternal()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateStreamingStateInternal() const
    {
        return NativeCall<void*>(this, "ULevelInstanceSubsystem.UpdateStreamingStateInternal()");
    }
    BrzCampoPonteiro LevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelInstanceSubsystem.LevelStreaming")); }
};

#endif  // BRZ_SDK_JOGO_ULEVELINSTANCESUBSYSTEM_H

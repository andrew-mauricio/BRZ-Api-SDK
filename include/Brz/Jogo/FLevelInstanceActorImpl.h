// ==========================================================================
//  FLevelInstanceActorImpl — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FLEVELINSTANCEACTORIMPL_H
#define BRZ_SDK_JOGO_FLEVELINSTANCEACTORIMPL_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FLevelInstanceActorImpl
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FLevelInstanceActorImpl"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FLevelInstanceActorImpl.OnLevelInstanceLoaded()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnLevelInstanceLoaded() const
    {
        return NativeCall<void*>(this, "FLevelInstanceActorImpl.OnLevelInstanceLoaded()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FLevelInstanceActorImpl.RegisterLevelInstance()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RegisterLevelInstance() const
    {
        return NativeCall<void*>(this, "FLevelInstanceActorImpl.RegisterLevelInstance()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FLevelInstanceActorImpl.UnregisterLevelInstance()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UnregisterLevelInstance() const
    {
        return NativeCall<void*>(this, "FLevelInstanceActorImpl.UnregisterLevelInstance()");
    }
};

#endif  // BRZ_SDK_JOGO_FLEVELINSTANCEACTORIMPL_H

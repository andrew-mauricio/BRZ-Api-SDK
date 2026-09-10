// ==========================================================================
//  UEngineHandlerComponentFactory — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UENGINEHANDLERCOMPONENTFACTORY_H
#define BRZ_SDK_JOGO_UENGINEHANDLERCOMPONENTFACTORY_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UEngineHandlerComponentFactory
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UEngineHandlerComponentFactory"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UEngineHandlerComponentFactory.CreateComponentInstance(FString&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro CreateComponentInstance(const FString& a0)
    {
        return NativeCall<void*, void*>(nullptr, "UEngineHandlerComponentFactory.CreateComponentInstance(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static BrzPonteiro CreateComponentInstance(FString* a0)
    { return CreateComponentInstance(*a0); }

};

#endif  // BRZ_SDK_JOGO_UENGINEHANDLERCOMPONENTFACTORY_H

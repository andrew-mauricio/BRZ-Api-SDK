// ==========================================================================
//  UObject_WithWorldContext — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UOBJECT_WITHWORLDCONTEXT_H
#define BRZ_SDK_JOGO_UOBJECT_WITHWORLDCONTEXT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UWorld;


struct UObject_WithWorldContext
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UObject_WithWorldContext"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObject_WithWorldContext.GetWorld()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    UWorld* GetWorld() const
    {
        return NativeCall<UWorld*>(this, "UObject_WithWorldContext.GetWorld()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObject_WithWorldContext.GetWorldContextObject()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetWorldContextObject() const
    {
        return NativeCall<void*>(this, "UObject_WithWorldContext.GetWorldContextObject()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObject_WithWorldContext.SetWorldContext(UObject*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetWorldContext(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UObject_WithWorldContext.SetWorldContext(UObject*)", a0);
    }

    BrzCampoPonteiro WorldContextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UObject_WithWorldContext.WorldContext")); }
};

#endif  // BRZ_SDK_JOGO_UOBJECT_WITHWORLDCONTEXT_H

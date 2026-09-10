// ==========================================================================
//  FPrimalImageDecorator — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FPRIMALIMAGEDECORATOR_H
#define BRZ_SDK_JOGO_FPRIMALIMAGEDECORATOR_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FPrimalImageDecorator
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FPrimalImageDecorator"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FPrimalImageDecorator.Create(TSharedRef<FTextLayout,1>&,FTextRunParseResults&,FString&,TSharedRe
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Create(void* a0, void* a1, const FString& a2, void* a3, void* a4) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*>(this, "FPrimalImageDecorator.Create(TSharedRef<FTextLayout,1>&,FTextRunParseResults&,FString&,TSharedRef<FString,1>&,ISlateStyle*)", a0, a1, const_cast<FString*>(&a2), a3, a4);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro Create(void* a0, void* a1, FString* a2, void* a3, void* a4) const
    { return Create(a0, a1, *a2, a3, a4); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FPrimalImageDecorator.Supports(FTextRunParseResults&,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Supports(void* a0, const FString& a1) const
    {
        return NativeCall<void*, void*, void*>(this, "FPrimalImageDecorator.Supports(FTextRunParseResults&,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro Supports(void* a0, FString* a1) const
    { return Supports(a0, *a1); }
};

#endif  // BRZ_SDK_JOGO_FPRIMALIMAGEDECORATOR_H

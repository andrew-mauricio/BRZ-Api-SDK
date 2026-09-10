// ==========================================================================
//  FStringTableRedirects — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FSTRINGTABLEREDIRECTS_H
#define BRZ_SDK_JOGO_FSTRINGTABLEREDIRECTS_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FStringTableRedirects
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FStringTableRedirects"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FStringTableRedirects.InitStringTableRedirects()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro InitStringTableRedirects()
    {
        return NativeCall<void*>(nullptr, "FStringTableRedirects.InitStringTableRedirects()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FStringTableRedirects.RedirectTableIdAndKey(FName&,FTextKey&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro RedirectTableIdAndKey(const FName& a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "FStringTableRedirects.RedirectTableIdAndKey(FName&,FTextKey&)", const_cast<FName*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static BrzPonteiro RedirectTableIdAndKey(FName* a0, void* a1)
    { return RedirectTableIdAndKey(*a0, a1); }

};

#endif  // BRZ_SDK_JOGO_FSTRINGTABLEREDIRECTS_H

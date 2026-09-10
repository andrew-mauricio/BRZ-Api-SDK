// ==========================================================================
//  FTransformAnimationAttribute — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FTRANSFORMANIMATIONATTRIBUTE_H
#define BRZ_SDK_JOGO_FTRANSFORMANIMATIONATTRIBUTE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UScriptStruct;


struct FTransformAnimationAttribute
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FTransformAnimationAttribute"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FTransformAnimationAttribute.Accumulate(FTransformAnimationAttribute&,float,EAdditiveAnimationTy
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Accumulate(void* a0, float a1, int a2) const
    {
        return NativeCall<void*, void*, float, int>(this, "FTransformAnimationAttribute.Accumulate(FTransformAnimationAttribute&,float,EAdditiveAnimationType)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FTransformAnimationAttribute.Interpolate(FTransformAnimationAttribute&,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Interpolate(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "FTransformAnimationAttribute.Interpolate(FTransformAnimationAttribute&,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FTransformAnimationAttribute.StaticStruct()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=55+chamadores=7]]
    static UScriptStruct* StaticStruct()
    {
        return NativeCall<UScriptStruct*>(nullptr, "FTransformAnimationAttribute.StaticStruct()");
    }

    BitFieldValue<bool, unsigned __int32> Value()
    { return { (void*)this, "Value" }; }
};

#endif  // BRZ_SDK_JOGO_FTRANSFORMANIMATIONATTRIBUTE_H

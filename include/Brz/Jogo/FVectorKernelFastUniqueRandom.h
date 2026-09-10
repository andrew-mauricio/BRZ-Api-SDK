// ==========================================================================
//  FVectorKernelFastUniqueRandom — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FVECTORKERNELFASTUNIQUERANDOM_H
#define BRZ_SDK_JOGO_FVECTORKERNELFASTUNIQUERANDOM_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FVectorKernelFastUniqueRandom
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FVectorKernelFastUniqueRandom"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FVectorKernelFastUniqueRandom.Exec(FVectorVMExternalFunctionContextProxy&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro Exec(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "FVectorKernelFastUniqueRandom.Exec(FVectorVMExternalFunctionContextProxy&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FVectorKernelFastUniqueRandom.FastUniqueRandom_FastPathLibrary(int,int,int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    static BrzPonteiro FastUniqueRandom_FastPathLibrary(int a0, int a1, int a2)
    {
        return NativeCall<void*, int, int, int>(nullptr, "FVectorKernelFastUniqueRandom.FastUniqueRandom_FastPathLibrary(int,int,int)", a0, a1, a2);
    }

};

#endif  // BRZ_SDK_JOGO_FVECTORKERNELFASTUNIQUERANDOM_H

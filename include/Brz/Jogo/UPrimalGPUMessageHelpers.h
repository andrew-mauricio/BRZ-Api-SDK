// ==========================================================================
//  UPrimalGPUMessageHelpers — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALGPUMESSAGEHELPERS_H
#define BRZ_SDK_JOGO_UPRIMALGPUMESSAGEHELPERS_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UPrimalGPUMessageHelpers
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalGPUMessageHelpers"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGPUMessageHelpers.ConvertSnowTriggerGPUMessage(TArray<float,TSizedDefaultAllocator<32>>&,
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro ConvertSnowTriggerGPUMessage(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7)
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, void*, void*, void*>(nullptr, "UPrimalGPUMessageHelpers.ConvertSnowTriggerGPUMessage(TArray<float,TSizedDefaultAllocator<32>>&,float&,UE::Math::TVector<double>&,UE::Math::TVector<float>&,float&,float&,float&,float&)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

};

#endif  // BRZ_SDK_JOGO_UPRIMALGPUMESSAGEHELPERS_H

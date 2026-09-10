// ==========================================================================
//  UPrimalWorldBuffCustomImplement — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALWORLDBUFFCUSTOMIMPLEMENT_H
#define BRZ_SDK_JOGO_UPRIMALWORLDBUFFCUSTOMIMPLEMENT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UWorld;


struct UPrimalWorldBuffCustomImplement
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalWorldBuffCustomImplement"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWorldBuffCustomImplement.BuffStackDecrease(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro BuffStackDecrease(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalWorldBuffCustomImplement.BuffStackDecrease(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWorldBuffCustomImplement.BuffStackIncreased(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro BuffStackIncreased(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalWorldBuffCustomImplement.BuffStackIncreased(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWorldBuffCustomImplement.BuffTimerRefreshed()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BuffTimerRefreshed() const
    {
        return NativeCall<void*>(this, "UPrimalWorldBuffCustomImplement.BuffTimerRefreshed()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWorldBuffCustomImplement.GetWorld()
    // endereco: cache_pdb_25090264
    UWorld* GetWorld() const
    {
        return NativeCall<UWorld*>(this, "UPrimalWorldBuffCustomImplement.GetWorld()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWorldBuffCustomImplement.PostConstruction()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PostConstruction() const
    {
        return NativeCall<void*>(this, "UPrimalWorldBuffCustomImplement.PostConstruction()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWorldBuffCustomImplement.PreDeconstruction()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PreDeconstruction() const
    {
        return NativeCall<void*>(this, "UPrimalWorldBuffCustomImplement.PreDeconstruction()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWorldBuffCustomImplement.Tick(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro Tick(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalWorldBuffCustomImplement.Tick(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWorldBuffCustomImplement.UpdateBuffCustomPersistantData()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateBuffCustomPersistantData() const
    {
        return NativeCall<void*>(this, "UPrimalWorldBuffCustomImplement.UpdateBuffCustomPersistantData()");
    }

    FName& WorldBuffIDField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalWorldBuffCustomImplement.WorldBuffID"); }
};

#endif  // BRZ_SDK_JOGO_UPRIMALWORLDBUFFCUSTOMIMPLEMENT_H

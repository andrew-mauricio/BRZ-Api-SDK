// ==========================================================================
//  FActorRepListRefView — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FACTORREPLISTREFVIEW_H
#define BRZ_SDK_JOGO_FACTORREPLISTREFVIEW_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FActorRepListRefView
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FActorRepListRefView"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorRepListRefView.Add(AActor*&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Add(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FActorRepListRefView.Add(AActor*&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorRepListRefView.AppendContentsFrom(FActorRepListRefView&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AppendContentsFrom(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FActorRepListRefView.AppendContentsFrom(FActorRepListRefView&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorRepListRefView.AppendToTArray(TArray<AActor*,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AppendToTArray(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FActorRepListRefView.AppendToTArray(TArray<AActor*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorRepListRefView.Contains(AActor*&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro Contains(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FActorRepListRefView.Contains(AActor*&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorRepListRefView.CountBytes(FArchive&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CountBytes(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FActorRepListRefView.CountBytes(FArchive&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorRepListRefView.RemoveFast(AActor*&,EAllowShrinking)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveFast(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "FActorRepListRefView.RemoveFast(AActor*&,EAllowShrinking)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorRepListRefView.RemoveSlow(AActor*&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveSlow(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FActorRepListRefView.RemoveSlow(AActor*&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorRepListRefView.Reset(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Reset(int a0) const
    {
        return NativeCall<void*, int>(this, "FActorRepListRefView.Reset(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorRepListRefView.TearDown()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TearDown() const
    {
        return NativeCall<void*>(this, "FActorRepListRefView.TearDown()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorRepListRefView.operator=(FActorRepListRefView&&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro operator_(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FActorRepListRefView.operator=(FActorRepListRefView&&)", a0);
    }
};

#endif  // BRZ_SDK_JOGO_FACTORREPLISTREFVIEW_H

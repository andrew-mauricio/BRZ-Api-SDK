// ==========================================================================
//  FWorldPartitionDraw2DContext — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FWORLDPARTITIONDRAW2DCONTEXT_H
#define BRZ_SDK_JOGO_FWORLDPARTITIONDRAW2DCONTEXT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FWorldPartitionDraw2DContext
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FWorldPartitionDraw2DContext"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FWorldPartitionDraw2DContext.BoxSegmentIntersect(UE::Math::TBox2<double>&,UE::Math::TVector2<dou
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BoxSegmentIntersect(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "FWorldPartitionDraw2DContext.BoxSegmentIntersect(UE::Math::TBox2<double>&,UE::Math::TVector2<double>&,UE::Math::TVector2<double>&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>>&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FWorldPartitionDraw2DContext.Initialize(UE::Math::TBox2<double>&,UE::Math::TBox2<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Initialize(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "FWorldPartitionDraw2DContext.Initialize(UE::Math::TBox2<double>&,UE::Math::TBox2<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FWorldPartitionDraw2DContext.PushDrawSegment(UE::Math::TBox2<double>&,UE::Math::TVector2<double>
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PushDrawSegment(void* a0, void* a1, void* a2, void* a3, float a4) const
    {
        return NativeCall<void*, void*, void*, void*, void*, float>(this, "FWorldPartitionDraw2DContext.PushDrawSegment(UE::Math::TBox2<double>&,UE::Math::TVector2<double>&,UE::Math::TVector2<double>&,FLinearColor&,float)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FWorldPartitionDraw2DContext.PushDrawText(FWorldPartitionCanvasMultiLineTextItem&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PushDrawText(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FWorldPartitionDraw2DContext.PushDrawText(FWorldPartitionCanvasMultiLineTextItem&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FWorldPartitionDraw2DContext.PushDrawTile(UE::Math::TBox2<double>&,UE::Math::TVector2<double>&,U
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PushDrawTile(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, void*>(this, "FWorldPartitionDraw2DContext.PushDrawTile(UE::Math::TBox2<double>&,UE::Math::TVector2<double>&,UE::Math::TVector2<double>&,UE::Math::TVector2<double>&,UE::Math::TVector2<double>&,FLinearColor&)", a0, a1, a2, a3, a4, a5);
    }
};

#endif  // BRZ_SDK_JOGO_FWORLDPARTITIONDRAW2DCONTEXT_H

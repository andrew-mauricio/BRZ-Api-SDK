// ==========================================================================
//  FWorldPartitionDraw2DCanvas — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FWORLDPARTITIONDRAW2DCANVAS_H
#define BRZ_SDK_JOGO_FWORLDPARTITIONDRAW2DCANVAS_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FWorldPartitionDraw2DCanvas
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FWorldPartitionDraw2DCanvas"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FWorldPartitionDraw2DCanvas.Draw(FWorldPartitionCanvasItems&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Draw(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FWorldPartitionDraw2DCanvas.Draw(FWorldPartitionCanvasItems&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FWorldPartitionDraw2DCanvas.PrepareDraw(int,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PrepareDraw(int a0, int a1) const
    {
        return NativeCall<void*, int, int>(this, "FWorldPartitionDraw2DCanvas.PrepareDraw(int,int)", a0, a1);
    }

    BrzCampoPonteiro CanvasField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldPartitionDraw2DCanvas.Canvas")); }
};

#endif  // BRZ_SDK_JOGO_FWORLDPARTITIONDRAW2DCANVAS_H

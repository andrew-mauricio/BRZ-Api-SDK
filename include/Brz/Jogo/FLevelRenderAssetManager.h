// ==========================================================================
//  FLevelRenderAssetManager — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FLEVELRENDERASSETMANAGER_H
#define BRZ_SDK_JOGO_FLEVELRENDERASSETMANAGER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FLevelRenderAssetManager
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FLevelRenderAssetManager"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FLevelRenderAssetManager.IncrementalBuild(FDynamicRenderAssetInstanceManager&,FStreamingTextureL
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IncrementalBuild(void* a0, void* a1, bool a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, bool, void*>(this, "FLevelRenderAssetManager.IncrementalBuild(FDynamicRenderAssetInstanceManager&,FStreamingTextureLevelContext&,bool,__int64&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FLevelRenderAssetManager.IncrementalUpdate(FDynamicRenderAssetInstanceManager&,TArray<UStreamabl
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IncrementalUpdate(void* a0, void* a1, void* a2, float a3, bool a4) const
    {
        return NativeCall<void*, void*, void*, void*, float, bool>(this, "FLevelRenderAssetManager.IncrementalUpdate(FDynamicRenderAssetInstanceManager&,TArray<UStreamableRenderAsset*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>>>&,__int64&,float,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FLevelRenderAssetManager.Remove(TArray<UStreamableRenderAsset*,TSizedInlineAllocator<12,32,TSize
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Remove(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FLevelRenderAssetManager.Remove(TArray<UStreamableRenderAsset*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>>>*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FLevelRenderAssetManager.RemoveComponentReferences(UPrimitiveComponent*,TArray<UStreamableRender
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveComponentReferences(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "FLevelRenderAssetManager.RemoveComponentReferences(UPrimitiveComponent*,TArray<UStreamableRenderAsset*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>>>&)", a0, a1);
    }
    BrzCampoPonteiro LevelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FLevelRenderAssetManager.Level")); }
    BitFieldValue<bool, unsigned __int32> bIsInitialized()
    { return { (void*)this, "bIsInitialized" }; }
};

#endif  // BRZ_SDK_JOGO_FLEVELRENDERASSETMANAGER_H

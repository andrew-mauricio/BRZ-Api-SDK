// ==========================================================================
//  FActorPrimitiveComponentInterface — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FACTORPRIMITIVECOMPONENTINTERFACE_H
#define BRZ_SDK_JOGO_FACTORPRIMITIVECOMPONENTINTERFACE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UObject;
struct UWorld;


struct FActorPrimitiveComponentInterface
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FActorPrimitiveComponentInterface"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorPrimitiveComponentInterface.CreatePrimitiveHitProxies(TArray<TRefCountPtr<HHitProxy>,TSize
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro CreatePrimitiveHitProxies(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "FActorPrimitiveComponentInterface.CreatePrimitiveHitProxies(TArray<TRefCountPtr<HHitProxy>,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorPrimitiveComponentInterface.CreateRenderState(FRegisterComponentContext*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static BrzPonteiro CreateRenderState(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "FActorPrimitiveComponentInterface.CreateRenderState(FRegisterComponentContext*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorPrimitiveComponentInterface.CreateSceneProxy()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro CreateSceneProxy()
    {
        return NativeCall<void*>(nullptr, "FActorPrimitiveComponentInterface.CreateSceneProxy()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorPrimitiveComponentInterface.DestroyRenderState()
    // endereco: cache_pdb_25090264
    static BrzPonteiro DestroyRenderState()
    {
        return NativeCall<void*>(nullptr, "FActorPrimitiveComponentInterface.DestroyRenderState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorPrimitiveComponentInterface.GetBounds()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    static BrzPonteiro GetBounds()
    {
        return NativeCall<void*>(nullptr, "FActorPrimitiveComponentInterface.GetBounds()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorPrimitiveComponentInterface.GetFullName()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetFullName()
    {
        return NativeCall<void*>(nullptr, "FActorPrimitiveComponentInterface.GetFullName()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorPrimitiveComponentInterface.GetLastRenderTimeOnScreen()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetLastRenderTimeOnScreen()
    {
        return NativeCall<void*>(nullptr, "FActorPrimitiveComponentInterface.GetLastRenderTimeOnScreen()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorPrimitiveComponentInterface.GetOwner()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static UObject* GetOwner()
    {
        return NativeCall<UObject*>(nullptr, "FActorPrimitiveComponentInterface.GetOwner()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorPrimitiveComponentInterface.GetPrimitiveStats(FPrimitiveStats&)
    // endereco: cache_pdb_25090264
    static BrzPonteiro GetPrimitiveStats(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "FActorPrimitiveComponentInterface.GetPrimitiveStats(FPrimitiveStats&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorPrimitiveComponentInterface.GetSceneProxy()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    static BrzPonteiro GetSceneProxy()
    {
        return NativeCall<void*>(nullptr, "FActorPrimitiveComponentInterface.GetSceneProxy()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorPrimitiveComponentInterface.GetTransform()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    static BrzPonteiro GetTransform()
    {
        return NativeCall<void*>(nullptr, "FActorPrimitiveComponentInterface.GetTransform()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorPrimitiveComponentInterface.GetUObject()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static UObject* GetUObject()
    {
        return NativeCall<UObject*>(nullptr, "FActorPrimitiveComponentInterface.GetUObject()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorPrimitiveComponentInterface.GetUsedMaterials(TArray<UMaterialInterface*,TSizedDefaultAlloc
    // endereco: cache_pdb_25090264
    static BrzPonteiro GetUsedMaterials(void* a0, bool a1)
    {
        return NativeCall<void*, void*, bool>(nullptr, "FActorPrimitiveComponentInterface.GetUsedMaterials(TArray<UMaterialInterface*,TSizedDefaultAllocator<32>>&,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorPrimitiveComponentInterface.GetWorld()
    // endereco: cache_pdb_25090264
    static UWorld* GetWorld()
    {
        return NativeCall<UWorld*>(nullptr, "FActorPrimitiveComponentInterface.GetWorld()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorPrimitiveComponentInterface.IsRegistered()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=56]]
    static BrzPonteiro IsRegistered()
    {
        return NativeCall<void*>(nullptr, "FActorPrimitiveComponentInterface.IsRegistered()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorPrimitiveComponentInterface.IsRenderStateCreated()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    static BrzPonteiro IsRenderStateCreated()
    {
        return NativeCall<void*>(nullptr, "FActorPrimitiveComponentInterface.IsRenderStateCreated()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorPrimitiveComponentInterface.IsRenderStateDirty()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static BrzPonteiro IsRenderStateDirty()
    {
        return NativeCall<void*>(nullptr, "FActorPrimitiveComponentInterface.IsRenderStateDirty()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorPrimitiveComponentInterface.IsUnreachable()
    // endereco: cache_pdb_25090264
    static BrzPonteiro IsUnreachable()
    {
        return NativeCall<void*>(nullptr, "FActorPrimitiveComponentInterface.IsUnreachable()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorPrimitiveComponentInterface.PrecachePSOs()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    static BrzPonteiro PrecachePSOs()
    {
        return NativeCall<void*>(nullptr, "FActorPrimitiveComponentInterface.PrecachePSOs()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorPrimitiveComponentInterface.ShouldCreateRenderState()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static BrzPonteiro ShouldCreateRenderState()
    {
        return NativeCall<void*>(nullptr, "FActorPrimitiveComponentInterface.ShouldCreateRenderState()");
    }

};

#endif  // BRZ_SDK_JOGO_FACTORPRIMITIVECOMPONENTINTERFACE_H

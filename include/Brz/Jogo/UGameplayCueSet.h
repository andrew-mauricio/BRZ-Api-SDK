// ==========================================================================
//  UGameplayCueSet — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UGAMEPLAYCUESET_H
#define BRZ_SDK_JOGO_UGAMEPLAYCUESET_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UGameplayCueSet
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UGameplayCueSet"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayCueSet.AddCues(TArray<FGameplayCueReferencePair,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddCues(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayCueSet.AddCues(TArray<FGameplayCueReferencePair,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayCueSet.BuildAccelerationMap_Internal()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BuildAccelerationMap_Internal() const
    {
        return NativeCall<void*>(this, "UGameplayCueSet.BuildAccelerationMap_Internal()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayCueSet.Empty()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Empty() const
    {
        return NativeCall<void*>(this, "UGameplayCueSet.Empty()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayCueSet.GetFilenames(TArray<FString,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetFilenames(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayCueSet.GetFilenames(TArray<FString,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayCueSet.GetSoftObjectPaths(TArray<FSoftObjectPath,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSoftObjectPaths(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayCueSet.GetSoftObjectPaths(TArray<FSoftObjectPath,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayCueSet.HandleGameplayCueNotify_Internal(AActor*,int,EGameplayCueEvent::Type,FGameplayCu
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleGameplayCueNotify_Internal(void* a0, int a1, int a2, void* a3) const
    {
        return NativeCall<void*, void*, int, int, void*>(this, "UGameplayCueSet.HandleGameplayCueNotify_Internal(AActor*,int,EGameplayCueEvent::Type,FGameplayCueParameters&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayCueSet.PrintCues()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PrintCues() const
    {
        return NativeCall<void*>(this, "UGameplayCueSet.PrintCues()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayCueSet.RemoveCuesByStringRefs(TArray<FSoftObjectPath,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveCuesByStringRefs(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayCueSet.RemoveCuesByStringRefs(TArray<FSoftObjectPath,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayCueSet.RemoveLoadedClass(UClass*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro RemoveLoadedClass(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayCueSet.RemoveLoadedClass(UClass*)", a0);
    }

    BrzCampoPonteiro GameplayCueDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayCueSet.GameplayCueData")); }
    BrzCampoPonteiro NativeClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayCueSet.NativeClass")); }
};

#endif  // BRZ_SDK_JOGO_UGAMEPLAYCUESET_H

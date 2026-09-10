// ==========================================================================
//  UObjectLibrary — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UOBJECTLIBRARY_H
#define BRZ_SDK_JOGO_UOBJECTLIBRARY_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UObjectLibrary
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UObjectLibrary"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectLibrary.AddObject(UObject*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddObject(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UObjectLibrary.AddObject(UObject*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectLibrary.ClearLoaded()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClearLoaded() const
    {
        return NativeCall<void*>(this, "UObjectLibrary.ClearLoaded()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectLibrary.CreateLibrary(UClass*,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CreateLibrary(void* a0, bool a1, bool a2) const
    {
        return NativeCall<void*, void*, bool, bool>(this, "UObjectLibrary.CreateLibrary(UClass*,bool,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectLibrary.GetAssetDataList(TArray<FAssetData,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAssetDataList(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UObjectLibrary.GetAssetDataList(TArray<FAssetData,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectLibrary.LoadAssetDataFromPaths(TArray<FString,TSizedDefaultAllocator<32>>&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LoadAssetDataFromPaths(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "UObjectLibrary.LoadAssetDataFromPaths(TArray<FString,TSizedDefaultAllocator<32>>&,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectLibrary.LoadAssetsFromAssetData()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LoadAssetsFromAssetData() const
    {
        return NativeCall<void*>(this, "UObjectLibrary.LoadAssetsFromAssetData()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectLibrary.LoadAssetsFromPaths(TArray<FString,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LoadAssetsFromPaths(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UObjectLibrary.LoadAssetsFromPaths(TArray<FString,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectLibrary.LoadBlueprintAssetDataFromPaths(TArray<FString,TSizedDefaultAllocator<32>>&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LoadBlueprintAssetDataFromPaths(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "UObjectLibrary.LoadBlueprintAssetDataFromPaths(TArray<FString,TSizedDefaultAllocator<32>>&,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectLibrary.LoadBlueprintsFromPaths(TArray<FString,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LoadBlueprintsFromPaths(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UObjectLibrary.LoadBlueprintsFromPaths(TArray<FString,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectLibrary.RemoveObject(UObject*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveObject(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UObjectLibrary.RemoveObject(UObject*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectLibrary.UseWeakReferences(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UseWeakReferences(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UObjectLibrary.UseWeakReferences(bool)", a0);
    }

    BrzCampoPonteiro ObjectBaseClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UObjectLibrary.ObjectBaseClass")); }
    BrzCampoPonteiro ObjectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UObjectLibrary.Objects")); }
    BrzCampoPonteiro WeakObjectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UObjectLibrary.WeakObjects")); }
    BitFieldValue<bool, unsigned __int32> bHasBlueprintClasses()
    { return { (void*)this, "bHasBlueprintClasses" }; }
    BitFieldValue<bool, unsigned __int32> bIsFullyLoaded()
    { return { (void*)this, "bIsFullyLoaded" }; }
    BitFieldValue<bool, unsigned __int32> bUseWeakReferences()
    { return { (void*)this, "bUseWeakReferences" }; }

};

#endif  // BRZ_SDK_JOGO_UOBJECTLIBRARY_H

// ==========================================================================
//  UStruct — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_USTRUCT_H
#define BRZ_SDK_JOGO_USTRUCT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UField;
struct UObject;

#include "UField.h"

struct UStruct : public UField
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UStruct"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStruct.AddCppProperty(FProperty*)
    // endereco: cache_pdb_25090264
    void AddCppProperty(void* a0) const
    {
        NativeCall<void, void*>(this, "UStruct.AddCppProperty(FProperty*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStruct.CollectBytecodeReferencedObjects(TArray<UObject*,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    void CollectBytecodeReferencedObjects(void* a0) const
    {
        NativeCall<void, void*>(this, "UStruct.CollectBytecodeReferencedObjects(TArray<UObject*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStruct.DestroyStruct(void*,int)
    // endereco: casamento de bytes com a build de referencia
    void DestroyStruct(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "UStruct.DestroyStruct(void*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStruct.FindPropertyByName(FName)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    BrzPonteiro FindPropertyByName(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "UStruct.FindPropertyByName(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStruct.FinishDestroy()
    // endereco: casamento de bytes com a build de referencia
    void FinishDestroy() const
    {
        NativeCall<void>(this, "UStruct.FinishDestroy()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStruct.GetAuthoredNameForField(UField*)
    // endereco: casamento de bytes com a build de referencia
    void GetAuthoredNameForField(void* retorno, void* a0) const
    {
        NativeCall<void, void*, void*>(this, "UStruct.GetAuthoredNameForField(UField*)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStruct.GetPreloadDependencies(TArray<UObject*,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    void GetPreloadDependencies(void* a0) const
    {
        NativeCall<void, void*>(this, "UStruct.GetPreloadDependencies(TArray<UObject*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStruct.InitializeStruct(void*,int)
    // endereco: casamento de bytes com a build de referencia
    void InitializeStruct(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "UStruct.InitializeStruct(void*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStruct.IsChildOf(UStruct*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    bool IsChildOf(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UStruct.IsChildOf(UStruct*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStruct.Link(FArchive&,bool)
    // endereco: casamento de bytes com a build de referencia
    void Link(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "UStruct.Link(FArchive&,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStruct.PostLoad()
    // endereco: casamento de bytes com a build de referencia
    void PostLoad() const
    {
        NativeCall<void>(this, "UStruct.PostLoad()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStruct.PreloadChildren(FArchive&)
    // endereco: casamento de bytes com a build de referencia
    void PreloadChildren(void* a0) const
    {
        NativeCall<void, void*>(this, "UStruct.PreloadChildren(FArchive&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStruct.SerializeBin(FStructuredArchiveSlot,void*)
    // endereco: casamento de bytes com a build de referencia
    void SerializeBin(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "UStruct.SerializeBin(FStructuredArchiveSlot,void*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStruct.SerializeExpr(int&,FArchive&)
    // endereco: casamento de bytes com a build de referencia
    int SerializeExpr(void* a0, void* a1) const
    {
        return NativeCall<int, void*, void*>(this, "UStruct.SerializeExpr(int&,FArchive&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStruct.SerializeProperties(FArchive&)
    // endereco: casamento de bytes com a build de referencia
    void SerializeProperties(void* a0) const
    {
        NativeCall<void, void*>(this, "UStruct.SerializeProperties(FArchive&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStruct.SetSuperStruct(UStruct*)
    // endereco: casamento de bytes com a build de referencia
    void SetSuperStruct(void* a0) const
    {
        NativeCall<void, void*>(this, "UStruct.SetSuperStruct(UStruct*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UStruct.StaticLink(bool)
    // endereco: casamento de bytes com a build de referencia
    void StaticLink(bool a0) const
    {
        NativeCall<void, bool>(this, "UStruct.StaticLink(bool)", a0);
    }
    UField*& ChildrenField() const
    { return *GetNativePointerField<UField**>(this, "UStruct.Children"); }
    TArray<void*>& ScriptField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UStruct.Script"); }
};

#endif  // BRZ_SDK_JOGO_USTRUCT_H

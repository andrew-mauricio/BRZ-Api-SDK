// ==========================================================================
//  UObjectBase — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UOBJECTBASE_H
#define BRZ_SDK_JOGO_UOBJECTBASE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FName;
struct UClass;
struct UObject;
struct UPackage;


struct UObjectBase
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UObjectBase"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBase.AddObject(FName,EInternalObjectFlags,int,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddObject(unsigned long long a0, int a1, int a2, int a3) const
    {
        return NativeCall<void*, unsigned long long, int, int, int>(this, "UObjectBase.AddObject(FName,EInternalObjectFlags,int,int)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBase.AddRef()
    // endereco: cache_pdb_25090264
    BrzPonteiro AddRef() const
    {
        return NativeCall<void*>(this, "UObjectBase.AddRef()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBase.AtomicallyClearFlags(EObjectFlags)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro AtomicallyClearFlags(int a0) const
    {
        return NativeCall<void*, int>(this, "UObjectBase.AtomicallyClearFlags(EObjectFlags)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBase.AtomicallySetFlags(EObjectFlags)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=53]]
    BrzPonteiro AtomicallySetFlags(int a0) const
    {
        return NativeCall<void*, int>(this, "UObjectBase.AtomicallySetFlags(EObjectFlags)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObjectBase.DeferredRegister(UClass*,wchar_t*,wchar_t*)
    // endereco: casamento de bytes com a build de referencia
    void DeferredRegister(void* a0, void* a1, void* a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "UObjectBase.DeferredRegister(UClass*,wchar_t*,wchar_t*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBase.GetExternalPackage()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetExternalPackage() const
    {
        return NativeCall<void*>(this, "UObjectBase.GetExternalPackage()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObjectBase.GetExternalPackageInternal()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    UPackage* GetExternalPackageInternal() const
    {
        return NativeCall<UPackage*>(this, "UObjectBase.GetExternalPackageInternal()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObjectBase.IsValidLowLevel()
    // endereco: cache_pdb_25090264
    bool IsValidLowLevel() const
    {
        return NativeCall<bool>(this, "UObjectBase.IsValidLowLevel()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObjectBase.IsValidLowLevelFast(bool)
    // endereco: casamento de bytes com a build de referencia
    bool IsValidLowLevelFast(bool a0) const
    {
        return NativeCall<bool, bool>(this, "UObjectBase.IsValidLowLevelFast(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBase.LowLevelRename(FName,UObject*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LowLevelRename(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "UObjectBase.LowLevelRename(FName,UObject*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObjectBase.MarkAsReachable()
    // endereco: cache_pdb_25090264
    void MarkAsReachable() const
    {
        NativeCall<void>(this, "UObjectBase.MarkAsReachable()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBase.Register(wchar_t*,wchar_t*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Register(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UObjectBase.Register(wchar_t*,wchar_t*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBase.ReleaseRef()
    // endereco: cache_pdb_25090264
    BrzPonteiro ReleaseRef() const
    {
        return NativeCall<void*>(this, "UObjectBase.ReleaseRef()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObjectBase.SetExternalPackage(UPackage*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void SetExternalPackage(void* a0) const
    {
        NativeCall<void, void*>(this, "UObjectBase.SetExternalPackage(UPackage*)", a0);
    }

    UClass*& ClassField() const
    { return *GetNativePointerField<UClass**>(this, "UObjectBase.Class"); }
    FName& NameField() const
    { return *GetNativePointerField<FName*>(this, "UObjectBase.Name"); }
};

#endif  // BRZ_SDK_JOGO_UOBJECTBASE_H

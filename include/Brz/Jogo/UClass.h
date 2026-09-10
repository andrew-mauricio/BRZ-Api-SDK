// ==========================================================================
//  UClass — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UCLASS_H
#define BRZ_SDK_JOGO_UCLASS_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FName;
struct UField;
struct UFunction;
struct UObject;
struct UScriptStruct;

#include "UStruct.h"

struct UClass : public UStruct
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UClass"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UClass.AddReferencedObjects(UObject*,FReferenceCollector&)
    // endereco: casamento de bytes com a build de referencia
    static void AddReferencedObjects(void* a0, void* a1)
    {
        NativeCall<void, void*, void*>(nullptr, "UClass.AddReferencedObjects(UObject*,FReferenceCollector&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UClass.AssembleReferenceTokenStream(bool)
    // endereco: casamento de bytes com a build de referencia
    void AssembleReferenceTokenStream(bool a0) const
    {
        NativeCall<void, bool>(this, "UClass.AssembleReferenceTokenStream(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UClass.AssembleReferenceTokenStreamInternal(bool)
    // endereco: casamento de bytes com a build de referencia
    void AssembleReferenceTokenStreamInternal(bool a0) const
    {
        NativeCall<void, bool>(this, "UClass.AssembleReferenceTokenStreamInternal(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UClass.AssembleReferenceTokenStreams()
    // endereco: casamento de bytes com a build de referencia
    static void AssembleReferenceTokenStreams()
    {
        NativeCall<void>(nullptr, "UClass.AssembleReferenceTokenStreams()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UClass.Bind()
    // endereco: casamento de bytes com a build de referencia
    void Bind() const
    {
        NativeCall<void>(this, "UClass.Bind()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UClass.CleanupSparseClassData()
    // endereco: casamento de bytes com a build de referencia
    void CleanupSparseClassData() const
    {
        NativeCall<void>(this, "UClass.CleanupSparseClassData()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UClass.ClearFunctionMapsCaches()
    // endereco: casamento de bytes com a build de referencia
    void ClearFunctionMapsCaches() const
    {
        NativeCall<void>(this, "UClass.ClearFunctionMapsCaches()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UClass.CreateDefaultObject()
    // endereco: casamento de bytes com a build de referencia
    UObject* CreateDefaultObject() const
    {
        return NativeCall<UObject*>(this, "UClass.CreateDefaultObject()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UClass.CreateLinkAndAddChildFunctionsToMap(FClassFunctionLinkInfo*,unsignedint)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CreateLinkAndAddChildFunctionsToMap(void* a0, unsigned int a1) const
    {
        return NativeCall<void*, void*, unsigned int>(this, "UClass.CreateLinkAndAddChildFunctionsToMap(FClassFunctionLinkInfo*,unsignedint)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UClass.CreateSparseClassData()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CreateSparseClassData() const
    {
        return NativeCall<void*>(this, "UClass.CreateSparseClassData()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UClass.DeferredRegister(UClass*,wchar_t*,wchar_t*)
    // endereco: casamento de bytes com a build de referencia
    void DeferredRegister(void* a0, void* a1, void* a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "UClass.DeferredRegister(UClass*,wchar_t*,wchar_t*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UClass.FindFunctionByName(FName,EIncludeSuperFlag::Type)
    // endereco: casamento de bytes com a build de referencia
    UFunction* FindFunctionByName(unsigned long long a0, int a1) const
    {
        return NativeCall<UFunction*, unsigned long long, int>(this, "UClass.FindFunctionByName(FName,EIncludeSuperFlag::Type)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UClass.FinishDestroy()
    // endereco: casamento de bytes com a build de referencia
    void FinishDestroy() const
    {
        NativeCall<void>(this, "UClass.FinishDestroy()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UClass.GetArchetypeForCDO()
    // endereco: casamento de bytes com a build de referencia
    UObject* GetArchetypeForCDO() const
    {
        return NativeCall<UObject*>(this, "UClass.GetArchetypeForCDO()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UClass.GetArchetypeForSparseClassData()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetArchetypeForSparseClassData() const
    {
        return NativeCall<void*>(this, "UClass.GetArchetypeForSparseClassData()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UClass.GetConfigName()
    // endereco: casamento de bytes com a build de referencia
    void GetConfigName(void* retorno) const
    {
        NativeCall<void, void*>(this, "UClass.GetConfigName()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UClass.GetDefaultObject(bool)
    // endereco: casamento de bytes com a build de referencia
    static UObject* GetDefaultObject(bool a0)
    {
        return NativeCall<UObject*, bool>(nullptr, "UClass.GetDefaultObject(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UClass.GetDefaultObject<UDamageType>()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDefaultObject_UDamageType_() const
    {
        return NativeCall<void*>(this, "UClass.GetDefaultObject<UDamageType>()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UClass.GetDefaultObjectName()
    // endereco: casamento de bytes com a build de referencia
    void GetDefaultObjectName(void* retorno) const
    {
        NativeCall<void, void*>(this, "UClass.GetDefaultObjectName()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UClass.GetDefaultPropertiesFeedbackContext()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=137+grafo=3/3]]
    static BrzPonteiro GetDefaultPropertiesFeedbackContext()
    {
        return NativeCall<void*>(nullptr, "UClass.GetDefaultPropertiesFeedbackContext()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UClass.GetDefaultSubobjectByName(FName)
    // endereco: casamento de bytes com a build de referencia
    UObject* GetDefaultSubobjectByName(unsigned long long a0) const
    {
        return NativeCall<UObject*, unsigned long long>(this, "UClass.GetDefaultSubobjectByName(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UClass.GetPrefixCPP()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPrefixCPP() const
    {
        return NativeCall<void*>(this, "UClass.GetPrefixCPP()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UClass.GetPreloadDependencies(TArray<UObject*,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    void GetPreloadDependencies(void* a0) const
    {
        NativeCall<void, void*>(this, "UClass.GetPreloadDependencies(TArray<UObject*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UClass.GetRestoreForUObjectOverwrite()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetRestoreForUObjectOverwrite() const
    {
        return NativeCall<void*>(this, "UClass.GetRestoreForUObjectOverwrite()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UClass.GetSparseClassData(EGetSparseClassDataMethod)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetSparseClassData(int a0) const
    {
        return NativeCall<void*, int>(this, "UClass.GetSparseClassData(EGetSparseClassDataMethod)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UClass.GetSparseClassDataArchetypeStruct()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetSparseClassDataArchetypeStruct() const
    {
        return NativeCall<void*>(this, "UClass.GetSparseClassDataArchetypeStruct()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UClass.HasProperty(FProperty*)
    // endereco: casamento de bytes com a build de referencia
    bool HasProperty(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UClass.HasProperty(FProperty*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UClass.ImplementsInterface(UClass*)
    // endereco: casamento de bytes com a build de referencia
    bool ImplementsInterface(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UClass.ImplementsInterface(UClass*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UClass.InternalCreateDefaultObjectWrapper()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro InternalCreateDefaultObjectWrapper() const
    {
        return NativeCall<void*>(this, "UClass.InternalCreateDefaultObjectWrapper()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UClass.IsStructTrashed()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    bool IsStructTrashed() const
    {
        return NativeCall<bool>(this, "UClass.IsStructTrashed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UClass.Link(FArchive&,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    void Link(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "UClass.Link(FArchive&,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UClass.MarkSparseDataDirty()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MarkSparseDataDirty() const
    {
        return NativeCall<void*>(this, "UClass.MarkSparseDataDirty()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UClass.PostInitProperties()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void PostInitProperties() const
    {
        NativeCall<void>(this, "UClass.PostInitProperties()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UClass.PostLoad()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void PostLoad() const
    {
        NativeCall<void>(this, "UClass.PostLoad()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UClass.PostLoadDefaultObject(UObject*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void PostLoadDefaultObject(void* a0) const
    {
        NativeCall<void, void*>(this, "UClass.PostLoadDefaultObject(UObject*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UClass.Primal_TrySerializeAsSparseClassData(unsignedchar*,FArchive&,FPropertyTag&,FStructuredArc
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Primal_TrySerializeAsSparseClassData(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "UClass.Primal_TrySerializeAsSparseClassData(unsignedchar*,FArchive&,FPropertyTag&,FStructuredArchiveRecord&)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UClass.PurgeClass(bool)
    // endereco: casamento de bytes com a build de referencia
    void PurgeClass(bool a0) const
    {
        NativeCall<void, bool>(this, "UClass.PurgeClass(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UClass.ReInitializeSparseClassDataDefaults()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ReInitializeSparseClassDataDefaults() const
    {
        return NativeCall<void*>(this, "UClass.ReInitializeSparseClassDataDefaults()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UClass.Rename(wchar_t*,UObject*,unsignedint)
    // endereco: casamento de bytes com a build de referencia
    bool Rename(void* a0, void* a1, unsigned int a2) const
    {
        return NativeCall<bool, void*, void*, unsigned int>(this, "UClass.Rename(wchar_t*,UObject*,unsignedint)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UClass.Serialize(FArchive&)
    // endereco: casamento de bytes com a build de referencia
    void Serialize(void* a0) const
    {
        NativeCall<void, void*>(this, "UClass.Serialize(FArchive&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UClass.SerializeDefaultObject(UObject*,FArchive&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SerializeDefaultObject(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UClass.SerializeDefaultObject(UObject*,FArchive&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UClass.SetLiveTunableContainer(FPrimalPropertyBag*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetLiveTunableContainer(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UClass.SetLiveTunableContainer(FPrimalPropertyBag*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UClass.SetSparseClassDataStruct(UScriptStruct*)
    // endereco: casamento de bytes com a build de referencia
    void SetSparseClassDataStruct(void* a0) const
    {
        NativeCall<void, void*>(this, "UClass.SetSparseClassDataStruct(UScriptStruct*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UClass.SetSuperStruct(UStruct*)
    // endereco: casamento de bytes com a build de referencia
    void SetSuperStruct(void* a0) const
    {
        NativeCall<void, void*>(this, "UClass.SetSuperStruct(UStruct*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UClass.SetUpRuntimeReplicationData()
    // endereco: casamento de bytes com a build de referencia
    void SetUpRuntimeReplicationData() const
    {
        NativeCall<void>(this, "UClass.SetUpRuntimeReplicationData()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UClass.TagSubobjects(EObjectFlags)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TagSubobjects(int a0) const
    {
        return NativeCall<void*, int>(this, "UClass.TagSubobjects(EObjectFlags)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UClass.TryConvertShortTypeNameToPathName(UClass*,FString&,ELogVerbosity::Type,wchar_t*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryConvertShortTypeNameToPathName(void* a0, const FString& a1, int a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, int, void*>(this, "UClass.TryConvertShortTypeNameToPathName(UClass*,FString&,ELogVerbosity::Type,wchar_t*)", a0, const_cast<FString*>(&a1), a2, a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro TryConvertShortTypeNameToPathName(void* a0, FString* a1, int a2, void* a3) const
    { return TryConvertShortTypeNameToPathName(a0, *a1, a2, a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UClass.TryFindTypeSlow(UClass*,FString&,EFindFirstObjectOptions)
    // endereco: casamento de bytes com a build de referencia
    UField* TryFindTypeSlow(void* a0, const FString& a1, int a2) const
    {
        return NativeCall<UField*, void*, void*, int>(this, "UClass.TryFindTypeSlow(UClass*,FString&,EFindFirstObjectOptions)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    UField* TryFindTypeSlow(void* a0, FString* a1, int a2) const
    { return TryFindTypeSlow(a0, *a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UClass.ValidateRuntimeReplicationData()
    // endereco: casamento de bytes com a build de referencia
    void ValidateRuntimeReplicationData() const
    {
        NativeCall<void>(this, "UClass.ValidateRuntimeReplicationData()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UClass.__DefaultConstructor(FObjectInitializer&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro __DefaultConstructor(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UClass.__DefaultConstructor(FObjectInitializer&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UClass.__VTableCtorCaller(FVTableHelper&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro __VTableCtorCaller(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UClass.__VTableCtorCaller(FVTableHelper&)", a0);
    }

    // ── SOBRECARGAS QUE NAO CABEM EM C++ ─────────────────────────────
    //
    //  Estas existem no jogo, e a chave delas resolve normalmente por
    //  `GetAddress` / `NativeCall`. O que nao cabe e' a DECLARACAO: em C
    //  os parametros viram os mesmos da que ficou, ou a diferenca esta'
    //  so' no retorno — e C++ nao sobrecarrega por retorno.
    //
    //  Para chamar uma destas, use `NativeCall` direto com a chave:
    //    UClass.SerializeDefaultObject(UObject*,FStructuredArchiveSlot)
    //      (colide com UClass.SerializeDefaultObject(UObject*,FArchive&))
    BrzCampoPonteiro InterfacesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UClass.Interfaces")); }
    BitFieldValue<bool, unsigned __int32> bIsGameClass()
    { return { (void*)this, "bIsGameClass" }; }
    BitFieldValue<bool, unsigned __int32> bCheckedForLocalize()
    { return { (void*)this, "bCheckedForLocalize" }; }
    BitFieldValue<bool, unsigned __int32> bHasLocalized()
    { return { (void*)this, "bHasLocalized" }; }

};

#endif  // BRZ_SDK_JOGO_UCLASS_H

// ==========================================================================
//  UObject — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UOBJECT_H
#define BRZ_SDK_JOGO_UOBJECT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FName;

#include "UObjectBaseUtility.h"

struct UObject : public UObjectBaseUtility
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UObject"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.AreAllOuterObjectsValid()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool AreAllOuterObjectsValid() const
    {
        return NativeCall<bool>(this, "UObject.AreAllOuterObjectsValid()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.BeginDestroy()
    // endereco: casamento de bytes com a build de referencia
    void BeginDestroy() const
    {
        NativeCall<void>(this, "UObject.BeginDestroy()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.BuildSubobjectMapping(UObject*,TMap<UObject*,UObject*,FDefaultSetAllocator,TDefaultMapHa
    // endereco: casamento de bytes com a build de referencia
    void BuildSubobjectMapping(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "UObject.BuildSubobjectMapping(UObject*,TMap<UObject*,UObject*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject*,UObject*,0>>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObject.CallAddReferencedObjects(FReferenceCollector&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro CallAddReferencedObjects(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UObject.CallAddReferencedObjects(FReferenceCollector&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.CallFunction(FFrame&,void*const,UFunction*)
    // endereco: casamento de bytes com a build de referencia
    void CallFunction(void* a0, void* a1, void* a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "UObject.CallFunction(FFrame&,void*const,UFunction*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.CallFunctionByNameWithArguments(wchar_t*,FOutputDevice&,UObject*,bool)
    // endereco: casamento de bytes com a build de referencia
    bool CallFunctionByNameWithArguments(void* a0, void* a1, void* a2, bool a3) const
    {
        return NativeCall<bool, void*, void*, void*, bool>(this, "UObject.CallFunctionByNameWithArguments(wchar_t*,FOutputDevice&,UObject*,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.CheckDefaultSubobjects(bool)
    // endereco: casamento de bytes com a build de referencia
    bool CheckDefaultSubobjects(bool a0) const
    {
        return NativeCall<bool, bool>(this, "UObject.CheckDefaultSubobjects(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.CheckDefaultSubobjectsInternal()
    // endereco: casamento de bytes com a build de referencia
    bool CheckDefaultSubobjectsInternal() const
    {
        return NativeCall<bool>(this, "UObject.CheckDefaultSubobjectsInternal()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.CollectDefaultSubobjects(TArray<UObject*,TSizedDefaultAllocator<32>>&,bool)
    // endereco: casamento de bytes com a build de referencia
    void CollectDefaultSubobjects(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "UObject.CollectDefaultSubobjects(TArray<UObject*,TSizedDefaultAllocator<32>>&,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.ConditionalBeginDestroy()
    // endereco: casamento de bytes com a build de referencia
    bool ConditionalBeginDestroy() const
    {
        return NativeCall<bool>(this, "UObject.ConditionalBeginDestroy()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.ConditionalFinishDestroy()
    // endereco: casamento de bytes com a build de referencia
    bool ConditionalFinishDestroy() const
    {
        return NativeCall<bool>(this, "UObject.ConditionalFinishDestroy()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.ConditionalPostLoad()
    // endereco: casamento de bytes com a build de referencia
    void ConditionalPostLoad() const
    {
        NativeCall<void>(this, "UObject.ConditionalPostLoad()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.ConditionalPostLoadSubobjects(FObjectInstancingGraph*)
    // endereco: casamento de bytes com a build de referencia
    void ConditionalPostLoadSubobjects(void* a0) const
    {
        NativeCall<void, void*>(this, "UObject.ConditionalPostLoadSubobjects(FObjectInstancingGraph*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.CreateDefaultSubobject(FName,UClass*,UClass*,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CreateDefaultSubobject(unsigned long long a0, void* a1, void* a2, bool a3, bool a4) const
    {
        return NativeCall<void*, unsigned long long, void*, void*, bool, bool>(this, "UObject.CreateDefaultSubobject(FName,UClass*,UClass*,bool,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObject.CreateEditorOnlyDefaultSubobjectImpl(FName,UClass*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CreateEditorOnlyDefaultSubobjectImpl(unsigned long long a0, void* a1, bool a2) const
    {
        return NativeCall<void*, unsigned long long, void*, bool>(this, "UObject.CreateEditorOnlyDefaultSubobjectImpl(FName,UClass*,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObject.DestroyNonNativeProperties()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DestroyNonNativeProperties() const
    {
        return NativeCall<void*>(this, "UObject.DestroyNonNativeProperties()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObject.EnsureNotRetrievingVTablePtr()
    // endereco: cache_pdb_25090264
    BrzPonteiro EnsureNotRetrievingVTablePtr() const
    {
        return NativeCall<void*>(this, "UObject.EnsureNotRetrievingVTablePtr()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObject.FindFunction(FName)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro FindFunction(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "UObject.FindFunction(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.FinishDestroy()
    // endereco: casamento de bytes com a build de referencia
    void FinishDestroy() const
    {
        NativeCall<void>(this, "UObject.FinishDestroy()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.GetArchetype()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro GetArchetype() const
    {
        return NativeCall<void*>(this, "UObject.GetArchetype()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObject.GetArchetypeFromRequiredInfo(UClass*,UObject*,FName,EObjectFlags)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetArchetypeFromRequiredInfo(void* a0, void* a1, unsigned long long a2, int a3) const
    {
        return NativeCall<void*, void*, void*, unsigned long long, int>(this, "UObject.GetArchetypeFromRequiredInfo(UClass*,UObject*,FName,EObjectFlags)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObject.GetArchetypeInstances(TArray<UObject*,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetArchetypeInstances(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UObject.GetArchetypeInstances(TArray<UObject*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.GetAssetRegistryTags(TArray<UObject::FAssetRegistryTag,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    void GetAssetRegistryTags(void* a0) const
    {
        NativeCall<void, void*>(this, "UObject.GetAssetRegistryTags(TArray<UObject::FAssetRegistryTag,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.GetDefaultConfigFilename()
    // endereco: casamento de bytes com a build de referencia
    void GetDefaultConfigFilename(void* retorno) const
    {
        NativeCall<void, void*>(this, "UObject.GetDefaultConfigFilename()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.GetDefaultSubobjectByName(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDefaultSubobjectByName(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "UObject.GetDefaultSubobjectByName(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObject.GetDefaultSubobjects(TArray<UObject*,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDefaultSubobjects(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UObject.GetDefaultSubobjects(TArray<UObject*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.GetDetailedInfoInternal()
    // endereco: casamento de bytes com a build de referencia
    void GetDetailedInfoInternal(void* retorno) const
    {
        NativeCall<void, void*>(this, "UObject.GetDetailedInfoInternal()", retorno);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObject.GetExporterName()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetExporterName() const
    {
        return NativeCall<void*>(this, "UObject.GetExporterName()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.GetPreloadDependencies(TArray<UObject*,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    void GetPreloadDependencies(void* a0) const
    {
        NativeCall<void, void*>(this, "UObject.GetPreloadDependencies(TArray<UObject*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.GetPrimaryAssetId()
    // endereco: casamento de bytes com a build de referencia
    void GetPrimaryAssetId(void* retorno) const
    {
        NativeCall<void, void*>(this, "UObject.GetPrimaryAssetId()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.GetResourceSizeEx(FResourceSizeEx&)
    // endereco: casamento de bytes com a build de referencia
    void GetResourceSizeEx(void* a0) const
    {
        NativeCall<void, void*>(this, "UObject.GetResourceSizeEx(FResourceSizeEx&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObject.GetSparseClassDataStruct()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetSparseClassDataStruct() const
    {
        return NativeCall<void*>(this, "UObject.GetSparseClassDataStruct()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObject.GetWorldChecked(bool&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetWorldChecked(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UObject.GetWorldChecked(bool&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObject.HasWorld()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HasWorld() const
    {
        return NativeCall<void*>(this, "UObject.HasWorld()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.IsAsset()
    // endereco: casamento de bytes com a build de referencia
    bool IsAsset() const
    {
        return NativeCall<bool>(this, "UObject.IsAsset()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.IsFullNameStableForNetworking()
    // endereco: casamento de bytes com a build de referencia
    bool IsFullNameStableForNetworking() const
    {
        return NativeCall<bool>(this, "UObject.IsFullNameStableForNetworking()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.IsInBlueprint()
    // endereco: casamento de bytes com a build de referencia
    bool IsInBlueprint() const
    {
        return NativeCall<bool>(this, "UObject.IsInBlueprint()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.IsInOrOwnedBy(UObject*)
    // endereco: casamento de bytes com a build de referencia
    bool IsInOrOwnedBy(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UObject.IsInOrOwnedBy(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.IsLocalizedResource()
    // endereco: casamento de bytes com a build de referencia
    bool IsLocalizedResource() const
    {
        return NativeCall<bool>(this, "UObject.IsLocalizedResource()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.IsNameStableForNetworking()
    // endereco: casamento de bytes com a build de referencia
    bool IsNameStableForNetworking() const
    {
        return NativeCall<bool>(this, "UObject.IsNameStableForNetworking()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.IsSafeForRootSet()
    // endereco: casamento de bytes com a build de referencia
    bool IsSafeForRootSet() const
    {
        return NativeCall<bool>(this, "UObject.IsSafeForRootSet()");
    }

    // dump_sobre_sdk_287a0
    //   UObject.LoadConfig(UClass*,wchar_t*,unsignedint,FProperty*,TArray<UE::ConfigAccessTracking::FCon
    // endereco: casamento de bytes com a build de referencia
    void LoadConfig(void* a0, void* a1, unsigned int a2, void* a3, void* a4) const
    {
        NativeCall<void, void*, void*, unsigned int, void*, void*>(this, "UObject.LoadConfig(UClass*,wchar_t*,unsignedint,FProperty*,TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>>*)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.LocalizeProperty(UObject*,TArray<FString,TSizedDefaultAllocator<32>>&,FProperty*const,FP
    // endereco: casamento de bytes com a build de referencia
    void LocalizeProperty(void* a0, void* a1, void* a2, void* a3, void* a4) const
    {
        NativeCall<void, void*, void*, void*, void*, void*>(this, "UObject.LocalizeProperty(UObject*,TArray<FString,TSizedDefaultAllocator<32>>&,FProperty*const,FProperty*const,void*const)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.NeedsLoadForClient()
    // endereco: casamento de bytes com a build de referencia
    bool NeedsLoadForClient() const
    {
        return NativeCall<bool>(this, "UObject.NeedsLoadForClient()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.NeedsLoadForServer()
    // endereco: casamento de bytes com a build de referencia
    bool NeedsLoadForServer() const
    {
        return NativeCall<bool>(this, "UObject.NeedsLoadForServer()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObject.PostInitProperties()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PostInitProperties() const
    {
        return NativeCall<void*>(this, "UObject.PostInitProperties()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.PostLoad()
    // endereco: casamento de bytes com a build de referencia
    void PostLoad() const
    {
        NativeCall<void>(this, "UObject.PostLoad()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.PostLoadSubobjects(FObjectInstancingGraph*)
    // endereco: casamento de bytes com a build de referencia
    void PostLoadSubobjects(void* a0) const
    {
        NativeCall<void, void*>(this, "UObject.PostLoadSubobjects(FObjectInstancingGraph*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.ProcessConsoleExec(wchar_t*,FOutputDevice&,UObject*)
    // endereco: casamento de bytes com a build de referencia
    bool ProcessConsoleExec(void* a0, void* a1, void* a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "UObject.ProcessConsoleExec(wchar_t*,FOutputDevice&,UObject*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.ProcessContextOpcode(FFrame&,void*const,bool)
    // endereco: casamento de bytes com a build de referencia
    void ProcessContextOpcode(void* a0, void* a1, bool a2) const
    {
        NativeCall<void, void*, void*, bool>(this, "UObject.ProcessContextOpcode(FFrame&,void*const,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.ProcessEvent(UFunction*,void*)
    // endereco: casamento de bytes com a build de referencia
    void ProcessEvent(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "UObject.ProcessEvent(UFunction*,void*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.ProcessInternal(UObject*,FFrame&,void*const)
    // endereco: casamento de bytes com a build de referencia
    static void ProcessInternal(void* a0, void* a1, void* a2)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "UObject.ProcessInternal(UObject*,FFrame&,void*const)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.Rename(wchar_t*,UObject*,unsignedint)
    // endereco: casamento de bytes com a build de referencia
    bool Rename(void* a0, void* a1, unsigned int a2) const
    {
        return NativeCall<bool, void*, void*, unsigned int>(this, "UObject.Rename(wchar_t*,UObject*,unsignedint)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.SaveConfig(unsigned__int64,wchar_t*,FConfigCacheIni*,bool)
    // endereco: casamento de bytes com a build de referencia
    void SaveConfig(unsigned long long a0, void* a1, void* a2, bool a3) const
    {
        NativeCall<void, unsigned long long, void*, void*, bool>(this, "UObject.SaveConfig(unsigned__int64,wchar_t*,FConfigCacheIni*,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.Serialize(FArchive&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=99+chamadores=59]]
    void Serialize(void* a0) const
    {
        NativeCall<void, void*>(this, "UObject.Serialize(FArchive&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObject.SerializeScriptProperties(FArchive&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=99+chamadores=3]]
    BrzPonteiro SerializeScriptProperties(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UObject.SerializeScriptProperties(FArchive&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.SetLinker(FLinkerLoad*,int,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetLinker(void* a0, int a1, bool a2) const
    {
        NativeCall<void, void*, int, bool>(this, "UObject.SetLinker(FLinkerLoad*,int,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObject.SkipFunction(FFrame&,void*const,UFunction*)
    // endereco: casamento de bytes com a build de referencia
    void SkipFunction(void* a0, void* a1, void* a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "UObject.SkipFunction(FFrame&,void*const,UFunction*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObject.TagSubobjects(EObjectFlags)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TagSubobjects(int a0) const
    {
        return NativeCall<void*, int>(this, "UObject.TagSubobjects(EObjectFlags)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObject.TryUpdateDefaultConfigFile(FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryUpdateDefaultConfigFile(const FString& a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "UObject.TryUpdateDefaultConfigFile(FString&,bool)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro TryUpdateDefaultConfigFile(FString* a0, bool a1) const
    { return TryUpdateDefaultConfigFile(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObject.UpdateSingleSectionOfConfigFile(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateSingleSectionOfConfigFile(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UObject.UpdateSingleSectionOfConfigFile(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro UpdateSingleSectionOfConfigFile(FString* a0) const
    { return UpdateSingleSectionOfConfigFile(*a0); }

    // ── SOBRECARGAS QUE NAO CABEM EM C++ ─────────────────────────────
    //
    //  Estas existem no jogo, e a chave delas resolve normalmente por
    //  `GetAddress` / `NativeCall`. O que nao cabe e' a DECLARACAO: em C
    //  os parametros viram os mesmos da que ficou, ou a diferenca esta'
    //  so' no retorno — e C++ nao sobrecarrega por retorno.
    //
    //  Para chamar uma destas, use `NativeCall` direto com a chave:
    //    UObject.SerializeScriptProperties(FStructuredArchiveSlot)
    //      (colide com UObject.SerializeScriptProperties(FArchive&))
    BrzCampoPonteiro EntryPointField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UObject.EntryPoint")); }
    FString& NameField() const
    { return *GetNativePointerField<FString*>(this, "UObject.Name"); }
    FName& TypeField() const
    { return *GetNativePointerField<FName*>(this, "UObject.Type"); }
    BitFieldValue<bool, unsigned __int32> Value()
    { return { (void*)this, "Value" }; }
};

#endif  // BRZ_SDK_JOGO_UOBJECT_H

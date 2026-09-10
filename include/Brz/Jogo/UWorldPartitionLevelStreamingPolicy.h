// ==========================================================================
//  UWorldPartitionLevelStreamingPolicy — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UWORLDPARTITIONLEVELSTREAMINGPOLICY_H
#define BRZ_SDK_JOGO_UWORLDPARTITIONLEVELSTREAMINGPOLICY_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UWorldPartitionLevelStreamingPolicy
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UWorldPartitionLevelStreamingPolicy"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionLevelStreamingPolicy.ConvertEditorPathToRuntimePath(FSoftObjectPath&,FSoftObjectP
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ConvertEditorPathToRuntimePath(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UWorldPartitionLevelStreamingPolicy.ConvertEditorPathToRuntimePath(FSoftObjectPath&,FSoftObjectPath&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionLevelStreamingPolicy.DrawRuntimeCellsDetails(UCanvas*,UE::Math::TVector2<double>&
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DrawRuntimeCellsDetails(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UWorldPartitionLevelStreamingPolicy.DrawRuntimeCellsDetails(UCanvas*,UE::Math::TVector2<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionLevelStreamingPolicy.FindCellForSubObject(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindCellForSubObject(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "UWorldPartitionLevelStreamingPolicy.FindCellForSubObject(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionLevelStreamingPolicy.FindCellNameForSubObject(FString&,bool,FString&,UObject*&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindCellNameForSubObject(const FString& a0, bool a1, const FString& a2, void* a3) const
    {
        return NativeCall<void*, void*, bool, void*, void*>(this, "UWorldPartitionLevelStreamingPolicy.FindCellNameForSubObject(FString&,bool,FString&,UObject*&)", const_cast<FString*>(&a0), a1, const_cast<FString*>(&a2), a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro FindCellNameForSubObject(FString* a0, bool a1, FString* a2, void* a3) const
    { return FindCellNameForSubObject(*a0, a1, *a2, a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionLevelStreamingPolicy.GetResourceSizeEx(FResourceSizeEx&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetResourceSizeEx(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionLevelStreamingPolicy.GetResourceSizeEx(FResourceSizeEx&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionLevelStreamingPolicy.GetSubObject(wchar_t*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSubObject(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionLevelStreamingPolicy.GetSubObject(wchar_t*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionLevelStreamingPolicy.InjectExternalStreamingObject(URuntimeHashExternalStreamingO
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InjectExternalStreamingObject(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionLevelStreamingPolicy.InjectExternalStreamingObject(URuntimeHashExternalStreamingObjectBase*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionLevelStreamingPolicy.IsStreamingCompleted(TArray<FWorldPartitionStreamingSource,T
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsStreamingCompleted(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionLevelStreamingPolicy.IsStreamingCompleted(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>>*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionLevelStreamingPolicy.RemoveExternalStreamingObject(URuntimeHashExternalStreamingO
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveExternalStreamingObject(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionLevelStreamingPolicy.RemoveExternalStreamingObject(URuntimeHashExternalStreamingObjectBase*)", a0);
    }

    BrzCampoPonteiro AsyncTaskCurrentStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionLevelStreamingPolicy.AsyncTaskCurrentState")); }
    BrzCampoPonteiro AsyncTaskTargetStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionLevelStreamingPolicy.AsyncTaskTargetState")); }
    BrzCampoPonteiro ContainerResolverField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionLevelStreamingPolicy.ContainerResolver")); }
    int& CurrentStateField() const
    { return *GetNativePointerField<int*>(this, "UWorldPartitionLevelStreamingPolicy.CurrentState"); }
    BrzCampoPonteiro CurrentStreamingPerformanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionLevelStreamingPolicy.CurrentStreamingPerformance")); }
    BrzCampoPonteiro ExternalStreamingObjectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionLevelStreamingPolicy.ExternalStreamingObjects")); }
    BrzCampoPonteiro SourceWorldAssetPathField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionLevelStreamingPolicy.SourceWorldAssetPath")); }
    BrzCampoPonteiro SubObjectsToCellRemappingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionLevelStreamingPolicy.SubObjectsToCellRemapping")); }
    BrzCampoPonteiro SubObjectsToExternalStreamingObjectsRemappingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionLevelStreamingPolicy.SubObjectsToExternalStreamingObjectsRemapping")); }
    BrzCampoPonteiro TargetStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionLevelStreamingPolicy.TargetState")); }
    BitFieldValue<bool, unsigned __int32> bShouldMergeStreamingSourceInfo()
    { return { (void*)this, "bShouldMergeStreamingSourceInfo" }; }
};

#endif  // BRZ_SDK_JOGO_UWORLDPARTITIONLEVELSTREAMINGPOLICY_H

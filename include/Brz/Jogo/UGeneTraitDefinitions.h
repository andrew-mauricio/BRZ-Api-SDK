// ==========================================================================
//  UGeneTraitDefinitions — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UGENETRAITDEFINITIONS_H
#define BRZ_SDK_JOGO_UGENETRAITDEFINITIONS_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

#include "UObject.h"

struct UGeneTraitDefinitions : public UObject
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UGeneTraitDefinitions"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGeneTraitDefinitions.BPGetCustomBlueprintData(FName,FFunctionParams_NoArrays,FFunctionParams_No
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=299+bytes40+chamadores=23+grafo=10/10]]
    bool BPGetCustomBlueprintData(unsigned long long a0, void* a1, void* a2) const
    {
        return NativeCall<bool, unsigned long long, void*, void*>(this, "UGeneTraitDefinitions.BPGetCustomBlueprintData(FName,FFunctionParams_NoArrays,FFunctionParams_NoArrays&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGeneTraitDefinitions.BPGetCustomBlueprintData_Implementation(FName,FFunctionParams_NoArrays,FFu
    // endereco: casamento de bytes com a build de referencia
    bool BPGetCustomBlueprintData_Implementation(unsigned long long a0, void* a1, void* a2) const
    {
        return NativeCall<bool, unsigned long long, void*, void*>(this, "UGeneTraitDefinitions.BPGetCustomBlueprintData_Implementation(FName,FFunctionParams_NoArrays,FFunctionParams_NoArrays&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGeneTraitDefinitions.CumulativeAdjustFloatValueFromCharacterTraits(FName,FFunctionParams_NoArra
    // endereco: casamento de bytes com a build de referencia
    static bool CumulativeAdjustFloatValueFromCharacterTraits(unsigned long long a0, void* a1, void* a2)
    {
        return NativeCall<bool, unsigned long long, void*, void*>(nullptr, "UGeneTraitDefinitions.CumulativeAdjustFloatValueFromCharacterTraits(FName,FFunctionParams_NoArrays,FFunctionParams_NoArrays&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGeneTraitDefinitions.GeneTraits_AddInstanceOfGeneTraitIfPossible(UObject*,FName,int,FString&)
    // endereco: casamento de bytes com a build de referencia
    bool GeneTraits_AddInstanceOfGeneTraitIfPossible(void* a0, unsigned long long a1, int a2, const FString& a3) const
    {
        return NativeCall<bool, void*, unsigned long long, int, void*>(this, "UGeneTraitDefinitions.GeneTraits_AddInstanceOfGeneTraitIfPossible(UObject*,FName,int,FString&)", a0, a1, a2, const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool GeneTraits_AddInstanceOfGeneTraitIfPossible(void* a0, unsigned long long a1, int a2, FString* a3) const
    { return GeneTraits_AddInstanceOfGeneTraitIfPossible(a0, a1, a2, *a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGeneTraitDefinitions.GeneTraits_AddInstanceOfGeneTraitIfPossible_Implementation(UObject*,FName,
    // endereco: casamento de bytes com a build de referencia
    bool GeneTraits_AddInstanceOfGeneTraitIfPossible_Implementation(void* a0, unsigned long long a1, int a2, const FString& a3) const
    {
        return NativeCall<bool, void*, unsigned long long, int, void*>(this, "UGeneTraitDefinitions.GeneTraits_AddInstanceOfGeneTraitIfPossible_Implementation(UObject*,FName,int,FString&)", a0, a1, a2, const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool GeneTraits_AddInstanceOfGeneTraitIfPossible_Implementation(void* a0, unsigned long long a1, int a2, FString* a3) const
    { return GeneTraits_AddInstanceOfGeneTraitIfPossible_Implementation(a0, a1, a2, *a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGeneTraitDefinitions.GeneTraits_AddRandomSpawnGeneTraitToEgg(TSubclassOf<UPrimalItem>,TArray<FN
    // endereco: casamento de bytes com a build de referencia
    bool GeneTraits_AddRandomSpawnGeneTraitToEgg(void* a0, void* a1, const FString& a2, void* a3) const
    {
        return NativeCall<bool, void*, void*, void*, void*>(this, "UGeneTraitDefinitions.GeneTraits_AddRandomSpawnGeneTraitToEgg(TSubclassOf<UPrimalItem>,TArray<FName,TSizedDefaultAllocator<32>>&,FString&,UObject*)", a0, a1, const_cast<FString*>(&a2), a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool GeneTraits_AddRandomSpawnGeneTraitToEgg(void* a0, void* a1, FString* a2, void* a3) const
    { return GeneTraits_AddRandomSpawnGeneTraitToEgg(a0, a1, *a2, a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGeneTraitDefinitions.GeneTraits_AddRandomSpawnGeneTraitToEgg_Implementation(TSubclassOf<UPrimal
    // endereco: casamento de bytes com a build de referencia
    bool GeneTraits_AddRandomSpawnGeneTraitToEgg_Implementation(void* a0, void* a1, const FString& a2, void* a3) const
    {
        return NativeCall<bool, void*, void*, void*, void*>(this, "UGeneTraitDefinitions.GeneTraits_AddRandomSpawnGeneTraitToEgg_Implementation(TSubclassOf<UPrimalItem>,TArray<FName,TSizedDefaultAllocator<32>>&,FString&,UObject*)", a0, a1, const_cast<FString*>(&a2), a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool GeneTraits_AddRandomSpawnGeneTraitToEgg_Implementation(void* a0, void* a1, FString* a2, void* a3) const
    { return GeneTraits_AddRandomSpawnGeneTraitToEgg_Implementation(a0, a1, *a2, a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGeneTraitDefinitions.GeneTraits_AddRandomSpawnGeneTraitToThisCreature(UObject*,FString&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=243+grafo=4/4]]
    bool GeneTraits_AddRandomSpawnGeneTraitToThisCreature(void* a0, const FString& a1) const
    {
        return NativeCall<bool, void*, void*>(this, "UGeneTraitDefinitions.GeneTraits_AddRandomSpawnGeneTraitToThisCreature(UObject*,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool GeneTraits_AddRandomSpawnGeneTraitToThisCreature(void* a0, FString* a1) const
    { return GeneTraits_AddRandomSpawnGeneTraitToThisCreature(a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGeneTraitDefinitions.GeneTraits_AddRandomSpawnGeneTraitToThisCreature_Implementation(UObject*,F
    // endereco: casamento de bytes com a build de referencia
    bool GeneTraits_AddRandomSpawnGeneTraitToThisCreature_Implementation(void* a0, const FString& a1) const
    {
        return NativeCall<bool, void*, void*>(this, "UGeneTraitDefinitions.GeneTraits_AddRandomSpawnGeneTraitToThisCreature_Implementation(UObject*,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool GeneTraits_AddRandomSpawnGeneTraitToThisCreature_Implementation(void* a0, FString* a1) const
    { return GeneTraits_AddRandomSpawnGeneTraitToThisCreature_Implementation(a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGeneTraitDefinitions.GeneTraits_AddRandomSpawnGeneTrait_SkipCode_NonHuman(UObject*)
    // endereco: casamento de bytes com a build de referencia
    bool GeneTraits_AddRandomSpawnGeneTrait_SkipCode_NonHuman(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UGeneTraitDefinitions.GeneTraits_AddRandomSpawnGeneTrait_SkipCode_NonHuman(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGeneTraitDefinitions.GeneTraits_AddRandomSpawnGeneTrait_SkipCode_Thralls(UObject*)
    // endereco: casamento de bytes com a build de referencia
    bool GeneTraits_AddRandomSpawnGeneTrait_SkipCode_Thralls(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UGeneTraitDefinitions.GeneTraits_AddRandomSpawnGeneTrait_SkipCode_Thralls(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGeneTraitDefinitions.GeneTraits_AreGeneTraitsEnabled(UObject*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool GeneTraits_AreGeneTraitsEnabled(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UGeneTraitDefinitions.GeneTraits_AreGeneTraitsEnabled(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGeneTraitDefinitions.GeneTraits_AreGeneTraitsEnabled_Implementation(UObject*)
    // endereco: casamento de bytes com a build de referencia
    bool GeneTraits_AreGeneTraitsEnabled_Implementation(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UGeneTraitDefinitions.GeneTraits_AreGeneTraitsEnabled_Implementation(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGeneTraitDefinitions.GeneTraits_CanTraitBeAdded(UObject*,FName,FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    bool GeneTraits_CanTraitBeAdded(void* a0, unsigned long long a1, const FString& a2, bool a3) const
    {
        return NativeCall<bool, void*, unsigned long long, void*, bool>(this, "UGeneTraitDefinitions.GeneTraits_CanTraitBeAdded(UObject*,FName,FString&,bool)", a0, a1, const_cast<FString*>(&a2), a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool GeneTraits_CanTraitBeAdded(void* a0, unsigned long long a1, FString* a2, bool a3) const
    { return GeneTraits_CanTraitBeAdded(a0, a1, *a2, a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGeneTraitDefinitions.GeneTraits_CanTraitBeAdded_Implementation(UObject*,FName,FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    bool GeneTraits_CanTraitBeAdded_Implementation(void* a0, unsigned long long a1, const FString& a2, bool a3) const
    {
        return NativeCall<bool, void*, unsigned long long, void*, bool>(this, "UGeneTraitDefinitions.GeneTraits_CanTraitBeAdded_Implementation(UObject*,FName,FString&,bool)", a0, a1, const_cast<FString*>(&a2), a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool GeneTraits_CanTraitBeAdded_Implementation(void* a0, unsigned long long a1, FString* a2, bool a3) const
    { return GeneTraits_CanTraitBeAdded_Implementation(a0, a1, *a2, a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGeneTraitDefinitions.GeneTraits_CanTraitExistOnThisCreature(UObject*,FName,TMap<FName,int,FDefa
    // endereco: casamento de bytes com a build de referencia
    bool GeneTraits_CanTraitExistOnThisCreature(void* a0, unsigned long long a1, void* a2, bool a3, const FString& a4) const
    {
        return NativeCall<bool, void*, unsigned long long, void*, bool, void*>(this, "UGeneTraitDefinitions.GeneTraits_CanTraitExistOnThisCreature(UObject*,FName,TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>>&,bool,FString&)", a0, a1, a2, a3, const_cast<FString*>(&a4));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool GeneTraits_CanTraitExistOnThisCreature(void* a0, unsigned long long a1, void* a2, bool a3, FString* a4) const
    { return GeneTraits_CanTraitExistOnThisCreature(a0, a1, a2, a3, *a4); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGeneTraitDefinitions.GeneTraits_CanTraitExistOnThisCreature_Implementation(UObject*,FName,TMap<
    // endereco: casamento de bytes com a build de referencia
    bool GeneTraits_CanTraitExistOnThisCreature_Implementation(void* a0, unsigned long long a1, void* a2, bool a3, const FString& a4) const
    {
        return NativeCall<bool, void*, unsigned long long, void*, bool, void*>(this, "UGeneTraitDefinitions.GeneTraits_CanTraitExistOnThisCreature_Implementation(UObject*,FName,TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>>&,bool,FString&)", a0, a1, a2, a3, const_cast<FString*>(&a4));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool GeneTraits_CanTraitExistOnThisCreature_Implementation(void* a0, unsigned long long a1, void* a2, bool a3, FString* a4) const
    { return GeneTraits_CanTraitExistOnThisCreature_Implementation(a0, a1, a2, a3, *a4); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGeneTraitDefinitions.GeneTraits_GetCountOfGeneTraitStacksThisCreatureHas(UObject*,FName)
    // endereco: casamento de bytes com a build de referencia
    int GeneTraits_GetCountOfGeneTraitStacksThisCreatureHas(void* a0, unsigned long long a1) const
    {
        return NativeCall<int, void*, unsigned long long>(this, "UGeneTraitDefinitions.GeneTraits_GetCountOfGeneTraitStacksThisCreatureHas(UObject*,FName)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGeneTraitDefinitions.GeneTraits_GetCountOfGeneTraitStacksThisCreatureHas_Implementation(UObject
    // endereco: casamento de bytes com a build de referencia
    int GeneTraits_GetCountOfGeneTraitStacksThisCreatureHas_Implementation(void* a0, unsigned long long a1) const
    {
        return NativeCall<int, void*, unsigned long long>(this, "UGeneTraitDefinitions.GeneTraits_GetCountOfGeneTraitStacksThisCreatureHas_Implementation(UObject*,FName)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGeneTraitDefinitions.GeneTraits_GetCreatureSpawnGeneTraits_GeneTraitDefinitions(UObject*,FCreat
    // endereco: casamento de bytes com a build de referencia
    bool GeneTraits_GetCreatureSpawnGeneTraits_GeneTraitDefinitions(void* a0, void* a1, const FString& a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "UGeneTraitDefinitions.GeneTraits_GetCreatureSpawnGeneTraits_GeneTraitDefinitions(UObject*,FCreatureSpawnGeneTraits_Specifications&,FString&)", a0, a1, const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool GeneTraits_GetCreatureSpawnGeneTraits_GeneTraitDefinitions(void* a0, void* a1, FString* a2) const
    { return GeneTraits_GetCreatureSpawnGeneTraits_GeneTraitDefinitions(a0, a1, *a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGeneTraitDefinitions.GeneTraits_GetCreatureSpawnGeneTraits_GeneTraitDefinitions_Implementation(
    // endereco: casamento de bytes com a build de referencia
    bool GeneTraits_GetCreatureSpawnGeneTraits_GeneTraitDefinitions_Implementation(void* a0, void* a1, const FString& a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "UGeneTraitDefinitions.GeneTraits_GetCreatureSpawnGeneTraits_GeneTraitDefinitions_Implementation(UObject*,FCreatureSpawnGeneTraits_Specifications&,FString&)", a0, a1, const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool GeneTraits_GetCreatureSpawnGeneTraits_GeneTraitDefinitions_Implementation(void* a0, void* a1, FString* a2) const
    { return GeneTraits_GetCreatureSpawnGeneTraits_GeneTraitDefinitions_Implementation(a0, a1, *a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGeneTraitDefinitions.GeneTraits_GetDefinitionForThisTrait_Implementation(FName,TSubclassOf<UObj
    // endereco: casamento de bytes com a build de referencia
    void GeneTraits_GetDefinitionForThisTrait_Implementation(void* retorno, unsigned long long a0, void* a1, const FString& a2) const
    {
        NativeCall<void, void*, unsigned long long, void*, void*>(this, "UGeneTraitDefinitions.GeneTraits_GetDefinitionForThisTrait_Implementation(FName,TSubclassOf<UObject>,FString&)", retorno, a0, a1, const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void GeneTraits_GetDefinitionForThisTrait_Implementation(void* retorno, unsigned long long a0, void* a1, FString* a2) const
    { GeneTraits_GetDefinitionForThisTrait_Implementation(retorno, a0, a1, *a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGeneTraitDefinitions.GeneTraits_GetMaxAllowedTraitsForThisCreature(UObject*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    int GeneTraits_GetMaxAllowedTraitsForThisCreature(void* a0) const
    {
        return NativeCall<int, void*>(this, "UGeneTraitDefinitions.GeneTraits_GetMaxAllowedTraitsForThisCreature(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGeneTraitDefinitions.GeneTraits_GetMaxAllowedTraitsForThisCreature_Implementation(UObject*)
    // endereco: casamento de bytes com a build de referencia
    int GeneTraits_GetMaxAllowedTraitsForThisCreature_Implementation(void* a0) const
    {
        return NativeCall<int, void*>(this, "UGeneTraitDefinitions.GeneTraits_GetMaxAllowedTraitsForThisCreature_Implementation(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGeneTraitDefinitions.GeneTraits_GetRandomNumberOfTraitsToBeAddedToThisCreatureOnSpawn(UObject*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    int GeneTraits_GetRandomNumberOfTraitsToBeAddedToThisCreatureOnSpawn(void* a0) const
    {
        return NativeCall<int, void*>(this, "UGeneTraitDefinitions.GeneTraits_GetRandomNumberOfTraitsToBeAddedToThisCreatureOnSpawn(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGeneTraitDefinitions.GeneTraits_GetRandomNumberOfTraitsToBeAddedToThisCreatureOnSpawn_Implement
    // endereco: casamento de bytes com a build de referencia
    int GeneTraits_GetRandomNumberOfTraitsToBeAddedToThisCreatureOnSpawn_Implementation(void* a0) const
    {
        return NativeCall<int, void*>(this, "UGeneTraitDefinitions.GeneTraits_GetRandomNumberOfTraitsToBeAddedToThisCreatureOnSpawn_Implementation(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGeneTraitDefinitions.GeneTraits_GetRandomSpawnGeneTraitForCreature_Implementation(UObject*,FStr
    // endereco: casamento de bytes com a build de referencia
    unsigned long long GeneTraits_GetRandomSpawnGeneTraitForCreature_Implementation(void* a0, const FString& a1) const
    {
        return NativeCall<unsigned long long, void*, void*>(this, "UGeneTraitDefinitions.GeneTraits_GetRandomSpawnGeneTraitForCreature_Implementation(UObject*,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    unsigned long long GeneTraits_GetRandomSpawnGeneTraitForCreature_Implementation(void* a0, FString* a1) const
    { return GeneTraits_GetRandomSpawnGeneTraitForCreature_Implementation(a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGeneTraitDefinitions.GeneTraits_RemoveInstanceOfGeneTraitIfItExists(UObject*,FName,FString&)
    // endereco: casamento de bytes com a build de referencia
    bool GeneTraits_RemoveInstanceOfGeneTraitIfItExists(void* a0, unsigned long long a1, const FString& a2) const
    {
        return NativeCall<bool, void*, unsigned long long, void*>(this, "UGeneTraitDefinitions.GeneTraits_RemoveInstanceOfGeneTraitIfItExists(UObject*,FName,FString&)", a0, a1, const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool GeneTraits_RemoveInstanceOfGeneTraitIfItExists(void* a0, unsigned long long a1, FString* a2) const
    { return GeneTraits_RemoveInstanceOfGeneTraitIfItExists(a0, a1, *a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGeneTraitDefinitions.GeneTraits_RemoveInstanceOfGeneTraitIfItExists_Implementation(UObject*,FNa
    // endereco: casamento de bytes com a build de referencia
    bool GeneTraits_RemoveInstanceOfGeneTraitIfItExists_Implementation(void* a0, unsigned long long a1, const FString& a2) const
    {
        return NativeCall<bool, void*, unsigned long long, void*>(this, "UGeneTraitDefinitions.GeneTraits_RemoveInstanceOfGeneTraitIfItExists_Implementation(UObject*,FName,FString&)", a0, a1, const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool GeneTraits_RemoveInstanceOfGeneTraitIfItExists_Implementation(void* a0, unsigned long long a1, FString* a2) const
    { return GeneTraits_RemoveInstanceOfGeneTraitIfItExists_Implementation(a0, a1, *a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGeneTraitDefinitions.GeneTraits_SplitGeneTraitFNameAndTier(FName,int&)
    // endereco: casamento de bytes com a build de referencia
    static unsigned long long GeneTraits_SplitGeneTraitFNameAndTier(unsigned long long a0, void* a1)
    {
        return NativeCall<unsigned long long, unsigned long long, void*>(nullptr, "UGeneTraitDefinitions.GeneTraits_SplitGeneTraitFNameAndTier(FName,int&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGeneTraitDefinitions.GeneTraits_ValidateGeneTraits(UObject*,FString&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=243+chamadores=2+grafo=4/4]]
    bool GeneTraits_ValidateGeneTraits(void* a0, const FString& a1) const
    {
        return NativeCall<bool, void*, void*>(this, "UGeneTraitDefinitions.GeneTraits_ValidateGeneTraits(UObject*,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool GeneTraits_ValidateGeneTraits(void* a0, FString* a1) const
    { return GeneTraits_ValidateGeneTraits(a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGeneTraitDefinitions.GeneTraits_ValidateGeneTraits_Implementation(UObject*,FString&)
    // endereco: casamento de bytes com a build de referencia
    bool GeneTraits_ValidateGeneTraits_Implementation(void* a0, const FString& a1) const
    {
        return NativeCall<bool, void*, void*>(this, "UGeneTraitDefinitions.GeneTraits_ValidateGeneTraits_Implementation(UObject*,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool GeneTraits_ValidateGeneTraits_Implementation(void* a0, FString* a1) const
    { return GeneTraits_ValidateGeneTraits_Implementation(a0, *a1); }

    TArray<void*>& DefaultGeneTraitTierChanceProbabilityField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UGeneTraitDefinitions.DefaultGeneTraitTierChanceProbability"); }
    BrzCampoPonteiro GeneTraits_GeneTraitDefinitionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGeneTraitDefinitions.GeneTraits_GeneTraitDefinitions")); }
    TArray<void*>& GeneTraits_SkipCodeChecksStruct_NonHumansField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UGeneTraitDefinitions.GeneTraits_SkipCodeChecksStruct_NonHumans"); }
    TArray<void*>& GeneTraits_SkipCodeChecksStruct_ThrallsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UGeneTraitDefinitions.GeneTraits_SkipCodeChecksStruct_Thralls"); }
    BrzCampoPonteiro GeneTraits_SpecificationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGeneTraitDefinitions.GeneTraits_Specifications")); }
    TArray<void*>& GeneTraits_Specifications_NonHumansField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UGeneTraitDefinitions.GeneTraits_Specifications_NonHumans"); }
    TArray<void*>& GeneTraits_Specifications_ThrallsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UGeneTraitDefinitions.GeneTraits_Specifications_Thralls"); }
    bool& ThisIsACustomFileAndWillAttemptToFindThisCreaturesGeneTraitListingInTheDefaultBPField() const
    { return *GetNativePointerField<bool*>(this, "UGeneTraitDefinitions.ThisIsACustomFileAndWillAttemptToFindThisCreaturesGeneTraitListingInTheDefaultBP"); }
    bool& ThisIsACustomFileAndWillNOTOverrideTheDefaultGeneTraitListingForWhenACreatureIsntFoundInEitherFileField() const
    { return *GetNativePointerField<bool*>(this, "UGeneTraitDefinitions.ThisIsACustomFileAndWillNOTOverrideTheDefaultGeneTraitListingForWhenACreatureIsntFoundInEitherFile"); }
    BitFieldValue<bool, unsigned __int32> ThisIsACustomFileAndWillAttemptToFindThisCreaturesGeneTraitListingInTheDefaultBP()
    { return { (void*)this, "ThisIsACustomFileAndWillAttemptToFindThisCreaturesGeneTraitListingInTheDefaultBP" }; }
    BitFieldValue<bool, unsigned __int32> ThisIsACustomFileAndWillNOTOverrideTheDefaultGeneTraitListingForWhenACreatureIsntFoundInEitherFile()
    { return { (void*)this, "ThisIsACustomFileAndWillNOTOverrideTheDefaultGeneTraitListingForWhenACreatureIsntFoundInEitherFile" }; }

};

#endif  // BRZ_SDK_JOGO_UGENETRAITDEFINITIONS_H

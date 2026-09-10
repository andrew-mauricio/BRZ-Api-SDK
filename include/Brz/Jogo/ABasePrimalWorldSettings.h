// ==========================================================================
//  ABasePrimalWorldSettings — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ABASEPRIMALWORLDSETTINGS_H
#define BRZ_SDK_JOGO_ABASEPRIMALWORLDSETTINGS_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct APostProcessVolume;

#include "AInfo.h"

struct ABasePrimalWorldSettings : public AInfo
{
    static UClass* StaticClass()
    { return BrzClassePorNome("ABasePrimalWorldSettings"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABasePrimalWorldSettings.AddActorToUnstasisSet(AActor*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=77]]
    void AddActorToUnstasisSet(void* a0) const
    {
        NativeCall<void, void*>(this, "ABasePrimalWorldSettings.AddActorToUnstasisSet(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABasePrimalWorldSettings.AddToActorList(EActorLists,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void AddToActorList(int a0, void* a1) const
    {
        NativeCall<void, int, void*>(this, "ABasePrimalWorldSettings.AddToActorList(EActorLists,AActor*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABasePrimalWorldSettings.DuringPhysxTick(float)
    // endereco: casamento de bytes com a build de referencia
    void DuringPhysxTick(float a0) const
    {
        NativeCall<void, float>(this, "ABasePrimalWorldSettings.DuringPhysxTick(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABasePrimalWorldSettings.GetActorList(EActorLists)
    // endereco: casamento de bytes com a build de referencia
    void GetActorList(void* retorno, int a0) const
    {
        NativeCall<void, void*, int>(this, "ABasePrimalWorldSettings.GetActorList(EActorLists)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABasePrimalWorldSettings.GetActorListCount(EActorLists)
    // endereco: cache_pdb_25090264
    int GetActorListCount(int a0) const
    {
        return NativeCall<int, int>(this, "ABasePrimalWorldSettings.GetActorListCount(EActorLists)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABasePrimalWorldSettings.GetActorWithTag(FName)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    AActor* GetActorWithTag(unsigned long long a0) const
    {
        return NativeCall<AActor*, unsigned long long>(this, "ABasePrimalWorldSettings.GetActorWithTag(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABasePrimalWorldSettings.GetActorsWithTag(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetActorsWithTag(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "ABasePrimalWorldSettings.GetActorsWithTag(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABasePrimalWorldSettings.RemoveActorFromUnstasisSet(AActor*)
    // endereco: casamento de bytes com a build de referencia
    void RemoveActorFromUnstasisSet(void* a0) const
    {
        NativeCall<void, void*>(this, "ABasePrimalWorldSettings.RemoveActorFromUnstasisSet(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABasePrimalWorldSettings.RemoveFromActorList(EActorLists,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void RemoveFromActorList(int a0, void* a1) const
    {
        NativeCall<void, int, void*>(this, "ABasePrimalWorldSettings.RemoveFromActorList(EActorLists,AActor*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABasePrimalWorldSettings.RemoveTaggedActor(AActor*)
    // endereco: casamento de bytes com a build de referencia
    void RemoveTaggedActor(void* a0) const
    {
        NativeCall<void, void*>(this, "ABasePrimalWorldSettings.RemoveTaggedActor(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABasePrimalWorldSettings.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "ABasePrimalWorldSettings.Tick(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABasePrimalWorldSettings.UpdateTreeStumps()
    // endereco: casamento de bytes com a build de referencia
    void UpdateTreeStumps() const
    {
        NativeCall<void>(this, "ABasePrimalWorldSettings.UpdateTreeStumps()");
    }

    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bDisableSplitscreen` +486, medido na build 25090264
    //  (offset absoluto medido: 0x6C8; confianca baixa)
    void*& AtomicActorUnstasisListCountField() const
    { return BrzCampoAncorado<void*>(this, "bDisableSplitscreen", 486); }
    float& BaseNetStasisDistanceField() const
    { return *GetNativePointerField<float*>(this, "ABasePrimalWorldSettings.BaseNetStasisDistance"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bDisableSplitscreen` +510, medido na build 25090264
    //  (offset absoluto medido: 0x6E0; confianca baixa)
    void*& CurrentUnStasisedIndexField() const
    { return BrzCampoAncorado<void*>(this, "bDisableSplitscreen", 510); }
    TObjectPtr<APostProcessVolume>& GlobalPostProcessVolumeField() const
    { return *GetNativePointerField<TObjectPtr<APostProcessVolume>*>(this, "ABasePrimalWorldSettings.GlobalPostProcessVolume"); }
    BrzCampoPonteiro GrassCullDistanceScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ABasePrimalWorldSettings.GrassCullDistanceScale")); }
    BrzCampoPonteiro GrassDensityScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ABasePrimalWorldSettings.GrassDensityScale")); }
    float& KillZIntervalMaxField() const
    { return *GetNativePointerField<float*>(this, "ABasePrimalWorldSettings.KillZIntervalMax"); }
    float& KillZIntervalMinField() const
    { return *GetNativePointerField<float*>(this, "ABasePrimalWorldSettings.KillZIntervalMin"); }
    BrzCampoPonteiro PlatformGrassQualitiesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ABasePrimalWorldSettings.PlatformGrassQualities")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BaseNetStasisDistance` +4, medido na build 25090264
    //  (offset absoluto medido: 0x6E8; confianca alta)
    void*& PlayerCharacterUnstasisViewpointTimestampsField() const
    { return BrzCampoAncorado<void*>(this, "BaseNetStasisDistance", 4); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bDisableSplitscreen` +494, medido na build 25090264
    //  (offset absoluto medido: 0x6D0; confianca baixa)
    TArray<TWeakObjectPtr<void>>& QuickTickUnstasisListField() const
    { return BrzCampoAncorado<TArray<TWeakObjectPtr<void>>>(this, "bDisableSplitscreen", 494); }
    BrzCampoPonteiro StructureIDMapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ABasePrimalWorldSettings.StructureIDMap")); }
    TArray<void*>& TreeStumpCreationTimesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "ABasePrimalWorldSettings.TreeStumpCreationTimes"); }
    BitFieldValue<bool, unsigned __int32> bDisableSplitscreen()
    { return { (void*)this, "bDisableSplitscreen" }; }
    BitFieldValue<bool, unsigned __int32> bForceRouteBeginPlayOnLoad()
    { return { (void*)this, "bForceRouteBeginPlayOnLoad" }; }
    BitFieldValue<bool, unsigned __int32> bSeamlessTravelWorld()
    { return { (void*)this, "bSeamlessTravelWorld" }; }
    BitFieldValue<bool, unsigned __int32> bSkipRuntimeCellsTransformerStackInPIE()
    { return { (void*)this, "bSkipRuntimeCellsTransformerStackInPIE" }; }

};

#endif  // BRZ_SDK_JOGO_ABASEPRIMALWORLDSETTINGS_H

// ==========================================================================
//  APrimalWorldModifier — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALWORLDMODIFIER_H
#define BRZ_SDK_JOGO_APRIMALWORLDMODIFIER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AStaticMeshActor;

#include "AActor.h"

struct APrimalWorldModifier : public AActor
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalWorldModifier"); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWorldModifier.BPPostFoliageScan()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=45]]
    void BPPostFoliageScan() const
    {
        NativeCall<void>(this, "APrimalWorldModifier.BPPostFoliageScan()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWorldModifier.BPPreFoliageScan()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=45]]
    void BPPreFoliageScan() const
    {
        NativeCall<void>(this, "APrimalWorldModifier.BPPreFoliageScan()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalWorldModifier.BPSkinFoliage(UHierarchicalInstancedStaticMeshComponent*)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=53]]
    void BPSkinFoliage(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalWorldModifier.BPSkinFoliage(UHierarchicalInstancedStaticMeshComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWorldModifier.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "APrimalWorldModifier.BeginPlay()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWorldModifier.DoRescanForSublevelLoaded()
    // endereco: cache_pdb_25090264
    void DoRescanForSublevelLoaded() const
    {
        NativeCall<void>(this, "APrimalWorldModifier.DoRescanForSublevelLoaded()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWorldModifier.GetCurrentSublevelOverrideGroup(FSublevelOverrideGroup&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCurrentSublevelOverrideGroup(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalWorldModifier.GetCurrentSublevelOverrideGroup(FSublevelOverrideGroup&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWorldModifier.HasPriority()
    // endereco: casamento de bytes com a build de referencia
    bool HasPriority() const
    {
        return NativeCall<bool>(this, "APrimalWorldModifier.HasPriority()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWorldModifier.IsAllowedOnCurrentMap()
    // endereco: casamento de bytes com a build de referencia
    bool IsAllowedOnCurrentMap() const
    {
        return NativeCall<bool>(this, "APrimalWorldModifier.IsAllowedOnCurrentMap()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWorldModifier.PreMapLoad()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PreMapLoad() const
    {
        return NativeCall<void*>(this, "APrimalWorldModifier.PreMapLoad()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWorldModifier.RescanForFoliage()
    // endereco: casamento de bytes com a build de referencia
    void RescanForFoliage() const
    {
        NativeCall<void>(this, "APrimalWorldModifier.RescanForFoliage()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWorldModifier.RescanForMapStaticMeshes()
    // endereco: casamento de bytes com a build de referencia
    void RescanForMapStaticMeshes() const
    {
        NativeCall<void>(this, "APrimalWorldModifier.RescanForMapStaticMeshes()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWorldModifier.TryFoliageReskin(AInstancedFoliageActor*)
    // endereco: casamento de bytes com a build de referencia
    void TryFoliageReskin(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalWorldModifier.TryFoliageReskin(AInstancedFoliageActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWorldModifier.TryStaticMeshActorReskin(AStaticMeshActor*,FSublevelOverrideGroup&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro TryStaticMeshActorReskin(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalWorldModifier.TryStaticMeshActorReskin(AStaticMeshActor*,FSublevelOverrideGroup&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWorldModifier.TrySublevelSwaps()
    // endereco: casamento de bytes com a build de referencia
    void TrySublevelSwaps() const
    {
        NativeCall<void>(this, "APrimalWorldModifier.TrySublevelSwaps()");
    }

    BrzCampoPonteiro FoliageReskinListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldModifier.FoliageReskinList")); }
    TArray<void*>& MapExclusionListField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalWorldModifier.MapExclusionList"); }
    BrzCampoPonteiro OnFoliageSkinnedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldModifier.OnFoliageSkinned")); }
    TArray<void*>& PriorityTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalWorldModifier.PriorityTags"); }
    BrzCampoPonteiro ReskinnedFoliageTrackingListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldModifier.ReskinnedFoliageTrackingList")); }
    TArray<AStaticMeshActor*>& ReskinnedLevelStaticMeshTrackingListField() const
    { return *GetNativePointerField<TArray<AStaticMeshActor*>*>(this, "APrimalWorldModifier.ReskinnedLevelStaticMeshTrackingList"); }
    BrzCampoPonteiro SublevelOverrideGroupsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldModifier.SublevelOverrideGroups")); }
    BitFieldValue<bool, unsigned __int32> bUseMapExclusionListAsExclusiveList()
    { return { (void*)this, "bUseMapExclusionListAsExclusiveList" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALWORLDMODIFIER_H

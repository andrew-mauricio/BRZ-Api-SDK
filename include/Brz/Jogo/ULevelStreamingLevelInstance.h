// ==========================================================================
//  ULevelStreamingLevelInstance — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ULEVELSTREAMINGLEVELINSTANCE_H
#define BRZ_SDK_JOGO_ULEVELSTREAMINGLEVELINSTANCE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct ULevelStreamingLevelInstance
{
    static UClass* StaticClass()
    { return BrzClassePorNome("ULevelStreamingLevelInstance"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreamingLevelInstance.GetLevelInstance()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetLevelInstance() const
    {
        return NativeCall<void*>(this, "ULevelStreamingLevelInstance.GetLevelInstance()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreamingLevelInstance.LoadInstance(ILevelInstanceInterface*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LoadInstance(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ULevelStreamingLevelInstance.LoadInstance(ILevelInstanceInterface*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreamingLevelInstance.OnLevelLoadedChanged(ULevel*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnLevelLoadedChanged(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ULevelStreamingLevelInstance.OnLevelLoadedChanged(ULevel*)", a0);
    }

    BrzCampoPonteiro EditorStreamingVolumesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingLevelInstance.EditorStreamingVolumes")); }
    BrzCampoPonteiro LODPackageNamesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingLevelInstance.LODPackageNames")); }
    BrzCampoPonteiro LevelColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingLevelInstance.LevelColor")); }
    int& LevelLODIndexField() const
    { return *GetNativePointerField<int*>(this, "ULevelStreamingLevelInstance.LevelLODIndex"); }
    BrzCampoPonteiro LevelTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingLevelInstance.LevelTransform")); }
    BrzCampoPonteiro LoadedLevelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingLevelInstance.LoadedLevel")); }
    float& MinTimeBetweenVolumeUnloadRequestsField() const
    { return *GetNativePointerField<float*>(this, "ULevelStreamingLevelInstance.MinTimeBetweenVolumeUnloadRequests"); }
    BrzCampoPonteiro OnLevelHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingLevelInstance.OnLevelHidden")); }
    BrzCampoPonteiro OnLevelLoadedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingLevelInstance.OnLevelLoaded")); }
    BrzCampoPonteiro OnLevelShownField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingLevelInstance.OnLevelShown")); }
    BrzCampoPonteiro OnLevelUnloadedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingLevelInstance.OnLevelUnloaded")); }
    FName& PackageNameToLoadField() const
    { return *GetNativePointerField<FName*>(this, "ULevelStreamingLevelInstance.PackageNameToLoad"); }
    BrzCampoPonteiro PendingUnloadLevelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingLevelInstance.PendingUnloadLevel")); }
    int& StreamingPriorityField() const
    { return *GetNativePointerField<int*>(this, "ULevelStreamingLevelInstance.StreamingPriority"); }
    BrzCampoPonteiro WorldAssetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingLevelInstance.WorldAsset")); }
    BrzCampoPonteiro bClientOnlyVisibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingLevelInstance.bClientOnlyVisible")); }
    BrzCampoPonteiro bDisableDistanceStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingLevelInstance.bDisableDistanceStreaming")); }
    BrzCampoPonteiro bDrawOnLevelStatusMapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingLevelInstance.bDrawOnLevelStatusMap")); }
    BrzCampoPonteiro bEnableTileStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingLevelInstance.bEnableTileStreaming")); }
    BrzCampoPonteiro bInitiallyLoadedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingLevelInstance.bInitiallyLoaded")); }
    BrzCampoPonteiro bInitiallyVisibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingLevelInstance.bInitiallyVisible")); }
    BrzCampoPonteiro bIsStaticField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingLevelInstance.bIsStatic")); }
    BrzCampoPonteiro bLevelStreamingDesiredVisibilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingLevelInstance.bLevelStreamingDesiredVisibility")); }
    BrzCampoPonteiro bLevelStreamingVisibilityOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingLevelInstance.bLevelStreamingVisibilityOnly")); }
    BrzCampoPonteiro bLockedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingLevelInstance.bLocked")); }
    BrzCampoPonteiro bShouldBeLoadedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingLevelInstance.bShouldBeLoaded")); }
    BrzCampoPonteiro bShouldBeVisibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingLevelInstance.bShouldBeVisible")); }
    BrzCampoPonteiro bShouldBlockOnLoadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingLevelInstance.bShouldBlockOnLoad")); }
    BrzCampoPonteiro bShouldBlockOnUnloadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingLevelInstance.bShouldBlockOnUnload")); }
};

#endif  // BRZ_SDK_JOGO_ULEVELSTREAMINGLEVELINSTANCE_H

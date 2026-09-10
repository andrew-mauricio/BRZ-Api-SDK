// ==========================================================================
//  ULevelStreamingPersistent — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ULEVELSTREAMINGPERSISTENT_H
#define BRZ_SDK_JOGO_ULEVELSTREAMINGPERSISTENT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct ULevelStreamingPersistent
{
    static UClass* StaticClass()
    { return BrzClassePorNome("ULevelStreamingPersistent"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    BrzCampoPonteiro EditorStreamingVolumesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingPersistent.EditorStreamingVolumes")); }
    BrzCampoPonteiro LODPackageNamesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingPersistent.LODPackageNames")); }
    BrzCampoPonteiro LevelColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingPersistent.LevelColor")); }
    int& LevelLODIndexField() const
    { return *GetNativePointerField<int*>(this, "ULevelStreamingPersistent.LevelLODIndex"); }
    BrzCampoPonteiro LevelTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingPersistent.LevelTransform")); }
    BrzCampoPonteiro LoadedLevelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingPersistent.LoadedLevel")); }
    float& MinTimeBetweenVolumeUnloadRequestsField() const
    { return *GetNativePointerField<float*>(this, "ULevelStreamingPersistent.MinTimeBetweenVolumeUnloadRequests"); }
    BrzCampoPonteiro OnLevelHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingPersistent.OnLevelHidden")); }
    BrzCampoPonteiro OnLevelLoadedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingPersistent.OnLevelLoaded")); }
    BrzCampoPonteiro OnLevelShownField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingPersistent.OnLevelShown")); }
    BrzCampoPonteiro OnLevelUnloadedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingPersistent.OnLevelUnloaded")); }
    FName& PackageNameToLoadField() const
    { return *GetNativePointerField<FName*>(this, "ULevelStreamingPersistent.PackageNameToLoad"); }
    BrzCampoPonteiro PendingUnloadLevelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingPersistent.PendingUnloadLevel")); }
    int& StreamingPriorityField() const
    { return *GetNativePointerField<int*>(this, "ULevelStreamingPersistent.StreamingPriority"); }
    BrzCampoPonteiro WorldAssetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingPersistent.WorldAsset")); }
    BitFieldValue<bool, unsigned __int32> bClientOnlyVisible()
    { return { (void*)this, "bClientOnlyVisible" }; }
    BitFieldValue<bool, unsigned __int32> bDisableDistanceStreaming()
    { return { (void*)this, "bDisableDistanceStreaming" }; }
    BitFieldValue<bool, unsigned __int32> bDrawOnLevelStatusMap()
    { return { (void*)this, "bDrawOnLevelStatusMap" }; }
    BitFieldValue<bool, unsigned __int32> bEnableTileStreaming()
    { return { (void*)this, "bEnableTileStreaming" }; }
    BitFieldValue<bool, unsigned __int32> bIsStatic()
    { return { (void*)this, "bIsStatic" }; }
    BitFieldValue<bool, unsigned __int32> bLevelStreamingDesiredVisibility()
    { return { (void*)this, "bLevelStreamingDesiredVisibility" }; }
    BitFieldValue<bool, unsigned __int32> bLevelStreamingVisibilityOnly()
    { return { (void*)this, "bLevelStreamingVisibilityOnly" }; }
    BitFieldValue<bool, unsigned __int32> bLocked()
    { return { (void*)this, "bLocked" }; }
    BitFieldValue<bool, unsigned __int32> bShouldBeLoaded()
    { return { (void*)this, "bShouldBeLoaded" }; }
    BitFieldValue<bool, unsigned __int32> bShouldBeVisible()
    { return { (void*)this, "bShouldBeVisible" }; }
    BitFieldValue<bool, unsigned __int32> bShouldBlockOnLoad()
    { return { (void*)this, "bShouldBlockOnLoad" }; }
    BitFieldValue<bool, unsigned __int32> bShouldBlockOnUnload()
    { return { (void*)this, "bShouldBlockOnUnload" }; }
};

#endif  // BRZ_SDK_JOGO_ULEVELSTREAMINGPERSISTENT_H

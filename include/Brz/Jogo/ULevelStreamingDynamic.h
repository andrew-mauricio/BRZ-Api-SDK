// ==========================================================================
//  ULevelStreamingDynamic — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ULEVELSTREAMINGDYNAMIC_H
#define BRZ_SDK_JOGO_ULEVELSTREAMINGDYNAMIC_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct ULevelStreamingDynamic
{
    static UClass* StaticClass()
    { return BrzClassePorNome("ULevelStreamingDynamic"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreamingDynamic.GetLevelInstancePackageName(ULevelStreamingDynamic::FLoadLevelInstancePar
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetLevelInstancePackageName(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ULevelStreamingDynamic.GetLevelInstancePackageName(ULevelStreamingDynamic::FLoadLevelInstanceParams&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreamingDynamic.LoadLevelInstance(UObject*,FString,UE::Math::TVector<double>,UE::Math::TR
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LoadLevelInstance(void* a0, const FString& a1, void* a2, void* a3, void* a4, const FString& a5, void* a6, bool a7) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, void*, void*, bool>(this, "ULevelStreamingDynamic.LoadLevelInstance(UObject*,FString,UE::Math::TVector<double>,UE::Math::TRotator<double>,bool&,FString&,TSubclassOf<ULevelStreamingDynamic>,bool)", a0, const_cast<FString*>(&a1), a2, a3, a4, const_cast<FString*>(&a5), a6, a7);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro LoadLevelInstance(void* a0, FString* a1, void* a2, void* a3, void* a4, FString* a5, void* a6, bool a7) const
    { return LoadLevelInstance(a0, *a1, a2, a3, a4, *a5, a6, a7); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreamingDynamic.LoadLevelInstance_Internal(ULevelStreamingDynamic::FLoadLevelInstancePara
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LoadLevelInstance_Internal(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "ULevelStreamingDynamic.LoadLevelInstance_Internal(ULevelStreamingDynamic::FLoadLevelInstanceParams&,bool&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreamingDynamic.PostLoad()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=162]]
    BrzPonteiro PostLoad() const
    {
        return NativeCall<void*>(this, "ULevelStreamingDynamic.PostLoad()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreamingDynamic.SetShouldBeLoaded(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetShouldBeLoaded(bool a0) const
    {
        return NativeCall<void*, bool>(this, "ULevelStreamingDynamic.SetShouldBeLoaded(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelStreamingDynamic.ShouldBeLoaded()
    // endereco: cache_pdb_25090264
    BrzPonteiro ShouldBeLoaded() const
    {
        return NativeCall<void*>(this, "ULevelStreamingDynamic.ShouldBeLoaded()");
    }

    BrzCampoPonteiro EditorStreamingVolumesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingDynamic.EditorStreamingVolumes")); }
    BrzCampoPonteiro LODPackageNamesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingDynamic.LODPackageNames")); }
    BrzCampoPonteiro LevelColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingDynamic.LevelColor")); }
    int& LevelLODIndexField() const
    { return *GetNativePointerField<int*>(this, "ULevelStreamingDynamic.LevelLODIndex"); }
    BrzCampoPonteiro LevelTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingDynamic.LevelTransform")); }
    BrzCampoPonteiro LoadedLevelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingDynamic.LoadedLevel")); }
    float& MinTimeBetweenVolumeUnloadRequestsField() const
    { return *GetNativePointerField<float*>(this, "ULevelStreamingDynamic.MinTimeBetweenVolumeUnloadRequests"); }
    BrzCampoPonteiro OnLevelHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingDynamic.OnLevelHidden")); }
    BrzCampoPonteiro OnLevelLoadedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingDynamic.OnLevelLoaded")); }
    BrzCampoPonteiro OnLevelShownField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingDynamic.OnLevelShown")); }
    BrzCampoPonteiro OnLevelUnloadedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingDynamic.OnLevelUnloaded")); }
    FName& PackageNameToLoadField() const
    { return *GetNativePointerField<FName*>(this, "ULevelStreamingDynamic.PackageNameToLoad"); }
    BrzCampoPonteiro PendingUnloadLevelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingDynamic.PendingUnloadLevel")); }
    int& StreamingPriorityField() const
    { return *GetNativePointerField<int*>(this, "ULevelStreamingDynamic.StreamingPriority"); }
    BrzCampoPonteiro WorldAssetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelStreamingDynamic.WorldAsset")); }
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
    BitFieldValue<bool, unsigned __int32> bInitiallyLoaded()
    { return { (void*)this, "bInitiallyLoaded" }; }
    BitFieldValue<bool, unsigned __int32> bInitiallyVisible()
    { return { (void*)this, "bInitiallyVisible" }; }

};

#endif  // BRZ_SDK_JOGO_ULEVELSTREAMINGDYNAMIC_H

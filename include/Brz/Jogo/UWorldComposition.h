// ==========================================================================
//  UWorldComposition — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UWORLDCOMPOSITION_H
#define BRZ_SDK_JOGO_UWORLDCOMPOSITION_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UWorldComposition
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UWorldComposition"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldComposition.CaclulateTilesAbsolutePositions()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CaclulateTilesAbsolutePositions() const
    {
        return NativeCall<void*>(this, "UWorldComposition.CaclulateTilesAbsolutePositions()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldComposition.CommitTileStreamingState(UWorld*,int,bool,bool,bool,int,int,int,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CommitTileStreamingState(void* a0, int a1, bool a2, bool a3, bool a4, int a5, int a6, int a7, bool a8) const
    {
        return NativeCall<void*, void*, int, bool, bool, bool, int, int, int, bool>(this, "UWorldComposition.CommitTileStreamingState(UWorld*,int,bool,bool,bool,int,int,int,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldComposition.FindTileIndexByName(FName&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindTileIndexByName(const FName& a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldComposition.FindTileIndexByName(FName&)", const_cast<FName*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro FindTileIndexByName(FName* a0) const
    { return FindTileIndexByName(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldComposition.FixupForPIE(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FixupForPIE(int a0) const
    {
        return NativeCall<void*, int>(this, "UWorldComposition.FixupForPIE(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldComposition.GetDistanceVisibleLevels(UE::Math::TVector<double>*,int,TArray<FDistanceVisibl
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDistanceVisibleLevels(void* a0, int a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) const
    {
        return NativeCall<void*, void*, int, void*, void*, void*, void*, void*, void*, void*>(this, "UWorldComposition.GetDistanceVisibleLevels(UE::Math::TVector<double>*,int,TArray<FDistanceVisibleLevel,TSizedDefaultAllocator<32>>&,TArray<FDistanceVisibleLevel,TSizedDefaultAllocator<32>>&,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>&,int&,int&,bool&,bool*)", a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldComposition.GetLevelOffset(ULevel*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetLevelOffset(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldComposition.GetLevelOffset(ULevel*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldComposition.IsDistanceDependentLevel(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsDistanceDependentLevel(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "UWorldComposition.IsDistanceDependentLevel(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldComposition.OnLevelAddedToWorld(ULevel*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnLevelAddedToWorld(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldComposition.OnLevelAddedToWorld(ULevel*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldComposition.OnLevelPostLoad(ULevel*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnLevelPostLoad(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldComposition.OnLevelPostLoad(ULevel*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldComposition.OnLevelRemovedFromWorld(ULevel*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnLevelRemovedFromWorld(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldComposition.OnLevelRemovedFromWorld(ULevel*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldComposition.PopulateStreamingLevels()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PopulateStreamingLevels() const
    {
        return NativeCall<void*>(this, "UWorldComposition.PopulateStreamingLevels()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldComposition.PostDuplicate(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PostDuplicate(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UWorldComposition.PostDuplicate(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldComposition.PostInitProperties()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=50]]
    BrzPonteiro PostInitProperties() const
    {
        return NativeCall<void*>(this, "UWorldComposition.PostInitProperties()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldComposition.PostLoad()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PostLoad() const
    {
        return NativeCall<void*>(this, "UWorldComposition.PostLoad()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldComposition.Serialize(FArchive&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Serialize(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldComposition.Serialize(FArchive&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldComposition.SetTileUnstreamable(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetTileUnstreamable(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldComposition.SetTileUnstreamable(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro SetTileUnstreamable(FString* a0) const
    { return SetTileUnstreamable(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldComposition.UpdateStreamingState()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateStreamingState() const
    {
        return NativeCall<void*>(this, "UWorldComposition.UpdateStreamingState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldComposition.UpdateStreamingState(UE::Math::TVector<double>*,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateStreamingState(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "UWorldComposition.UpdateStreamingState(UE::Math::TVector<double>*,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldComposition.UpdateTileVolumes()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateTileVolumes() const
    {
        return NativeCall<void*>(this, "UWorldComposition.UpdateTileVolumes()");
    }

    double& LastTimeSwitchedContainedVolumesField() const
    { return *GetNativePointerField<double*>(this, "UWorldComposition.LastTimeSwitchedContainedVolumes"); }
    float& RebaseOriginDistanceField() const
    { return *GetNativePointerField<float*>(this, "UWorldComposition.RebaseOriginDistance"); }
    BrzCampoPonteiro TileInitialStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldComposition.TileInitialState")); }
    BrzCampoPonteiro TileVolumesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldComposition.TileVolumes")); }
    BrzCampoPonteiro TilesStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldComposition.TilesStreaming")); }
    double& TilesStreamingTimeThresholdField() const
    { return *GetNativePointerField<double*>(this, "UWorldComposition.TilesStreamingTimeThreshold"); }
    BitFieldValue<bool, unsigned __int32> bLoadAllTilesDuringCinematic()
    { return { (void*)this, "bLoadAllTilesDuringCinematic" }; }
    BitFieldValue<bool, unsigned __int32> bRebaseOriginIn3DSpace()
    { return { (void*)this, "bRebaseOriginIn3DSpace" }; }

};

#endif  // BRZ_SDK_JOGO_UWORLDCOMPOSITION_H

// ==========================================================================
//  UPrimalLocalProfile — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALLOCALPROFILE_H
#define BRZ_SDK_JOGO_UPRIMALLOCALPROFILE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

#include "UObject.h"

struct UPrimalLocalProfile : public UObject
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalLocalProfile"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalLocalProfile.AddArkTributeDino(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void AddArkTributeDino(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalLocalProfile.AddArkTributeDino(APrimalDinoCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.AddArkTributeItem(FItemNetInfo&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddArkTributeItem(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "UPrimalLocalProfile.AddArkTributeItem(FItemNetInfo&,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalLocalProfile.AddArkTributePlayerData(FArkTributePlayerData)
    // endereco: casamento de bytes com a build de referencia
    void AddArkTributePlayerData(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalLocalProfile.AddArkTributePlayerData(FArkTributePlayerData)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.AddCustomFolder(FString)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro AddCustomFolder(const FString& a0)
    {
        return NativeCall<void*, void*>(nullptr, "UPrimalLocalProfile.AddCustomFolder(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static BrzPonteiro AddCustomFolder(FString* a0)
    { return AddCustomFolder(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.AddCustomFolderItem(FString,TSubclassOf<UPrimalItem>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddCustomFolderItem(const FString& a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalLocalProfile.AddCustomFolderItem(FString,TSubclassOf<UPrimalItem>)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro AddCustomFolderItem(FString* a0, void* a1) const
    { return AddCustomFolderItem(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.AddFavoriteServerName(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddFavoriteServerName(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalLocalProfile.AddFavoriteServerName(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro AddFavoriteServerName(FString* a0) const
    { return AddFavoriteServerName(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.AddMapMarker(FString,float,float,FLinearColor)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddMapMarker(const FString& a0, float a1, float a2, void* a3) const
    {
        return NativeCall<void*, void*, float, float, void*>(this, "UPrimalLocalProfile.AddMapMarker(FString,float,float,FLinearColor)", const_cast<FString*>(&a0), a1, a2, a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro AddMapMarker(FString* a0, float a1, float a2, void* a3) const
    { return AddMapMarker(*a0, a1, a2, a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.AddRecentlyJoinedServerName(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddRecentlyJoinedServerName(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalLocalProfile.AddRecentlyJoinedServerName(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro AddRecentlyJoinedServerName(FString* a0) const
    { return AddRecentlyJoinedServerName(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BeginPlay() const
    {
        return NativeCall<void*>(this, "UPrimalLocalProfile.BeginPlay()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.ClearTutorials()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClearTutorials() const
    {
        return NativeCall<void*>(this, "UPrimalLocalProfile.ClearTutorials()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.FindArkTributeDinoDataIndexById(unsignedint,unsignedint)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindArkTributeDinoDataIndexById(unsigned int a0, unsigned int a1) const
    {
        return NativeCall<void*, unsigned int, unsigned int>(this, "UPrimalLocalProfile.FindArkTributeDinoDataIndexById(unsignedint,unsignedint)", a0, a1);
    }

    // dump_sobre_sdk_287a0
    //   UPrimalLocalProfile.GetArkTributeDinosData()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=345+bytes40+chamadores=4+grafo=4/4]]
    void GetArkTributeDinosData() const
    {
        NativeCall<void>(this, "UPrimalLocalProfile.GetArkTributeDinosData()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalLocalProfile.GetArkTributeInventoryCount()
    // endereco: casamento de bytes com a build de referencia
    int GetArkTributeInventoryCount() const
    {
        return NativeCall<int>(this, "UPrimalLocalProfile.GetArkTributeInventoryCount()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.GetArkTributeInventoryItems(int,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetArkTributeInventoryItems(int a0, int a1) const
    {
        return NativeCall<void*, int, int>(this, "UPrimalLocalProfile.GetArkTributeInventoryItems(int,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.GetArkTributePlayerData()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=347+bytes40+chamadores=7+grafo=4/4]]
    BrzPonteiro GetArkTributePlayerData() const
    {
        return NativeCall<void*>(this, "UPrimalLocalProfile.GetArkTributePlayerData()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.GetClusterPlayerPath()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetClusterPlayerPath() const
    {
        return NativeCall<void*>(this, "UPrimalLocalProfile.GetClusterPlayerPath()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.GetLocalSaveName()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetLocalSaveName() const
    {
        return NativeCall<void*>(this, "UPrimalLocalProfile.GetLocalSaveName()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalLocalProfile.GetNumArkTributeDinos()
    // endereco: casamento de bytes com a build de referencia
    int GetNumArkTributeDinos() const
    {
        return NativeCall<int>(this, "UPrimalLocalProfile.GetNumArkTributeDinos()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.GetSpectatorPosition(int,UE::Math::TVector<double>&,UE::Math::TRotator<doubl
    // endereco: cache_pdb_25090264
    BrzPonteiro GetSpectatorPosition(int a0, void* a1, void* a2) const
    {
        return NativeCall<void*, int, void*, void*>(this, "UPrimalLocalProfile.GetSpectatorPosition(int,UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.HasReachedTributeDinosLimit(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HasReachedTributeDinosLimit(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalLocalProfile.HasReachedTributeDinosLimit(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.HasReachedTributeItemsLimit(int)
    // endereco: cache_pdb_25090264
    BrzPonteiro HasReachedTributeItemsLimit(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalLocalProfile.HasReachedTributeItemsLimit(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.HasReachedTributePlayerCharactersLimit(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HasReachedTributePlayerCharactersLimit(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalLocalProfile.HasReachedTributePlayerCharactersLimit(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.HasSeenGen2Intro()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HasSeenGen2Intro() const
    {
        return NativeCall<void*>(this, "UPrimalLocalProfile.HasSeenGen2Intro()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.IsFavoriteServerName(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsFavoriteServerName(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalLocalProfile.IsFavoriteServerName(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro IsFavoriteServerName(FString* a0) const
    { return IsFavoriteServerName(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.IsGlobalExplorerNoteUnlocked(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsGlobalExplorerNoteUnlocked(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalLocalProfile.IsGlobalExplorerNoteUnlocked(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.IsLoading()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsLoading() const
    {
        return NativeCall<void*>(this, "UPrimalLocalProfile.IsLoading()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.IsRecentlyJoinedServerName(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsRecentlyJoinedServerName(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalLocalProfile.IsRecentlyJoinedServerName(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro IsRecentlyJoinedServerName(FString* a0) const
    { return IsRecentlyJoinedServerName(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.Load(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Load(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UPrimalLocalProfile.Load(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.LoadFromFile(FObjectReader&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LoadFromFile(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalLocalProfile.LoadFromFile(FObjectReader&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.MarkGen2IntroAsSeen()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro MarkGen2IntroAsSeen()
    {
        return NativeCall<void*>(nullptr, "UPrimalLocalProfile.MarkGen2IntroAsSeen()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.OnAllClustersItemsRemoved(bool,FString&,TArray<FItemNetID,TSizedDefaultAlloc
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnAllClustersItemsRemoved(bool a0, const FString& a1, void* a2) const
    {
        return NativeCall<void*, bool, void*, void*>(this, "UPrimalLocalProfile.OnAllClustersItemsRemoved(bool,FString&,TArray<FItemNetID,TSizedDefaultAllocator<32>>&)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro OnAllClustersItemsRemoved(bool a0, FString* a1, void* a2) const
    { return OnAllClustersItemsRemoved(a0, *a1, a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.OnFinishedLoadingAllClustersItems(bool,FString&,TArray<FItemNetInfo,TSizedDe
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnFinishedLoadingAllClustersItems(bool a0, const FString& a1, void* a2) const
    {
        return NativeCall<void*, bool, void*, void*>(this, "UPrimalLocalProfile.OnFinishedLoadingAllClustersItems(bool,FString&,TArray<FItemNetInfo,TSizedDefaultAllocator<32>>&)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro OnFinishedLoadingAllClustersItems(bool a0, FString* a1, void* a2) const
    { return OnFinishedLoadingAllClustersItems(a0, *a1, a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.OnProfileBytesReady(bool,TArray<unsignedchar,TSizedDefaultAllocator<32>>&,in
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnProfileBytesReady(bool a0, void* a1, int a2) const
    {
        return NativeCall<void*, bool, void*, int>(this, "UPrimalLocalProfile.OnProfileBytesReady(bool,TArray<unsignedchar,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.OnProfileFinishedSaving(bool,int,FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnProfileFinishedSaving(bool a0, int a1, const FString& a2, bool a3) const
    {
        return NativeCall<void*, bool, int, void*, bool>(this, "UPrimalLocalProfile.OnProfileFinishedSaving(bool,int,FString&,bool)", a0, a1, const_cast<FString*>(&a2), a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro OnProfileFinishedSaving(bool a0, int a1, FString* a2, bool a3) const
    { return OnProfileFinishedSaving(a0, a1, *a2, a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.ProcessS3Downloader()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ProcessS3Downloader() const
    {
        return NativeCall<void*>(this, "UPrimalLocalProfile.ProcessS3Downloader()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.ProcessS3Uploader()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ProcessS3Uploader() const
    {
        return NativeCall<void*>(this, "UPrimalLocalProfile.ProcessS3Uploader()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.RemoveAllFavoritesNamed(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveAllFavoritesNamed(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalLocalProfile.RemoveAllFavoritesNamed(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro RemoveAllFavoritesNamed(FString* a0) const
    { return RemoveAllFavoritesNamed(*a0); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalLocalProfile.RemoveAllMapMarkers()
    // endereco: casamento de bytes com a build de referencia
    void RemoveAllMapMarkers() const
    {
        NativeCall<void>(this, "UPrimalLocalProfile.RemoveAllMapMarkers()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalLocalProfile.RemoveArkTributeDinoDataAtIndex(int,int)
    // endereco: casamento de bytes com a build de referencia
    void RemoveArkTributeDinoDataAtIndex(int a0, int a1) const
    {
        NativeCall<void, int, int>(this, "UPrimalLocalProfile.RemoveArkTributeDinoDataAtIndex(int,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.RemoveArkTributeItem(FItemNetInfo&,unsignedint,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveArkTributeItem(void* a0, unsigned int a1, bool a2) const
    {
        return NativeCall<void*, void*, unsigned int, bool>(this, "UPrimalLocalProfile.RemoveArkTributeItem(FItemNetInfo&,unsignedint,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.RemoveArkTributePlayerDataAtIndex(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveArkTributePlayerDataAtIndex(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalLocalProfile.RemoveArkTributePlayerDataAtIndex(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.RemoveCustomFolder(FString)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro RemoveCustomFolder(const FString& a0)
    {
        return NativeCall<void*, void*>(nullptr, "UPrimalLocalProfile.RemoveCustomFolder(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static BrzPonteiro RemoveCustomFolder(FString* a0)
    { return RemoveCustomFolder(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.RemoveCustomFolderItem(FString,TSubclassOf<UPrimalItem>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveCustomFolderItem(const FString& a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalLocalProfile.RemoveCustomFolderItem(FString,TSubclassOf<UPrimalItem>)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro RemoveCustomFolderItem(FString* a0, void* a1) const
    { return RemoveCustomFolderItem(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.RemoveFavoriteServerName(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveFavoriteServerName(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalLocalProfile.RemoveFavoriteServerName(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro RemoveFavoriteServerName(FString* a0) const
    { return RemoveFavoriteServerName(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.RemoveMapMarker(FPrimalMapMarkerEntryData&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveMapMarker(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalLocalProfile.RemoveMapMarker(FPrimalMapMarkerEntryData&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalLocalProfile.RemoveMapMarkerAt(int)
    // endereco: casamento de bytes com a build de referencia
    void RemoveMapMarkerAt(int a0) const
    {
        NativeCall<void, int>(this, "UPrimalLocalProfile.RemoveMapMarkerAt(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.Save(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Save(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UPrimalLocalProfile.Save(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalLocalProfile.SaveProfile(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void SaveProfile(bool a0) const
    {
        NativeCall<void, bool>(this, "UPrimalLocalProfile.SaveProfile(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.SaveToFile(FObjectWriter&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SaveToFile(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalLocalProfile.SaveToFile(FObjectWriter&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.SetSpectatorPosition(int,UE::Math::TVector<double>&,UE::Math::TRotator<doubl
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetSpectatorPosition(int a0, void* a1, void* a2) const
    {
        return NativeCall<void*, int, void*, void*>(this, "UPrimalLocalProfile.SetSpectatorPosition(int,UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.ShouldHandleArkTribute()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShouldHandleArkTribute() const
    {
        return NativeCall<void*>(this, "UPrimalLocalProfile.ShouldHandleArkTribute()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.StartDownloading(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartDownloading(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalLocalProfile.StartDownloading(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro StartDownloading(FString* a0) const
    { return StartDownloading(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.SwapCustomFolders(FString,FString)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SwapCustomFolders(const FString& a0, const FString& a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalLocalProfile.SwapCustomFolders(FString,FString)", const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro SwapCustomFolders(FString* a0, FString* a1) const
    { return SwapCustomFolders(*a0, *a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.SyncAchievementDataToLocalProfile()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SyncAchievementDataToLocalProfile() const
    {
        return NativeCall<void*>(this, "UPrimalLocalProfile.SyncAchievementDataToLocalProfile()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.Tick()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Tick() const
    {
        return NativeCall<void*>(this, "UPrimalLocalProfile.Tick()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.UnlockGlobalExplorerNote(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UnlockGlobalExplorerNote(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalLocalProfile.UnlockGlobalExplorerNote(int)", a0);
    }

    // dump_sobre_sdk_287a0
    //   UPrimalLocalProfile.UpdateArkTributeDino(TArray<unsignedchar,TSizedDefaultAllocator<32>>,int,uns
    // endereco: casamento de bytes com a build de referencia
    void UpdateArkTributeDino(void* a0, int a1, unsigned int a2, unsigned int a3, const FString& a4) const
    {
        NativeCall<void, void*, int, unsigned int, unsigned int, void*>(this, "UPrimalLocalProfile.UpdateArkTributeDino(TArray<unsignedchar,TSizedDefaultAllocator<32>>,int,unsignedint,unsignedint,FString)", a0, a1, a2, a3, const_cast<FString*>(&a4));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void UpdateArkTributeDino(void* a0, int a1, unsigned int a2, unsigned int a3, FString* a4) const
    { UpdateArkTributeDino(a0, a1, a2, a3, *a4); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalLocalProfile.UploadToS3(FString&,TArray<unsignedchar,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UploadToS3(const FString& a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalLocalProfile.UploadToS3(FString&,TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro UploadToS3(FString* a0, void* a1) const
    { return UploadToS3(*a0, a1); }

    // ── SOBRECARGAS QUE NAO CABEM EM C++ ─────────────────────────────
    //
    //  Estas existem no jogo, e a chave delas resolve normalmente por
    //  `GetAddress` / `NativeCall`. O que nao cabe e' a DECLARACAO: em C
    //  os parametros viram os mesmos da que ficou, ou a diferenca esta'
    //  so' no retorno — e C++ nao sobrecarrega por retorno.
    //
    //  Para chamar uma destas, use `NativeCall` direto com a chave:
    //    UPrimalLocalProfile.AddArkTributeDino(FARKTributeDino&)
    //      (colide com UPrimalLocalProfile.AddArkTributeDino(APrimalDinoCharacter*))

    BrzCampoPonteiro AchievementItemsCollectedListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalLocalProfile.AchievementItemsCollectedList")); }
    BrzCampoPonteiro CustomFoldersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalLocalProfile.CustomFolders")); }
    BrzCampoPonteiro DisplayedTutorialsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalLocalProfile.DisplayedTutorials")); }
    BrzCampoPonteiro FavoriteServersNamesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalLocalProfile.FavoriteServersNames")); }
    BrzCampoPonteiro GlobalExplorerNoteUnlocksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalLocalProfile.GlobalExplorerNoteUnlocks")); }
    BrzCampoPonteiro GlobalNamedExplorerNoteUnlocksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalLocalProfile.GlobalNamedExplorerNoteUnlocks")); }
    TArray<void*>& MapMarkersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalLocalProfile.MapMarkers"); }
    float& MapMarkersColorSliderPercentField() const
    { return *GetNativePointerField<float*>(this, "UPrimalLocalProfile.MapMarkersColorSliderPercent"); }
    BrzCampoPonteiro MapMarkersPerMapsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalLocalProfile.MapMarkersPerMaps")); }
    BrzCampoPonteiro MyArkDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalLocalProfile.MyArkData")); }
    int& NumRespawnsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalLocalProfile.NumRespawns"); }
    BrzCampoPonteiro PerMapFogOfWarsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalLocalProfile.PerMapFogOfWars")); }
    BrzCampoPonteiro PhotoModeMotionControlTracksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalLocalProfile.PhotoModeMotionControlTracks")); }
    BrzCampoPonteiro RecentlyJoinedServersNamesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalLocalProfile.RecentlyJoinedServersNames")); }
    int& SavedFavoritesVersionField() const
    { return *GetNativePointerField<int*>(this, "UPrimalLocalProfile.SavedFavoritesVersion"); }
    BrzCampoPonteiro SpectatorPositionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalLocalProfile.SpectatorPositions")); }
    BrzCampoPonteiro SpectatorRotationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalLocalProfile.SpectatorRotations")); }
    BrzCampoPonteiro SpectatorSavedIdsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalLocalProfile.SpectatorSavedIds")); }
    BrzCampoPonteiro TamedDinoTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalLocalProfile.TamedDinoTags")); }
    BrzCampoPonteiro UnlockedAchievementsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalLocalProfile.UnlockedAchievements")); }
    BrzCampoPonteiro UnlockedAchievementsListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalLocalProfile.UnlockedAchievementsList")); }
    BrzCampoPonteiro UnlockedDinoEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalLocalProfile.UnlockedDinoEntries")); }
    BitFieldValue<bool, unsigned __int32> CompanionHasReactedToFirstExoSuit()
    { return { (void*)this, "CompanionHasReactedToFirstExoSuit" }; }
    BitFieldValue<bool, unsigned __int32> CompanionHasReactedToFirstFishingNetCraft()
    { return { (void*)this, "CompanionHasReactedToFirstFishingNetCraft" }; }
    BitFieldValue<bool, unsigned __int32> CompanionHasReactedToFirstGen2DispatcherEncountered()
    { return { (void*)this, "CompanionHasReactedToFirstGen2DispatcherEncountered" }; }
    BitFieldValue<bool, unsigned __int32> CompanionHasReactedToFirstGen2ExplorerNoteFound()
    { return { (void*)this, "CompanionHasReactedToFirstGen2ExplorerNoteFound" }; }
    BitFieldValue<bool, unsigned __int32> CompanionHasReactedToFirstHoverSkiffCraft()
    { return { (void*)this, "CompanionHasReactedToFirstHoverSkiffCraft" }; }
    BitFieldValue<bool, unsigned __int32> CompanionHasReactedToFirstHoversail()
    { return { (void*)this, "CompanionHasReactedToFirstHoversail" }; }
    BitFieldValue<bool, unsigned __int32> CompanionHasReactedToFirstJumpPadCraft()
    { return { (void*)this, "CompanionHasReactedToFirstJumpPadCraft" }; }
    BitFieldValue<bool, unsigned __int32> CompanionHasReactedToFirstLaserTripWireCraft()
    { return { (void*)this, "CompanionHasReactedToFirstLaserTripWireCraft" }; }
    BitFieldValue<bool, unsigned __int32> CompanionHasReactedToFirstMiningDrillCraft()
    { return { (void*)this, "CompanionHasReactedToFirstMiningDrillCraft" }; }
    BitFieldValue<bool, unsigned __int32> CompanionHasReactedToFirstOceanPlatformCraft()
    { return { (void*)this, "CompanionHasReactedToFirstOceanPlatformCraft" }; }
    BitFieldValue<bool, unsigned __int32> CompanionHasReactedToFirstPlantSpeciesR()
    { return { (void*)this, "CompanionHasReactedToFirstPlantSpeciesR" }; }
    BitFieldValue<bool, unsigned __int32> CompanionHasReactedToFirstPressurePlateCraft()
    { return { (void*)this, "CompanionHasReactedToFirstPressurePlateCraft" }; }
    BitFieldValue<bool, unsigned __int32> CompanionHasReactedToFirstShapeshifterBloodlust()
    { return { (void*)this, "CompanionHasReactedToFirstShapeshifterBloodlust" }; }
    BitFieldValue<bool, unsigned __int32> CompanionHasReactedToFirstShapeshifterRevert()
    { return { (void*)this, "CompanionHasReactedToFirstShapeshifterRevert" }; }
    BitFieldValue<bool, unsigned __int32> CompanionHasReactedToFirstShapeshifterTransform()
    { return { (void*)this, "CompanionHasReactedToFirstShapeshifterTransform" }; }
    BitFieldValue<bool, unsigned __int32> CompanionHasReactedToFirstShoulderCannonCraft()
    { return { (void*)this, "CompanionHasReactedToFirstShoulderCannonCraft" }; }
    BitFieldValue<bool, unsigned __int32> CompanionHasReactedToFirstTekBow()
    { return { (void*)this, "CompanionHasReactedToFirstTekBow" }; }
    BitFieldValue<bool, unsigned __int32> CompanionHasReactedToFirstTekClawsCraft()
    { return { (void*)this, "CompanionHasReactedToFirstTekClawsCraft" }; }
    BitFieldValue<bool, unsigned __int32> CompanionHasReactedToFirstTekCropPlot()
    { return { (void*)this, "CompanionHasReactedToFirstTekCropPlot" }; }
    BitFieldValue<bool, unsigned __int32> CompanionHasReactedToFirstTekCruiseMissileCraft()
    { return { (void*)this, "CompanionHasReactedToFirstTekCruiseMissileCraft" }; }
    BitFieldValue<bool, unsigned __int32> CompanionHasReactedToFirstTekGrenadeLauncherCraft()
    { return { (void*)this, "CompanionHasReactedToFirstTekGrenadeLauncherCraft" }; }
    BitFieldValue<bool, unsigned __int32> CompanionHasReactedToFirstTekPistol()
    { return { (void*)this, "CompanionHasReactedToFirstTekPistol" }; }
    BitFieldValue<bool, unsigned __int32> CompanionHasReactedToFirstThatchCraft()
    { return { (void*)this, "CompanionHasReactedToFirstThatchCraft" }; }
    BitFieldValue<bool, unsigned __int32> CompanionHasReactedToGen2BossBattleAvailable()
    { return { (void*)this, "CompanionHasReactedToGen2BossBattleAvailable" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALLOCALPROFILE_H

// ==========================================================================
//  ACustomGameState — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ACUSTOMGAMESTATE_H
#define BRZ_SDK_JOGO_ACUSTOMGAMESTATE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct APrimalBuff;
struct UTexture2D;

#include "AShooterGameState.h"

struct ACustomGameState : public AShooterGameState
{
    static UClass* StaticClass()
    { return BrzClassePorNome("ACustomGameState"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACustomGameState.AllowShowPlayerHudUI(APrimalCharacter*)
    // endereco: cache_pdb_25090264
    bool AllowShowPlayerHudUI(void* a0) const
    {
        return NativeCall<bool, void*>(this, "ACustomGameState.AllowShowPlayerHudUI(APrimalCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACustomGameState.BreakTribeData(FTribeData,FString&,int&,int&,TArray<FString,TSizedDefaultAlloca
    // endereco: casamento de bytes com a build de referencia
    static void BreakTribeData(void* a0, const FString& a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8)
    {
        NativeCall<void, void*, void*, void*, void*, void*, void*, void*, void*, void*>(nullptr, "ACustomGameState.BreakTribeData(FTribeData,FString&,int&,int&,TArray<FString,TSizedDefaultAllocator<32>>&,TArray<int,TSizedDefaultAllocator<32>>&,TArray<int,TSizedDefaultAllocator<32>>&,bool&,TArray<FPrimalPlayerCharacterConfigStructReplicated,TSizedDefaultAllocator<32>>&)", a0, const_cast<FString*>(&a1), a2, a3, a4, a5, a6, a7, a8);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void BreakTribeData(void* a0, FString* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8)
    { BreakTribeData(a0, *a1, a2, a3, a4, a5, a6, a7, a8); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACustomGameState.CreateScoreDataForPlayers(TArray<int,TSizedDefaultAllocator<32>>)
    // endereco: casamento de bytes com a build de referencia
    void CreateScoreDataForPlayers(void* a0) const
    {
        NativeCall<void, void*>(this, "ACustomGameState.CreateScoreDataForPlayers(TArray<int,TSizedDefaultAllocator<32>>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACustomGameState.DrawHUDNotifications(AShooterHUD*)
    // endereco: cache_pdb_25090264
    void DrawHUDNotifications(void* a0) const
    {
        NativeCall<void, void*>(this, "ACustomGameState.DrawHUDNotifications(AShooterHUD*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACustomGameState.ForceOccludedFloatingHUD(AActor*,AShooterPlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    bool ForceOccludedFloatingHUD(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "ACustomGameState.ForceOccludedFloatingHUD(AActor*,AShooterPlayerController*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACustomGameState.GetColorForTargetingTeam_Implementation(int,FColor&,FColor&)
    // endereco: cache_pdb_25090264
    void GetColorForTargetingTeam_Implementation(int a0, void* a1, void* a2) const
    {
        NativeCall<void, int, void*, void*>(this, "ACustomGameState.GetColorForTargetingTeam_Implementation(int,FColor&,FColor&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACustomGameState.GetDeathNotificationText(AShooterCharacter*,APawn*,FString&,FString&,FString&,F
    // endereco: casamento de bytes com a build de referencia
    void GetDeathNotificationText(void* a0, void* a1, const FString& a2, const FString& a3, const FString& a4, const FString& a5, const FString& a6) const
    {
        NativeCall<void, void*, void*, void*, void*, void*, void*, void*>(this, "ACustomGameState.GetDeathNotificationText(AShooterCharacter*,APawn*,FString&,FString&,FString&,FString&,FString&)", a0, a1, const_cast<FString*>(&a2), const_cast<FString*>(&a3), const_cast<FString*>(&a4), const_cast<FString*>(&a5), const_cast<FString*>(&a6));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void GetDeathNotificationText(void* a0, void* a1, FString* a2, FString* a3, FString* a4, FString* a5, FString* a6) const
    { GetDeathNotificationText(a0, a1, *a2, *a3, *a4, *a5, *a6); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACustomGameState.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=398+grafo=13/13]]
    void GetLifetimeReplicatedProps(void* a0) const
    {
        NativeCall<void, void*>(this, "ACustomGameState.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACustomGameState.GetPawnName(APawn*)
    // endereco: casamento de bytes com a build de referencia
    void GetPawnName(void* retorno, void* a0) const
    {
        NativeCall<void, void*, void*>(this, "ACustomGameState.GetPawnName(APawn*)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACustomGameState.GetTribeTexture(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    UTexture2D* GetTribeTexture(int a0) const
    {
        return NativeCall<UTexture2D*, int>(this, "ACustomGameState.GetTribeTexture(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACustomGameState.HandleActorEvent(AActor*,FName,UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    void HandleActorEvent(void* a0, unsigned long long a1, void* a2) const
    {
        NativeCall<void, void*, unsigned long long, void*>(this, "ACustomGameState.HandleActorEvent(AActor*,FName,UE::Math::TVector<double>)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACustomGameState.OnRep_PlayerScoreData_Implementation()
    // endereco: cache_pdb_25090264
    void OnRep_PlayerScoreData_Implementation() const
    {
        NativeCall<void>(this, "ACustomGameState.OnRep_PlayerScoreData_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACustomGameState.RemoveTribeFlag(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void RemoveTribeFlag(int a0) const
    {
        NativeCall<void, int>(this, "ACustomGameState.RemoveTribeFlag(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACustomGameState.SpawnBuffAndAttachToCharacter(UClass*,APrimalCharacter*,float)
    // endereco: casamento de bytes com a build de referencia
    static APrimalBuff* SpawnBuffAndAttachToCharacter(void* a0, void* a1, float a2)
    {
        return NativeCall<APrimalBuff*, void*, void*, float>(nullptr, "ACustomGameState.SpawnBuffAndAttachToCharacter(UClass*,APrimalCharacter*,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACustomGameState.Tick(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=408+grafo=5/5]]
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "ACustomGameState.Tick(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACustomGameState.UpdatePlayerScoreDataMap()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void UpdatePlayerScoreDataMap() const
    {
        NativeCall<void>(this, "ACustomGameState.UpdatePlayerScoreDataMap()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACustomGameState.UpdateTribeScoreDataMap()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void UpdateTribeScoreDataMap() const
    {
        NativeCall<void>(this, "ACustomGameState.UpdateTribeScoreDataMap()");
    }

    BrzCampoPonteiro AllyRadarUpdateFrequencyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ACustomGameState.AllyRadarUpdateFrequency")); }
    BrzCampoPonteiro PlayerScoreDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ACustomGameState.PlayerScoreData")); }
    BrzCampoPonteiro TribeFlagClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ACustomGameState.TribeFlagClass")); }
    BrzCampoPonteiro TribeScoreDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ACustomGameState.TribeScoreData")); }
    BrzCampoPonteiro TribesFlagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ACustomGameState.TribesFlags")); }
    BitFieldValue<bool, unsigned __int32> bEnableAllyRadarData()
    { return { (void*)this, "bEnableAllyRadarData" }; }
    BitFieldValue<bool, unsigned __int32> bEnableAutoUploadTribeFlag()
    { return { (void*)this, "bEnableAutoUploadTribeFlag" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateScoreData()
    { return { (void*)this, "bReplicateScoreData" }; }
    BitFieldValue<bool, unsigned __int32> bUseGetColorForTargetingTeam()
    { return { (void*)this, "bUseGetColorForTargetingTeam" }; }

};

#endif  // BRZ_SDK_JOGO_ACUSTOMGAMESTATE_H

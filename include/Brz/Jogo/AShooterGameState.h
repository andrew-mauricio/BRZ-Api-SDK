// ==========================================================================
//  AShooterGameState — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ASHOOTERGAMESTATE_H
#define BRZ_SDK_JOGO_ASHOOTERGAMESTATE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct APrimalBuff;
struct FName;
struct UAudioComponent;
struct UPaintingCache;
struct UPrimalWorldSettingsEventOverrides;
struct USoundBase;

#include "AGameState.h"

struct AShooterGameState : public AGameState
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AShooterGameState"); }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterGameState.AddMaxItemQuantityOverride(TSubclassOf<UPrimalItem>,FMaxItemQuantityOverride&)
    // endereco: casamento de bytes com a build de referencia
    void AddMaxItemQuantityOverride(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterGameState.AddMaxItemQuantityOverride(TSubclassOf<UPrimalItem>,FMaxItemQuantityOverride&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.AddMaxItemQuantityOverride_Implementation(TSubclassOf<UPrimalItem>,FMaxItemQua
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddMaxItemQuantityOverride_Implementation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterGameState.AddMaxItemQuantityOverride_Implementation(TSubclassOf<UPrimalItem>,FMaxItemQuantityOverride&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.AddRelevantPOIActor(AActor*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=110]]
    void AddRelevantPOIActor(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameState.AddRelevantPOIActor(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.AddTokens(int,int)
    // endereco: casamento de bytes com a build de referencia
    void AddTokens(int a0, int a1) const
    {
        NativeCall<void, int, int>(this, "AShooterGameState.AddTokens(int,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.AllowDinoClassTame(TSubclassOf<APrimalDinoCharacter>,AShooterPlayerController*
    // endereco: casamento de bytes com a build de referencia
    bool AllowDinoClassTame(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "AShooterGameState.AllowDinoClassTame(TSubclassOf<APrimalDinoCharacter>,AShooterPlayerController*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.AllowDinoTame(APrimalDinoCharacter*,AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool AllowDinoTame(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "AShooterGameState.AllowDinoTame(APrimalDinoCharacter*,AShooterPlayerController*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.AllowDownloadDino(TSoftClassPtr<APrimalDinoCharacter>&)
    // endereco: casamento de bytes com a build de referencia
    bool AllowDownloadDino(void* a0) const
    {
        return NativeCall<bool, void**>(this, "AShooterGameState.AllowDownloadDino(TSoftClassPtr<APrimalDinoCharacter>&)", &a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.AllowDownloadDino_Implementation(TSoftClassPtr<APrimalDinoCharacter>&)
    // endereco: casamento de bytes com a build de referencia
    bool AllowDownloadDino_Implementation(void* a0) const
    {
        return NativeCall<bool, void**>(this, "AShooterGameState.AllowDownloadDino_Implementation(TSoftClassPtr<APrimalDinoCharacter>&)", &a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.AllowTribeManager(AShooterPlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=79]]
    bool AllowTribeManager(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterGameState.AllowTribeManager(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.ApplyLiveTuningOverloads(TSharedPtr<FJsonObject,1>)
    // endereco: casamento de bytes com a build de referencia
    void ApplyLiveTuningOverloads(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameState.ApplyLiveTuningOverloads(TSharedPtr<FJsonObject,1>)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterGameState.BPDrawGameStateHUD(AShooterHUD*)
    // endereco: cache_pdb_25090264
    void BPDrawGameStateHUD(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameState.BPDrawGameStateHUD(AShooterHUD*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.BPNetSpawnActorAtLocation(TSubclassOf<AActor>,UE::Math::TVector<double>,UE::Ma
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPNetSpawnActorAtLocation(void* a0, void* a1, void* a2, void* a3, float a4, void* a5, int a6, unsigned long long a7, bool a8, void* a9) const
    {
        return NativeCall<void*, void*, void*, void*, void*, float, void*, int, unsigned long long, bool, void*>(this, "AShooterGameState.BPNetSpawnActorAtLocation(TSubclassOf<AActor>,UE::Math::TVector<double>,UE::Math::TRotator<double>,AActor*,float,USceneComponent*,int,FName,bool,APawn*)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameState.BaseGetAllShooterControllers()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BaseGetAllShooterControllers() const
    {
        return NativeCall<void*>(this, "AShooterGameState.BaseGetAllShooterControllers()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.BaseProjectWorldToScreenPosition(UE::Math::TVector<double>&,APlayerController*
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BaseProjectWorldToScreenPosition(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterGameState.BaseProjectWorldToScreenPosition(UE::Math::TVector<double>&,APlayerController*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.BaseSpawnBuffAndAttachToCharacter(UClass*,APrimalCharacter*,float)
    // endereco: casamento de bytes com a build de referencia
    static APrimalBuff* BaseSpawnBuffAndAttachToCharacter(void* a0, void* a1, float a2)
    {
        return NativeCall<APrimalBuff*, void*, void*, float>(nullptr, "AShooterGameState.BaseSpawnBuffAndAttachToCharacter(UClass*,APrimalCharacter*,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "AShooterGameState.BeginPlay()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.CDOAddToArray<FString>(UObject*,FName,TArray<FString,TSizedDefaultAllocator<32
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CDOAddToArray_FString_(void* a0, unsigned long long a1, void* a2) const
    {
        return NativeCall<void*, void*, unsigned long long, void*>(this, "AShooterGameState.CDOAddToArray<FString>(UObject*,FName,TArray<FString,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.CDOAddToArray<UE.Math.TVector<double>>(UObject*,FName,TArray<UE::Math::TVector
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CDOAddToArray_UE_Math_TVector_double__(void* a0, unsigned long long a1, void* a2) const
    {
        return NativeCall<void*, void*, unsigned long long, void*>(this, "AShooterGameState.CDOAddToArray<UE.Math.TVector<double>>(UObject*,FName,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.CDOAddToArray<bool>(UObject*,FName,TArray<bool,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CDOAddToArray_bool_(void* a0, unsigned long long a1, void* a2) const
    {
        return NativeCall<void*, void*, unsigned long long, void*>(this, "AShooterGameState.CDOAddToArray<bool>(UObject*,FName,TArray<bool,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.CDOAddToArray<int>(UObject*,FName,TArray<int,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CDOAddToArray_int_(void* a0, unsigned long long a1, void* a2) const
    {
        return NativeCall<void*, void*, unsigned long long, void*>(this, "AShooterGameState.CDOAddToArray<int>(UObject*,FName,TArray<int,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.CDOCacheBaselineValue(TMap<UClass*,TMap<FString,FString,FDefaultSetAllocator,T
    // endereco: casamento de bytes com a build de referencia
    static bool CDOCacheBaselineValue(void* a0, void* a1)
    {
        return NativeCall<bool, void*, void*>(nullptr, "AShooterGameState.CDOCacheBaselineValue(TMap<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,0>>&,FPropertyWrapper&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.CDOGetPrintStringForObjectProperties(UObject*,TArray<FName,TSizedDefaultAlloca
    // endereco: casamento de bytes com a build de referencia
    static bool CDOGetPrintStringForObjectProperties(void* a0, void* a1, const FString& a2)
    {
        return NativeCall<bool, void*, void*, void*>(nullptr, "AShooterGameState.CDOGetPrintStringForObjectProperties(UObject*,TArray<FName,TSizedDefaultAllocator<32>>&,FString&)", a0, a1, const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static bool CDOGetPrintStringForObjectProperties(void* a0, void* a1, FString* a2)
    { return CDOGetPrintStringForObjectProperties(a0, a1, *a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.CDOGetPrintStringForObjectProperty(UObject*,FName,FString&)
    // endereco: casamento de bytes com a build de referencia
    static bool CDOGetPrintStringForObjectProperty(void* a0, unsigned long long a1, const FString& a2)
    {
        return NativeCall<bool, void*, unsigned long long, void*>(nullptr, "AShooterGameState.CDOGetPrintStringForObjectProperty(UObject*,FName,FString&)", a0, a1, const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static bool CDOGetPrintStringForObjectProperty(void* a0, unsigned long long a1, FString* a2)
    { return CDOGetPrintStringForObjectProperty(a0, a1, *a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.CDOModifyArray<FString>(UObject*,FName,TArray<unsignedint,TSizedDefaultAllocat
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CDOModifyArray_FString_(void* a0, unsigned long long a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, unsigned long long, void*, void*>(this, "AShooterGameState.CDOModifyArray<FString>(UObject*,FName,TArray<unsignedint,TSizedDefaultAllocator<32>>&,TArray<FString,TSizedDefaultAllocator<32>>&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.CDOModifyArray<UE.Math.TVector<double>>(UObject*,FName,TArray<uint,TSizedDefau
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CDOModifyArray_UE_Math_TVector_double__(void* a0, unsigned long long a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, unsigned long long, void*, void*>(this, "AShooterGameState.CDOModifyArray<UE.Math.TVector<double>>(UObject*,FName,TArray<uint,TSizedDefaultAllocator<32>>&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.CDOModifyArray<bool>(UObject*,FName,TArray<unsignedint,TSizedDefaultAllocator<
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CDOModifyArray_bool_(void* a0, unsigned long long a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, unsigned long long, void*, void*>(this, "AShooterGameState.CDOModifyArray<bool>(UObject*,FName,TArray<unsignedint,TSizedDefaultAllocator<32>>&,TArray<bool,TSizedDefaultAllocator<32>>&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.CDOModifyArray<double>(UObject*,FName,TArray<unsignedint,TSizedDefaultAllocato
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CDOModifyArray_double_(void* a0, unsigned long long a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, unsigned long long, void*, void*>(this, "AShooterGameState.CDOModifyArray<double>(UObject*,FName,TArray<unsignedint,TSizedDefaultAllocator<32>>&,TArray<double,TSizedDefaultAllocator<32>>&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.CDOModifyArray<float>(UObject*,FName,TArray<unsignedint,TSizedDefaultAllocator
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CDOModifyArray_float_(void* a0, unsigned long long a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, unsigned long long, void*, void*>(this, "AShooterGameState.CDOModifyArray<float>(UObject*,FName,TArray<unsignedint,TSizedDefaultAllocator<32>>&,TArray<float,TSizedDefaultAllocator<32>>&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.CDOModifyArray<int>(UObject*,FName,TArray<unsignedint,TSizedDefaultAllocator<3
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CDOModifyArray_int_(void* a0, unsigned long long a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, unsigned long long, void*, void*>(this, "AShooterGameState.CDOModifyArray<int>(UObject*,FName,TArray<unsignedint,TSizedDefaultAllocator<32>>&,TArray<int,TSizedDefaultAllocator<32>>&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.CDOProcessTArrayForClassAndChildren<FString>(UClass*,FName,ECDOArrayModificati
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro CDOProcessTArrayForClassAndChildren_FString_(void* a0, unsigned long long a1, int a2, void* a3, void* a4, void* a5, void* a6, bool a7, bool a8, bool a9, bool a10) const
    {
        return NativeCall<void*, void*, unsigned long long, int, void*, void*, void*, void*, bool, bool, bool, bool>(this, "AShooterGameState.CDOProcessTArrayForClassAndChildren<FString>(UClass*,FName,ECDOArrayModificationType,TArray<unsignedint,TSizedDefaultAllocator<32>>&,TArray<unsignedint,TSizedDefaultAllocator<32>>&,TArray<FString,TSizedDefaultAllocator<32>>&,TMap<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,0>>&,bool,bool,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.CDOProcessTArrayForClassAndChildren<UE.Math.TVector<double>>(UClass*,FName,ECD
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro CDOProcessTArrayForClassAndChildren_UE_Math_TVector_double__(void* a0, unsigned long long a1, int a2, void* a3, void* a4, void* a5, void* a6, bool a7, bool a8, bool a9, bool a10) const
    {
        return NativeCall<void*, void*, unsigned long long, int, void*, void*, void*, void*, bool, bool, bool, bool>(this, "AShooterGameState.CDOProcessTArrayForClassAndChildren<UE.Math.TVector<double>>(UClass*,FName,ECDOArrayModificationType,TArray<uint,TSizedDefaultAllocator<32>>&,TArray<uint,TSizedDefaultAllocator<32>>&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,TMap<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,0>>&,bool,bool,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.CDOProcessTArrayForClassAndChildren<bool>(UClass*,FName,ECDOArrayModificationT
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro CDOProcessTArrayForClassAndChildren_bool_(void* a0, unsigned long long a1, int a2, void* a3, void* a4, void* a5, void* a6, bool a7, bool a8, bool a9, bool a10) const
    {
        return NativeCall<void*, void*, unsigned long long, int, void*, void*, void*, void*, bool, bool, bool, bool>(this, "AShooterGameState.CDOProcessTArrayForClassAndChildren<bool>(UClass*,FName,ECDOArrayModificationType,TArray<unsignedint,TSizedDefaultAllocator<32>>&,TArray<unsignedint,TSizedDefaultAllocator<32>>&,TArray<bool,TSizedDefaultAllocator<32>>&,TMap<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,0>>&,bool,bool,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.CDOProcessTArrayForClassAndChildren<double>(UClass*,FName,ECDOArrayModificatio
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro CDOProcessTArrayForClassAndChildren_double_(void* a0, unsigned long long a1, int a2, void* a3, void* a4, void* a5, void* a6, bool a7, bool a8, bool a9, bool a10) const
    {
        return NativeCall<void*, void*, unsigned long long, int, void*, void*, void*, void*, bool, bool, bool, bool>(this, "AShooterGameState.CDOProcessTArrayForClassAndChildren<double>(UClass*,FName,ECDOArrayModificationType,TArray<unsignedint,TSizedDefaultAllocator<32>>&,TArray<unsignedint,TSizedDefaultAllocator<32>>&,TArray<double,TSizedDefaultAllocator<32>>&,TMap<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,0>>&,bool,bool,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.CDOProcessTArrayForClassAndChildren<float>(UClass*,FName,ECDOArrayModification
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro CDOProcessTArrayForClassAndChildren_float_(void* a0, unsigned long long a1, int a2, void* a3, void* a4, void* a5, void* a6, bool a7, bool a8, bool a9, bool a10) const
    {
        return NativeCall<void*, void*, unsigned long long, int, void*, void*, void*, void*, bool, bool, bool, bool>(this, "AShooterGameState.CDOProcessTArrayForClassAndChildren<float>(UClass*,FName,ECDOArrayModificationType,TArray<unsignedint,TSizedDefaultAllocator<32>>&,TArray<unsignedint,TSizedDefaultAllocator<32>>&,TArray<float,TSizedDefaultAllocator<32>>&,TMap<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,0>>&,bool,bool,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.CDOProcessTArrayForClassAndChildren<int>(UClass*,FName,ECDOArrayModificationTy
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro CDOProcessTArrayForClassAndChildren_int_(void* a0, unsigned long long a1, int a2, void* a3, void* a4, void* a5, void* a6, bool a7, bool a8, bool a9, bool a10) const
    {
        return NativeCall<void*, void*, unsigned long long, int, void*, void*, void*, void*, bool, bool, bool, bool>(this, "AShooterGameState.CDOProcessTArrayForClassAndChildren<int>(UClass*,FName,ECDOArrayModificationType,TArray<unsignedint,TSizedDefaultAllocator<32>>&,TArray<unsignedint,TSizedDefaultAllocator<32>>&,TArray<int,TSizedDefaultAllocator<32>>&,TMap<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,0>>&,bool,bool,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.CDORemoveFromArray(UObject*,FName,TArray<unsignedint,TSizedDefaultAllocator<32
    // endereco: casamento de bytes com a build de referencia
    static char CDORemoveFromArray(void* a0, unsigned long long a1, void* a2)
    {
        return NativeCall<char, void*, unsigned long long, void*>(nullptr, "AShooterGameState.CDORemoveFromArray(UObject*,FName,TArray<unsignedint,TSizedDefaultAllocator<32>>)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.CDOSetValueForPropertyWrapper(FPropertyWrapper&,FString)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CDOSetValueForPropertyWrapper(void* a0, const FString& a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterGameState.CDOSetValueForPropertyWrapper(FPropertyWrapper&,FString)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro CDOSetValueForPropertyWrapper(void* a0, FString* a1) const
    { return CDOSetValueForPropertyWrapper(a0, *a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.CDOSetValueForPropertyWrapper(FPropertyWrapper&,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CDOSetValueForPropertyWrapper(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "AShooterGameState.CDOSetValueForPropertyWrapper(FPropertyWrapper&,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.CDOUpdateSingleValueForClassAndChildren<FString>(UClass*,FName,FString,TMap<UC
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CDOUpdateSingleValueForClassAndChildren_FString_(void* a0, unsigned long long a1, const FString& a2, void* a3, bool a4, bool a5, bool a6, bool a7) const
    {
        return NativeCall<void*, void*, unsigned long long, void*, void*, bool, bool, bool, bool>(this, "AShooterGameState.CDOUpdateSingleValueForClassAndChildren<FString>(UClass*,FName,FString,TMap<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,0>>&,bool,bool,bool,bool)", a0, a1, const_cast<FString*>(&a2), a3, a4, a5, a6, a7);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro CDOUpdateSingleValueForClassAndChildren_FString_(void* a0, unsigned long long a1, FString* a2, void* a3, bool a4, bool a5, bool a6, bool a7) const
    { return CDOUpdateSingleValueForClassAndChildren_FString_(a0, a1, *a2, a3, a4, a5, a6, a7); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.CDOUpdateSingleValueForClassAndChildren<UE.Math.TRotator<double>>(UClass*,FNam
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro CDOUpdateSingleValueForClassAndChildren_UE_Math_TRotator_double__(void* a0, unsigned long long a1, void* a2, void* a3, bool a4, bool a5, bool a6, bool a7) const
    {
        return NativeCall<void*, void*, unsigned long long, void*, void*, bool, bool, bool, bool>(this, "AShooterGameState.CDOUpdateSingleValueForClassAndChildren<UE.Math.TRotator<double>>(UClass*,FName,UE::Math::TRotator<double>,TMap<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,0>>&,bool,bool,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.CDOUpdateSingleValueForClassAndChildren<UE.Math.TVector<double>>(UClass*,FName
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro CDOUpdateSingleValueForClassAndChildren_UE_Math_TVector_double__(void* a0, unsigned long long a1, void* a2, void* a3, bool a4, bool a5, bool a6, bool a7) const
    {
        return NativeCall<void*, void*, unsigned long long, void*, void*, bool, bool, bool, bool>(this, "AShooterGameState.CDOUpdateSingleValueForClassAndChildren<UE.Math.TVector<double>>(UClass*,FName,UE::Math::TVector<double>,TMap<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,0>>&,bool,bool,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.CDOUpdateSingleValueForClassAndChildren<bool>(UClass*,FName,bool,TMap<UClass*,
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CDOUpdateSingleValueForClassAndChildren_bool_(void* a0, unsigned long long a1, bool a2, void* a3, bool a4, bool a5, bool a6, bool a7) const
    {
        return NativeCall<void*, void*, unsigned long long, bool, void*, bool, bool, bool, bool>(this, "AShooterGameState.CDOUpdateSingleValueForClassAndChildren<bool>(UClass*,FName,bool,TMap<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,0>>&,bool,bool,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.CDOUpdateSingleValueForClassAndChildren<double>(UClass*,FName,double,TMap<UCla
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro CDOUpdateSingleValueForClassAndChildren_double_(void* a0, unsigned long long a1, double a2, void* a3, bool a4, bool a5, bool a6, bool a7) const
    {
        return NativeCall<void*, void*, unsigned long long, double, void*, bool, bool, bool, bool>(this, "AShooterGameState.CDOUpdateSingleValueForClassAndChildren<double>(UClass*,FName,double,TMap<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,0>>&,bool,bool,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.CDOUpdateSingleValueForClassAndChildren<float>(UClass*,FName,float,TMap<UClass
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro CDOUpdateSingleValueForClassAndChildren_float_(void* a0, unsigned long long a1, float a2, void* a3, bool a4, bool a5, bool a6, bool a7) const
    {
        return NativeCall<void*, void*, unsigned long long, float, void*, bool, bool, bool, bool>(this, "AShooterGameState.CDOUpdateSingleValueForClassAndChildren<float>(UClass*,FName,float,TMap<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,0>>&,bool,bool,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.CDOUpdateSingleValueForClassAndChildren<int>(UClass*,FName,int,TMap<UClass*,TM
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CDOUpdateSingleValueForClassAndChildren_int_(void* a0, unsigned long long a1, int a2, void* a3, bool a4, bool a5, bool a6, bool a7) const
    {
        return NativeCall<void*, void*, unsigned long long, int, void*, bool, bool, bool, bool>(this, "AShooterGameState.CDOUpdateSingleValueForClassAndChildren<int>(UClass*,FName,int,TMap<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,0>>&,bool,bool,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameState.CancelMassTeleport(AActor*)
    // endereco: casamento de bytes com a build de referencia
    bool CancelMassTeleport(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterGameState.CancelMassTeleport(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.CheckForDeferredExplorerNoteUnlocks()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CheckForDeferredExplorerNoteUnlocks() const
    {
        return NativeCall<void*>(this, "AShooterGameState.CheckForDeferredExplorerNoteUnlocks()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.CreateCustomGameUI(AShooterPlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=261]]
    void CreateCustomGameUI(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameState.CreateCustomGameUI(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.DebugDrawHeatMap()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DebugDrawHeatMap() const
    {
        return NativeCall<void*>(this, "AShooterGameState.DebugDrawHeatMap()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameState.DecrementThrallTargetingTeamCount(int)
    // endereco: cache_pdb_25090264
    void DecrementThrallTargetingTeamCount(int a0) const
    {
        NativeCall<void, int>(this, "AShooterGameState.DecrementThrallTargetingTeamCount(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.Destroyed()
    // endereco: casamento de bytes com a build de referencia
    void Destroyed() const
    {
        NativeCall<void>(this, "AShooterGameState.Destroyed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.DinoDownloaded(TSubclassOf<APrimalDinoCharacter>)
    // endereco: casamento de bytes com a build de referencia
    void DinoDownloaded(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameState.DinoDownloaded(TSubclassOf<APrimalDinoCharacter>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.DrawHUD(AShooterHUD*)
    // endereco: casamento de bytes com a build de referencia
    void DrawHUD(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameState.DrawHUD(AShooterHUD*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.EndPlay(EEndPlayReason::Type)
    // endereco: casamento de bytes com a build de referencia
    void EndPlay(int a0) const
    {
        NativeCall<void, int>(this, "AShooterGameState.EndPlay(EEndPlayReason::Type)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.FindPlayerStateFromHashedUniqueID(unsignedint)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro FindPlayerStateFromHashedUniqueID(unsigned int a0) const
    {
        return NativeCall<void*, unsigned int>(this, "AShooterGameState.FindPlayerStateFromHashedUniqueID(unsignedint)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameState.GetBunkerAmountForTeam(int)
    // endereco: cache_pdb_25090264
    int GetBunkerAmountForTeam(int a0) const
    {
        return NativeCall<int, int>(this, "AShooterGameState.GetBunkerAmountForTeam(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.GetCleanServerSessionName()
    // endereco: casamento de bytes com a build de referencia
    void GetCleanServerSessionName(void* retorno) const
    {
        NativeCall<void, void*>(this, "AShooterGameState.GetCleanServerSessionName()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.GetClientReplicationRateFor(UNetConnection*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    float GetClientReplicationRateFor(void* a0, void* a1) const
    {
        return NativeCall<float, void*, void*>(this, "AShooterGameState.GetClientReplicationRateFor(UNetConnection*,AActor*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.GetClusterPaintingData(FGuid&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetClusterPaintingData(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterGameState.GetClusterPaintingData(FGuid&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.GetDayCycleSpeed()
    // endereco: casamento de bytes com a build de referencia
    float GetDayCycleSpeed() const
    {
        return NativeCall<float>(this, "AShooterGameState.GetDayCycleSpeed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.GetDayTimeString()
    // endereco: casamento de bytes com a build de referencia
    void GetDayTimeString(void* retorno) const
    {
        NativeCall<void, void*>(this, "AShooterGameState.GetDayTimeString()", retorno);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameState.GetGamePhase()
    // endereco: cache_pdb_25090264
    unsigned char GetGamePhase() const
    {
        return NativeCall<unsigned char>(this, "AShooterGameState.GetGamePhase()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.GetIniArray(FString)
    // endereco: casamento de bytes com a build de referencia
    void GetIniArray(void* retorno, const FString& a0) const
    {
        NativeCall<void, void*, void*>(this, "AShooterGameState.GetIniArray(FString)", retorno, const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void GetIniArray(void* retorno, FString* a0) const
    { GetIniArray(retorno, *a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.GetItemMaxQuantityOverride(TSubclassOf<UPrimalItem>,FMaxItemQuantityOverride&)
    // endereco: casamento de bytes com a build de referencia
    bool GetItemMaxQuantityOverride(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "AShooterGameState.GetItemMaxQuantityOverride(TSubclassOf<UPrimalItem>,FMaxItemQuantityOverride&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameState.GetLeastPopulatedThrallTargetingTeam()
    // endereco: casamento de bytes com a build de referencia
    int GetLeastPopulatedThrallTargetingTeam() const
    {
        return NativeCall<int>(this, "AShooterGameState.GetLeastPopulatedThrallTargetingTeam()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [grafo=708/708]]
    void GetLifetimeReplicatedProps(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameState.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.GetLiveTuningOverloadsDirectory(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetLiveTuningOverloadsDirectory(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AShooterGameState.GetLiveTuningOverloadsDirectory(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.GetLocalPlayerLocation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetLocalPlayerLocation() const
    {
        return NativeCall<void*>(this, "AShooterGameState.GetLocalPlayerLocation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.GetMatineePlayRate(AActor*)
    // endereco: casamento de bytes com a build de referencia
    float GetMatineePlayRate(void* a0) const
    {
        return NativeCall<float, void*>(this, "AShooterGameState.GetMatineePlayRate(AActor*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameState.GetNetworkTimeDelta(AShooterGameState*,double,bool)
    // endereco: casamento de bytes com a build de referencia
    double GetNetworkTimeDelta(void* a0, double a1, bool a2) const
    {
        return NativeCall<double, void*, double, bool>(this, "AShooterGameState.GetNetworkTimeDelta(AShooterGameState*,double,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.GetNonMapSpecificSaveDirectoryFor(ESaveType::Type)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetNonMapSpecificSaveDirectoryFor(int a0) const
    {
        return NativeCall<void*, int>(this, "AShooterGameState.GetNonMapSpecificSaveDirectoryFor(ESaveType::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.GetOfflineDamagePreventionTime(int)
    // endereco: cache_pdb_25090264
    float GetOfflineDamagePreventionTime(int a0) const
    {
        return NativeCall<float, int>(this, "AShooterGameState.GetOfflineDamagePreventionTime(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.GetPlayerHeatLevel(UE::Math::TVector<double>&)
    // endereco: cache_pdb_25090264
    static BrzPonteiro GetPlayerHeatLevel(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "AShooterGameState.GetPlayerHeatLevel(UE::Math::TVector<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.GetPlayerHeatLevel(UE::Math::TVector<double>&,TArray<TArray<uchar,TSizedDefaul
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    static BrzPonteiro GetPlayerHeatLevel(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "AShooterGameState.GetPlayerHeatLevel(UE::Math::TVector<double>&,TArray<TArray<uchar,TSizedDefaultAllocator<32>>,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.GetPlayerUnderwaterHeatLevel(UE::Math::TVector<double>&)
    // endereco: cache_pdb_25090264
    static BrzPonteiro GetPlayerUnderwaterHeatLevel(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "AShooterGameState.GetPlayerUnderwaterHeatLevel(UE::Math::TVector<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.GetServerFramerate()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetServerFramerate() const
    {
        return NativeCall<void*>(this, "AShooterGameState.GetServerFramerate()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.GetStartTimeHour()
    // endereco: cache_pdb_25090264
    int GetStartTimeHour() const
    {
        return NativeCall<int>(this, "AShooterGameState.GetStartTimeHour()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.HTTPPostRequest(FString,FString)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void HTTPPostRequest(const FString& a0, const FString& a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterGameState.HTTPPostRequest(FString,FString)", const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void HTTPPostRequest(FString* a0, FString* a1) const
    { HTTPPostRequest(*a0, *a1); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameState.IncreementThrallTargetingTeamCount(int)
    // endereco: casamento de bytes com a build de referencia
    void IncreementThrallTargetingTeamCount(int a0) const
    {
        NativeCall<void, int>(this, "AShooterGameState.IncreementThrallTargetingTeamCount(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.InitPlayerHeatMap()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro InitPlayerHeatMap() const
    {
        return NativeCall<void*>(this, "AShooterGameState.InitPlayerHeatMap()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.InitializedGameState()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=840+grafo=12/12]]
    void InitializedGameState() const
    {
        NativeCall<void>(this, "AShooterGameState.InitializedGameState()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.IsClusterServer()
    // endereco: cache_pdb_25090264
    bool IsClusterServer() const
    {
        return NativeCall<bool>(this, "AShooterGameState.IsClusterServer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.IsEngramClassHidden(TSubclassOf<UPrimalItem>)
    // endereco: casamento de bytes com a build de referencia
    bool IsEngramClassHidden(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterGameState.IsEngramClassHidden(TSubclassOf<UPrimalItem>)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameState.IsMassTeleportInProgress(AActor*)
    // endereco: casamento de bytes com a build de referencia
    bool IsMassTeleportInProgress(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterGameState.IsMassTeleportInProgress(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.IsParentPropertyCached(UClass*,FName,TMap<UClass*,TMap<FString,FString,FDefaul
    // endereco: casamento de bytes com a build de referencia
    static bool IsParentPropertyCached(void* a0, unsigned long long a1, void* a2)
    {
        return NativeCall<bool, void*, unsigned long long, void*>(nullptr, "AShooterGameState.IsParentPropertyCached(UClass*,FName,TMap<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,0>>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.IsPropertyValueEqualToCachedParentValue(UClass*,FName,TMap<UClass*,TMap<FStrin
    // endereco: casamento de bytes com a build de referencia
    static bool IsPropertyValueEqualToCachedParentValue(void* a0, unsigned long long a1, void* a2)
    {
        return NativeCall<bool, void*, unsigned long long, void*>(nullptr, "AShooterGameState.IsPropertyValueEqualToCachedParentValue(UClass*,FName,TMap<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,0>>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.IsPropertyValueEqualToParentValue(UClass*,FName)
    // endereco: casamento de bytes com a build de referencia
    static bool IsPropertyValueEqualToParentValue(void* a0, unsigned long long a1)
    {
        return NativeCall<bool, void*, unsigned long long>(nullptr, "AShooterGameState.IsPropertyValueEqualToParentValue(UClass*,FName)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.IsSupportedLiveTuningProperty(FProperty*,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    static bool IsSupportedLiveTuningProperty(void* a0, bool a1)
    {
        return NativeCall<bool, void*, bool>(nullptr, "AShooterGameState.IsSupportedLiveTuningProperty(FProperty*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.IsTeamIDInvincible(int,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool IsTeamIDInvincible(int a0, bool a1) const
    {
        return NativeCall<bool, int, bool>(this, "AShooterGameState.IsTeamIDInvincible(int,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameState.IsUnderBunkerTribeLimit(int)
    // endereco: cache_pdb_25090264
    bool IsUnderBunkerTribeLimit(int a0) const
    {
        return NativeCall<bool, int>(this, "AShooterGameState.IsUnderBunkerTribeLimit(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.IsUniqueDinoAlreadySpawned(TSoftClassPtr<APrimalDinoCharacter>&)
    // endereco: casamento de bytes com a build de referencia
    bool IsUniqueDinoAlreadySpawned(void* a0) const
    {
        return NativeCall<bool, void**>(this, "AShooterGameState.IsUniqueDinoAlreadySpawned(TSoftClassPtr<APrimalDinoCharacter>&)", &a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.IsValidMassTeleportData(FMassTeleportData&)
    // endereco: thunk
    BrzPonteiro IsValidMassTeleportData(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterGameState.IsValidMassTeleportData(FMassTeleportData&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameState.LoadedWorld()
    // endereco: casamento de bytes com a build de referencia
    void LoadedWorld() const
    {
        NativeCall<void>(this, "AShooterGameState.LoadedWorld()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.Multi_SpawnCosmeticActor_Implementation(TSubclassOf<AActor>,UE::Math::TVector<
    // endereco: casamento de bytes com a build de referencia
    void Multi_SpawnCosmeticActor_Implementation(void* a0, void* a1, void* a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "AShooterGameState.Multi_SpawnCosmeticActor_Implementation(TSubclassOf<AActor>,UE::Math::TVector<double>,UE::Math::TRotator<double>)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.NetAddFloatingDamageText(UE::Math::TVector<double>,int,int,int)
    // endereco: casamento de bytes com a build de referencia
    void NetAddFloatingDamageText(void* a0, int a1, int a2, int a3) const
    {
        NativeCall<void, void*, int, int, int>(this, "AShooterGameState.NetAddFloatingDamageText(UE::Math::TVector<double>,int,int,int)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.NetUpdateOfflinePvPExpiringTeams(TArray<int,TSizedDefaultAllocator<32>>&,TArra
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro NetUpdateOfflinePvPExpiringTeams(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterGameState.NetUpdateOfflinePvPExpiringTeams(TArray<int,TSizedDefaultAllocator<32>>&,TArray<float,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.NetUpdateOfflinePvPExpiringTeams_Implementation(TArray<int,TSizedDefaultAlloca
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=63]]
    void NetUpdateOfflinePvPExpiringTeams_Implementation(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterGameState.NetUpdateOfflinePvPExpiringTeams_Implementation(TArray<int,TSizedDefaultAllocator<32>>&,TArray<float,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.NetUpdateOfflinePvPLiveTeams(TArray<int,TSizedDefaultAllocator<32>>&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro NetUpdateOfflinePvPLiveTeams(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterGameState.NetUpdateOfflinePvPLiveTeams(TArray<int,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.NetUpdateOfflinePvPLiveTeams_Implementation(TArray<int,TSizedDefaultAllocator<
    // endereco: cache_pdb_25090264
    void NetUpdateOfflinePvPLiveTeams_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameState.NetUpdateOfflinePvPLiveTeams_Implementation(TArray<int,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.NotifyPlayerDied(AShooterCharacter*,AShooterPlayerController*,APawn*,AActor*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=274+grafo=8/8]]
    void NotifyPlayerDied(void* a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, void*, void*, void*, void*>(this, "AShooterGameState.NotifyPlayerDied(AShooterCharacter*,AShooterPlayerController*,APawn*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.OnDeserializedByGame(EOnDeserializationType::Type)
    // endereco: casamento de bytes com a build de referencia
    void OnDeserializedByGame(int a0) const
    {
        NativeCall<void, int>(this, "AShooterGameState.OnDeserializedByGame(EOnDeserializationType::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.OnLevelsChanged()
    // endereco: casamento de bytes com a build de referencia
    void OnLevelsChanged() const
    {
        NativeCall<void>(this, "AShooterGameState.OnLevelsChanged()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.OnNewClassInitialized(UClass*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=76]]
    void OnNewClassInitialized(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameState.OnNewClassInitialized(UClass*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameState.OnRep_CosmeticWhitelist()
    // endereco: casamento de bytes com a build de referencia
    void OnRep_CosmeticWhitelist() const
    {
        NativeCall<void>(this, "AShooterGameState.OnRep_CosmeticWhitelist()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameState.OnRep_CurrentDefaultPropertyValueUpdates()
    // endereco: casamento de bytes com a build de referencia
    void OnRep_CurrentDefaultPropertyValueUpdates() const
    {
        NativeCall<void>(this, "AShooterGameState.OnRep_CurrentDefaultPropertyValueUpdates()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameState.OnRep_NetBanlistedMods()
    // endereco: casamento de bytes com a build de referencia
    void OnRep_NetBanlistedMods() const
    {
        NativeCall<void>(this, "AShooterGameState.OnRep_NetBanlistedMods()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameState.OnRep_ReplicateLiveTuningOverloadChunks()
    // endereco: casamento de bytes com a build de referencia
    void OnRep_ReplicateLiveTuningOverloadChunks() const
    {
        NativeCall<void>(this, "AShooterGameState.OnRep_ReplicateLiveTuningOverloadChunks()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameState.OnRep_SupportedSpawnRegions()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=151+grafo=3/3]]
    void OnRep_SupportedSpawnRegions() const
    {
        NativeCall<void>(this, "AShooterGameState.OnRep_SupportedSpawnRegions()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.PostInitializeComponents()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=82+grafo=4/4]]
    void PostInitializeComponents() const
    {
        NativeCall<void>(this, "AShooterGameState.PostInitializeComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.PrepareActorForMassTeleport(AActor*,FMassTeleportData&)
    // endereco: casamento de bytes com a build de referencia
    void PrepareActorForMassTeleport(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterGameState.PrepareActorForMassTeleport(AActor*,FMassTeleportData&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.PrintCDODebug(APrimalCharacter*,FCDODebugData&)
    // endereco: casamento de bytes com a build de referencia
    static void PrintCDODebug(void* a0, void* a1)
    {
        NativeCall<void, void*, void*>(nullptr, "AShooterGameState.PrintCDODebug(APrimalCharacter*,FCDODebugData&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameState.PrintCDODebugForChar(APrimalCharacter*)
    // endereco: cache_pdb_25090264
    void PrintCDODebugForChar(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameState.PrintCDODebugForChar(APrimalCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.ProcessAllCDOUpdates(UShooterGameInstance*,TArray<FNetChangeDefaultPropertyVal
    // endereco: casamento de bytes com a build de referencia
    static void ProcessAllCDOUpdates(void* a0, void* a1)
    {
        NativeCall<void, void*, void*>(nullptr, "AShooterGameState.ProcessAllCDOUpdates(UShooterGameInstance*,TArray<FNetChangeDefaultPropertyValue,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.ProcessCDOUpdateEntry(UShooterGameInstance*,FNetChangeDefaultPropertyValue&,UC
    // endereco: casamento de bytes com a build de referencia
    static void ProcessCDOUpdateEntry(void* a0, void* a1, void* a2)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "AShooterGameState.ProcessCDOUpdateEntry(UShooterGameInstance*,FNetChangeDefaultPropertyValue&,UClass*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.QueueExplorerNoteForDeferredUnlock(int)
    // endereco: casamento de bytes com a build de referencia
    void QueueExplorerNoteForDeferredUnlock(int a0) const
    {
        NativeCall<void, int>(this, "AShooterGameState.QueueExplorerNoteForDeferredUnlock(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.RemoveIrrelevantBiomeBuffs(APrimalCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=30]]
    void RemoveIrrelevantBiomeBuffs(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameState.RemoveIrrelevantBiomeBuffs(APrimalCharacter*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterGameState.RemoveMaxItemQuantityOverride(TSubclassOf<UPrimalItem>)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void RemoveMaxItemQuantityOverride(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameState.RemoveMaxItemQuantityOverride(TSubclassOf<UPrimalItem>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.RemoveMaxItemQuantityOverride_Implementation(TSubclassOf<UPrimalItem>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveMaxItemQuantityOverride_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterGameState.RemoveMaxItemQuantityOverride_Implementation(TSubclassOf<UPrimalItem>)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameState.RemoveRelevantPOIActor(AActor*)
    // endereco: casamento de bytes com a build de referencia
    void RemoveRelevantPOIActor(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameState.RemoveRelevantPOIActor(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.RequestFinishAndExitToMainMenu()
    // endereco: casamento de bytes com a build de referencia
    void RequestFinishAndExitToMainMenu() const
    {
        NativeCall<void>(this, "AShooterGameState.RequestFinishAndExitToMainMenu()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.ResetCDOProperties(TMap<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDef
    // endereco: casamento de bytes com a build de referencia
    static void ResetCDOProperties(void* a0, bool a1, bool a2)
    {
        NativeCall<void, void*, bool, bool>(nullptr, "AShooterGameState.ResetCDOProperties(TMap<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,0>>&,bool,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.ResetLiveTuningOverloads()
    // endereco: casamento de bytes com a build de referencia
    void ResetLiveTuningOverloads() const
    {
        NativeCall<void>(this, "AShooterGameState.ResetLiveTuningOverloads()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.ServerProcessDefaultPropertyValueUpdates(UShooterGameInstance*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static void ServerProcessDefaultPropertyValueUpdates(void* a0)
    {
        NativeCall<void, void*>(nullptr, "AShooterGameState.ServerProcessDefaultPropertyValueUpdates(UShooterGameInstance*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameState.ServerUpdateSpawnPropRandomIndex()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=45]]
    void ServerUpdateSpawnPropRandomIndex() const
    {
        NativeCall<void>(this, "AShooterGameState.ServerUpdateSpawnPropRandomIndex()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.ServerUpdateSpawnPropRandomIndex_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerUpdateSpawnPropRandomIndex_Implementation() const
    {
        return NativeCall<void*>(this, "AShooterGameState.ServerUpdateSpawnPropRandomIndex_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.SetClusterPaintingData(TSharedPtr<ArkClusterPaintingData,1>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetClusterPaintingData(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterGameState.SetClusterPaintingData(TSharedPtr<ArkClusterPaintingData,1>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.SetTileUnstreamable(FName)
    // endereco: casamento de bytes com a build de referencia
    void SetTileUnstreamable(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "AShooterGameState.SetTileUnstreamable(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.ShouldMassTeleportMoveActor(AActor*,FMassTeleportData&)
    // endereco: casamento de bytes com a build de referencia
    bool ShouldMassTeleportMoveActor(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "AShooterGameState.ShouldMassTeleportMoveActor(AActor*,FMassTeleportData&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.ShouldProcessCDOPropertyAndClass(UClass*,FName,TMap<UClass*,TMap<FString,FStri
    // endereco: casamento de bytes com a build de referencia
    static bool ShouldProcessCDOPropertyAndClass(void* a0, unsigned long long a1, void* a2, bool a3, bool a4, bool a5)
    {
        return NativeCall<bool, void*, unsigned long long, void*, bool, bool, bool>(nullptr, "AShooterGameState.ShouldProcessCDOPropertyAndClass(UClass*,FName,TMap<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>,0>>&,bool,bool,bool)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.SpawnAdditionalExplorerNotes()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SpawnAdditionalExplorerNotes() const
    {
        return NativeCall<void*>(this, "AShooterGameState.SpawnAdditionalExplorerNotes()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.StartMassTeleport(FMassTeleportData&,FTeleportDestination&,AActor*,TArray<AAct
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartMassTeleport(void* a0, void* a1, void* a2, void* a3, void* a4, float a5, float a6, bool a7, bool a8, bool a9) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, float, float, bool, bool, bool>(this, "AShooterGameState.StartMassTeleport(FMassTeleportData&,FTeleportDestination&,AActor*,TArray<AActor*,TSizedDefaultAllocator<32>>,TSubclassOf<APrimalBuff>,float,float,bool,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.StaticRegisterNativesAShooterGameState()
    // endereco: cache_pdb_25090264
    static void StaticRegisterNativesAShooterGameState()
    {
        NativeCall<void>(nullptr, "AShooterGameState.StaticRegisterNativesAShooterGameState()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "AShooterGameState.Tick(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.TickWildWanderThrottling(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TickWildWanderThrottling(float a0) const
    {
        return NativeCall<void*, float>(this, "AShooterGameState.TickWildWanderThrottling(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.Tick_MassTeleport(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick_MassTeleport(float a0) const
    {
        NativeCall<void, float>(this, "AShooterGameState.Tick_MassTeleport(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.Tick_RenameQueue(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Tick_RenameQueue(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AShooterGameState.Tick_RenameQueue(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.Tick_WorldPartition(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick_WorldPartition(float a0) const
    {
        NativeCall<void, float>(this, "AShooterGameState.Tick_WorldPartition(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.UpdateActiveMissionTags()
    // endereco: cache_pdb_25090264
    BrzPonteiro UpdateActiveMissionTags() const
    {
        return NativeCall<void*>(this, "AShooterGameState.UpdateActiveMissionTags()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.UpdateDynamicMusic(float)
    // endereco: casamento de bytes com a build de referencia
    void UpdateDynamicMusic(float a0) const
    {
        NativeCall<void, float>(this, "AShooterGameState.UpdateDynamicMusic(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.UpdatePlayerHeatMap()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdatePlayerHeatMap() const
    {
        return NativeCall<void*>(this, "AShooterGameState.UpdatePlayerHeatMap()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.UpdatePreventOfflinePvPStatus()
    // endereco: casamento de bytes com a build de referencia
    void UpdatePreventOfflinePvPStatus() const
    {
        NativeCall<void>(this, "AShooterGameState.UpdatePreventOfflinePvPStatus()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameState.UploadToS3(FString&,FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UploadToS3(const FString& a0, const FString& a1, const FString& a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "AShooterGameState.UploadToS3(FString&,FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro UploadToS3(FString* a0, FString* a1, FString* a2) const
    { return UploadToS3(*a0, *a1, *a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    void ValidateGeneratedRepEnums(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameState.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameState.WorldCompositionRescan()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    void WorldCompositionRescan() const
    {
        NativeCall<void>(this, "AShooterGameState.WorldCompositionRescan()");
    }

    // ── SOBRECARGAS QUE NAO CABEM EM C++ ─────────────────────────────
    //
    //  Estas existem no jogo, e a chave delas resolve normalmente por
    //  `GetAddress` / `NativeCall`. O que nao cabe e' a DECLARACAO: em C
    //  os parametros viram os mesmos da que ficou, ou a diferenca esta'
    //  so' no retorno — e C++ nao sobrecarrega por retorno.
    //
    //  Para chamar uma destas, use `NativeCall` direto com a chave:
    //    AShooterGameState.CDOSetValueForPropertyWrapper(FPropertyWrapper&,UE::Math::TVector<double>)
    //      (colide com AShooterGameState.CDOSetValueForPropertyWrapper(FPropertyWrapper&,FString))

    FName& ActiveEventField() const
    { return *GetNativePointerField<FName*>(this, "AShooterGameState.ActiveEvent"); }
    UPrimalWorldSettingsEventOverrides*& ActiveEventOverridesField() const
    { return *GetNativePointerField<UPrimalWorldSettingsEventOverrides**>(this, "AShooterGameState.ActiveEventOverrides"); }
    TArray<void*>& ActiveMissionTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameState.ActiveMissionTags"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ClusterId` +16, medido na build 25090264
    //  (offset absoluto medido: 0xA50; confianca alta)
    FString& AmazonS3AccessKeyIDField() const
    { return BrzCampoAncorado<FString>(this, "ClusterId", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ClusterId` +48, medido na build 25090264
    //  (offset absoluto medido: 0xA70; confianca media)
    FString& AmazonS3BucketNameField() const
    { return BrzCampoAncorado<FString>(this, "ClusterId", 48); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ClusterId` +32, medido na build 25090264
    //  (offset absoluto medido: 0xA60; confianca alta)
    FString& AmazonS3SecretAccessKeyField() const
    { return BrzCampoAncorado<FString>(this, "ClusterId", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WirelessCraftingRangeOverride` +4, medido na build 25090264
    //  (offset absoluto medido: 0xB60; confianca alta)
    int& AmbientSoundCheckIncrementField() const
    { return BrzCampoAncorado<int>(this, "WirelessCraftingRangeOverride", 4); }
    int& AnchoredVesselCheckRadiusField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameState.AnchoredVesselCheckRadius"); }
    float& ArmadoggoDeathCooldownField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.ArmadoggoDeathCooldown"); }
    float& BaseHexagonRewardMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.BaseHexagonRewardMultiplier"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bAllowLowGravitySpin` +8, medido na build 25090264
    //  (offset absoluto medido: 0xD58; confianca alta)
    TArray<void*>& BiomeBuffTagsField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "bAllowLowGravitySpin", 8); }
    float& BloodforgeReinforceExtraDurabilityField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.BloodforgeReinforceExtraDurability"); }
    float& BloodforgeReinforceResourceCostMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.BloodforgeReinforceResourceCostMultiplier"); }
    float& BloodforgeReinforceSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.BloodforgeReinforceSpeedMultiplier"); }
    BrzCampoPonteiro BunkersPerTribeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameState.BunkersPerTribe")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CurrentDefaultPropertyValueUpdates` +16, medido na build 25090264
    //  (offset absoluto medido: 0xEC8; confianca alta)
    void*& CDODebugDataField() const
    { return BrzCampoAncorado<void*>(this, "CurrentDefaultPropertyValueUpdates", 16); }
    FString& CachedSessionOwnerIdField() const
    { return *GetNativePointerField<FString*>(this, "AShooterGameState.CachedSessionOwnerId"); }
    FString& ClusterIdField() const
    { return *GetNativePointerField<FString*>(this, "AShooterGameState.ClusterId"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NetBanlistedMods` +80, medido na build 25090264
    //  (offset absoluto medido: 0xF48; confianca media)
    void*& ClusterPaintingDataField() const
    { return BrzCampoAncorado<void*>(this, "NetBanlistedMods", 80); }
    float& CompanionsDeathCooldownField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.CompanionsDeathCooldown"); }
    int& CosmoWeaponAmmoReloadAmountField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameState.CosmoWeaponAmmoReloadAmount"); }
    int& CropPlotStackLimitField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameState.CropPlotStackLimit"); }
    float& CryoHospitalHoursToDrainTorporField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.CryoHospitalHoursToDrainTorpor"); }
    float& CryoHospitalHoursToRegenFoodField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.CryoHospitalHoursToRegenFood"); }
    float& CryoHospitalHoursToRegenHPField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.CryoHospitalHoursToRegenHP"); }
    float& CryoHospitalMatingCooldownReductionField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.CryoHospitalMatingCooldownReduction"); }
    TArray<void*>& CurrentDefaultPropertyValueUpdatesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameState.CurrentDefaultPropertyValueUpdates"); }
    BrzCampoPonteiro CustomGameUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameState.CustomGameUITemplate")); }
    float& CustomRecipeEffectivenessMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.CustomRecipeEffectivenessMultiplier"); }
    float& CustomRecipeSkillMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.CustomRecipeSkillMultiplier"); }
    BrzCampoPonteiro DataLayerMapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameState.DataLayerMap")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NetBanlistedMods` +56, medido na build 25090264
    //  (offset absoluto medido: 0xF30; confianca media)
    void*& DataLayerWatcherPtrField() const
    { return BrzCampoAncorado<void*>(this, "NetBanlistedMods", 56); }
    float& DayCycleSpeedScaleField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.DayCycleSpeedScale"); }
    int& DayNumberField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameState.DayNumber"); }
    float& DayTimeField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.DayTime"); }
    float& DayTimeSpeedScaleField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.DayTimeSpeedScale"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NetBanlistedMods` +48, medido na build 25090264
    //  (offset absoluto medido: 0xF28; confianca media)
    int& DedicatedWorldPartitionTicksField() const
    { return BrzCampoAncorado<int>(this, "NetBanlistedMods", 48); }
    TArray<void*>& DeferredExplorerNoteUnlockQueueField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameState.DeferredExplorerNoteUnlockQueue"); }
    int& DestroyTamesOverLevelClampField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameState.DestroyTamesOverLevelClamp"); }
    TArray<void*>& DinoClassSpeedMultipliersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameState.DinoClassSpeedMultipliers"); }
    float& DinoHairGrowthSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.DinoHairGrowthSpeedMultiplier"); }
    bool& DisableRailgunPVPField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.DisableRailgunPVP"); }
    UAudioComponent*& DynamicMusicAudioComponentField() const
    { return *GetNativePointerField<UAudioComponent**>(this, "AShooterGameState.DynamicMusicAudioComponent"); }
    UAudioComponent*& DynamicMusicAudioComponent2Field() const
    { return *GetNativePointerField<UAudioComponent**>(this, "AShooterGameState.DynamicMusicAudioComponent2"); }
    float& EggHatchSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.EggHatchSpeedMultiplier"); }
    int& EnvironmentIndexField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameState.EnvironmentIndex"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bNeedsPowerToActivateAquaticCompartments` +55, medido na build 25090264
    //  (offset absoluto medido: 0x7E0; confianca media)
    void*& ExpensiveFunctionsField() const
    { return BrzCampoAncorado<void*>(this, "bNeedsPowerToActivateAquaticCompartments", 55); }
    float& ExtinctionEventPercentField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.ExtinctionEventPercent"); }
    int& ExtinctionEventSecondsRemainingField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameState.ExtinctionEventSecondsRemaining"); }
    int& ExtinctionEventTimeIntervalField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameState.ExtinctionEventTimeInterval"); }
    float& FastDecayIntervalField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.FastDecayInterval"); }
    float& FloatingChatRangeField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.FloatingChatRange"); }
    float& FloatingHUDRangeField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.FloatingHUDRange"); }
    BrzCampoPonteiro FloatingNameColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameState.FloatingNameColor")); }
    BrzCampoPonteiro FloatingPlatformProfileNameColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameState.FloatingPlatformProfileNameColor")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxPersonalTamedDinos` +4, medido na build 25090264
    //  (offset absoluto medido: 0xA28; confianca alta)
    TArray<void*>& FloatingTextEntriesField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "MaxPersonalTamedDinos", 4); }
    TArray<TWeakObjectPtr<void>>& ForcedRelevantPOIActorsField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "AShooterGameState.ForcedRelevantPOIActors"); }
    TArray<void*>& GameDataSetsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameState.GameDataSets"); }
    float& GlobalCorpseDecompositionTimeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.GlobalCorpseDecompositionTimeMultiplier"); }
    float& GlobalItemDecompositionTimeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.GlobalItemDecompositionTimeMultiplier"); }
    float& GlobalSpoilingTimeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.GlobalSpoilingTimeMultiplier"); }
    float& HairGrowthSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.HairGrowthSpeedMultiplier"); }
    float& HexagonCostMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.HexagonCostMultiplier"); }
    float& HexagonRewardMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.HexagonRewardMultiplier"); }
    float& ImplantSuicideCDField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.ImplantSuicideCD"); }
    TArray<void*>& InventoryComponentAppendsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameState.InventoryComponentAppends"); }
    float& ItemStackSizeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.ItemStackSizeMultiplier"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DynamicMusicAudioComponent2` +16, medido na build 25090264
    //  (offset absoluto medido: 0x810; confianca alta)
    double& LastHadMusicTimeField() const
    { return BrzCampoAncorado<double>(this, "DynamicMusicAudioComponent2", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DynamicMusicAudioComponent2` +24, medido na build 25090264
    //  (offset absoluto medido: 0x818; confianca alta)
    void*& LastNetDynamicMusicField() const
    { return BrzCampoAncorado<void*>(this, "DynamicMusicAudioComponent2", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bCrossARKAllowForeignDinoDownloads` +7, medido na build 25090264
    //  (offset absoluto medido: 0xB00; confianca alta)
    double& LastPlayedDynamicMusic1Field() const
    { return BrzCampoAncorado<double>(this, "bCrossARKAllowForeignDinoDownloads", 7); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bCrossARKAllowForeignDinoDownloads` +15, medido na build 25090264
    //  (offset absoluto medido: 0xB08; confianca alta)
    double& LastPlayedDynamicMusic2Field() const
    { return BrzCampoAncorado<double>(this, "bCrossARKAllowForeignDinoDownloads", 15); }
    double& LastServerSaveTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterGameState.LastServerSaveTime"); }
    TArray<void*>& LevelExperienceRampOverridesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameState.LevelExperienceRampOverrides"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DisableRailgunPVP` +88, medido na build 25090264
    //  (offset absoluto medido: 0x708; confianca media)
    void*& LevelNameHashField() const
    { return BrzCampoAncorado<void*>(this, "DisableRailgunPVP", 88); }
    int& LimitBunkersPerTribeNumField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameState.LimitBunkersPerTribeNum"); }
    int& LimitGeneratorsNumField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameState.LimitGeneratorsNum"); }
    float& LimitGeneratorsRangeField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.LimitGeneratorsRange"); }
    int& LimitTurretsNumField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameState.LimitTurretsNum"); }
    float& LimitTurretsRangeField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.LimitTurretsRange"); }
    float& ListenServerTetherDistanceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.ListenServerTetherDistanceMultiplier"); }
    TArray<void*>& LiveTuningOverloadChunksField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameState.LiveTuningOverloadChunks"); }
    int& LiveTuningReplicatedChunkSizeField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameState.LiveTuningReplicatedChunkSize"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bPreventTribeAlliances` +8, medido na build 25090264
    //  (offset absoluto medido: 0xA98; confianca alta)
    FString& LoadForceRespawnDinosTagField() const
    { return BrzCampoAncorado<FString>(this, "bPreventTribeAlliances", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bIgnorePVPMountedWeaponryRestrictions` +1, medido na build 25090264
    //  (offset absoluto medido: 0xE50; confianca alta)
    void*& LoadedDataLayersField() const
    { return BrzCampoAncorado<void*>(this, "bIgnorePVPMountedWeaponryRestrictions", 1); }
    float& LocalizedChatRadiusUnconsiousScaleField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.LocalizedChatRadiusUnconsiousScale"); }
    TArray<void*>& MassTeleportQueueField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameState.MassTeleportQueue"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MassTeleportQueue` +32, medido na build 25090264
    //  (offset absoluto medido: 0xCA0; confianca alta)
    TArray<void*>& MassTeleportQueueToAddField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "MassTeleportQueue", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MassTeleportQueue` +16, medido na build 25090264
    //  (offset absoluto medido: 0xC90; confianca alta)
    TArray<AActor*>& MassTeleportQueueToRemoveField() const
    { return BrzCampoAncorado<TArray<AActor*>>(this, "MassTeleportQueue", 16); }
    int& MaxAlliancesPerTribeField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameState.MaxAlliancesPerTribe"); }
    int& MaxAnchoredVesselsInRangeField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameState.MaxAnchoredVesselsInRange"); }
    int& MaxCosmoWeaponAmmoField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameState.MaxCosmoWeaponAmmo"); }
    int& MaxNumberOfPlayersInTribeField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameState.MaxNumberOfPlayersInTribe"); }
    int& MaxPersonalTamedDinosField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameState.MaxPersonalTamedDinos"); }
    int& MaxStructuresInRangeField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameState.MaxStructuresInRange"); }
    int& MaxStructuresInSmallRadiusField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameState.MaxStructuresInSmallRadius"); }
    int& MaxTamedDinosField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameState.MaxTamedDinos"); }
    int& MaxTamedDinos_SoftTameLimit_CountdownForDeletionDurationField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameState.MaxTamedDinos_SoftTameLimit_CountdownForDeletionDuration"); }
    int& MaxTamedDinos_SoftTameLimit_NumTamedDinos_OverLimitField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameState.MaxTamedDinos_SoftTameLimit_NumTamedDinos_OverLimit"); }
    int& MaxTamedDinos_SoftTameLimit_NumTamedDinos_UnderLimitField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameState.MaxTamedDinos_SoftTameLimit_NumTamedDinos_UnderLimit"); }
    int& MaxTribesPerAllianceField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameState.MaxTribesPerAlliance"); }
    unsigned int& MaximumUniqueDownloadIntervalField() const
    { return *GetNativePointerField<unsigned int*>(this, "AShooterGameState.MaximumUniqueDownloadInterval"); }
    float& MinDistanceBetweenBunkersField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.MinDistanceBetweenBunkers"); }
    float& MinimumDinoReuploadIntervalField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.MinimumDinoReuploadInterval"); }
    float& MinimumTimebetweeninventoryRetrievalField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.MinimumTimebetweeninventoryRetrieval"); }
    unsigned int& MinimumUniqueDownloadIntervalField() const
    { return *GetNativePointerField<unsigned int*>(this, "AShooterGameState.MinimumUniqueDownloadInterval"); }
    int& NPCActiveCountTamedField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameState.NPCActiveCountTamed"); }
    BrzCampoPonteiro NetBanlistedModsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameState.NetBanlistedMods")); }
    int& NetUTCField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameState.NetUTC"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WirelessCraftingRangeOverride` +12, medido na build 25090264
    //  (offset absoluto medido: 0xB68; confianca alta)
    float& NetUTCCacheField() const
    { return BrzCampoAncorado<float>(this, "WirelessCraftingRangeOverride", 12); }
    double& NetworkTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterGameState.NetworkTime"); }
    FString& NewStructureDestructionTagField() const
    { return *GetNativePointerField<FString*>(this, "AShooterGameState.NewStructureDestructionTag"); }
    int& NextEnvironmentIndexField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameState.NextEnvironmentIndex"); }
    double& NextMutagenTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterGameState.NextMutagenTime"); }
    float& NightTimeSpeedScaleField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.NightTimeSpeedScale"); }
    int& NumActiveNPCField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameState.NumActiveNPC"); }
    int& NumDeadNPCField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameState.NumDeadNPC"); }
    int& NumHibernatedNPCField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameState.NumHibernatedNPC"); }
    int& NumNPCField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameState.NumNPC"); }
    int& NumPlayerActorsField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameState.NumPlayerActors"); }
    int& NumPlayerConnectedField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameState.NumPlayerConnected"); }
    int& NumStructuresField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameState.NumStructures"); }
    int& NumTamedDinosField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameState.NumTamedDinos"); }
    BrzCampoPonteiro OnDinoDownloadedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameState.OnDinoDownloaded")); }
    BrzCampoPonteiro OnDinoUploadedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameState.OnDinoUploaded")); }
    BrzCampoPonteiro OnHTTPGetResponseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameState.OnHTTPGetResponse")); }
    BrzCampoPonteiro OnHTTPPostResponseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameState.OnHTTPPostResponse")); }
    BrzCampoPonteiro OnPlayerListPopulatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameState.OnPlayerListPopulated")); }
    USoundBase*& OverrideAreaMusicField() const
    { return *GetNativePointerField<USoundBase**>(this, "AShooterGameState.OverrideAreaMusic"); }
    BrzCampoPonteiro OverrideAreaMusicPositionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameState.OverrideAreaMusicPosition")); }
    float& OverrideAreaMusicRangeField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.OverrideAreaMusicRange"); }
    TArray<void*>& OverrideEngramEntriesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameState.OverrideEngramEntries"); }
    TArray<void*>& OverrideItemCraftingCostsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameState.OverrideItemCraftingCosts"); }
    TArray<void*>& OverrideItemMaxQuantityField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameState.OverrideItemMaxQuantity"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DisableRailgunPVP` +8, medido na build 25090264
    //  (offset absoluto medido: 0x6B8; confianca media)
    void*& OverrideItemMaxQuantityMapField() const
    { return BrzCampoAncorado<void*>(this, "DisableRailgunPVP", 8); }
    int& OverrideMaxExperiencePointsDinoField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameState.OverrideMaxExperiencePointsDino"); }
    int& OverrideMaxExperiencePointsPlayerField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameState.OverrideMaxExperiencePointsPlayer"); }
    int& OverrideSecondsUntilBuriedTreasureAutoRevealsField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameState.OverrideSecondsUntilBuriedTreasureAutoReveals"); }
    float& OxygenSwimSpeedStatMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.OxygenSwimSpeedStatMultiplier"); }
    FString& PGMapNameField() const
    { return *GetNativePointerField<FString*>(this, "AShooterGameState.PGMapName"); }
    UPaintingCache*& PaintingCacheField() const
    { return *GetNativePointerField<UPaintingCache**>(this, "AShooterGameState.PaintingCache"); }
    float& PassiveTameIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.PassiveTameIntervalMultiplier"); }
    float& PerPlatformMaxStructuresMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.PerPlatformMaxStructuresMultiplier"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bShowCreativeMode` +31, medido na build 25090264
    //  (offset absoluto medido: 0xC10; confianca alta)
    int& PerformanceThrottledTicksModField() const
    { return BrzCampoAncorado<int>(this, "bShowCreativeMode", 31); }
    float& PhotoModeRangeLimitField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.PhotoModeRangeLimit"); }
    float& PlatformSaddleBuildAreaBoundsMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.PlatformSaddleBuildAreaBoundsMultiplier"); }
    BrzCampoPonteiro PlayerFloatingHUDOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameState.PlayerFloatingHUDOffset")); }
    float& PlayerFloatingHUDOffsetScreenYField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.PlayerFloatingHUDOffsetScreenY"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bNeedsPowerToActivateAquaticCompartments` +3, medido na build 25090264
    //  (offset absoluto medido: 0x7AC; confianca alta)
    void*& PlayerHeatCellSizeField() const
    { return BrzCampoAncorado<void*>(this, "bNeedsPowerToActivateAquaticCompartments", 3); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bNeedsPowerToActivateAquaticCompartments` +7, medido na build 25090264
    //  (offset absoluto medido: 0x7B0; confianca alta)
    void*& PlayerHeatMapGridSizeXField() const
    { return BrzCampoAncorado<void*>(this, "bNeedsPowerToActivateAquaticCompartments", 7); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bNeedsPowerToActivateAquaticCompartments` +11, medido na build 25090264
    //  (offset absoluto medido: 0x7B4; confianca alta)
    void*& PlayerHeatMapGridSizeYField() const
    { return BrzCampoAncorado<void*>(this, "bNeedsPowerToActivateAquaticCompartments", 11); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bNeedsPowerToActivateAquaticCompartments` +15, medido na build 25090264
    //  (offset absoluto medido: 0x7B8; confianca alta)
    void*& PlayerHeatMapWorldWidthXField() const
    { return BrzCampoAncorado<void*>(this, "bNeedsPowerToActivateAquaticCompartments", 15); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bNeedsPowerToActivateAquaticCompartments` +19, medido na build 25090264
    //  (offset absoluto medido: 0x7BC; confianca alta)
    void*& PlayerHeatMapWorldWidthYField() const
    { return BrzCampoAncorado<void*>(this, "bNeedsPowerToActivateAquaticCompartments", 19); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bNeedsPowerToActivateAquaticCompartments` +23, medido na build 25090264
    //  (offset absoluto medido: 0x7C0; confianca alta)
    void*& PlayerHeatmapField() const
    { return BrzCampoAncorado<void*>(this, "bNeedsPowerToActivateAquaticCompartments", 23); }
    FString& PlayerListStringField() const
    { return *GetNativePointerField<FString*>(this, "AShooterGameState.PlayerListString"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bShowCreativeMode` +27, medido na build 25090264
    //  (offset absoluto medido: 0xC0C; confianca alta)
    int& PlayerListThrottledModField() const
    { return BrzCampoAncorado<int>(this, "bShowCreativeMode", 27); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bShowCreativeMode` +7, medido na build 25090264
    //  (offset absoluto medido: 0xBF8; confianca alta)
    TArray<void*>& PlayerLocatorEffectMapsField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "bShowCreativeMode", 7); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bNeedsPowerToActivateAquaticCompartments` +39, medido na build 25090264
    //  (offset absoluto medido: 0x7D0; confianca media)
    void*& PlayerUnderwaterHeatmapField() const
    { return BrzCampoAncorado<void*>(this, "bNeedsPowerToActivateAquaticCompartments", 39); }
    TArray<void*>& PreventBreedingForClassNamesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameState.PreventBreedingForClassNames"); }
    TArray<void*>& PreventDinoTameClassNamesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameState.PreventDinoTameClassNames"); }
    BrzCampoPonteiro PreventDisableDefaultDinoTameClassNamesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameState.PreventDisableDefaultDinoTameClassNames")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bShowCreativeMode` +35, medido na build 25090264
    //  (offset absoluto medido: 0xC14; confianca media)
    float& PreventOfflinePvPConnectionInvincibleIntervalField() const
    { return BrzCampoAncorado<float>(this, "bShowCreativeMode", 35); }
    TArray<void*>& PreventOfflinePvPExpiringTeamsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameState.PreventOfflinePvPExpiringTeams"); }
    TArray<void*>& PreventOfflinePvPExpiringTimesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameState.PreventOfflinePvPExpiringTimes"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PreventOfflinePvPExpiringTimes` +96, medido na build 25090264
    //  (offset absoluto medido: 0x9D0; confianca media)
    void*& PreventOfflinePvPFirstLiveTimeField() const
    { return BrzCampoAncorado<void*>(this, "PreventOfflinePvPExpiringTimes", 96); }
    TArray<void*>& PreventOfflinePvPLiveTeamsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameState.PreventOfflinePvPLiveTeams"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PreventOfflinePvPExpiringTimes` +16, medido na build 25090264
    //  (offset absoluto medido: 0x980; confianca media)
    void*& PreventOfflinePvPLiveTimesField() const
    { return BrzCampoAncorado<void*>(this, "PreventOfflinePvPExpiringTimes", 16); }
    TArray<void*>& PreventTransferForClassNamesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameState.PreventTransferForClassNames"); }
    double& PrivateNetworkTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterGameState.PrivateNetworkTime"); }
    float& ProximityChatInnerRadiusField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.ProximityChatInnerRadius"); }
    float& ProximityChatOuterRadiusField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.ProximityChatOuterRadius"); }
    float& PvEDinoDecayPeriodMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.PvEDinoDecayPeriodMultiplier"); }
    float& PvEStructureDecayPeriodMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.PvEStructureDecayPeriodMultiplier"); }
    float& RTSMaxRangeFromPlayerCharacterScaleField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.RTSMaxRangeFromPlayerCharacterScale"); }
    float& RTSModeNumSelectableDinosScaleField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.RTSModeNumSelectableDinosScale"); }
    float& RadiusStructuresInSmallRadiusField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.RadiusStructuresInSmallRadius"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `RealtimeThrottledTickTimeAmount` +8, medido na build 25090264
    //  (offset absoluto medido: 0xEA8; confianca alta)
    int& RealtimeThrottledTickOffsetField() const
    { return BrzCampoAncorado<int>(this, "RealtimeThrottledTickTimeAmount", 8); }
    double& RealtimeThrottledTickTimeAmountField() const
    { return *GetNativePointerField<double*>(this, "AShooterGameState.RealtimeThrottledTickTimeAmount"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NetBanlistedMods` +32, medido na build 25090264
    //  (offset absoluto medido: 0xF18; confianca media)
    void*& S3UploadersField() const
    { return BrzCampoAncorado<void*>(this, "NetBanlistedMods", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WirelessCraftingRangeOverride` +8, medido na build 25090264
    //  (offset absoluto medido: 0xB64; confianca alta)
    int& STASISAUTODESTROY_CheckIncrementField() const
    { return BrzCampoAncorado<int>(this, "WirelessCraftingRangeOverride", 8); }
    float& ServerFramerateField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.ServerFramerate"); }
    float& ServerGeneTraitSpawnRateMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.ServerGeneTraitSpawnRateMultiplier"); }
    float& ServerSaveIntervalField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.ServerSaveInterval"); }
    FString& ServerSessionNameField() const
    { return *GetNativePointerField<FString*>(this, "AShooterGameState.ServerSessionName"); }
    float& ShipNetworkAndStasisRnageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.ShipNetworkAndStasisRnageMultiplier"); }
    unsigned char& SpawnPropRandomIndexField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterGameState.SpawnPropRandomIndex"); }
    int& StartTimeHourField() const
    { return *GetNativePointerField<int*>(this, "AShooterGameState.StartTimeHour"); }
    USoundBase*& StaticOverrideMusicField() const
    { return *GetNativePointerField<USoundBase**>(this, "AShooterGameState.StaticOverrideMusic"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MassTeleportQueue` +48, medido na build 25090264
    //  (offset absoluto medido: 0xCB0; confianca media)
    void*& StreamingDataLayersField() const
    { return BrzCampoAncorado<void*>(this, "MassTeleportQueue", 48); }
    float& StructureDamageRepairCooldownField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.StructureDamageRepairCooldown"); }
    float& StructurePickupHoldDurationField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.StructurePickupHoldDuration"); }
    float& StructurePickupTimeAfterPlacementField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.StructurePickupTimeAfterPlacement"); }
    TArray<void*>& SupportedSpawnRegionsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameState.SupportedSpawnRegions"); }
    TArray<void*>& TamedDinoClassSpeedMultipliersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameState.TamedDinoClassSpeedMultipliers"); }
    BrzCampoPonteiro ThrallTargetingTeamCountField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameState.ThrallTargetingTeamCount")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bShowCreativeMode` +23, medido na build 25090264
    //  (offset absoluto medido: 0xC08; confianca alta)
    int& ThrottledTicksModField() const
    { return BrzCampoAncorado<int>(this, "bShowCreativeMode", 23); }
    unsigned int& TimeUTCField() const
    { return *GetNativePointerField<unsigned int*>(this, "AShooterGameState.TimeUTC"); }
    float& TribeNameChangeCooldownField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.TribeNameChangeCooldown"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NetBanlistedMods` +16, medido na build 25090264
    //  (offset absoluto medido: 0xF08; confianca media)
    void*& TribeRenameQueueField() const
    { return BrzCampoAncorado<void*>(this, "NetBanlistedMods", 16); }
    float& TribeSlotReuseCooldownField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.TribeSlotReuseCooldown"); }
    float& TribeTowerBonusMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.TribeTowerBonusMultiplier"); }
    float& TurretCopySettingsCooldownField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.TurretCopySettingsCooldown"); }
    TArray<void*>& UniqueDinosField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameState.UniqueDinos"); }
    TArray<void*>& UniqueDownloadsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameState.UniqueDownloads"); }
    FName& UseStructurePreventionVolumeTagField() const
    { return *GetNativePointerField<FName*>(this, "AShooterGameState.UseStructurePreventionVolumeTag"); }
    FString& ValgueroMemorialEntriesField() const
    { return *GetNativePointerField<FString*>(this, "AShooterGameState.ValgueroMemorialEntries"); }
    BrzCampoPonteiro WhiteListedCustomCosmeticModSkinsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterGameState.WhiteListedCustomCosmeticModSkins")); }
    float& WildFollowerSpawnChanceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.WildFollowerSpawnChanceMultiplier"); }
    float& WildFollowerSpawnCountMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.WildFollowerSpawnCountMultiplier"); }
    float& WirelessCraftingRangeOverrideField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.WirelessCraftingRangeOverride"); }
    TArray<void*>& WorldBuffPersistantDatasField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterGameState.WorldBuffPersistantDatas"); }
    float& YoungIceFoxDeathCooldownField() const
    { return *GetNativePointerField<float*>(this, "AShooterGameState.YoungIceFoxDeathCooldown"); }
    bool& bAdminLoggingField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAdminLogging"); }
    bool& bAllowAnyoneBabyImprintCuddleField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowAnyoneBabyImprintCuddle"); }
    bool& bAllowCaveBuildingPvEField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowCaveBuildingPvE"); }
    bool& bAllowCaveBuildingPvPField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowCaveBuildingPvP"); }
    bool& bAllowCharacterCreationField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowCharacterCreation"); }
    bool& bAllowCryoFridgeOnSaddleField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowCryoFridgeOnSaddle"); }
    bool& bAllowCustomRecipesField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowCustomRecipes"); }
    bool& bAllowFlyerSpeedLevelingField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowFlyerSpeedLeveling"); }
    bool& bAllowHideDamageSourceFromLogsField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowHideDamageSourceFromLogs"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CustomRecipeSkillMultiplier` +4, medido na build 25090264
    //  (offset absoluto medido: 0x8DC; confianca alta)
    void*& bAllowHostMessagesField() const
    { return BrzCampoAncorado<void*>(this, "CustomRecipeSkillMultiplier", 4); }
    bool& bAllowMultipleAttachedC4Field() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowMultipleAttachedC4"); }
    bool& bAllowPlatformSaddleMultiFloorsField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowPlatformSaddleMultiFloors"); }
    bool& bAllowRaidDinoFeedingField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowRaidDinoFeeding"); }
    bool& bAllowSpeedLevelingField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowSpeedLeveling"); }
    bool& bAllowUnclaimDinosField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAllowUnclaimDinos"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CustomRecipeSkillMultiplier` +5, medido na build 25090264
    //  (offset absoluto medido: 0x8DD; confianca alta)
    bool& bAlwaysAllowHostMessagesField() const
    { return BrzCampoAncorado<bool>(this, "CustomRecipeSkillMultiplier", 5); }
    bool& bAlwaysAllowStructurePickupField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAlwaysAllowStructurePickup"); }
    bool& bAutoPvEField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bAutoPvE"); }
    bool& bCrossARKAllowForeignDinoDownloadsField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bCrossARKAllowForeignDinoDownloads"); }
    bool& bDisableCustomFoldersInTributeInventoriesField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisableCustomFoldersInTributeInventories"); }
    bool& bDisableDinoDecayClaimingField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisableDinoDecayClaiming"); }
    bool& bDisableDinoDecayPvEField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisableDinoDecayPvE"); }
    bool& bDisableDinoItemBlacklistField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisableDinoItemBlacklist"); }
    bool& bDisableGeneTraitsField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisableGeneTraits"); }
    bool& bDisableHexagonStoreField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisableHexagonStore"); }
    bool& bDisableImprintDinoBuffField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisableImprintDinoBuff"); }
    bool& bDisablePhotoModeField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisablePhotoMode"); }
    bool& bDisablePvEGammaField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisablePvEGamma"); }
    bool& bDisableRailgunPVPField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisableRailgunPVP"); }
    bool& bDisableStructureDecayPvEField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisableStructureDecayPvE"); }
    bool& bDisableStructurePlacementCollisionField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisableStructurePlacementCollision"); }
    bool& bDisableTekLegsBoostField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisableTekLegsBoost"); }
    bool& bDisableWirelessCraftingField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisableWirelessCrafting"); }
    bool& bDisableWirelessCraftingForDinosField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisableWirelessCraftingForDinos"); }
    bool& bDisableWirelessCraftingForPlayersField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisableWirelessCraftingForPlayers"); }
    bool& bDisableWirelessCraftingForStructuresField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDisableWirelessCraftingForStructures"); }
    bool& bDoExtinctionEventField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bDoExtinctionEvent"); }
    bool& bEnableDeathTeamSpectatorField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bEnableDeathTeamSpectator"); }
    bool& bEnableExtraStructurePreventionVolumesField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bEnableExtraStructurePreventionVolumes"); }
    bool& bEnablePlayerMoveThroughAllyField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bEnablePlayerMoveThroughAlly"); }
    bool& bEnablePlayerMoveThroughSleepingField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bEnablePlayerMoveThroughSleeping"); }
    bool& bEnablePvPGammaField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bEnablePvPGamma"); }
    bool& bEnableServerDestroyTamesAboveSoftTameLimitField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bEnableServerDestroyTamesAboveSoftTameLimit"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bPreventTribeAlliances` +25, medido na build 25090264
    //  (offset absoluto medido: 0xAA9; confianca alta)
    bool& bFastDecayUnsnappedCoreStructuresField() const
    { return BrzCampoAncorado<bool>(this, "bPreventTribeAlliances", 25); }
    bool& bFlyerPlatformAllowUnalignedDinoBasingField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bFlyerPlatformAllowUnalignedDinoBasing"); }
    bool& bForceAllStructureLockingField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bForceAllStructureLocking"); }
    bool& bForceAllowAllStructuresField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bForceAllowAllStructures"); }
    bool& bForceUseInventoryAppendsField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bForceUseInventoryAppends"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LiveTuningOverloadChunks` +16, medido na build 25090264
    //  (offset absoluto medido: 0xDD8; confianca alta)
    void*& bHasAppliedLiveTuningOverloadsField() const
    { return BrzCampoAncorado<void*>(this, "LiveTuningOverloadChunks", 16); }
    bool& bHexStoreAllowOnlyEngramTradeOptionField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bHexStoreAllowOnlyEngramTradeOption"); }
    bool& bIgnoreLimitMaxStructuresInRangeTypeFlagField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bIgnoreLimitMaxStructuresInRangeTypeFlag"); }
    bool& bIgnoreStructuresPreventionVolumesField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bIgnoreStructuresPreventionVolumes"); }
    bool& bIsArkDownloadsAllowedField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bIsArkDownloadsAllowed"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxPersonalTamedDinos` +21, medido na build 25090264
    //  (offset absoluto medido: 0xA39; confianca alta)
    bool& bIsClientField() const
    { return BrzCampoAncorado<bool>(this, "MaxPersonalTamedDinos", 21); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxPersonalTamedDinos` +20, medido na build 25090264
    //  (offset absoluto medido: 0xA38; confianca alta)
    void*& bIsCustomMapField() const
    { return BrzCampoAncorado<void*>(this, "MaxPersonalTamedDinos", 20); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxPersonalTamedDinos` +22, medido na build 25090264
    //  (offset absoluto medido: 0xA3A; confianca alta)
    void*& bIsDedicatedServerField() const
    { return BrzCampoAncorado<void*>(this, "MaxPersonalTamedDinos", 22); }
    bool& bIsLegacyServerField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bIsLegacyServer"); }
    bool& bIsListenServerField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bIsListenServer"); }
    bool& bIsOfficialServerField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bIsOfficialServer"); }
    bool& bIsServerRunningOnConsoleField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bIsServerRunningOnConsole"); }
    bool& bLimitTurretsInRangeField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bLimitTurretsInRange"); }
    bool& bMapPlayerLocationField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bMapPlayerLocation"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bPreventTribeAlliances` +24, medido na build 25090264
    //  (offset absoluto medido: 0xAA8; confianca alta)
    bool& bOnlyDecayUnsnappedCoreStructuresField() const
    { return BrzCampoAncorado<bool>(this, "bPreventTribeAlliances", 24); }
    bool& bOverideStructurePlatformPreventionField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bOverideStructurePlatformPrevention"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DynamicMusicAudioComponent2` +11, medido na build 25090264
    //  (offset absoluto medido: 0x80B; confianca alta)
    void*& bOverrideCombatMusicField() const
    { return BrzCampoAncorado<void*>(this, "DynamicMusicAudioComponent2", 11); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DynamicMusicAudioComponent2` +8, medido na build 25090264
    //  (offset absoluto medido: 0x808; confianca alta)
    void*& bPlayingDynamicMusicField() const
    { return BrzCampoAncorado<void*>(this, "DynamicMusicAudioComponent2", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DynamicMusicAudioComponent2` +9, medido na build 25090264
    //  (offset absoluto medido: 0x809; confianca alta)
    bool& bPlayingDynamicMusic1Field() const
    { return BrzCampoAncorado<bool>(this, "DynamicMusicAudioComponent2", 9); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DynamicMusicAudioComponent2` +10, medido na build 25090264
    //  (offset absoluto medido: 0x80A; confianca alta)
    void*& bPlayingDynamicMusic2Field() const
    { return BrzCampoAncorado<void*>(this, "DynamicMusicAudioComponent2", 10); }
    bool& bPreventDownloadDinosField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventDownloadDinos"); }
    bool& bPreventDownloadItemsField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventDownloadItems"); }
    bool& bPreventDownloadSurvivorsField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventDownloadSurvivors"); }
    bool& bPreventDroppedItemPhysicsField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventDroppedItemPhysics"); }
    bool& bPreventMateBoostField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventMateBoost"); }
    bool& bPreventOfflinePvPField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventOfflinePvP"); }
    bool& bPreventOutOfTribePinCodeUseField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventOutOfTribePinCodeUse"); }
    bool& bPreventSpawnAnimationsField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventSpawnAnimations"); }
    bool& bPreventStructurePaintingField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventStructurePainting"); }
    bool& bPreventTribeAlliancesField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventTribeAlliances"); }
    bool& bPreventUploadDinosField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventUploadDinos"); }
    bool& bPreventUploadItemsField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventUploadItems"); }
    bool& bPreventUploadSurvivorsField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPreventUploadSurvivors"); }
    bool& bPvEAllowStructuresAtSupplyDropsField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPvEAllowStructuresAtSupplyDrops"); }
    bool& bPvEAllowTribeWarField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPvEAllowTribeWar"); }
    bool& bPvEAllowTribeWarCancelField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPvEAllowTribeWarCancel"); }
    bool& bPvEDisableFriendlyFireField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPvEDisableFriendlyFire"); }
    bool& bPvPDinoDecayField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPvPDinoDecay"); }
    bool& bPvPStructureDecayField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bPvPStructureDecay"); }
    bool& bReachedPlatformStructureLimitField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bReachedPlatformStructureLimit"); }
    bool& bRiderDinoCollisionField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bRiderDinoCollision"); }
    bool& bServerCrosshairField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bServerCrosshair"); }
    bool& bServerForceNoHUDField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bServerForceNoHUD"); }
    bool& bServerHardcoreField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bServerHardcore"); }
    bool& bServerPVEField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bServerPVE"); }
    bool& bServerUseDinoListField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bServerUseDinoList"); }
    bool& bShowCreativeModeField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bShowCreativeMode"); }
    bool& bUseSingleplayerSettingsField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bUseSingleplayerSettings"); }
    bool& bUseTameLimitForStructuresOnlyField() const
    { return *GetNativePointerField<bool*>(this, "AShooterGameState.bUseTameLimitForStructuresOnly"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NetBanlistedMods` +72, medido na build 25090264
    //  (offset absoluto medido: 0xF40; confianca media)
    void*& bWasInCaveField() const
    { return BrzCampoAncorado<void*>(this, "NetBanlistedMods", 72); }
    BitFieldValue<bool, unsigned __int32> DisableRailgunPVP()
    { return { (void*)this, "DisableRailgunPVP" }; }
    BitFieldValue<bool, unsigned __int32> MaxTamedDinos_SoftTameLimit_HasDoneInitialSearch()
    { return { (void*)this, "MaxTamedDinos_SoftTameLimit_HasDoneInitialSearch" }; }
    BitFieldValue<bool, unsigned __int32> bAdminLogging()
    { return { (void*)this, "bAdminLogging" }; }
    BitFieldValue<bool, unsigned __int32> bAllowAnyoneBabyImprintCuddle()
    { return { (void*)this, "bAllowAnyoneBabyImprintCuddle" }; }
    BitFieldValue<bool, unsigned __int32> bAllowBunkerModulesAboveGround()
    { return { (void*)this, "bAllowBunkerModulesAboveGround" }; }
    BitFieldValue<bool, unsigned __int32> bAllowBunkerModulesInPreventionZones()
    { return { (void*)this, "bAllowBunkerModulesInPreventionZones" }; }
    BitFieldValue<bool, unsigned __int32> bAllowBunkersInPreventionZones()
    { return { (void*)this, "bAllowBunkersInPreventionZones" }; }
    BitFieldValue<bool, unsigned __int32> bAllowCaveBuildingPvE()
    { return { (void*)this, "bAllowCaveBuildingPvE" }; }
    BitFieldValue<bool, unsigned __int32> bAllowCaveBuildingPvP()
    { return { (void*)this, "bAllowCaveBuildingPvP" }; }
    BitFieldValue<bool, unsigned __int32> bAllowCharacterCreation()
    { return { (void*)this, "bAllowCharacterCreation" }; }
    BitFieldValue<bool, unsigned __int32> bAllowCryoFridgeOnSaddle()
    { return { (void*)this, "bAllowCryoFridgeOnSaddle" }; }
    BitFieldValue<bool, unsigned __int32> bAllowCustomRecipes()
    { return { (void*)this, "bAllowCustomRecipes" }; }
    BitFieldValue<bool, unsigned __int32> bAllowFlyerSpeedLeveling()
    { return { (void*)this, "bAllowFlyerSpeedLeveling" }; }
    BitFieldValue<bool, unsigned __int32> bAllowForceNetUpdate()
    { return { (void*)this, "bAllowForceNetUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bAllowHideDamageSourceFromLogs()
    { return { (void*)this, "bAllowHideDamageSourceFromLogs" }; }
    BitFieldValue<bool, unsigned __int32> bAllowLowGravitySpin()
    { return { (void*)this, "bAllowLowGravitySpin" }; }
    BitFieldValue<bool, unsigned __int32> bAllowMultipleAttachedC4()
    { return { (void*)this, "bAllowMultipleAttachedC4" }; }
    BitFieldValue<bool, unsigned __int32> bAllowPaintingWithoutResources()
    { return { (void*)this, "bAllowPaintingWithoutResources" }; }
    BitFieldValue<bool, unsigned __int32> bAllowPlatformSaddleMultiFloors()
    { return { (void*)this, "bAllowPlatformSaddleMultiFloors" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRaidDinoFeeding()
    { return { (void*)this, "bAllowRaidDinoFeeding" }; }
    BitFieldValue<bool, unsigned __int32> bAllowSpawnPointSelection()
    { return { (void*)this, "bAllowSpawnPointSelection" }; }
    BitFieldValue<bool, unsigned __int32> bAllowSpeedLeveling()
    { return { (void*)this, "bAllowSpeedLeveling" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTeslaCoilCaveBuildingPVP()
    { return { (void*)this, "bAllowTeslaCoilCaveBuildingPVP" }; }
    BitFieldValue<bool, unsigned __int32> bAllowThirdPersonPlayer()
    { return { (void*)this, "bAllowThirdPersonPlayer" }; }
    BitFieldValue<bool, unsigned __int32> bAllowUnclaimDinos()
    { return { (void*)this, "bAllowUnclaimDinos" }; }
    BitFieldValue<bool, unsigned __int32> bAllowUnclaimDinosConfig()
    { return { (void*)this, "bAllowUnclaimDinosConfig" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysAllowStructurePickup()
    { return { (void*)this, "bAlwaysAllowStructurePickup" }; }
    BitFieldValue<bool, unsigned __int32> bAutoPvE()
    { return { (void*)this, "bAutoPvE" }; }
    BitFieldValue<bool, unsigned __int32> bCharacterPaintingOnlySameTeam()
    { return { (void*)this, "bCharacterPaintingOnlySameTeam" }; }
    BitFieldValue<bool, unsigned __int32> bCrossARKAllowForeignDinoDownloads()
    { return { (void*)this, "bCrossARKAllowForeignDinoDownloads" }; }
    BitFieldValue<bool, unsigned __int32> bDisableCustomFoldersInTributeInventories()
    { return { (void*)this, "bDisableCustomFoldersInTributeInventories" }; }
    BitFieldValue<bool, unsigned __int32> bDisableDefaultDinoTaming()
    { return { (void*)this, "bDisableDefaultDinoTaming" }; }
    BitFieldValue<bool, unsigned __int32> bDisableDinoDecayClaiming()
    { return { (void*)this, "bDisableDinoDecayClaiming" }; }
    BitFieldValue<bool, unsigned __int32> bDisableDinoDecayPvE()
    { return { (void*)this, "bDisableDinoDecayPvE" }; }
    BitFieldValue<bool, unsigned __int32> bDisableDinoItemBlacklist()
    { return { (void*)this, "bDisableDinoItemBlacklist" }; }
    BitFieldValue<bool, unsigned __int32> bDisableGeneTraits()
    { return { (void*)this, "bDisableGeneTraits" }; }
    BitFieldValue<bool, unsigned __int32> bDisableHexagonStore()
    { return { (void*)this, "bDisableHexagonStore" }; }
    BitFieldValue<bool, unsigned __int32> bDisableImprintDinoBuff()
    { return { (void*)this, "bDisableImprintDinoBuff" }; }
    BitFieldValue<bool, unsigned __int32> bDisablePhotoMode()
    { return { (void*)this, "bDisablePhotoMode" }; }
    BitFieldValue<bool, unsigned __int32> bDisablePvEGamma()
    { return { (void*)this, "bDisablePvEGamma" }; }
    BitFieldValue<bool, unsigned __int32> bDisableRailgunPVP()
    { return { (void*)this, "bDisableRailgunPVP" }; }
    BitFieldValue<bool, unsigned __int32> bDisableSpawnAnimations()
    { return { (void*)this, "bDisableSpawnAnimations" }; }
    BitFieldValue<bool, unsigned __int32> bDisableStructureDecayPvE()
    { return { (void*)this, "bDisableStructureDecayPvE" }; }
    BitFieldValue<bool, unsigned __int32> bDisableStructurePlacementCollision()
    { return { (void*)this, "bDisableStructurePlacementCollision" }; }
    BitFieldValue<bool, unsigned __int32> bDisableTekLegsBoost()
    { return { (void*)this, "bDisableTekLegsBoost" }; }
    BitFieldValue<bool, unsigned __int32> bDisableWirelessCrafting()
    { return { (void*)this, "bDisableWirelessCrafting" }; }
    BitFieldValue<bool, unsigned __int32> bDisableWirelessCraftingForDinos()
    { return { (void*)this, "bDisableWirelessCraftingForDinos" }; }
    BitFieldValue<bool, unsigned __int32> bDisableWirelessCraftingForPlayers()
    { return { (void*)this, "bDisableWirelessCraftingForPlayers" }; }
    BitFieldValue<bool, unsigned __int32> bDisableWirelessCraftingForStructures()
    { return { (void*)this, "bDisableWirelessCraftingForStructures" }; }
    BitFieldValue<bool, unsigned __int32> bDoAutomatedModValidationModeration()
    { return { (void*)this, "bDoAutomatedModValidationModeration" }; }
    BitFieldValue<bool, unsigned __int32> bDoCustomCosmeticValidation()
    { return { (void*)this, "bDoCustomCosmeticValidation" }; }
    BitFieldValue<bool, unsigned __int32> bDoExtinctionEvent()
    { return { (void*)this, "bDoExtinctionEvent" }; }
    BitFieldValue<bool, unsigned __int32> bDontEnforceMilestoneTaskOrder()
    { return { (void*)this, "bDontEnforceMilestoneTaskOrder" }; }
    BitFieldValue<bool, unsigned __int32> bEnableDeathTeamSpectator()
    { return { (void*)this, "bEnableDeathTeamSpectator" }; }
    BitFieldValue<bool, unsigned __int32> bEnableExtraStructurePreventionVolumes()
    { return { (void*)this, "bEnableExtraStructurePreventionVolumes" }; }
    BitFieldValue<bool, unsigned __int32> bEnablePlayerMoveThroughAlly()
    { return { (void*)this, "bEnablePlayerMoveThroughAlly" }; }
    BitFieldValue<bool, unsigned __int32> bEnablePlayerMoveThroughSleeping()
    { return { (void*)this, "bEnablePlayerMoveThroughSleeping" }; }
    BitFieldValue<bool, unsigned __int32> bEnablePvPGamma()
    { return { (void*)this, "bEnablePvPGamma" }; }
    BitFieldValue<bool, unsigned __int32> bFlyerPlatformAllowUnalignedDinoBasing()
    { return { (void*)this, "bFlyerPlatformAllowUnalignedDinoBasing" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllStructureLocking()
    { return { (void*)this, "bForceAllStructureLocking" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowAllStructures()
    { return { (void*)this, "bForceAllowAllStructures" }; }
    BitFieldValue<bool, unsigned __int32> bForceGachaUnhappyInCaves()
    { return { (void*)this, "bForceGachaUnhappyInCaves" }; }
    BitFieldValue<bool, unsigned __int32> bForceUseInventoryAppends()
    { return { (void*)this, "bForceUseInventoryAppends" }; }
    BitFieldValue<bool, unsigned __int32> bHexStoreAllowOnlyEngramTradeOption()
    { return { (void*)this, "bHexStoreAllowOnlyEngramTradeOption" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreLimitMaxStructuresInRangeTypeFlag()
    { return { (void*)this, "bIgnoreLimitMaxStructuresInRangeTypeFlag" }; }
    BitFieldValue<bool, unsigned __int32> bIgnorePVPMountedWeaponryRestrictions()
    { return { (void*)this, "bIgnorePVPMountedWeaponryRestrictions" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreStructuresPreventionVolumes()
    { return { (void*)this, "bIgnoreStructuresPreventionVolumes" }; }
    BitFieldValue<bool, unsigned __int32> bIsArkDownloadsAllowed()
    { return { (void*)this, "bIsArkDownloadsAllowed" }; }
    BitFieldValue<bool, unsigned __int32> bIsArkTributeAvailable()
    { return { (void*)this, "bIsArkTributeAvailable" }; }
    BitFieldValue<bool, unsigned __int32> bIsDediServer()
    { return { (void*)this, "bIsDediServer" }; }
    BitFieldValue<bool, unsigned __int32> bIsLegacyServer()
    { return { (void*)this, "bIsLegacyServer" }; }
    BitFieldValue<bool, unsigned __int32> bIsListenServer()
    { return { (void*)this, "bIsListenServer" }; }
    BitFieldValue<bool, unsigned __int32> bIsOfficialServer()
    { return { (void*)this, "bIsOfficialServer" }; }
    BitFieldValue<bool, unsigned __int32> bIsServerRunningOnConsole()
    { return { (void*)this, "bIsServerRunningOnConsole" }; }
    BitFieldValue<bool, unsigned __int32> bLimitBunkersPerTribe()
    { return { (void*)this, "bLimitBunkersPerTribe" }; }
    BitFieldValue<bool, unsigned __int32> bLimitTurretsInRange()
    { return { (void*)this, "bLimitTurretsInRange" }; }
    BitFieldValue<bool, unsigned __int32> bMapPlayerLocation()
    { return { (void*)this, "bMapPlayerLocation" }; }
    BitFieldValue<bool, unsigned __int32> bNeedsPowerToActivateAquaticCompartments()
    { return { (void*)this, "bNeedsPowerToActivateAquaticCompartments" }; }
    BitFieldValue<bool, unsigned __int32> bOverideStructurePlatformPrevention()
    { return { (void*)this, "bOverideStructurePlatformPrevention" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDownloadDinos()
    { return { (void*)this, "bPreventDownloadDinos" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDownloadItems()
    { return { (void*)this, "bPreventDownloadItems" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDownloadSurvivors()
    { return { (void*)this, "bPreventDownloadSurvivors" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDroppedItemPhysics()
    { return { (void*)this, "bPreventDroppedItemPhysics" }; }
    BitFieldValue<bool, unsigned __int32> bPreventMateBoost()
    { return { (void*)this, "bPreventMateBoost" }; }
    BitFieldValue<bool, unsigned __int32> bPreventNonClusterCharacterUploadsWithItems()
    { return { (void*)this, "bPreventNonClusterCharacterUploadsWithItems" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOfflinePvP()
    { return { (void*)this, "bPreventOfflinePvP" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOutOfTribePinCodeUse()
    { return { (void*)this, "bPreventOutOfTribePinCodeUse" }; }
    BitFieldValue<bool, unsigned __int32> bPreventSpawnAnimations()
    { return { (void*)this, "bPreventSpawnAnimations" }; }
    BitFieldValue<bool, unsigned __int32> bPreventStructurePainting()
    { return { (void*)this, "bPreventStructurePainting" }; }
    BitFieldValue<bool, unsigned __int32> bPreventTemplateOnSaddle()
    { return { (void*)this, "bPreventTemplateOnSaddle" }; }
    BitFieldValue<bool, unsigned __int32> bPreventTribeAlliances()
    { return { (void*)this, "bPreventTribeAlliances" }; }
    BitFieldValue<bool, unsigned __int32> bPreventUploadDinos()
    { return { (void*)this, "bPreventUploadDinos" }; }
    BitFieldValue<bool, unsigned __int32> bPreventUploadItems()
    { return { (void*)this, "bPreventUploadItems" }; }
    BitFieldValue<bool, unsigned __int32> bPreventUploadSurvivors()
    { return { (void*)this, "bPreventUploadSurvivors" }; }
    BitFieldValue<bool, unsigned __int32> bPvEAllowStructuresAtSupplyDrops()
    { return { (void*)this, "bPvEAllowStructuresAtSupplyDrops" }; }
    BitFieldValue<bool, unsigned __int32> bPvEAllowTribeWar()
    { return { (void*)this, "bPvEAllowTribeWar" }; }
    BitFieldValue<bool, unsigned __int32> bPvEAllowTribeWarCancel()
    { return { (void*)this, "bPvEAllowTribeWarCancel" }; }
    BitFieldValue<bool, unsigned __int32> bPvEDisableFriendlyFire()
    { return { (void*)this, "bPvEDisableFriendlyFire" }; }
    BitFieldValue<bool, unsigned __int32> bPvPDinoDecay()
    { return { (void*)this, "bPvPDinoDecay" }; }
    BitFieldValue<bool, unsigned __int32> bPvPStructureDecay()
    { return { (void*)this, "bPvPStructureDecay" }; }
    BitFieldValue<bool, unsigned __int32> bReachedPlatformStructureLimit()
    { return { (void*)this, "bReachedPlatformStructureLimit" }; }
    BitFieldValue<bool, unsigned __int32> bRiderDinoCollision()
    { return { (void*)this, "bRiderDinoCollision" }; }
    BitFieldValue<bool, unsigned __int32> bServerCrosshair()
    { return { (void*)this, "bServerCrosshair" }; }
    BitFieldValue<bool, unsigned __int32> bServerForceNoHUD()
    { return { (void*)this, "bServerForceNoHUD" }; }
    BitFieldValue<bool, unsigned __int32> bServerHardcore()
    { return { (void*)this, "bServerHardcore" }; }
    BitFieldValue<bool, unsigned __int32> bServerPVE()
    { return { (void*)this, "bServerPVE" }; }
    BitFieldValue<bool, unsigned __int32> bServerUseDinoList()
    { return { (void*)this, "bServerUseDinoList" }; }
    BitFieldValue<bool, unsigned __int32> bServerUseLocalizedChat()
    { return { (void*)this, "bServerUseLocalizedChat" }; }
    BitFieldValue<bool, unsigned __int32> bServerUseProximityVoiceChat()
    { return { (void*)this, "bServerUseProximityVoiceChat" }; }
    BitFieldValue<bool, unsigned __int32> bShowCreativeMode()
    { return { (void*)this, "bShowCreativeMode" }; }
    BitFieldValue<bool, unsigned __int32> bUseCorpseLocator()
    { return { (void*)this, "bUseCorpseLocator" }; }
    BitFieldValue<bool, unsigned __int32> bUseSingleplayerSettings()
    { return { (void*)this, "bUseSingleplayerSettings" }; }
    BitFieldValue<bool, unsigned __int32> bUseTameLimitForStructuresOnly()
    { return { (void*)this, "bUseTameLimitForStructuresOnly" }; }
    BitFieldValue<bool, unsigned __int32> bVesselSimpleInterpMode()
    { return { (void*)this, "bVesselSimpleInterpMode" }; }

};

#endif  // BRZ_SDK_JOGO_ASHOOTERGAMESTATE_H

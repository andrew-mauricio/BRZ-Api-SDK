// ==========================================================================
//  UVictoryCore — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UVICTORYCORE_H
#define BRZ_SDK_JOGO_UVICTORYCORE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct ACustomActorList;
struct ADirectionalLight;
struct APrimalDinoCharacter;
struct APrimalStructure;
struct AShooterCharacter;
struct AShooterProjectile;
struct UAnimMontage;
struct UAnimSequence;
struct UClass;
struct UFoliageBaseType;
struct UObject;
struct UPrimalAIState;
struct UPrimalHarvestingComponent;
struct UPrimalInventoryComponent;
struct UShooterGameInstance;
struct UShooterGameUserSettings;

#include "UObject.h"

struct UVictoryCore : public UObject
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UVictoryCore"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ActorHasLineOfSight(AActor*,AActor*,AActor*&,UE::Math::TVector<double>,ECollisionCh
    // endereco: casamento de bytes com a build de referencia
    static bool ActorHasLineOfSight(void* a0, void* a1, void* a2, void* a3, int a4, float a5)
    {
        return NativeCall<bool, void*, void*, void*, void*, int, float>(nullptr, "UVictoryCore.ActorHasLineOfSight(AActor*,AActor*,AActor*&,UE::Math::TVector<double>,ECollisionChannel,float)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ActorHasLineOfSightToWorldLocation(AActor*,UE::Math::TVector<double>,AActor*&,EColl
    // endereco: casamento de bytes com a build de referencia
    static bool ActorHasLineOfSightToWorldLocation(void* a0, void* a1, void* a2, int a3, float a4)
    {
        return NativeCall<bool, void*, void*, void*, int, float>(nullptr, "UVictoryCore.ActorHasLineOfSightToWorldLocation(AActor*,UE::Math::TVector<double>,AActor*&,ECollisionChannel,float)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.AddActorToCustomActorList(UObject*,FName,AActor*,bool)
    // endereco: casamento de bytes com a build de referencia
    static void AddActorToCustomActorList(void* a0, unsigned long long a1, void* a2, bool a3)
    {
        NativeCall<void, void*, unsigned long long, void*, bool>(nullptr, "UVictoryCore.AddActorToCustomActorList(UObject*,FName,AActor*,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.AddCombinedFoliageFluidCapsuleInteractionEffect(UObject*,UE::Math::TVector<double>,
    // endereco: casamento de bytes com a build de referencia
    static void AddCombinedFoliageFluidCapsuleInteractionEffect(void* a0, void* a1, void* a2, float a3, void* a4, float a5, float a6, bool a7, bool a8, void* a9, bool a10, void* a11, float a12)
    {
        NativeCall<void, void*, void*, void*, float, void*, float, float, bool, bool, void*, bool, void*, float>(nullptr, "UVictoryCore.AddCombinedFoliageFluidCapsuleInteractionEffect(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,float,UE::Math::TVector<double>,float,float,bool,bool,UNiagaraSystem*,bool,UE::Math::TVector<double>,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.AddCombinedFoliageFluidInteraction(UObject*,UE::Math::TVector<double>,float,UE::Mat
    // endereco: casamento de bytes com a build de referencia
    static void AddCombinedFoliageFluidInteraction(void* a0, void* a1, float a2, void* a3, float a4, float a5, bool a6, bool a7, void* a8, bool a9, void* a10, float a11)
    {
        NativeCall<void, void*, void*, float, void*, float, float, bool, bool, void*, bool, void*, float>(nullptr, "UVictoryCore.AddCombinedFoliageFluidInteraction(UObject*,UE::Math::TVector<double>,float,UE::Math::TVector<double>,float,float,bool,bool,UNiagaraSystem*,bool,UE::Math::TVector<double>,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.AddEnvironmentCapsuleInteractionEffect(UObject*,UE::Math::TVector<double>,UE::Math:
    // endereco: casamento de bytes com a build de referencia
    static void AddEnvironmentCapsuleInteractionEffect(void* a0, void* a1, void* a2, float a3, void* a4, float a5, float a6, bool a7, bool a8, bool a9, void* a10, bool a11, bool a12, void* a13, float a14)
    {
        NativeCall<void, void*, void*, void*, float, void*, float, float, bool, bool, bool, void*, bool, bool, void*, float>(nullptr, "UVictoryCore.AddEnvironmentCapsuleInteractionEffect(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,float,UE::Math::TVector<double>,float,float,bool,bool,bool,UNiagaraSystem*,bool,bool,UE::Math::TVector<double>,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.AddEnvironmentInteractionEffect(UObject*,UE::Math::TVector<double>,float,UE::Math::
    // endereco: casamento de bytes com a build de referencia
    static void AddEnvironmentInteractionEffect(void* a0, void* a1, float a2, void* a3, float a4, float a5, bool a6, bool a7, bool a8, void* a9, bool a10, void* a11, float a12)
    {
        NativeCall<void, void*, void*, float, void*, float, float, bool, bool, bool, void*, bool, void*, float>(nullptr, "UVictoryCore.AddEnvironmentInteractionEffect(UObject*,UE::Math::TVector<double>,float,UE::Math::TVector<double>,float,float,bool,bool,bool,UNiagaraSystem*,bool,UE::Math::TVector<double>,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.AddFluidCapsuleInteractionEffect(UObject*,UE::Math::TVector<double>,UE::Math::TVect
    // endereco: casamento de bytes com a build de referencia
    static void AddFluidCapsuleInteractionEffect(void* a0, void* a1, void* a2, float a3, void* a4, bool a5, bool a6, void* a7, bool a8, void* a9, float a10)
    {
        NativeCall<void, void*, void*, void*, float, void*, bool, bool, void*, bool, void*, float>(nullptr, "UVictoryCore.AddFluidCapsuleInteractionEffect(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,float,UE::Math::TVector<double>,bool,bool,UNiagaraSystem*,bool,UE::Math::TVector<double>,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.AddFluidInteraction(UObject*,UE::Math::TVector<double>,float,UE::Math::TVector<doub
    // endereco: casamento de bytes com a build de referencia
    static void AddFluidInteraction(void* a0, void* a1, float a2, void* a3, bool a4, bool a5, void* a6, bool a7, void* a8, float a9)
    {
        NativeCall<void, void*, void*, float, void*, bool, bool, void*, bool, void*, float>(nullptr, "UVictoryCore.AddFluidInteraction(UObject*,UE::Math::TVector<double>,float,UE::Math::TVector<double>,bool,bool,UNiagaraSystem*,bool,UE::Math::TVector<double>,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.AddFoliageCapsuleInteractionEffect(UObject*,UE::Math::TVector<double>,UE::Math::TVe
    // endereco: casamento de bytes com a build de referencia
    static void AddFoliageCapsuleInteractionEffect(void* a0, void* a1, void* a2, float a3, void* a4, float a5, float a6, bool a7)
    {
        NativeCall<void, void*, void*, void*, float, void*, float, float, bool>(nullptr, "UVictoryCore.AddFoliageCapsuleInteractionEffect(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,float,UE::Math::TVector<double>,float,float,bool)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.AddFoliageInteraction(UObject*,UE::Math::TVector<double>,float,UE::Math::TVector<do
    // endereco: casamento de bytes com a build de referencia
    static void AddFoliageInteraction(void* a0, void* a1, float a2, void* a3, float a4, float a5, bool a6)
    {
        NativeCall<void, void*, void*, float, void*, float, float, bool>(nullptr, "UVictoryCore.AddFoliageInteraction(UObject*,UE::Math::TVector<double>,float,UE::Math::TVector<double>,float,float,bool)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.AdjustScreenPositionWithScreenDPI(UObject*,UE::Math::TVector2<double>&)
    // endereco: casamento de bytes com a build de referencia
    static void AdjustScreenPositionWithScreenDPI(void* a0, void* a1)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.AdjustScreenPositionWithScreenDPI(UObject*,UE::Math::TVector2<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.AmbientInsectsVFXEnabled()
    // endereco: casamento de bytes com a build de referencia
    static bool AmbientInsectsVFXEnabled()
    {
        return NativeCall<bool>(nullptr, "UVictoryCore.AmbientInsectsVFXEnabled()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.AreRotatorsNearlyEqual(UE::Math::TRotator<double>&,UE::Math::TRotator<double>&,floa
    // endereco: casamento de bytes com a build de referencia
    static bool AreRotatorsNearlyEqual(void* a0, void* a1, float a2)
    {
        return NativeCall<bool, void*, void*, float>(nullptr, "UVictoryCore.AreRotatorsNearlyEqual(UE::Math::TRotator<double>&,UE::Math::TRotator<double>&,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.AreTransformsNearlyEqual(UE::Math::TTransform<double>&,UE::Math::TTransform<double>
    // endereco: casamento de bytes com a build de referencia
    static bool AreTransformsNearlyEqual(void* a0, void* a1, float a2)
    {
        return NativeCall<bool, void*, void*, float>(nullptr, "UVictoryCore.AreTransformsNearlyEqual(UE::Math::TTransform<double>&,UE::Math::TTransform<double>&,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.AreVector2DsEqual(UE::Math::TVector2<double>&,UE::Math::TVector2<double>&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static bool AreVector2DsEqual(void* a0, void* a1)
    {
        return NativeCall<bool, void*, void*>(nullptr, "UVictoryCore.AreVector2DsEqual(UE::Math::TVector2<double>&,UE::Math::TVector2<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.AreVector2DsNearlyEqual(UE::Math::TVector2<double>&,UE::Math::TVector2<double>&,flo
    // endereco: cache_pdb_25090264
    static bool AreVector2DsNearlyEqual(void* a0, void* a1, float a2)
    {
        return NativeCall<bool, void*, void*, float>(nullptr, "UVictoryCore.AreVector2DsNearlyEqual(UE::Math::TVector2<double>&,UE::Math::TVector2<double>&,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.AreVectorsNearlyEqual(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float)
    // endereco: cache_pdb_25090264
    static bool AreVectorsNearlyEqual(void* a0, void* a1, float a2)
    {
        return NativeCall<bool, void*, void*, float>(nullptr, "UVictoryCore.AreVectorsNearlyEqual(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.AttemptToSpawnAWildFollower(UWorld*,APrimalDinoCharacter*,TArray<float,TSizedDefaul
    // endereco: casamento de bytes com a build de referencia
    static void AttemptToSpawnAWildFollower(void* retorno, void* a0, void* a1, void* a2)
    {
        NativeCall<void, void*, void*, void*, void*>(nullptr, "UVictoryCore.AttemptToSpawnAWildFollower(UWorld*,APrimalDinoCharacter*,TArray<float,TSizedDefaultAllocator<32>>)", retorno, a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.BPFLerp(float,float,float,bool,bool)
    // endereco: cache_pdb_25090264
    static float BPFLerp(float a0, float a1, float a2, bool a3, bool a4)
    {
        return NativeCall<float, float, float, float, bool, bool>(nullptr, "UVictoryCore.BPFLerp(float,float,float,bool,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.BPFLerpFast(float,float,float)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    static float BPFLerpFast(float a0, float a1, float a2)
    {
        return NativeCall<float, float, float, float>(nullptr, "UVictoryCore.BPFLerpFast(float,float,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.BPFastTrace(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,AActor*,fl
    // endereco: casamento de bytes com a build de referencia
    static bool BPFastTrace(void* a0, void* a1, void* a2, void* a3, float a4)
    {
        return NativeCall<bool, void*, void*, void*, void*, float>(nullptr, "UVictoryCore.BPFastTrace(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,AActor*,float)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.BPFormatAsTime(int,bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    static void BPFormatAsTime(void* retorno, int a0, bool a1, bool a2, bool a3)
    {
        NativeCall<void, void*, int, bool, bool, bool>(nullptr, "UVictoryCore.BPFormatAsTime(int,bool,bool,bool)", retorno, a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.BPGetPrimaryMapName(UObject*)
    // endereco: casamento de bytes com a build de referencia
    static void BPGetPrimaryMapName(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.BPGetPrimaryMapName(UObject*)", retorno, a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.BPGetSkillData(FName&,UObject*)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro BPGetSkillData(const FName& a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "UVictoryCore.BPGetSkillData(FName&,UObject*)", const_cast<FName*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static BrzPonteiro BPGetSkillData(FName* a0, void* a1)
    { return BPGetSkillData(*a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.BPGetWeightedRandomIndex(TArray<float,TSizedDefaultAllocator<32>>&,float)
    // endereco: thunk
    static int BPGetWeightedRandomIndex(void* a0, float a1)
    {
        return NativeCall<int, void*, float>(nullptr, "UVictoryCore.BPGetWeightedRandomIndex(TArray<float,TSizedDefaultAllocator<32>>&,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.BPIsDinoIDEqual(int,int,int,int)
    // endereco: cache_pdb_25090264
    static bool BPIsDinoIDEqual(int a0, int a1, int a2, int a3)
    {
        return NativeCall<bool, int, int, int, int>(nullptr, "UVictoryCore.BPIsDinoIDEqual(int,int,int,int)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.BPIsTemplate(UObject*)
    // endereco: casamento de bytes com a build de referencia
    static bool BPIsTemplate(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UVictoryCore.BPIsTemplate(UObject*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.BPLoadClass(FString&)
    // endereco: casamento de bytes com a build de referencia
    static UClass* BPLoadClass(const FString& a0)
    {
        return NativeCall<UClass*, void*>(nullptr, "UVictoryCore.BPLoadClass(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static UClass* BPLoadClass(FString* a0)
    { return BPLoadClass(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.BPOverlapMultiByObjectType(UWorld*,UE::Math::TVector<double>,float)
    // endereco: casamento de bytes com a build de referencia
    static void BPOverlapMultiByObjectType(void* retorno, void* a0, void* a1, float a2)
    {
        NativeCall<void, void*, void*, void*, float>(nullptr, "UVictoryCore.BPOverlapMultiByObjectType(UWorld*,UE::Math::TVector<double>,float)", retorno, a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.BPProjectWorldToScreenPosition(UE::Math::TVector<double>&,APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    static void BPProjectWorldToScreenPosition(void* retorno, void* a0, void* a1)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "UVictoryCore.BPProjectWorldToScreenPosition(UE::Math::TVector<double>&,APlayerController*)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.BPProjectWorldToScreenPositionRaw(APlayerController*,UE::Math::TVector<double>,UE::
    // endereco: casamento de bytes com a build de referencia
    static bool BPProjectWorldToScreenPositionRaw(void* a0, void* a1, void* a2, void* a3, void* a4, bool a5)
    {
        return NativeCall<bool, void*, void*, void*, void*, void*, bool>(nullptr, "UVictoryCore.BPProjectWorldToScreenPositionRaw(APlayerController*,UE::Math::TVector<double>,UE::Math::TVector2<double>&,UE::Math::TVector<double>&,bool&,bool)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.BPRTransform(UE::Math::TRotator<double>&,UE::Math::TRotator<double>&)
    // endereco: casamento de bytes com a build de referencia
    static void BPRTransform(void* retorno, void* a0, void* a1)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "UVictoryCore.BPRTransform(UE::Math::TRotator<double>&,UE::Math::TRotator<double>&)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.BPRTransformInverse(UE::Math::TRotator<double>&,UE::Math::TRotator<double>&)
    // endereco: casamento de bytes com a build de referencia
    static void BPRTransformInverse(void* retorno, void* a0, void* a1)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "UVictoryCore.BPRTransformInverse(UE::Math::TRotator<double>&,UE::Math::TRotator<double>&)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.BPRequestCreateTribe(AShooterPlayerState*,FString&)
    // endereco: casamento de bytes com a build de referencia
    static void BPRequestCreateTribe(void* a0, const FString& a1)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.BPRequestCreateTribe(AShooterPlayerState*,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void BPRequestCreateTribe(void* a0, FString* a1)
    { BPRequestCreateTribe(a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.BPRequestRenameTribe(AShooterPlayerState*,FString&)
    // endereco: casamento de bytes com a build de referencia
    static void BPRequestRenameTribe(void* a0, const FString& a1)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.BPRequestRenameTribe(AShooterPlayerState*,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void BPRequestRenameTribe(void* a0, FString* a1)
    { BPRequestRenameTribe(a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.BPRotatorLerp(UE::Math::TRotator<double>&,UE::Math::TRotator<double>&,float&)
    // endereco: casamento de bytes com a build de referencia
    static void BPRotatorLerp(void* retorno, void* a0, void* a1, void* a2)
    {
        NativeCall<void, void*, void*, void*, void*>(nullptr, "UVictoryCore.BPRotatorLerp(UE::Math::TRotator<double>&,UE::Math::TRotator<double>&,float&)", retorno, a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.BPServerside_IsPerMapExplorerNoteUnlockedHelper(int,bool&,bool&,AShooterPlayerContr
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro BPServerside_IsPerMapExplorerNoteUnlockedHelper(int a0, void* a1, void* a2, void* a3, void* a4)
    {
        return NativeCall<void*, int, void*, void*, void*, void*>(nullptr, "UVictoryCore.BPServerside_IsPerMapExplorerNoteUnlockedHelper(int,bool&,bool&,AShooterPlayerController*,AShooterCharacter*)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.BPSweepComponent(UPrimitiveComponent*,FHitResult&,UE::Math::TVector<double>,UE::Mat
    // endereco: casamento de bytes com a build de referencia
    static bool BPSweepComponent(void* a0, void* a1, void* a2, void* a3, float a4, float a5, void* a6, bool a7)
    {
        return NativeCall<bool, void*, void*, void*, void*, float, float, void*, bool>(nullptr, "UVictoryCore.BPSweepComponent(UPrimitiveComponent*,FHitResult&,UE::Math::TVector<double>,UE::Math::TVector<double>,float,float,UE::Math::TVector<double>,bool)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.BPVTrace(UWorld*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,FHitResult&,
    // endereco: casamento de bytes com a build de referencia
    static bool BPVTrace(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, int a6, int a7, bool a8, bool a9, void* a10, unsigned long long a11, void* a12, void* a13, void* a14)
    {
        return NativeCall<bool, void*, void*, void*, void*, void*, void*, int, int, bool, bool, void*, unsigned long long, void*, void*, void*>(nullptr, "UVictoryCore.BPVTrace(UWorld*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,FHitResult&,bool&,AActor*,ECollisionChannel,int,bool,bool,UE::Math::TVector<double>&,FName,AActor*,UE::Math::TRotator<double>&,AActor*)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.BlockTillAllStreamingRequestsFinished()
    // endereco: casamento de bytes com a build de referencia
    static void BlockTillAllStreamingRequestsFinished()
    {
        NativeCall<void>(nullptr, "UVictoryCore.BlockTillAllStreamingRequestsFinished()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.BoxFromOriginAndExtent(UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math
    // endereco: casamento de bytes com a build de referencia
    static void BoxFromOriginAndExtent(void* a0, void* a1, void* a2, void* a3)
    {
        NativeCall<void, void*, void*, void*, void*>(nullptr, "UVictoryCore.BoxFromOriginAndExtent(UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.BreakPlayerCharacterConfigStructReplicated(FPrimalPlayerCharacterConfigStructReplic
    // endereco: casamento de bytes com a build de referencia
    static void BreakPlayerCharacterConfigStructReplicated(void* a0, void* a1, void* a2, const FString& a3, void* a4, void* a5, void* a6, void* a7, void* a8, void* a9, void* a10, void* a11, void* a12, int a13, void* a14)
    {
        NativeCall<void, void*, void*, void*, void*, void*, void*, void*, void*, void*, void*, void*, void*, void*, int, void*>(nullptr, "UVictoryCore.BreakPlayerCharacterConfigStructReplicated(FPrimalPlayerCharacterConfigStructReplicated&,bool&,TArray<FLinearColor,TSizedDefaultAllocator<32>>&,FString&,TArray<float,TSizedDefaultAllocator<32>>&,int&,unsignedchar&,unsignedchar&,float&,float&,TArray<unsignedchar,TSizedDefaultAllocator<32>>&,TArray<unsignedchar,TSizedDefaultAllocator<32>>&,TArray<unsignedchar,TSizedDefaultAllocator<32>>&,int,bool&)", a0, a1, a2, const_cast<FString*>(&a3), a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void BreakPlayerCharacterConfigStructReplicated(void* a0, void* a1, void* a2, FString* a3, void* a4, void* a5, void* a6, void* a7, void* a8, void* a9, void* a10, void* a11, void* a12, int a13, void* a14)
    { BreakPlayerCharacterConfigStructReplicated(a0, a1, a2, *a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.CalculateGPSCoordinates(UObject*,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro CalculateGPSCoordinates(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "UVictoryCore.CalculateGPSCoordinates(UObject*,UE::Math::TVector<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.CalculateInterceptPosition(UE::Math::TVector<double>&,UE::Math::TVector<double>&,fl
    // endereco: casamento de bytes com a build de referencia
    static bool CalculateInterceptPosition(void* a0, void* a1, float a2, void* a3, void* a4, void* a5)
    {
        return NativeCall<bool, void*, void*, float, void*, void*, void*>(nullptr, "UVictoryCore.CalculateInterceptPosition(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.CallArbitraryFunction(TSoftObjectPtr<UObject>,FString,UObject*,FFunctionParams_NoAr
    // endereco: casamento de bytes com a build de referencia
    static bool CallArbitraryFunction(void* a0, const FString& a1, void* a2, void* a3)
    {
        return NativeCall<bool, void*, void*, void*, void*>(nullptr, "UVictoryCore.CallArbitraryFunction(TSoftObjectPtr<UObject>,FString,UObject*,FFunctionParams_NoArrays&)", a0, const_cast<FString*>(&a1), a2, a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static bool CallArbitraryFunction(void* a0, FString* a1, void* a2, void* a3)
    { return CallArbitraryFunction(a0, *a1, a2, a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.CallFunctionOnOwningObjectAndActorComponents(TSoftObjectPtr<UObject>,FString,UObjec
    // endereco: casamento de bytes com a build de referencia
    static bool CallFunctionOnOwningObjectAndActorComponents(void* a0, const FString& a1, void* a2, void* a3)
    {
        return NativeCall<bool, void*, void*, void*, void*>(nullptr, "UVictoryCore.CallFunctionOnOwningObjectAndActorComponents(TSoftObjectPtr<UObject>,FString,UObject*,FFunctionParams_NoArrays&)", a0, const_cast<FString*>(&a1), a2, a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static bool CallFunctionOnOwningObjectAndActorComponents(void* a0, FString* a1, void* a2, void* a3)
    { return CallFunctionOnOwningObjectAndActorComponents(a0, *a1, a2, a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.CallGlobalLevelEvent(UObject*,FName)
    // endereco: casamento de bytes com a build de referencia
    static void CallGlobalLevelEvent(void* a0, unsigned long long a1)
    {
        NativeCall<void, void*, unsigned long long>(nullptr, "UVictoryCore.CallGlobalLevelEvent(UObject*,FName)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.CanPlayerCheatSpawnActor(APlayerController*,AActor*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    static bool CanPlayerCheatSpawnActor(void* a0, void* a1)
    {
        return NativeCall<bool, void*, void*>(nullptr, "UVictoryCore.CanPlayerCheatSpawnActor(APlayerController*,AActor*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.CanPlayerCheatSpawnBlueprintPath(APlayerController*,FString&)
    // endereco: casamento de bytes com a build de referencia
    static bool CanPlayerCheatSpawnBlueprintPath(void* a0, const FString& a1)
    {
        return NativeCall<bool, void*, void*>(nullptr, "UVictoryCore.CanPlayerCheatSpawnBlueprintPath(APlayerController*,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static bool CanPlayerCheatSpawnBlueprintPath(void* a0, FString* a1)
    { return CanPlayerCheatSpawnBlueprintPath(a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.CanPlayerCheatSpawnClass(APlayerController*,UClass*)
    // endereco: casamento de bytes com a build de referencia
    static bool CanPlayerCheatSpawnClass(void* a0, void* a1)
    {
        return NativeCall<bool, void*, void*>(nullptr, "UVictoryCore.CanPlayerCheatSpawnClass(APlayerController*,UClass*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.CanSpawnClassInMap(UObject*,UClass*)
    // endereco: casamento de bytes com a build de referencia
    static bool CanSpawnClassInMap(void* a0, void* a1)
    {
        return NativeCall<bool, void*, void*>(nullptr, "UVictoryCore.CanSpawnClassInMap(UObject*,UClass*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.CanSpawnCustomDino(UObject*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,U
    // endereco: casamento de bytes com a build de referencia
    static bool CanSpawnCustomDino(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, float a6, bool a7, bool a8, void* a9, bool a10)
    {
        return NativeCall<bool, void*, void*, void*, void*, void*, void*, float, bool, bool, void*, bool>(nullptr, "UVictoryCore.CanSpawnCustomDino(UObject*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,FDinoSetup&,float,bool,bool,APrimalCharacter*,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.CanTeleport(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    static bool CanTeleport(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UVictoryCore.CanTeleport(APrimalDinoCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.CapsuleOverlapFast(UObject*,AActor*&,UE::Math::TVector<double>&,UE::Math::TRotator<
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro CapsuleOverlapFast(void* a0, void* a1, void* a2, void* a3, float a4, float a5, unsigned char a6, bool a7, bool a8, void* a9, bool a10, float a11, bool a12)
    {
        return NativeCall<void*, void*, void*, void*, void*, float, float, unsigned char, bool, bool, void*, bool, float, bool>(nullptr, "UVictoryCore.CapsuleOverlapFast(UObject*,AActor*&,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,float,float,TEnumAsByte<ECollisionChannel>,bool,bool,AActor*,bool,float,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.CapsuleSweepFast(UObject*,FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro CapsuleSweepFast(void* a0, void* a1, void* a2, void* a3, void* a4, float a5, float a6, unsigned char a7, bool a8, bool a9, void* a10, bool a11, float a12)
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, float, float, unsigned char, bool, bool, void*, bool, float>(nullptr, "UVictoryCore.CapsuleSweepFast(UObject*,FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,float,float,TEnumAsByte<ECollisionChannel>,bool,bool,AActor*,bool,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.CapsuleSweepMulti(UObject*,TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math:
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro CapsuleSweepMulti(void* a0, void* a1, void* a2, void* a3, void* a4, float a5, float a6, void* a7, bool a8, unsigned char a9, bool a10, bool a11, float a12, bool a13)
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, float, float, void*, bool, unsigned char, bool, bool, float, bool>(nullptr, "UVictoryCore.CapsuleSweepMulti(UObject*,TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,float,float,TArray<AActor*,TSizedDefaultAllocator<32>>&,bool,TEnumAsByte<ECollisionChannel>,bool,bool,float,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.CapsuleSweepProjectileArc(UObject*,FProjectileArc&,UE::Math::TRotator<double>&,floa
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro CapsuleSweepProjectileArc(void* a0, void* a1, void* a2, float a3, float a4, bool a5, bool a6, void* a7, void* a8, void* a9, float a10, void* a11, bool a12, float a13, unsigned char a14, bool a15, float a16)
    {
        return NativeCall<void*, void*, void*, void*, float, float, bool, bool, void*, void*, void*, float, void*, bool, float, unsigned char, bool, float>(nullptr, "UVictoryCore.CapsuleSweepProjectileArc(UObject*,FProjectileArc&,UE::Math::TRotator<double>&,float,float,bool,bool,FHitResult&,UE::Math::TVector<double>&,float&,float,TArray<AActor*,TSizedDefaultAllocator<32>>&,bool,float,TEnumAsByte<ECollisionChannel>,bool,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ChangeSaturation(FLinearColor&,float)
    // endereco: casamento de bytes com a build de referencia
    static void ChangeSaturation(void* retorno, void* a0, float a1)
    {
        NativeCall<void, void*, void*, float>(nullptr, "UVictoryCore.ChangeSaturation(FLinearColor&,float)", retorno, a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.ChatMessageClearSpecialChars(FString&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro ChatMessageClearSpecialChars(const FString& a0)
    {
        return NativeCall<void*, void*>(nullptr, "UVictoryCore.ChatMessageClearSpecialChars(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static BrzPonteiro ChatMessageClearSpecialChars(FString* a0)
    { return ChatMessageClearSpecialChars(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ChunkFStringIntoArray(FString,int)
    // endereco: casamento de bytes com a build de referencia
    static void ChunkFStringIntoArray(void* retorno, const FString& a0, int a1)
    {
        NativeCall<void, void*, void*, int>(nullptr, "UVictoryCore.ChunkFStringIntoArray(FString,int)", retorno, const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void ChunkFStringIntoArray(void* retorno, FString* a0, int a1)
    { ChunkFStringIntoArray(retorno, *a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.ClampArrayElemDistanceInversed(TArray<UE::Math::TVector<double>,TSizedDefaultAlloca
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro ClampArrayElemDistanceInversed(void* a0, float a1)
    {
        return NativeCall<void*, void*, float>(nullptr, "UVictoryCore.ClampArrayElemDistanceInversed(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.ClampDirectionByAngle(UE::Math::TVector<double>,UE::Math::TVector<double>,float)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro ClampDirectionByAngle(void* a0, void* a1, float a2)
    {
        return NativeCall<void*, void*, void*, float>(nullptr, "UVictoryCore.ClampDirectionByAngle(UE::Math::TVector<double>,UE::Math::TVector<double>,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ClampItemQualityLevel(UWorld*,UPrimalItem*,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    static bool ClampItemQualityLevel(void* a0, void* a1, bool a2, bool a3)
    {
        return NativeCall<bool, void*, void*, bool, bool>(nullptr, "UVictoryCore.ClampItemQualityLevel(UWorld*,UPrimalItem*,bool,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.ClampLocToBox(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro ClampLocToBox(void* a0, void* a1, void* a2)
    {
        return NativeCall<void*, void*, void*, void*>(nullptr, "UVictoryCore.ClampLocToBox(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.ClampLocToStationaryObjects(UWorld*,UE::Math::TVector<double>&,UE::Math::TVector<do
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro ClampLocToStationaryObjects(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5)
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, void*>(nullptr, "UVictoryCore.ClampLocToStationaryObjects(UWorld*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,AActor*,bool&,AActor*)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ClampLocation(UE::Math::TVector<double>,UE::Math::TVector<double>,float,bool,UObjec
    // endereco: casamento de bytes com a build de referencia
    static void ClampLocation(void* retorno, void* a0, void* a1, float a2, bool a3, void* a4, void* a5)
    {
        NativeCall<void, void*, void*, void*, float, bool, void*, void*>(nullptr, "UVictoryCore.ClampLocation(UE::Math::TVector<double>,UE::Math::TVector<double>,float,bool,UObject*,UE::Math::TVector<double>&)", retorno, a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ClampRotAxis(float,float,float)
    // endereco: casamento de bytes com a build de referencia
    static float ClampRotAxis(float a0, float a1, float a2)
    {
        return NativeCall<float, float, float, float>(nullptr, "UVictoryCore.ClampRotAxis(float,float,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ClassToStringReference(TSubclassOf<UObject>)
    // endereco: casamento de bytes com a build de referencia
    static void ClassToStringReference(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.ClassToStringReference(TSubclassOf<UObject>)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ClipLineInsideBox(UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVe
    // endereco: casamento de bytes com a build de referencia
    static bool ClipLineInsideBox(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5)
    {
        return NativeCall<bool, void*, void*, void*, void*, void*, void*>(nullptr, "UVictoryCore.ClipLineInsideBox(UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ComponentBoundsEncompassesPoint(UPrimitiveComponent*,UE::Math::TVector<double>&,flo
    // endereco: casamento de bytes com a build de referencia
    static bool ComponentBoundsEncompassesPoint(void* a0, void* a1, float a2)
    {
        return NativeCall<bool, void*, void*, float>(nullptr, "UVictoryCore.ComponentBoundsEncompassesPoint(UPrimitiveComponent*,UE::Math::TVector<double>&,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ComponentGetBoundsSphereRadius(UPrimitiveComponent*)
    // endereco: casamento de bytes com a build de referencia
    static float ComponentGetBoundsSphereRadius(void* a0)
    {
        return NativeCall<float, void*>(nullptr, "UVictoryCore.ComponentGetBoundsSphereRadius(UPrimitiveComponent*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UVictoryCore.ConstructExplorerNoteSubtitlesOnWidget(int,UBorder*,FString)
    // endereco: casamento de bytes com a build de referencia
    static void ConstructExplorerNoteSubtitlesOnWidget(int a0, void* a1, const FString& a2)
    {
        NativeCall<void, int, void*, void*>(nullptr, "UVictoryCore.ConstructExplorerNoteSubtitlesOnWidget(int,UBorder*,FString)", a0, a1, const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void ConstructExplorerNoteSubtitlesOnWidget(int a0, void* a1, FString* a2)
    { ConstructExplorerNoteSubtitlesOnWidget(a0, a1, *a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ConstructObjectAutoNameBP(UClass*,UObject*)
    // endereco: casamento de bytes com a build de referencia
    static UObject* ConstructObjectAutoNameBP(void* a0, void* a1)
    {
        return NativeCall<UObject*, void*, void*>(nullptr, "UVictoryCore.ConstructObjectAutoNameBP(UClass*,UObject*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ConstructObjectBP(UClass*,UObject*,FName)
    // endereco: casamento de bytes com a build de referencia
    static UObject* ConstructObjectBP(void* a0, void* a1, unsigned long long a2)
    {
        return NativeCall<UObject*, void*, void*, unsigned long long>(nullptr, "UVictoryCore.ConstructObjectBP(UClass*,UObject*,FName)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ConsumeBonusItemCode()
    // endereco: casamento de bytes com a build de referencia
    static void ConsumeBonusItemCode(void* retorno)
    {
        NativeCall<void, void*>(nullptr, "UVictoryCore.ConsumeBonusItemCode()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.Conv_VectorToVectorNetQuantize(UE::Math::TVector<double>)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static void Conv_VectorToVectorNetQuantize(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.Conv_VectorToVectorNetQuantize(UE::Math::TVector<double>)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ConvertIntToStringWithCommas(int)
    // endereco: casamento de bytes com a build de referencia
    static void ConvertIntToStringWithCommas(void* retorno, int a0)
    {
        NativeCall<void, void*, int>(nullptr, "UVictoryCore.ConvertIntToStringWithCommas(int)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ConvertPlayerCharacterConfigStructReplicated(FPrimalPlayerCharacterConfigStruct)
    // endereco: casamento de bytes com a build de referencia
    static void ConvertPlayerCharacterConfigStructReplicated(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.ConvertPlayerCharacterConfigStructReplicated(FPrimalPlayerCharacterConfigStruct)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ConvertRotatorFromLocalToWorld(UE::Math::TRotator<double>&,UE::Math::TRotator<doubl
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    static void ConvertRotatorFromLocalToWorld(void* retorno, void* a0, void* a1)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "UVictoryCore.ConvertRotatorFromLocalToWorld(UE::Math::TRotator<double>&,UE::Math::TRotator<double>&)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ConvertRotatorFromWorldToLocal(UE::Math::TRotator<double>&,UE::Math::TRotator<doubl
    // endereco: casamento de bytes com a build de referencia
    static void ConvertRotatorFromWorldToLocal(void* retorno, void* a0, void* a1)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "UVictoryCore.ConvertRotatorFromWorldToLocal(UE::Math::TRotator<double>&,UE::Math::TRotator<double>&)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.CooldownTimeRemaining(UObject*,double,float)
    // endereco: casamento de bytes com a build de referencia
    static float CooldownTimeRemaining(void* a0, double a1, float a2)
    {
        return NativeCall<float, void*, double, float>(nullptr, "UVictoryCore.CooldownTimeRemaining(UObject*,double,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.CopyDinoColorSetIndicies(APrimalDinoCharacter*,APrimalDinoCharacter*)
    // endereco: cache_pdb_25090264
    static void CopyDinoColorSetIndicies(void* a0, void* a1)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.CopyDinoColorSetIndicies(APrimalDinoCharacter*,APrimalDinoCharacter*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.CountCharactersResolvingGroundLocationInSphere(UWorld*,UE::Math::TVector<double>&,f
    // endereco: casamento de bytes com a build de referencia
    static int CountCharactersResolvingGroundLocationInSphere(void* a0, void* a1, float a2)
    {
        return NativeCall<int, void*, void*, float>(nullptr, "UVictoryCore.CountCharactersResolvingGroundLocationInSphere(UWorld*,UE::Math::TVector<double>&,float)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UVictoryCore.CreateHotbarSkillItem(FName,UObject*,int,UPrimalInventoryComponent*,int)
    // endereco: casamento de bytes com a build de referencia
    static UObject* CreateHotbarSkillItem(unsigned long long a0, void* a1, int a2, void* a3, int a4)
    {
        return NativeCall<UObject*, unsigned long long, void*, int, void*, int>(nullptr, "UVictoryCore.CreateHotbarSkillItem(FName,UObject*,int,UPrimalInventoryComponent*,int)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.CreateWebSocket(FString,FString,TMap<FString,FString,FDefaultSetAllocator,TDefaultM
    // endereco: casamento de bytes com a build de referencia
    static long long CreateWebSocket(const FString& a0, const FString& a1, void* a2, bool a3, void* a4)
    {
        return NativeCall<long long, void*, void*, void*, bool, void*>(nullptr, "UVictoryCore.CreateWebSocket(FString,FString,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>&,bool,UObject*)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), a2, a3, a4);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static long long CreateWebSocket(FString* a0, FString* a1, void* a2, bool a3, void* a4)
    { return CreateWebSocket(*a0, *a1, a2, a3, a4); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.DeactivateAllCameraModes(AActor*,AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro DeactivateAllCameraModes(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "UVictoryCore.DeactivateAllCameraModes(AActor*,AShooterPlayerController*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.DeactivateMissionForPlayerCharacter(AShooterCharacter*,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=84]]
    static void DeactivateMissionForPlayerCharacter(void* a0, bool a1)
    {
        NativeCall<void, void*, bool>(nullptr, "UVictoryCore.DeactivateMissionForPlayerCharacter(AShooterCharacter*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.DebugDrawProjectileArc(UObject*,FProjectileArc&,float,float,FLinearColor,float,floa
    // endereco: casamento de bytes com a build de referencia
    static void DebugDrawProjectileArc(void* a0, void* a1, float a2, float a3, void* a4, float a5, float a6)
    {
        NativeCall<void, void*, void*, float, float, void*, float, float>(nullptr, "UVictoryCore.DebugDrawProjectileArc(UObject*,FProjectileArc&,float,float,FLinearColor,float,float)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.DebugTamedDinoLimits(UObject*,int)
    // endereco: casamento de bytes com a build de referencia
    static void DebugTamedDinoLimits(void* a0, int a1)
    {
        NativeCall<void, void*, int>(nullptr, "UVictoryCore.DebugTamedDinoLimits(UObject*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.DeferredSpawnAndFireProjectile_Finish(AShooterProjectile*,UE::Math::TTransform<doub
    // endereco: casamento de bytes com a build de referencia
    static void DeferredSpawnAndFireProjectile_Finish(void* a0, void* a1)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.DeferredSpawnAndFireProjectile_Finish(AShooterProjectile*,UE::Math::TTransform<double>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.DeferredSpawnAndFireProjectile_Start(UE::Math::TVector<double>,UE::Math::TVector<do
    // endereco: casamento de bytes com a build de referencia
    static AShooterProjectile* DeferredSpawnAndFireProjectile_Start(void* a0, void* a1, void* a2, void* a3, void* a4, bool a5, void* a6, void* a7, bool a8)
    {
        return NativeCall<AShooterProjectile*, void*, void*, void*, void*, void*, bool, void*, void*, bool>(nullptr, "UVictoryCore.DeferredSpawnAndFireProjectile_Start(UE::Math::TVector<double>,UE::Math::TVector<double>,TSubclassOf<AShooterProjectile>,APrimalCharacter*,UE::Math::TTransform<double>&,bool,AShooterWeapon_Projectile*,TSubclassOf<UPrimalItem>,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.DestroyAllCharactersWithinMissionTileVolumes(UObject*,bool,FName)
    // endereco: casamento de bytes com a build de referencia
    static void DestroyAllCharactersWithinMissionTileVolumes(void* a0, bool a1, unsigned long long a2)
    {
        NativeCall<void, void*, bool, unsigned long long>(nullptr, "UVictoryCore.DestroyAllCharactersWithinMissionTileVolumes(UObject*,bool,FName)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.DestroyExplorerNoteSubtitlesOnWidget(UBorder*)
    // endereco: casamento de bytes com a build de referencia
    static void DestroyExplorerNoteSubtitlesOnWidget(void* a0)
    {
        NativeCall<void, void*>(nullptr, "UVictoryCore.DestroyExplorerNoteSubtitlesOnWidget(UBorder*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.DetectCircleInTrail(TArray<FPointAndTimestamp,TSizedDefaultAllocator<32>>&,FCircleD
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro DetectCircleInTrail(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, float a6, int a7, float a8, float a9, bool a10, float a11, bool a12, bool a13)
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, void*, float, int, float, float, bool, float, bool, bool>(nullptr, "UVictoryCore.DetectCircleInTrail(TArray<FPointAndTimestamp,TSizedDefaultAllocator<32>>&,FCircleDetectionState&,UE::Math::TVector<double>&,float&,UE::Math::TVector<double>&,float&,float,int,float,float,bool,float,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.DinoFoliageCopyRelevantFoliageSettingsToInstancedMesh(UFoliageType_InstancedStaticM
    // endereco: casamento de bytes com a build de referencia
    static void DinoFoliageCopyRelevantFoliageSettingsToInstancedMesh(void* a0, void* a1, bool a2)
    {
        NativeCall<void, void*, void*, bool>(nullptr, "UVictoryCore.DinoFoliageCopyRelevantFoliageSettingsToInstancedMesh(UFoliageType_InstancedStaticMesh*,UHierarchicalInstancedStaticMeshComponent*,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.DisableGCM(AActor*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static void DisableGCM(void* a0)
    {
        NativeCall<void, void*>(nullptr, "UVictoryCore.DisableGCM(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.DoForceStreamComponents(TArray<UMeshComponent*,TSizedDefaultAllocator<32>>&,bool,bo
    // endereco: casamento de bytes com a build de referencia
    static void DoForceStreamComponents(void* a0, bool a1, bool a2)
    {
        NativeCall<void, void*, bool, bool>(nullptr, "UVictoryCore.DoForceStreamComponents(TArray<UMeshComponent*,TSizedDefaultAllocator<32>>&,bool,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.DoesLineSegmentIntersectOceanSurface(UWorld*,UE::Math::TVector<double>&,UE::Math::T
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro DoesLineSegmentIntersectOceanSurface(void* a0, void* a1, void* a2, void* a3)
    {
        return NativeCall<void*, void*, void*, void*, void*>(nullptr, "UVictoryCore.DoesLineSegmentIntersectOceanSurface(UWorld*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.DoesOwnSelectedDLC(EDLCSelector)
    // endereco: casamento de bytes com a build de referencia
    static bool DoesOwnSelectedDLC(int a0)
    {
        return NativeCall<bool, int>(nullptr, "UVictoryCore.DoesOwnSelectedDLC(EDLCSelector)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.DrawDebugCapsule(UObject*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,flo
    // endereco: casamento de bytes com a build de referencia
    static void DrawDebugCapsule(void* a0, void* a1, void* a2, float a3, void* a4, bool a5, float a6, unsigned char a7)
    {
        NativeCall<void, void*, void*, void*, float, void*, bool, float, unsigned char>(nullptr, "UVictoryCore.DrawDebugCapsule(UObject*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,float,FColor&,bool,float,unsignedchar)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.DrawDebugCapsuleWithExtents(UObject*,UE::Math::TVector<double>,UE::Math::TVector<do
    // endereco: casamento de bytes com a build de referencia
    static void DrawDebugCapsuleWithExtents(void* a0, void* a1, void* a2, float a3, void* a4, float a5, bool a6)
    {
        NativeCall<void, void*, void*, void*, float, void*, float, bool>(nullptr, "UVictoryCore.DrawDebugCapsuleWithExtents(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,float,FLinearColor,float,bool)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.EnsureNumericAndChars(FString&,int,bool)
    // endereco: casamento de bytes com a build de referencia
    static bool EnsureNumericAndChars(const FString& a0, int a1, bool a2)
    {
        return NativeCall<bool, void*, int, bool>(nullptr, "UVictoryCore.EnsureNumericAndChars(FString&,int,bool)", const_cast<FString*>(&a0), a1, a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static bool EnsureNumericAndChars(FString* a0, int a1, bool a2)
    { return EnsureNumericAndChars(*a0, a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.EnsureNumericAndCharsEx(FString&,int,bool)
    // endereco: casamento de bytes com a build de referencia
    static bool EnsureNumericAndCharsEx(const FString& a0, int a1, bool a2)
    {
        return NativeCall<bool, void*, int, bool>(nullptr, "UVictoryCore.EnsureNumericAndCharsEx(FString&,int,bool)", const_cast<FString*>(&a0), a1, a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static bool EnsureNumericAndCharsEx(FString* a0, int a1, bool a2)
    { return EnsureNumericAndCharsEx(*a0, a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.EvalProjectileArc(UObject*,FProjectileArc&,float)
    // endereco: casamento de bytes com a build de referencia
    static void EvalProjectileArc(void* retorno, void* a0, void* a1, float a2)
    {
        NativeCall<void, void*, void*, void*, float>(nullptr, "UVictoryCore.EvalProjectileArc(UObject*,FProjectileArc&,float)", retorno, a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ExitApplication()
    // endereco: cache_pdb_25090264
    static void ExitApplication()
    {
        NativeCall<void>(nullptr, "UVictoryCore.ExitApplication()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.FindActorAIState(TSubclassOf<UPrimalAIState>,TArray<FDinoAttackInfo,TSizedDefaultAl
    // endereco: cache_pdb_25090264
    static UPrimalAIState* FindActorAIState(void* a0, void* a1)
    {
        return NativeCall<UPrimalAIState*, void*, void*>(nullptr, "UVictoryCore.FindActorAIState(TSubclassOf<UPrimalAIState>,TArray<FDinoAttackInfo,TSizedDefaultAllocator<32>>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.FindCameraModeSource(AActor*)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro FindCameraModeSource(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "UVictoryCore.FindCameraModeSource(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.FindLocalizedVersionOfFilename(FSoftObjectPath&)
    // endereco: casamento de bytes com a build de referencia
    static void FindLocalizedVersionOfFilename(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.FindLocalizedVersionOfFilename(FSoftObjectPath&)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.FindNearbyCharactersOfClass(UObject*,UE::Math::TVector<double>,float,TSubclassOf<AP
    // endereco: thunk
    static void FindNearbyCharactersOfClass(void* retorno, void* a0, void* a1, float a2, void* a3, bool a4, bool a5)
    {
        NativeCall<void, void*, void*, void*, float, void*, bool, bool>(nullptr, "UVictoryCore.FindNearbyCharactersOfClass(UObject*,UE::Math::TVector<double>,float,TSubclassOf<APrimalCharacter>,bool,bool)", retorno, a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.FindProjectileDirectionToLeadTarget(UObject*,UE::Math::TVector<double>,UE::Math::TV
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro FindProjectileDirectionToLeadTarget(void* a0, void* a1, void* a2, void* a3, float a4, float a5, float a6, float a7)
    {
        return NativeCall<void*, void*, void*, void*, void*, float, float, float, float>(nullptr, "UVictoryCore.FindProjectileDirectionToLeadTarget(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,float,float,float,float)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.FindSocketClosestToDirection(USkeletalMeshComponent*,UE::Math::TVector<double>,TArr
    // endereco: casamento de bytes com a build de referencia
    static unsigned long long FindSocketClosestToDirection(void* a0, void* a1, void* a2, void* a3, bool a4, const FString& a5)
    {
        return NativeCall<unsigned long long, void*, void*, void*, void*, bool, void*>(nullptr, "UVictoryCore.FindSocketClosestToDirection(USkeletalMeshComponent*,UE::Math::TVector<double>,TArray<FName,TSizedDefaultAllocator<32>>&,TArray<float,TSizedDefaultAllocator<32>>&,bool,FString)", a0, a1, a2, a3, a4, const_cast<FString*>(&a5));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static unsigned long long FindSocketClosestToDirection(void* a0, void* a1, void* a2, void* a3, bool a4, FString* a5)
    { return FindSocketClosestToDirection(a0, a1, a2, a3, a4, *a5); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.FindSortingSourceAndDestinationContainers(UWorld*,UE::Math::TVector<double>&,float,
    // endereco: casamento de bytes com a build de referencia
    static void FindSortingSourceAndDestinationContainers(void* a0, void* a1, float a2, int a3, void* a4, int a5, void* a6, bool a7)
    {
        NativeCall<void, void*, void*, float, int, void*, int, void*, bool>(nullptr, "UVictoryCore.FindSortingSourceAndDestinationContainers(UWorld*,UE::Math::TVector<double>&,float,int,FContainerSortingInfo&,int,UPrimalInventoryComponent*,bool)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.FindValidLocationInFrontOfTarget(UE::Math::TVector<double>&,APrimalCharacter*,APrim
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro FindValidLocationInFrontOfTarget(void* a0, void* a1, void* a2, float a3, unsigned char a4, bool a5, void* a6, bool a7, float a8)
    {
        return NativeCall<void*, void*, void*, void*, float, unsigned char, bool, void*, bool, float>(nullptr, "UVictoryCore.FindValidLocationInFrontOfTarget(UE::Math::TVector<double>&,APrimalCharacter*,APrimalCharacter*,float,TEnumAsByte<ECollisionChannel>,bool,AActor*,bool,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.FindValidLocationNextToTarget(UObject*,UE::Math::TVector<double>&,APrimalCharacter*
    // endereco: casamento de bytes com a build de referencia
    static bool FindValidLocationNextToTarget(void* a0, void* a1, void* a2, void* a3, float a4, int a5, void* a6, bool a7, bool a8, float a9, bool a10, bool a11, bool a12)
    {
        return NativeCall<bool, void*, void*, void*, void*, float, int, void*, bool, bool, float, bool, bool, bool>(nullptr, "UVictoryCore.FindValidLocationNextToTarget(UObject*,UE::Math::TVector<double>&,APrimalCharacter*,APrimalCharacter*,float,int,AActor*,bool,bool,float,bool,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.FindWorldActors(UObject*,TArray<AActor*,TSizedDefaultAllocator<32>>&,TSubclassOf<AA
    // endereco: casamento de bytes com a build de referencia
    static bool FindWorldActors(void* a0, void* a1, void* a2, unsigned long long a3)
    {
        return NativeCall<bool, void*, void*, void*, unsigned long long>(nullptr, "UVictoryCore.FindWorldActors(UObject*,TArray<AActor*,TSizedDefaultAllocator<32>>&,TSubclassOf<AActor>,FName)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.FinishSpawning(AActor*)
    // endereco: casamento de bytes com a build de referencia
    static void FinishSpawning(void* a0)
    {
        NativeCall<void, void*>(nullptr, "UVictoryCore.FinishSpawning(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.FlattenDirectionVector(UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    static void FlattenDirectionVector(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.FlattenDirectionVector(UE::Math::TVector<double>)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.FlattenDirectionVectorInLocalSpace(UE::Math::TVector<double>,UE::Math::TRotator<dou
    // endereco: casamento de bytes com a build de referencia
    static void FlattenDirectionVectorInLocalSpace(void* retorno, void* a0, void* a1)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "UVictoryCore.FlattenDirectionVectorInLocalSpace(UE::Math::TVector<double>,UE::Math::TRotator<double>)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.FloatToDouble(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static double FloatToDouble(float a0)
    {
        return NativeCall<double, float>(nullptr, "UVictoryCore.FloatToDouble(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.ForEachAvailableMissionType(UWorld*,TFunction<bool__cdecl(FAvailableMission&)>&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro ForEachAvailableMissionType(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "UVictoryCore.ForEachAvailableMissionType(UWorld*,TFunction<bool__cdecl(FAvailableMission&)>&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UVictoryCore.ForceCreateAndSetMID(USceneComponent*,int,UObject*)
    // endereco: casamento de bytes com a build de referencia
    static UObject* ForceCreateAndSetMID(void* a0, int a1, void* a2)
    {
        return NativeCall<UObject*, void*, int, void*>(nullptr, "UVictoryCore.ForceCreateAndSetMID(USceneComponent*,int,UObject*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ForceDestroyWildDinos(UWorld*const)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static void ForceDestroyWildDinos(void* a0)
    {
        NativeCall<void, void*>(nullptr, "UVictoryCore.ForceDestroyWildDinos(UWorld*const)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ForceLevelStreamingToBlock(UObject*,float)
    // endereco: casamento de bytes com a build de referencia
    static void ForceLevelStreamingToBlock(void* a0, float a1)
    {
        NativeCall<void, void*, float>(nullptr, "UVictoryCore.ForceLevelStreamingToBlock(UObject*,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ForceScreenColorFade(UObject*,FLinearColor,float,float)
    // endereco: casamento de bytes com a build de referencia
    static void ForceScreenColorFade(void* a0, void* a1, float a2, float a3)
    {
        NativeCall<void, void*, void*, float, float>(nullptr, "UVictoryCore.ForceScreenColorFade(UObject*,FLinearColor,float,float)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.ForceUnstasisAtLocation(UWorld*,UE::Math::TVector<double>,float,TSubclassOf<AActor>
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro ForceUnstasisAtLocation(void* a0, void* a1, float a2, void* a3)
    {
        return NativeCall<void*, void*, void*, float, void*>(nullptr, "UVictoryCore.ForceUnstasisAtLocation(UWorld*,UE::Math::TVector<double>,float,TSubclassOf<AActor>)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.FormatAsTime(int,bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    static void FormatAsTime(void* retorno, int a0, bool a1, bool a2, bool a3)
    {
        NativeCall<void, void*, int, bool, bool, bool>(nullptr, "UVictoryCore.FormatAsTime(int,bool,bool,bool)", retorno, a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.FormatAsTimeLong(int)
    // endereco: casamento de bytes com a build de referencia
    static void FormatAsTimeLong(void* retorno, int a0)
    {
        NativeCall<void, void*, int>(nullptr, "UVictoryCore.FormatAsTimeLong(int)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.FormatRichTextWithColorStatic(FString&,FLinearColor)
    // endereco: casamento de bytes com a build de referencia
    static void FormatRichTextWithColorStatic(void* retorno, const FString& a0, void* a1)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "UVictoryCore.FormatRichTextWithColorStatic(FString&,FLinearColor)", retorno, const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void FormatRichTextWithColorStatic(void* retorno, FString* a0, void* a1)
    { FormatRichTextWithColorStatic(retorno, *a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.FuseChunkedFString(TArray<FString,TSizedDefaultAllocator<32>>)
    // endereco: casamento de bytes com a build de referencia
    static void FuseChunkedFString(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.FuseChunkedFString(TArray<FString,TSizedDefaultAllocator<32>>)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GameModeHasPlayerTethering(UObject*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=112]]
    static bool GameModeHasPlayerTethering(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UVictoryCore.GameModeHasPlayerTethering(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GenerateRandomLootItem(TEnumAsByte<ELootItemType::Type>)
    // endereco: casamento de bytes com a build de referencia
    static void GenerateRandomLootItem(void* retorno, unsigned char a0)
    {
        NativeCall<void, void*, unsigned char>(nullptr, "UVictoryCore.GenerateRandomLootItem(TEnumAsByte<ELootItemType::Type>)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GenerateRandomLootItemFromLootTable(TArray<FLootTableEntry,TSizedDefaultAllocator<3
    // endereco: casamento de bytes com a build de referencia
    static void GenerateRandomLootItemFromLootTable(void* retorno, void* a0, void* a1, void* a2)
    {
        NativeCall<void, void*, void*, void*, void*>(nullptr, "UVictoryCore.GenerateRandomLootItemFromLootTable(TArray<FLootTableEntry,TSizedDefaultAllocator<32>>&,int&,float&)", retorno, a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.Generate_UUID()
    // endereco: casamento de bytes com a build de referencia
    static void Generate_UUID(void* retorno)
    {
        NativeCall<void, void*>(nullptr, "UVictoryCore.Generate_UUID()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetActorCoordinateString(AActor*)
    // endereco: casamento de bytes com a build de referencia
    static void GetActorCoordinateString(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.GetActorCoordinateString(AActor*)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetActorInteractionPoint(AShooterCharacter*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    static void GetActorInteractionPoint(void* retorno, void* a0, void* a1)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "UVictoryCore.GetActorInteractionPoint(AShooterCharacter*,AActor*)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetActuallyTrulyLocalPlayerControllers(UObject*)
    // endereco: casamento de bytes com a build de referencia
    static void GetActuallyTrulyLocalPlayerControllers(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.GetActuallyTrulyLocalPlayerControllers(UObject*)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetAllActorsOfClassSoft(UObject*,TSoftClassPtr<AActor>,TArray<AActor*,TSizedDefault
    // endereco: casamento de bytes com a build de referencia
    static void GetAllActorsOfClassSoft(void* a0, void* a1, void* a2)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "UVictoryCore.GetAllActorsOfClassSoft(UObject*,TSoftClassPtr<AActor>,TArray<AActor*,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetAllAnimationSequencesFromMontage(UAnimMontage*,TArray<UAnimationAsset*,TSizedDef
    // endereco: casamento de bytes com a build de referencia
    static bool GetAllAnimationSequencesFromMontage(void* a0, void* a1)
    {
        return NativeCall<bool, void*, void*>(nullptr, "UVictoryCore.GetAllAnimationSequencesFromMontage(UAnimMontage*,TArray<UAnimationAsset*,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetAllAvailableMissions(UObject*)
    // endereco: casamento de bytes com a build de referencia
    static void GetAllAvailableMissions(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.GetAllAvailableMissions(UObject*)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetAllAvailableMissionsAsTags(UObject*)
    // endereco: casamento de bytes com a build de referencia
    static void GetAllAvailableMissionsAsTags(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.GetAllAvailableMissionsAsTags(UObject*)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetAllClassesForModID(__int64,TArray<TSubclassOf<UObject>,TSizedDefaultAllocator<32
    // endereco: casamento de bytes com a build de referencia
    static void GetAllClassesForModID(int a0, void* a1)
    {
        NativeCall<void, int, void*>(nullptr, "UVictoryCore.GetAllClassesForModID(__int64,TArray<TSubclassOf<UObject>,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetAllClassesForModName(FString,TArray<TSubclassOf<UObject>,TSizedDefaultAllocator<
    // endereco: casamento de bytes com a build de referencia
    static void GetAllClassesForModName(const FString& a0, void* a1)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.GetAllClassesForModName(FString,TArray<TSubclassOf<UObject>,TSizedDefaultAllocator<32>>&)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void GetAllClassesForModName(FString* a0, void* a1)
    { GetAllClassesForModName(*a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetAllClassesOfType(TArray<TSubclassOf<UObject>,TSizedDefaultAllocator<32>>&,TSubcl
    // endereco: casamento de bytes com a build de referencia
    static void GetAllClassesOfType(void* a0, void* a1, bool a2, const FString& a3)
    {
        NativeCall<void, void*, void*, bool, void*>(nullptr, "UVictoryCore.GetAllClassesOfType(TArray<TSubclassOf<UObject>,TSizedDefaultAllocator<32>>&,TSubclassOf<UObject>,bool,FString)", a0, a1, a2, const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void GetAllClassesOfType(void* a0, void* a1, bool a2, FString* a3)
    { GetAllClassesOfType(a0, a1, a2, *a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetAllItemsNumber(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    static void GetAllItemsNumber(void* a0)
    {
        NativeCall<void, void*>(nullptr, "UVictoryCore.GetAllItemsNumber(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetAllKeybindsByPredicate(FName)
    // endereco: casamento de bytes com a build de referencia
    static void GetAllKeybindsByPredicate(void* retorno, unsigned long long a0)
    {
        NativeCall<void, void*, unsigned long long>(nullptr, "UVictoryCore.GetAllKeybindsByPredicate(FName)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetAllLocalPlayerCameraManagers(UObject*)
    // endereco: casamento de bytes com a build de referencia
    static void GetAllLocalPlayerCameraManagers(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.GetAllLocalPlayerCameraManagers(UObject*)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetAllLocalPlayerControllers(UObject*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static void GetAllLocalPlayerControllers(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.GetAllLocalPlayerControllers(UObject*)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetAllMissionActors(UObject*)
    // endereco: casamento de bytes com a build de referencia
    static void GetAllMissionActors(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.GetAllMissionActors(UObject*)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetAllMissionDispatcherPoints(UObject*)
    // endereco: casamento de bytes com a build de referencia
    static void GetAllMissionDispatcherPoints(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.GetAllMissionDispatcherPoints(UObject*)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetAllMissionDispatchers(UObject*)
    // endereco: casamento de bytes com a build de referencia
    static void GetAllMissionDispatchers(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.GetAllMissionDispatchers(UObject*)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetAllNumbers(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    static void GetAllNumbers(void* a0)
    {
        NativeCall<void, void*>(nullptr, "UVictoryCore.GetAllNumbers(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetAllStructuresNumber(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    static void GetAllStructuresNumber(void* a0)
    {
        NativeCall<void, void*>(nullptr, "UVictoryCore.GetAllStructuresNumber(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetAllTamesNumber(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    static void GetAllTamesNumber(void* a0)
    {
        NativeCall<void, void*>(nullptr, "UVictoryCore.GetAllTamesNumber(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetAngleBetweenVectors(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Ma
    // endereco: casamento de bytes com a build de referencia
    static float GetAngleBetweenVectors(void* a0, void* a1, void* a2)
    {
        return NativeCall<float, void*, void*, void*>(nullptr, "UVictoryCore.GetAngleBetweenVectors(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetAngleBetweenVectorsPure(UE::Math::TVector<double>,UE::Math::TVector<double>,UE::
    // endereco: casamento de bytes com a build de referencia
    static float GetAngleBetweenVectorsPure(void* a0, void* a1, void* a2)
    {
        return NativeCall<float, void*, void*, void*>(nullptr, "UVictoryCore.GetAngleBetweenVectorsPure(UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetArrayIndicesSorted_Double(TArray<double,TSizedDefaultAllocator<32>>&,bool)
    // endereco: casamento de bytes com a build de referencia
    static void GetArrayIndicesSorted_Double(void* retorno, void* a0, bool a1)
    {
        NativeCall<void, void*, void*, bool>(nullptr, "UVictoryCore.GetArrayIndicesSorted_Double(TArray<double,TSizedDefaultAllocator<32>>&,bool)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetArrayIndicesSorted_Float(TArray<float,TSizedDefaultAllocator<32>>&,bool)
    // endereco: casamento de bytes com a build de referencia
    static void GetArrayIndicesSorted_Float(void* retorno, void* a0, bool a1)
    {
        NativeCall<void, void*, void*, bool>(nullptr, "UVictoryCore.GetArrayIndicesSorted_Float(TArray<float,TSizedDefaultAllocator<32>>&,bool)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetArrayIndicesSorted_Int(TArray<int,TSizedDefaultAllocator<32>>&,bool)
    // endereco: casamento de bytes com a build de referencia
    static void GetArrayIndicesSorted_Int(void* retorno, void* a0, bool a1)
    {
        NativeCall<void, void*, void*, bool>(nullptr, "UVictoryCore.GetArrayIndicesSorted_Int(TArray<int,TSizedDefaultAllocator<32>>&,bool)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetBestHitInfoFromDamageEvent(FDamageEvent&,FHitResult&,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    static void GetBestHitInfoFromDamageEvent(void* a0, void* a1, void* a2)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "UVictoryCore.GetBestHitInfoFromDamageEvent(FDamageEvent&,FHitResult&,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetBlockingMissionTag(AShooterPlayerController*,FName)
    // endereco: casamento de bytes com a build de referencia
    static unsigned long long GetBlockingMissionTag(void* a0, unsigned long long a1)
    {
        return NativeCall<unsigned long long, void*, unsigned long long>(nullptr, "UVictoryCore.GetBlockingMissionTag(AShooterPlayerController*,FName)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.GetBlueprintAssetsDerivedFrom(UClass*,TArray<FAssetData,TSizedDefaultAllocator<32>>
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetBlueprintAssetsDerivedFrom(void* a0, void* a1, unsigned long long a2, const FString& a3)
    {
        return NativeCall<void*, void*, void*, unsigned long long, void*>(nullptr, "UVictoryCore.GetBlueprintAssetsDerivedFrom(UClass*,TArray<FAssetData,TSizedDefaultAllocator<32>>&,FName,FString&)", a0, a1, a2, const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static BrzPonteiro GetBlueprintAssetsDerivedFrom(void* a0, void* a1, unsigned long long a2, FString* a3)
    { return GetBlueprintAssetsDerivedFrom(a0, a1, a2, *a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.GetBlueprintChildClasses(UClass*,TArray<TSoftClassPtr<UClass>,TSizedDefaultAllocato
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetBlueprintChildClasses(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "UVictoryCore.GetBlueprintChildClasses(UClass*,TArray<TSoftClassPtr<UClass>,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetBlueprintComponentsFromCDO(UClass*)
    // endereco: casamento de bytes com a build de referencia
    static void GetBlueprintComponentsFromCDO(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.GetBlueprintComponentsFromCDO(UClass*)", retorno, a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.GetCameraModeMultiUseEntries(AActor*,TArray<FMultiUseEntry,TSizedDefaultAllocator<3
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetCameraModeMultiUseEntries(void* a0, void* a1, bool a2, void* a3)
    {
        return NativeCall<void*, void*, void*, bool, void*>(nullptr, "UVictoryCore.GetCameraModeMultiUseEntries(AActor*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,bool,AShooterPlayerController*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetCharacterCapsuleSize(TSubclassOf<APrimalCharacter>,float&,float&)
    // endereco: casamento de bytes com a build de referencia
    static bool GetCharacterCapsuleSize(void* a0, void* a1, void* a2)
    {
        return NativeCall<bool, void*, void*, void*>(nullptr, "UVictoryCore.GetCharacterCapsuleSize(TSubclassOf<APrimalCharacter>,float&,float&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetClassDefaultObject(UClass*)
    // endereco: casamento de bytes com a build de referencia
    static UObject* GetClassDefaultObject(void* a0)
    {
        return NativeCall<UObject*, void*>(nullptr, "UVictoryCore.GetClassDefaultObject(UClass*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetClassPathName(UObject*)
    // endereco: casamento de bytes com a build de referencia
    static void GetClassPathName(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.GetClassPathName(UObject*)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetClassString(UClass*)
    // endereco: casamento de bytes com a build de referencia
    static void GetClassString(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.GetClassString(UClass*)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetClosestActorArray(UE::Math::TVector<double>,TArray<AActor*,TSizedDefaultAllocato
    // endereco: casamento de bytes com a build de referencia
    static AActor* GetClosestActorArray(void* a0, void* a1)
    {
        return NativeCall<AActor*, void*, void*>(nullptr, "UVictoryCore.GetClosestActorArray(UE::Math::TVector<double>,TArray<AActor*,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetContainersToSort(UWorld*,UE::Math::TVector<double>&,float,float,float,int,UPrima
    // endereco: casamento de bytes com a build de referencia
    static void GetContainersToSort(void* retorno, void* a0, void* a1, float a2, float a3, float a4, int a5, void* a6, bool a7)
    {
        NativeCall<void, void*, void*, void*, float, float, float, int, void*, bool>(nullptr, "UVictoryCore.GetContainersToSort(UWorld*,UE::Math::TVector<double>&,float,float,float,int,UPrimalInventoryComponent*,bool)", retorno, a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetControllerMovementInputs(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    static void GetControllerMovementInputs(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.GetControllerMovementInputs(APlayerController*)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetCryoDinoData(UObject*,APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    static void GetCryoDinoData(void* retorno, void* a0, void* a1)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "UVictoryCore.GetCryoDinoData(UObject*,APrimalDinoCharacter*)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetCustomActorList(UObject*,FName)
    // endereco: casamento de bytes com a build de referencia
    static ACustomActorList* GetCustomActorList(void* a0, unsigned long long a1)
    {
        return NativeCall<ACustomActorList*, void*, unsigned long long>(nullptr, "UVictoryCore.GetCustomActorList(UObject*,FName)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetCustomDinoSpawnLocation(UObject*,UE::Math::TVector<double>&,UE::Math::TRotator<d
    // endereco: casamento de bytes com a build de referencia
    static void GetCustomDinoSpawnLocation(void* retorno, void* a0, void* a1, void* a2, void* a3, float a4, bool a5)
    {
        NativeCall<void, void*, void*, void*, void*, void*, float, bool>(nullptr, "UVictoryCore.GetCustomDinoSpawnLocation(UObject*,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,FDinoSetup&,float,bool)", retorno, a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetDLCDependenciesForMods(TArray<__int64,TSizedDefaultAllocator<32>>)
    // endereco: casamento de bytes com a build de referencia
    static void GetDLCDependenciesForMods(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.GetDLCDependenciesForMods(TArray<__int64,TSizedDefaultAllocator<32>>)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetDLCNameFromSelector(EDLCSelector)
    // endereco: casamento de bytes com a build de referencia
    static void GetDLCNameFromSelector(void* retorno, int a0)
    {
        NativeCall<void, void*, int>(nullptr, "UVictoryCore.GetDLCNameFromSelector(EDLCSelector)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetDLCSelectorFromName(FString)
    // endereco: casamento de bytes com a build de referencia
    static int GetDLCSelectorFromName(const FString& a0)
    {
        return NativeCall<int, void*>(nullptr, "UVictoryCore.GetDLCSelectorFromName(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static int GetDLCSelectorFromName(FString* a0)
    { return GetDLCSelectorFromName(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetDefaultCharacterName(bool)
    // endereco: casamento de bytes com a build de referencia
    static void GetDefaultCharacterName(void* retorno, bool a0)
    {
        NativeCall<void, void*, bool>(nullptr, "UVictoryCore.GetDefaultCharacterName(bool)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetDefaultObject(UObject*)
    // endereco: casamento de bytes com a build de referencia
    static UObject* GetDefaultObject(void* a0)
    {
        return NativeCall<UObject*, void*>(nullptr, "UVictoryCore.GetDefaultObject(UObject*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UVictoryCore.GetDefaultSkillCooldownDuration(FName,int)
    // endereco: casamento de bytes com a build de referencia
    static float GetDefaultSkillCooldownDuration(unsigned long long a0, int a1)
    {
        return NativeCall<float, unsigned long long, int>(nullptr, "UVictoryCore.GetDefaultSkillCooldownDuration(FName,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetDinoAssetData(FName&,TSoftClassPtr<UObject>&,FTopLevelAssetPath&)
    // endereco: casamento de bytes com a build de referencia
    static bool GetDinoAssetData(const FName& a0, void* a1, void* a2)
    {
        return NativeCall<bool, void*, void*, void*>(nullptr, "UVictoryCore.GetDinoAssetData(FName&,TSoftClassPtr<UObject>&,FTopLevelAssetPath&)", const_cast<FName*>(&a0), a1, a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static bool GetDinoAssetData(FName* a0, void* a1, void* a2)
    { return GetDinoAssetData(*a0, a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetDinoCharacterByID(UObject*,int,int,bool)
    // endereco: casamento de bytes com a build de referencia
    static APrimalDinoCharacter* GetDinoCharacterByID(void* a0, int a1, int a2, bool a3)
    {
        return NativeCall<APrimalDinoCharacter*, void*, int, int, bool>(nullptr, "UVictoryCore.GetDinoCharacterByID(UObject*,int,int,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetDinoCharacterByLongDinoID(UObject*,FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    static APrimalDinoCharacter* GetDinoCharacterByLongDinoID(void* a0, const FString& a1, bool a2)
    {
        return NativeCall<APrimalDinoCharacter*, void*, void*, bool>(nullptr, "UVictoryCore.GetDinoCharacterByLongDinoID(UObject*,FString&,bool)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static APrimalDinoCharacter* GetDinoCharacterByLongDinoID(void* a0, FString* a1, bool a2)
    { return GetDinoCharacterByLongDinoID(a0, *a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetDinoSetupCapsuleSize(FDinoSetup&,float&,float&)
    // endereco: casamento de bytes com a build de referencia
    static bool GetDinoSetupCapsuleSize(void* a0, void* a1, void* a2)
    {
        return NativeCall<bool, void*, void*, void*>(nullptr, "UVictoryCore.GetDinoSetupCapsuleSize(FDinoSetup&,float&,float&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetDinoSetupDinoType(FDinoSetup&)
    // endereco: casamento de bytes com a build de referencia
    static void GetDinoSetupDinoType(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.GetDinoSetupDinoType(FDinoSetup&)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetDinoSetupGroup_ByName(FName,TArray<FDinoSetupGroup,TSizedDefaultAllocator<32>>&,
    // endereco: casamento de bytes com a build de referencia
    static bool GetDinoSetupGroup_ByName(unsigned long long a0, void* a1, void* a2)
    {
        return NativeCall<bool, unsigned long long, void*, void*>(nullptr, "UVictoryCore.GetDinoSetupGroup_ByName(FName,TArray<FDinoSetupGroup,TSizedDefaultAllocator<32>>&,FDinoSetupGroup&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetDinoSetupGroup_WeightedRandom(TArray<FDinoSetupGroup,TSizedDefaultAllocator<32>>
    // endereco: casamento de bytes com a build de referencia
    static bool GetDinoSetupGroup_WeightedRandom(void* a0, void* a1)
    {
        return NativeCall<bool, void*, void*>(nullptr, "UVictoryCore.GetDinoSetupGroup_WeightedRandom(TArray<FDinoSetupGroup,TSizedDefaultAllocator<32>>&,FDinoSetupGroup&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetDinoSetupPointsPerStat(FDinoSetup&,TEnumAsByte<EPrimalCharacterStatusValue::Type
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    static int GetDinoSetupPointsPerStat(void* a0, unsigned char a1, bool a2)
    {
        return NativeCall<int, void*, unsigned char, bool>(nullptr, "UVictoryCore.GetDinoSetupPointsPerStat(FDinoSetup&,TEnumAsByte<EPrimalCharacterStatusValue::Type>,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetDinoStaticClass(FDinoSetup&)
    // endereco: casamento de bytes com a build de referencia
    static UClass* GetDinoStaticClass(void* a0)
    {
        return NativeCall<UClass*, void*>(nullptr, "UVictoryCore.GetDinoStaticClass(FDinoSetup&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UVictoryCore.GetDinoWildLevelPercent(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    static float GetDinoWildLevelPercent(void* a0)
    {
        return NativeCall<float, void*>(nullptr, "UVictoryCore.GetDinoWildLevelPercent(APrimalDinoCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetDistanceToCollision(UPrimitiveComponent*,UE::Math::TVector<double>,UE::Math::TVe
    // endereco: casamento de bytes com a build de referencia
    static float GetDistanceToCollision(void* a0, void* a1, void* a2)
    {
        return NativeCall<float, void*, void*, void*>(nullptr, "UVictoryCore.GetDistanceToCollision(UPrimitiveComponent*,UE::Math::TVector<double>,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.GetDistanceToShore(UWorld*,UE::Math::TVector2<double>)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetDistanceToShore(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "UVictoryCore.GetDistanceToShore(UWorld*,UE::Math::TVector2<double>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetEnabledModsDisplay(TMap<__int64,FString,FDefaultSetAllocator,TDefaultMapHashable
    // endereco: casamento de bytes com a build de referencia
    static void GetEnabledModsDisplay(void* a0, bool a1)
    {
        NativeCall<void, void*, bool>(nullptr, "UVictoryCore.GetEnabledModsDisplay(TMap<__int64,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FString,0>>&,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetEnabledModsMount(TMap<__int64,FString,FDefaultSetAllocator,TDefaultMapHashableKe
    // endereco: casamento de bytes com a build de referencia
    static void GetEnabledModsMount(void* a0, bool a1)
    {
        NativeCall<void, void*, bool>(nullptr, "UVictoryCore.GetEnabledModsMount(TMap<__int64,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FString,0>>&,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UVictoryCore.GetExplorerNoteSubtitlesMediaTimeOnWidget(UBorder*)
    // endereco: casamento de bytes com a build de referencia
    static float GetExplorerNoteSubtitlesMediaTimeOnWidget(void* a0)
    {
        return NativeCall<float, void*>(nullptr, "UVictoryCore.GetExplorerNoteSubtitlesMediaTimeOnWidget(UBorder*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetFirstDirectionalLight(UObject*)
    // endereco: casamento de bytes com a build de referencia
    static ADirectionalLight* GetFirstDirectionalLight(void* a0)
    {
        return NativeCall<ADirectionalLight*, void*>(nullptr, "UVictoryCore.GetFirstDirectionalLight(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetFoliageScaleFromSettings(bool&,EFoliageScaling&,float&,float&,float&,float&,floa
    // endereco: casamento de bytes com a build de referencia
    static void GetFoliageScaleFromSettings(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8, void* a9, void* a10, void* a11)
    {
        NativeCall<void, void*, void*, void*, void*, void*, void*, void*, void*, void*, void*, void*, void*>(nullptr, "UVictoryCore.GetFoliageScaleFromSettings(bool&,EFoliageScaling&,float&,float&,float&,float&,float&,float&,float&,float&,float&,UFoliageType_InstancedStaticMesh*)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetFoliageTypeRefFromFoliageStaticMeshComp(UHierarchicalInstancedStaticMeshComponen
    // endereco: casamento de bytes com a build de referencia
    static UFoliageBaseType* GetFoliageTypeRefFromFoliageStaticMeshComp(void* a0)
    {
        return NativeCall<UFoliageBaseType*, void*>(nullptr, "UVictoryCore.GetFoliageTypeRefFromFoliageStaticMeshComp(UHierarchicalInstancedStaticMeshComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetFurthestNonObstructedLocationAroundPoint(UObject*,UE::Math::TVector<double>,TArr
    // endereco: casamento de bytes com a build de referencia
    static bool GetFurthestNonObstructedLocationAroundPoint(void* a0, void* a1, void* a2, void* a3, float a4, float a5, float a6, int a7, int a8, float a9, float a10, bool a11, float a12)
    {
        return NativeCall<bool, void*, void*, void*, void*, float, float, float, int, int, float, float, bool, float>(nullptr, "UVictoryCore.GetFurthestNonObstructedLocationAroundPoint(UObject*,UE::Math::TVector<double>,TArray<AActor*,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,float,float,float,int,int,float,float,bool,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetGameInstance(UObject*)
    // endereco: casamento de bytes com a build de referencia
    static UShooterGameInstance* GetGameInstance(void* a0)
    {
        return NativeCall<UShooterGameInstance*, void*>(nullptr, "UVictoryCore.GetGameInstance(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetGrinderReplacementItem(TSubclassOf<UPrimalItem>)
    // endereco: casamento de bytes com a build de referencia
    static void GetGrinderReplacementItem(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.GetGrinderReplacementItem(TSubclassOf<UPrimalItem>)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetGroundLocation(UObject*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE
    // endereco: casamento de bytes com a build de referencia
    static bool GetGroundLocation(void* a0, void* a1, void* a2, void* a3, void* a4, bool a5, bool a6)
    {
        return NativeCall<bool, void*, void*, void*, void*, void*, bool, bool>(nullptr, "UVictoryCore.GetGroundLocation(UObject*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool,bool)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetHarvestingComponentFromHitBodyIndex(UInstancedStaticMeshComponent*,int)
    // endereco: casamento de bytes com a build de referencia
    static UPrimalHarvestingComponent* GetHarvestingComponentFromHitBodyIndex(void* a0, int a1)
    {
        return NativeCall<UPrimalHarvestingComponent*, void*, int>(nullptr, "UVictoryCore.GetHarvestingComponentFromHitBodyIndex(UInstancedStaticMeshComponent*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetHitBoneNameFromDamageEvent(APrimalCharacter*,AController*,FDamageEvent&,bool,FHi
    // endereco: casamento de bytes com a build de referencia
    static unsigned long long GetHitBoneNameFromDamageEvent(void* a0, void* a1, void* a2, bool a3, void* a4, unsigned long long a5)
    {
        return NativeCall<unsigned long long, void*, void*, void*, bool, void*, unsigned long long>(nullptr, "UVictoryCore.GetHitBoneNameFromDamageEvent(APrimalCharacter*,AController*,FDamageEvent&,bool,FHitResult&,FName)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetHumanReadableDateTime(FDateTime&)
    // endereco: casamento de bytes com a build de referencia
    static void GetHumanReadableDateTime(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.GetHumanReadableDateTime(FDateTime&)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetItemClassFromItemSetup(FItemSetup&)
    // endereco: casamento de bytes com a build de referencia
    static UClass* GetItemClassFromItemSetup(void* a0)
    {
        return NativeCall<UClass*, void*>(nullptr, "UVictoryCore.GetItemClassFromItemSetup(FItemSetup&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetKeyName(FKey)
    // endereco: casamento de bytes com a build de referencia
    static void GetKeyName(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.GetKeyName(FKey)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetKeyNameFromActionName(FName)
    // endereco: casamento de bytes com a build de referencia
    static void GetKeyNameFromActionName(void* retorno, unsigned long long a0)
    {
        NativeCall<void, void*, unsigned long long>(nullptr, "UVictoryCore.GetKeyNameFromActionName(FName)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetKeybindByPredicate(FName)
    // endereco: casamento de bytes com a build de referencia
    static void GetKeybindByPredicate(void* retorno, unsigned long long a0)
    {
        NativeCall<void, void*, unsigned long long>(nullptr, "UVictoryCore.GetKeybindByPredicate(FName)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetKeybindDisplayName(FName)
    // endereco: casamento de bytes com a build de referencia
    static void GetKeybindDisplayName(void* retorno, unsigned long long a0)
    {
        NativeCall<void, void*, unsigned long long>(nullptr, "UVictoryCore.GetKeybindDisplayName(FName)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetKeybindName(FName)
    // endereco: casamento de bytes com a build de referencia
    static unsigned long long GetKeybindName(unsigned long long a0)
    {
        return NativeCall<unsigned long long, unsigned long long>(nullptr, "UVictoryCore.GetKeybindName(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetLastHostedMapPlayed()
    // endereco: casamento de bytes com a build de referencia
    static void GetLastHostedMapPlayed(void* retorno)
    {
        NativeCall<void, void*>(nullptr, "UVictoryCore.GetLastHostedMapPlayed()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetLastMapPlayed()
    // endereco: casamento de bytes com a build de referencia
    static void GetLastMapPlayed(void* retorno)
    {
        NativeCall<void, void*>(nullptr, "UVictoryCore.GetLastMapPlayed()", retorno);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UVictoryCore.GetLastTimeRequestedTradeData(UObject*)
    // endereco: casamento de bytes com a build de referencia
    static double GetLastTimeRequestedTradeData(void* a0)
    {
        return NativeCall<double, void*>(nullptr, "UVictoryCore.GetLastTimeRequestedTradeData(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetLaunchVelocityAndGravity(UE::Math::TVector<double>,UE::Math::TVector<double>,flo
    // endereco: casamento de bytes com a build de referencia
    static void GetLaunchVelocityAndGravity(void* a0, void* a1, float a2, float a3, void* a4, void* a5)
    {
        NativeCall<void, void*, void*, float, float, void*, void*>(nullptr, "UVictoryCore.GetLaunchVelocityAndGravity(UE::Math::TVector<double>,UE::Math::TVector<double>,float,float,UE::Math::TVector<double>&,float&)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetLoadedStreamingLevelNames()
    // endereco: casamento de bytes com a build de referencia
    static void GetLoadedStreamingLevelNames(void* retorno)
    {
        NativeCall<void, void*>(nullptr, "UVictoryCore.GetLoadedStreamingLevelNames()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetLocaleSpecificAudio(TArray<FLocalizedSoundCueEntry,TSizedDefaultAllocator<32>>&,
    // endereco: casamento de bytes com a build de referencia
    static bool GetLocaleSpecificAudio(void* a0, void* a1, const FString& a2)
    {
        return NativeCall<bool, void*, void*, void*>(nullptr, "UVictoryCore.GetLocaleSpecificAudio(TArray<FLocalizedSoundCueEntry,TSizedDefaultAllocator<32>>&,FLocalizedSoundCueEntry&,FString&)", a0, a1, const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static bool GetLocaleSpecificAudio(void* a0, void* a1, FString* a2)
    { return GetLocaleSpecificAudio(a0, a1, *a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetLocaleSpecificSoundWaveAnimTexturePairArrays(TArray<FLocalizedSoundWaveAnimTextu
    // endereco: casamento de bytes com a build de referencia
    static bool GetLocaleSpecificSoundWaveAnimTexturePairArrays(void* a0, void* a1, void* a2, const FString& a3)
    {
        return NativeCall<bool, void*, void*, void*, void*>(nullptr, "UVictoryCore.GetLocaleSpecificSoundWaveAnimTexturePairArrays(TArray<FLocalizedSoundWaveAnimTexturePairArrays,TSizedDefaultAllocator<32>>&,FLocalizedSoundWaveAnimTexturePairArrays&,bool&,FString&)", a0, a1, a2, const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static bool GetLocaleSpecificSoundWaveAnimTexturePairArrays(void* a0, void* a1, void* a2, FString* a3)
    { return GetLocaleSpecificSoundWaveAnimTexturePairArrays(a0, a1, a2, *a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetMatineeLength(AMatineeActor*)
    // endereco: cache_pdb_25090264
    static float GetMatineeLength(void* a0)
    {
        return NativeCall<float, void*>(nullptr, "UVictoryCore.GetMatineeLength(AMatineeActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.GetMinimapMarkAssodicatedItemID(FMinimapMark&)
    // endereco: thunk
    static BrzPonteiro GetMinimapMarkAssodicatedItemID(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "UVictoryCore.GetMinimapMarkAssodicatedItemID(FMinimapMark&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetMissionActorOfType(UObject*,TSubclassOf<AMissionType>,bool)
    // endereco: casamento de bytes com a build de referencia
    static AActor* GetMissionActorOfType(void* a0, void* a1, bool a2)
    {
        return NativeCall<AActor*, void*, void*, bool>(nullptr, "UVictoryCore.GetMissionActorOfType(UObject*,TSubclassOf<AMissionType>,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetMissionActorOfTypes(UObject*,TArray<TSubclassOf<AMissionType>,TSizedDefaultAlloc
    // endereco: casamento de bytes com a build de referencia
    static AActor* GetMissionActorOfTypes(void* a0, void* a1)
    {
        return NativeCall<AActor*, void*, void*>(nullptr, "UVictoryCore.GetMissionActorOfTypes(UObject*,TArray<TSubclassOf<AMissionType>,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetMissionNetworkStartTime(UObject*,FName)
    // endereco: casamento de bytes com a build de referencia
    static double GetMissionNetworkStartTime(void* a0, unsigned long long a1)
    {
        return NativeCall<double, void*, unsigned long long>(nullptr, "UVictoryCore.GetMissionNetworkStartTime(UObject*,FName)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetModCompatibilityVersion()
    // endereco: casamento de bytes com a build de referencia
    static void GetModCompatibilityVersion(void* retorno)
    {
        NativeCall<void, void*>(nullptr, "UVictoryCore.GetModCompatibilityVersion()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetMontageFromAnimAsset(UAnimationAsset*,UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    static UAnimMontage* GetMontageFromAnimAsset(void* a0, void* a1)
    {
        return NativeCall<UAnimMontage*, void*, void*>(nullptr, "UVictoryCore.GetMontageFromAnimAsset(UAnimationAsset*,UE::Math::TVector<double>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetMontageGroupName(UAnimMontage*)
    // endereco: casamento de bytes com a build de referencia
    static unsigned long long GetMontageGroupName(void* a0)
    {
        return NativeCall<unsigned long long, void*>(nullptr, "UVictoryCore.GetMontageGroupName(UAnimMontage*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.GetNPCManagerSpawnableDinosAtLocation(UWorld*,UE::Math::TVector<double>,TSet<TSoftC
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetNPCManagerSpawnableDinosAtLocation(void* a0, void* a1, void* a2, float a3)
    {
        return NativeCall<void*, void*, void*, void*, float>(nullptr, "UVictoryCore.GetNPCManagerSpawnableDinosAtLocation(UWorld*,UE::Math::TVector<double>,TSet<TSoftClassPtr<APrimalDinoCharacter>,DefaultKeyFuncs<TSoftClassPtr<APrimalDinoCharacter>,0>,FDefaultSetAllocator>&,float)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetNeareastTamedDinoCharacters(UObject*,int,UE::Math::TVector<double>&,float,TArray
    // endereco: casamento de bytes com a build de referencia
    static void GetNeareastTamedDinoCharacters(void* retorno, void* a0, int a1, void* a2, float a3, void* a4)
    {
        NativeCall<void, void*, void*, int, void*, float, void*>(nullptr, "UVictoryCore.GetNeareastTamedDinoCharacters(UObject*,int,UE::Math::TVector<double>&,float,TArray<APrimalCharacter*,TSizedDefaultAllocator<32>>)", retorno, a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetNearestAllieDDino(UObject*,int,UE::Math::TVector<double>&,TArray<AActor*,TSizedD
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=227+grafo=4/4]]
    static AActor* GetNearestAllieDDino(void* a0, int a1, void* a2, void* a3)
    {
        return NativeCall<AActor*, void*, int, void*, void*>(nullptr, "UVictoryCore.GetNearestAllieDDino(UObject*,int,UE::Math::TVector<double>&,TArray<AActor*,TSizedDefaultAllocator<32>>)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.GetNearestAlliedControlledPlayer(UObject*,int,UE::Math::TVector<double>&,TArray<AAc
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro GetNearestAlliedControlledPlayer(void* a0, int a1, void* a2, void* a3)
    {
        return NativeCall<void*, void*, int, void*, void*>(nullptr, "UVictoryCore.GetNearestAlliedControlledPlayer(UObject*,int,UE::Math::TVector<double>&,TArray<AActor*,TSizedDefaultAllocator<32>>)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetNearestAlliedDinoElsePlayer(UObject*,int,UE::Math::TVector<double>&,TArray<AActo
    // endereco: casamento de bytes com a build de referencia
    static AActor* GetNearestAlliedDinoElsePlayer(void* a0, int a1, void* a2, void* a3)
    {
        return NativeCall<AActor*, void*, int, void*, void*>(nullptr, "UVictoryCore.GetNearestAlliedDinoElsePlayer(UObject*,int,UE::Math::TVector<double>&,TArray<AActor*,TSizedDefaultAllocator<32>>)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetNearestAlliedPlayer(UObject*,int,UE::Math::TVector<double>&,TArray<AActor*,TSize
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=224+chamadores=2+grafo=4/4]]
    static AActor* GetNearestAlliedPlayer(void* a0, int a1, void* a2, void* a3)
    {
        return NativeCall<AActor*, void*, int, void*, void*>(nullptr, "UVictoryCore.GetNearestAlliedPlayer(UObject*,int,UE::Math::TVector<double>&,TArray<AActor*,TSizedDefaultAllocator<32>>)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetNearestAnimSequenceFromBlendSpace(UE::Math::TVector<double>,UBlendSpace*)
    // endereco: casamento de bytes com a build de referencia
    static UAnimSequence* GetNearestAnimSequenceFromBlendSpace(void* a0, void* a1)
    {
        return NativeCall<UAnimSequence*, void*, void*>(nullptr, "UVictoryCore.GetNearestAnimSequenceFromBlendSpace(UE::Math::TVector<double>,UBlendSpace*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetNetworkTime(UWorld*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static double GetNetworkTime(void* a0)
    {
        return NativeCall<double, void*>(nullptr, "UVictoryCore.GetNetworkTime(UWorld*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetNetworkTimeInSeconds(UObject*)
    // endereco: casamento de bytes com a build de referencia
    static double GetNetworkTimeInSeconds(void* a0)
    {
        return NativeCall<double, void*>(nullptr, "UVictoryCore.GetNetworkTimeInSeconds(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetObjectName(UObject*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    static unsigned long long GetObjectName(void* a0)
    {
        return NativeCall<unsigned long long, void*>(nullptr, "UVictoryCore.GetObjectName(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetObjectsReferencedBy(UObject*,TArray<UObject*,TSizedDefaultAllocator<32>>&,bool)
    // endereco: casamento de bytes com a build de referencia
    static void GetObjectsReferencedBy(void* a0, void* a1, bool a2)
    {
        NativeCall<void, void*, void*, bool>(nullptr, "UVictoryCore.GetObjectsReferencedBy(UObject*,TArray<UObject*,TSizedDefaultAllocator<32>>&,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.GetOceanZAtLocation(UWorld*,UE::Math::TVector2<double>)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetOceanZAtLocation(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "UVictoryCore.GetOceanZAtLocation(UWorld*,UE::Math::TVector2<double>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetOverlappedHarvestActors(UObject*,UE::Math::TVector<double>&,float,TArray<AActor*
    // endereco: casamento de bytes com a build de referencia
    static bool GetOverlappedHarvestActors(void* a0, void* a1, float a2, void* a3, void* a4, void* a5, void* a6)
    {
        return NativeCall<bool, void*, void*, float, void*, void*, void*, void*>(nullptr, "UVictoryCore.GetOverlappedHarvestActors(UObject*,UE::Math::TVector<double>&,float,TArray<AActor*,TSizedDefaultAllocator<32>>&,TArray<UActorComponent*,TSizedDefaultAllocator<32>>&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,TArray<int,TSizedDefaultAllocator<32>>&)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetPlaneNormal(UE::Math::TPlane<double>&)
    // endereco: casamento de bytes com a build de referencia
    static void GetPlaneNormal(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.GetPlaneNormal(UE::Math::TPlane<double>&)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetPlatformName()
    // endereco: casamento de bytes com a build de referencia
    static void GetPlatformName(void* retorno)
    {
        NativeCall<void, void*>(nullptr, "UVictoryCore.GetPlatformName()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetPlatformProductIDForDLC(FString)
    // endereco: casamento de bytes com a build de referencia
    static void GetPlatformProductIDForDLC(void* retorno, const FString& a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.GetPlatformProductIDForDLC(FString)", retorno, const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void GetPlatformProductIDForDLC(void* retorno, FString* a0)
    { GetPlatformProductIDForDLC(retorno, *a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetPlayerCharacterByController(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    static AShooterCharacter* GetPlayerCharacterByController(void* a0)
    {
        return NativeCall<AShooterCharacter*, void*>(nullptr, "UVictoryCore.GetPlayerCharacterByController(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetPlayerCharacterByIndex(UObject*,int)
    // endereco: casamento de bytes com a build de referencia
    static AShooterCharacter* GetPlayerCharacterByIndex(void* a0, int a1)
    {
        return NativeCall<AShooterCharacter*, void*, int>(nullptr, "UVictoryCore.GetPlayerCharacterByIndex(UObject*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetPlayerHeatLevel(UObject*,UE::Math::TVector<double>&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=111+chamadores=2]]
    static int GetPlayerHeatLevel(void* a0, void* a1)
    {
        return NativeCall<int, void*, void*>(nullptr, "UVictoryCore.GetPlayerHeatLevel(UObject*,UE::Math::TVector<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetPlayerHeatLevelForCharacter(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    static int GetPlayerHeatLevelForCharacter(void* a0)
    {
        return NativeCall<int, void*>(nullptr, "UVictoryCore.GetPlayerHeatLevelForCharacter(APrimalCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetPlayerUnderwaterHeatLevel(UObject*,UE::Math::TVector<double>&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static int GetPlayerUnderwaterHeatLevel(void* a0, void* a1)
    {
        return NativeCall<int, void*, void*>(nullptr, "UVictoryCore.GetPlayerUnderwaterHeatLevel(UObject*,UE::Math::TVector<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetPrimalInventoryComponentFromActor(AActor*,bool)
    // endereco: casamento de bytes com a build de referencia
    static UPrimalInventoryComponent* GetPrimalInventoryComponentFromActor(void* a0, bool a1)
    {
        return NativeCall<UPrimalInventoryComponent*, void*, bool>(nullptr, "UVictoryCore.GetPrimalInventoryComponentFromActor(AActor*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetPrimaryCameraLocation()
    // endereco: casamento de bytes com a build de referencia
    static void GetPrimaryCameraLocation(void* retorno)
    {
        NativeCall<void, void*>(nullptr, "UVictoryCore.GetPrimaryCameraLocation()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetPrimaryCameraLocationDistanceFromPoint(UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    static float GetPrimaryCameraLocationDistanceFromPoint(void* a0)
    {
        return NativeCall<float, void*>(nullptr, "UVictoryCore.GetPrimaryCameraLocationDistanceFromPoint(UE::Math::TVector<double>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetProjectileArcPeakTime(UObject*,FProjectileArc&)
    // endereco: casamento de bytes com a build de referencia
    static float GetProjectileArcPeakTime(void* a0, void* a1)
    {
        return NativeCall<float, void*, void*>(nullptr, "UVictoryCore.GetProjectileArcPeakTime(UObject*,FProjectileArc&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetRandomCircleCenterPointEncompassingPointWithinOuterCircle(float,UE::Math::TVecto
    // endereco: casamento de bytes com a build de referencia
    static void GetRandomCircleCenterPointEncompassingPointWithinOuterCircle(void* retorno, float a0, void* a1, void* a2, float a3, int a4)
    {
        NativeCall<void, void*, float, void*, void*, float, int>(nullptr, "UVictoryCore.GetRandomCircleCenterPointEncompassingPointWithinOuterCircle(float,UE::Math::TVector2<double>&,UE::Math::TVector2<double>&,float,int)", retorno, a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetRandomWeightedDinoSetup(TArray<FDinoSetup,TSizedDefaultAllocator<32>>&,FDinoSetu
    // endereco: casamento de bytes com a build de referencia
    static bool GetRandomWeightedDinoSetup(void* a0, void* a1)
    {
        return NativeCall<bool, void*, void*>(nullptr, "UVictoryCore.GetRandomWeightedDinoSetup(TArray<FDinoSetup,TSizedDefaultAllocator<32>>&,FDinoSetup&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.GetRandomWeightedIndexGeneric_FDinoSetupGroup__UVictoryCore.GetDinoSetupGroup_Weigh
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetRandomWeightedIndexGeneric_FDinoSetupGroup__UVictoryCore_GetDinoSetupGroup_WeightedRandom___2___lambda_1___()
    {
        return NativeCall<void*>(nullptr, "UVictoryCore.GetRandomWeightedIndexGeneric_FDinoSetupGroup__UVictoryCore.GetDinoSetupGroup_WeightedRandom_._2_._lambda_1___()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.GetRandomWeightedIndexGeneric_FDinoSetup__UVictoryCore.GetRandomWeightedDinoSetup_.
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetRandomWeightedIndexGeneric_FDinoSetup__UVictoryCore_GetRandomWeightedDinoSetup___2___lambda_1___()
    {
        return NativeCall<void*>(nullptr, "UVictoryCore.GetRandomWeightedIndexGeneric_FDinoSetup__UVictoryCore.GetRandomWeightedDinoSetup_._2_._lambda_1___()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetRealWorldUtcTimeInSeconds()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static double GetRealWorldUtcTimeInSeconds()
    {
        return NativeCall<double>(nullptr, "UVictoryCore.GetRealWorldUtcTimeInSeconds()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetRuntimeFloatCurveValue(FRuntimeFloatCurve&,float)
    // endereco: casamento de bytes com a build de referencia
    static float GetRuntimeFloatCurveValue(void* a0, float a1)
    {
        return NativeCall<float, void*, float>(nullptr, "UVictoryCore.GetRuntimeFloatCurveValue(FRuntimeFloatCurve&,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetScreenPercentLocation(APlayerController*,UE::Math::TVector2<double>)
    // endereco: casamento de bytes com a build de referencia
    static void GetScreenPercentLocation(void* retorno, void* a0, void* a1)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "UVictoryCore.GetScreenPercentLocation(APlayerController*,UE::Math::TVector2<double>)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetScreenPercentage()
    // endereco: casamento de bytes com a build de referencia
    static float GetScreenPercentage()
    {
        return NativeCall<float>(nullptr, "UVictoryCore.GetScreenPercentage()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.GetScriptDelegate(UObject*,FName)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetScriptDelegate(void* a0, unsigned long long a1)
    {
        return NativeCall<void*, void*, unsigned long long>(nullptr, "UVictoryCore.GetScriptDelegate(UObject*,FName)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UVictoryCore.GetSeaLevel(UWorld*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=101]]
    static float GetSeaLevel(void* a0)
    {
        return NativeCall<float, void*>(nullptr, "UVictoryCore.GetSeaLevel(UWorld*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetSecondsIntoDay()
    // endereco: casamento de bytes com a build de referencia
    static int GetSecondsIntoDay()
    {
        return NativeCall<int>(nullptr, "UVictoryCore.GetSecondsIntoDay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetSelectedLevelActors()
    // endereco: casamento de bytes com a build de referencia
    static void GetSelectedLevelActors(void* retorno)
    {
        NativeCall<void, void*>(nullptr, "UVictoryCore.GetSelectedLevelActors()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetShooterCharacterFromController(AController*)
    // endereco: casamento de bytes com a build de referencia
    static AShooterCharacter* GetShooterCharacterFromController(void* a0)
    {
        return NativeCall<AShooterCharacter*, void*>(nullptr, "UVictoryCore.GetShooterCharacterFromController(AController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetShooterCharacterFromPawn(APawn*)
    // endereco: casamento de bytes com a build de referencia
    static AShooterCharacter* GetShooterCharacterFromPawn(void* a0)
    {
        return NativeCall<AShooterCharacter*, void*>(nullptr, "UVictoryCore.GetShooterCharacterFromPawn(APawn*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetShooterGameUserSettings()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    static UShooterGameUserSettings* GetShooterGameUserSettings()
    {
        return NativeCall<UShooterGameUserSettings*>(nullptr, "UVictoryCore.GetShooterGameUserSettings()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.GetShortNumberString(double,double&,int,double,double,FString,FString)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetShortNumberString(double a0, void* a1, int a2, double a3, double a4, const FString& a5, const FString& a6)
    {
        return NativeCall<void*, double, void*, int, double, double, void*, void*>(nullptr, "UVictoryCore.GetShortNumberString(double,double&,int,double,double,FString,FString)", a0, a1, a2, a3, a4, const_cast<FString*>(&a5), const_cast<FString*>(&a6));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static BrzPonteiro GetShortNumberString(double a0, void* a1, int a2, double a3, double a4, FString* a5, FString* a6)
    { return GetShortNumberString(a0, a1, a2, a3, a4, *a5, *a6); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetSimpleMontageDuration(UAnimMontage*,float)
    // endereco: casamento de bytes com a build de referencia
    static float GetSimpleMontageDuration(void* a0, float a1)
    {
        return NativeCall<float, void*, float>(nullptr, "UVictoryCore.GetSimpleMontageDuration(UAnimMontage*,float)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UVictoryCore.GetSkeletalMeshCollision_IE_AggGeom_Elements(UStaticMesh*)
    // endereco: casamento de bytes com a build de referencia
    static void GetSkeletalMeshCollision_IE_AggGeom_Elements(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.GetSkeletalMeshCollision_IE_AggGeom_Elements(UStaticMesh*)", retorno, a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.GetSkillData(FName&,UObject*)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetSkillData(const FName& a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "UVictoryCore.GetSkillData(FName&,UObject*)", const_cast<FName*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static BrzPonteiro GetSkillData(FName* a0, void* a1)
    { return GetSkillData(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.GetSkillDescription(FPrimalSkill&,int,bool,bool,FLinearColor)
    // endereco: casamento de bytes com a build de referencia
    static void GetSkillDescription(void* retorno, void* a0, int a1, bool a2, bool a3, void* a4)
    {
        NativeCall<void, void*, void*, int, bool, bool, void*>(nullptr, "UVictoryCore.GetSkillDescription(FPrimalSkill&,int,bool,bool,FLinearColor)", retorno, a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetSkillModifierByName(FPrimalSkill&,FItemTraitModifier&,FName,int)
    // endereco: casamento de bytes com a build de referencia
    static bool GetSkillModifierByName(void* a0, void* a1, unsigned long long a2, int a3)
    {
        return NativeCall<bool, void*, void*, unsigned long long, int>(nullptr, "UVictoryCore.GetSkillModifierByName(FPrimalSkill&,FItemTraitModifier&,FName,int)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UVictoryCore.GetSkillTreeUIDataContainer(FName)
    // endereco: casamento de bytes com a build de referencia
    static UObject* GetSkillTreeUIDataContainer(unsigned long long a0)
    {
        return NativeCall<UObject*, unsigned long long>(nullptr, "UVictoryCore.GetSkillTreeUIDataContainer(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetSoundCueLocalizedSpokenText(USoundCue*)
    // endereco: casamento de bytes com a build de referencia
    static void GetSoundCueLocalizedSpokenText(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.GetSoundCueLocalizedSpokenText(USoundCue*)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetSoundWaveLocalizedSpokenText(USoundWave*)
    // endereco: casamento de bytes com a build de referencia
    static void GetSoundWaveLocalizedSpokenText(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.GetSoundWaveLocalizedSpokenText(USoundWave*)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetSpecialActorList(UObject*,TEnumAsByte<EActorListsBP::Type>,TArray<AActor*,TSized
    // endereco: casamento de bytes com a build de referencia
    static void GetSpecialActorList(void* a0, unsigned char a1, void* a2)
    {
        NativeCall<void, void*, unsigned char, void*>(nullptr, "UVictoryCore.GetSpecialActorList(UObject*,TEnumAsByte<EActorListsBP::Type>,TArray<AActor*,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.GetSpeedValues(UWorld*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,float&
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetSpeedValues(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8, void* a9, void* a10, void* a11, void* a12, void* a13, void* a14)
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, void*, void*, void*, void*, void*, void*, void*, void*, void*, void*>(nullptr, "UVictoryCore.GetSpeedValues(UWorld*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,float&,unsignedchar&,double&,float&,bool&,UE::Math::TVector2<double>&,UE::Math::TVector2<double>&,float&,UE::Math::TRotator<double>&,float&,float&,UE::Math::TRotator<double>&)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetStaticMeshBounds(UStaticMesh*)
    // endereco: casamento de bytes com a build de referencia
    static void GetStaticMeshBounds(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.GetStaticMeshBounds(UStaticMesh*)", retorno, a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.GetStatusColorForPlayerTetherDistance(UObject*,float)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetStatusColorForPlayerTetherDistance(void* a0, float a1)
    {
        return NativeCall<void*, void*, float>(nullptr, "UVictoryCore.GetStatusColorForPlayerTetherDistance(UObject*,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.GetTeamColor(int)
    // endereco: cache_pdb_25090264
    static BrzPonteiro GetTeamColor(int a0)
    {
        return NativeCall<void*, int>(nullptr, "UVictoryCore.GetTeamColor(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetTimeSeconds(APawn*)
    // endereco: casamento de bytes com a build de referencia
    static float GetTimeSeconds(void* a0)
    {
        return NativeCall<float, void*>(nullptr, "UVictoryCore.GetTimeSeconds(APawn*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetTimeSince(APawn*,float)
    // endereco: casamento de bytes com a build de referencia
    static float GetTimeSince(void* a0, float a1)
    {
        return NativeCall<float, void*, float>(nullptr, "UVictoryCore.GetTimeSince(APawn*,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetTotalCoversionIdAsString()
    // endereco: casamento de bytes com a build de referencia
    static void GetTotalCoversionIdAsString(void* retorno)
    {
        NativeCall<void, void*>(nullptr, "UVictoryCore.GetTotalCoversionIdAsString()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetTwoLetterISOLanguageName()
    // endereco: casamento de bytes com a build de referencia
    static void GetTwoLetterISOLanguageName(void* retorno)
    {
        NativeCall<void, void*>(nullptr, "UVictoryCore.GetTwoLetterISOLanguageName()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetUpsellIndex()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=75+grafo=4/4]]
    static int GetUpsellIndex()
    {
        return NativeCall<int>(nullptr, "UVictoryCore.GetUpsellIndex()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetVelocityDeltaBetweenChars(APrimalCharacter*,APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    static void GetVelocityDeltaBetweenChars(void* retorno, void* a0, void* a1)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "UVictoryCore.GetVelocityDeltaBetweenChars(APrimalCharacter*,APrimalCharacter*)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetVolumeOfCapsule(float,float)
    // endereco: cache_pdb_25090264
    static float GetVolumeOfCapsule(float a0, float a1)
    {
        return NativeCall<float, float, float>(nullptr, "UVictoryCore.GetVolumeOfCapsule(float,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.GetWaterSurfaceZAtLocation(UWorld*,UE::Math::TVector<double>,bool&,float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [grafo=8/8]]
    static BrzPonteiro GetWaterSurfaceZAtLocation(void* a0, void* a1, void* a2, float a3)
    {
        return NativeCall<void*, void*, void*, void*, float>(nullptr, "UVictoryCore.GetWaterSurfaceZAtLocation(UWorld*,UE::Math::TVector<double>,bool&,float)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetWeightedBoneNamesForMesh(USkeletalMeshComponent*,bool)
    // endereco: casamento de bytes com a build de referencia
    static void GetWeightedBoneNamesForMesh(void* retorno, void* a0, bool a1)
    {
        NativeCall<void, void*, void*, bool>(nullptr, "UVictoryCore.GetWeightedBoneNamesForMesh(USkeletalMeshComponent*,bool)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetWeightedRandomIndex(TArray<float,TSizedDefaultAllocator<32>>&,float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static int GetWeightedRandomIndex(void* a0, float a1)
    {
        return NativeCall<int, void*, float>(nullptr, "UVictoryCore.GetWeightedRandomIndex(TArray<float,TSizedDefaultAllocator<32>>&,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetWeightedRandomIndexFromArray(TArray<float,TSizedDefaultAllocator<32>>,float)
    // endereco: casamento de bytes com a build de referencia
    static int GetWeightedRandomIndexFromArray(void* a0, float a1)
    {
        return NativeCall<int, void*, float>(nullptr, "UVictoryCore.GetWeightedRandomIndexFromArray(TArray<float,TSizedDefaultAllocator<32>>,float)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UVictoryCore.GetWirelessAmmoExchangeTag(APrimalStructureItemContainer*)
    // endereco: casamento de bytes com a build de referencia
    static unsigned long long GetWirelessAmmoExchangeTag(void* a0)
    {
        return NativeCall<unsigned long long, void*>(nullptr, "UVictoryCore.GetWirelessAmmoExchangeTag(APrimalStructureItemContainer*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GetWorldLoadedAtTime(UObject*)
    // endereco: casamento de bytes com a build de referencia
    static double GetWorldLoadedAtTime(void* a0)
    {
        return NativeCall<double, void*>(nullptr, "UVictoryCore.GetWorldLoadedAtTime(UObject*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UVictoryCore.GetWorldOceanVolume(UWorld*)
    // endereco: cache_pdb_25090264
    static UObject* GetWorldOceanVolume(void* a0)
    {
        return NativeCall<UObject*, void*>(nullptr, "UVictoryCore.GetWorldOceanVolume(UWorld*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UVictoryCore.GetWorldSublevels(UObject*)
    // endereco: casamento de bytes com a build de referencia
    static void GetWorldSublevels(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.GetWorldSublevels(UObject*)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GiveItemToCharacter(APrimalCharacter*,TSubclassOf<UPrimalItem>,int,float,bool)
    // endereco: casamento de bytes com a build de referencia
    static void GiveItemToCharacter(void* retorno, void* a0, void* a1, int a2, float a3, bool a4)
    {
        NativeCall<void, void*, void*, void*, int, float, bool>(nullptr, "UVictoryCore.GiveItemToCharacter(APrimalCharacter*,TSubclassOf<UPrimalItem>,int,float,bool)", retorno, a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.GiveTraitToDino(APrimalDinoCharacter*,FName,int,FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GiveTraitToDino(void* a0, unsigned long long a1, int a2, const FString& a3, bool a4)
    {
        return NativeCall<void*, void*, unsigned long long, int, void*, bool>(nullptr, "UVictoryCore.GiveTraitToDino(APrimalDinoCharacter*,FName,int,FString&,bool)", a0, a1, a2, const_cast<FString*>(&a3), a4);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static BrzPonteiro GiveTraitToDino(void* a0, unsigned long long a1, int a2, FString* a3, bool a4)
    { return GiveTraitToDino(a0, a1, a2, *a3, a4); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GridTraceAroundPoint(UObject*,TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Ma
    // endereco: casamento de bytes com a build de referencia
    static void GridTraceAroundPoint(void* a0, void* a1, void* a2, void* a3, void* a4, int a5, int a6, int a7, float a8, float a9, float a10, float a11, bool a12, bool a13, float a14)
    {
        NativeCall<void, void*, void*, void*, void*, void*, int, int, int, float, float, float, float, bool, bool, float>(nullptr, "UVictoryCore.GridTraceAroundPoint(UObject*,TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>,UE::Math::TRotator<double>,TArray<AActor*,TSizedDefaultAllocator<32>>,ECollisionChannel,int,int,float,float,float,float,bool,bool,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GrindAllItemsToInventory(UPrimalInventoryComponent*,bool,int,float,int)
    // endereco: casamento de bytes com a build de referencia
    static void GrindAllItemsToInventory(void* a0, bool a1, int a2, float a3, int a4)
    {
        NativeCall<void, void*, bool, int, float, int>(nullptr, "UVictoryCore.GrindAllItemsToInventory(UPrimalInventoryComponent*,bool,int,float,int)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.GrindItemIntoInventory(UPrimalItem*,UPrimalInventoryComponent*,bool,int,float,int)
    // endereco: casamento de bytes com a build de referencia
    static bool GrindItemIntoInventory(void* a0, void* a1, bool a2, int a3, float a4, int a5)
    {
        return NativeCall<bool, void*, void*, bool, int, float, int>(nullptr, "UVictoryCore.GrindItemIntoInventory(UPrimalItem*,UPrimalInventoryComponent*,bool,int,float,int)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.HTTPRequestAdvanced(UObject*,FBlueprintHTTPRequestData&)
    // endereco: casamento de bytes com a build de referencia
    static long long HTTPRequestAdvanced(void* a0, void* a1)
    {
        return NativeCall<long long, void*, void*>(nullptr, "UVictoryCore.HTTPRequestAdvanced(UObject*,FBlueprintHTTPRequestData&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.HTTPRequestGET(UObject*,FString&,TMap<FString,FString,FDefaultSetAllocator,TDefault
    // endereco: casamento de bytes com a build de referencia
    static void HTTPRequestGET(void* a0, const FString& a1, void* a2)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "UVictoryCore.HTTPRequestGET(UObject*,FString&,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>&)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void HTTPRequestGET(void* a0, FString* a1, void* a2)
    { HTTPRequestGET(a0, *a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.HTTPRequestPOST(UObject*,FString&,TMap<FString,FString,FDefaultSetAllocator,TDefaul
    // endereco: casamento de bytes com a build de referencia
    static void HTTPRequestPOST(void* a0, const FString& a1, void* a2, const FString& a3)
    {
        NativeCall<void, void*, void*, void*, void*>(nullptr, "UVictoryCore.HTTPRequestPOST(UObject*,FString&,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>>&,FString&)", a0, const_cast<FString*>(&a1), a2, const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void HTTPRequestPOST(void* a0, FString* a1, void* a2, FString* a3)
    { HTTPRequestPOST(a0, *a1, a2, *a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.HandleCameraModeMultiUse(AActor*,int,AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro HandleCameraModeMultiUse(void* a0, int a1, void* a2)
    {
        return NativeCall<void*, void*, int, void*>(nullptr, "UVictoryCore.HandleCameraModeMultiUse(AActor*,int,AShooterPlayerController*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.HasCraftingRequirementsGreaterThanOne(UPrimalItem*)
    // endereco: cache_pdb_25090264
    static bool HasCraftingRequirementsGreaterThanOne(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UVictoryCore.HasCraftingRequirementsGreaterThanOne(UPrimalItem*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.HasEverCompletedQueryEntitlements(UObject*)
    // endereco: casamento de bytes com a build de referencia
    static bool HasEverCompletedQueryEntitlements(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UVictoryCore.HasEverCompletedQueryEntitlements(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.HasPlayerSeenGen2Intro(UObject*)
    // endereco: casamento de bytes com a build de referencia
    static bool HasPlayerSeenGen2Intro(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UVictoryCore.HasPlayerSeenGen2Intro(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.Helix(float,float)
    // endereco: casamento de bytes com a build de referencia
    static void Helix(void* retorno, float a0, float a1)
    {
        NativeCall<void, void*, float, float>(nullptr, "UVictoryCore.Helix(float,float)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.InlineLoadLevels(TArray<FName,TSizedDefaultAllocator<32>>&,TArray<FName,TSizedDefau
    // endereco: cache_pdb_25090264
    static void InlineLoadLevels(void* a0, void* a1, bool a2)
    {
        NativeCall<void, void*, void*, bool>(nullptr, "UVictoryCore.InlineLoadLevels(TArray<FName,TSizedDefaultAllocator<32>>&,TArray<FName,TSizedDefaultAllocator<32>>&,bool)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UVictoryCore.IntBitsToFloat(int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static float IntBitsToFloat(int a0)
    {
        return NativeCall<float, int>(nullptr, "UVictoryCore.IntBitsToFloat(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IntersectsBox(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UShapeComponent
    // endereco: casamento de bytes com a build de referencia
    static bool IntersectsBox(void* a0, void* a1, void* a2)
    {
        return NativeCall<bool, void*, void*, void*>(nullptr, "UVictoryCore.IntersectsBox(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UShapeComponent*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.InverseTransform(UE::Math::TTransform<double>&)
    // endereco: casamento de bytes com a build de referencia
    static void InverseTransform(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.InverseTransform(UE::Math::TTransform<double>&)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.InverseTransformVectorByScreenProjectionGlobalTransform(UE::Math::TVector2<double>)
    // endereco: casamento de bytes com a build de referencia
    static void InverseTransformVectorByScreenProjectionGlobalTransform(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.InverseTransformVectorByScreenProjectionGlobalTransform(UE::Math::TVector2<double>)", retorno, a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.IsActorInActorList(UObject*,TEnumAsByte<EActorListsBP::Type>,AActor*)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsActorInActorList(void* a0, unsigned char a1, void* a2)
    {
        return NativeCall<void*, void*, unsigned char, void*>(nullptr, "UVictoryCore.IsActorInActorList(UObject*,TEnumAsByte<EActorListsBP::Type>,AActor*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsAdvertKeyUseAvailable(FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    static bool IsAdvertKeyUseAvailable(const FString& a0, bool a1)
    {
        return NativeCall<bool, void*, bool>(nullptr, "UVictoryCore.IsAdvertKeyUseAvailable(FString&,bool)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static bool IsAdvertKeyUseAvailable(FString* a0, bool a1)
    { return IsAdvertKeyUseAvailable(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.IsAnyPlayerViewingAtLocation(UObject*,UE::Math::TVector<double>&,float)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsAnyPlayerViewingAtLocation(void* a0, void* a1, float a2)
    {
        return NativeCall<void*, void*, void*, float>(nullptr, "UVictoryCore.IsAnyPlayerViewingAtLocation(UObject*,UE::Math::TVector<double>&,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsAstraeosInstalled()
    // endereco: casamento de bytes com a build de referencia
    static bool IsAstraeosInstalled()
    {
        return NativeCall<bool>(nullptr, "UVictoryCore.IsAstraeosInstalled()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.IsAtAnchorLimit(UWorld*,UE::Math::TVector<double>&,AActor*)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsAtAnchorLimit(void* a0, void* a1, void* a2)
    {
        return NativeCall<void*, void*, void*, void*>(nullptr, "UVictoryCore.IsAtAnchorLimit(UWorld*,UE::Math::TVector<double>&,AActor*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsAudioComponentFadingIn(UAudioComponent*)
    // endereco: casamento de bytes com a build de referencia
    static bool IsAudioComponentFadingIn(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UVictoryCore.IsAudioComponentFadingIn(UAudioComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsAudioComponentFadingOut(UAudioComponent*)
    // endereco: casamento de bytes com a build de referencia
    static bool IsAudioComponentFadingOut(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UVictoryCore.IsAudioComponentFadingOut(UAudioComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsBoundsInUndermeshExclusionZone(UWorld*const,UE::Math::TVector<double>&,float)
    // endereco: casamento de bytes com a build de referencia
    static bool IsBoundsInUndermeshExclusionZone(void* a0, void* a1, float a2)
    {
        return NativeCall<bool, void*, void*, float>(nullptr, "UVictoryCore.IsBoundsInUndermeshExclusionZone(UWorld*const,UE::Math::TVector<double>&,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsBrainControllingDinoAttached(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    static bool IsBrainControllingDinoAttached(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UVictoryCore.IsBrainControllingDinoAttached(APrimalCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsChildOfClasses(TSubclassOf<UObject>,TArray<TSubclassOf<UObject>,TSizedDefaultAllo
    // endereco: casamento de bytes com a build de referencia
    static int IsChildOfClasses(void* a0, void* a1)
    {
        return NativeCall<int, void*, void*>(nullptr, "UVictoryCore.IsChildOfClasses(TSubclassOf<UObject>,TArray<TSubclassOf<UObject>,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsChildOfClassesSoft(TSubclassOf<UObject>,TArray<FString,TSizedDefaultAllocator<32>
    // endereco: casamento de bytes com a build de referencia
    static int IsChildOfClassesSoft(void* a0, void* a1)
    {
        return NativeCall<int, void*, void*>(nullptr, "UVictoryCore.IsChildOfClassesSoft(TSubclassOf<UObject>,TArray<FString,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsChildOfClassesSoftRef(TSubclassOf<UObject>,TArray<TSoftClassPtr<UObject>,TSizedDe
    // endereco: casamento de bytes com a build de referencia
    static int IsChildOfClassesSoftRef(void* a0, void* a1)
    {
        return NativeCall<int, void*, void*>(nullptr, "UVictoryCore.IsChildOfClassesSoftRef(TSubclassOf<UObject>,TArray<TSoftClassPtr<UObject>,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsChildOfClassesSoftRefT<AActor>(TSubclassOf<UObject>,TArray<TSoftClassPtr<AActor>,
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=772+bytes40+grafo=4/4]]
    static int IsChildOfClassesSoftRefT_AActor_(void* a0, void* a1)
    {
        return NativeCall<int, void*, void*>(nullptr, "UVictoryCore.IsChildOfClassesSoftRefT<AActor>(TSubclassOf<UObject>,TArray<TSoftClassPtr<AActor>,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsChildOfClassesSoftRefT<APrimalBuff>(TSubclassOf<UObject>,TArray<TSoftClassPtr<APr
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=772+bytes40+grafo=4/4]]
    static int IsChildOfClassesSoftRefT_APrimalBuff_(void* a0, void* a1)
    {
        return NativeCall<int, void*, void*>(nullptr, "UVictoryCore.IsChildOfClassesSoftRefT<APrimalBuff>(TSubclassOf<UObject>,TArray<TSoftClassPtr<APrimalBuff>,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsChildOfClassesSoftRefT<APrimalDinoCharacter>(TSubclassOf<UObject>,TArray<TSoftCla
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=772+bytes40+chamadores=4+grafo=4/4]]
    static int IsChildOfClassesSoftRefT_APrimalDinoCharacter_(void* a0, void* a1)
    {
        return NativeCall<int, void*, void*>(nullptr, "UVictoryCore.IsChildOfClassesSoftRefT<APrimalDinoCharacter>(TSubclassOf<UObject>,TArray<TSoftClassPtr<APrimalDinoCharacter>,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsChildOfClassesSoftRefT<APrimalStructure>(TSubclassOf<UObject>,TArray<TSoftClassPt
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=772+bytes40+grafo=4/4]]
    static int IsChildOfClassesSoftRefT_APrimalStructure_(void* a0, void* a1)
    {
        return NativeCall<int, void*, void*>(nullptr, "UVictoryCore.IsChildOfClassesSoftRefT<APrimalStructure>(TSubclassOf<UObject>,TArray<TSoftClassPtr<APrimalStructure>,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsChildOfClassesSoftRefT<AShooterWeapon>(TSubclassOf<UObject>,TArray<TSoftClassPtr<
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=772+bytes40+grafo=4/4]]
    static int IsChildOfClassesSoftRefT_AShooterWeapon_(void* a0, void* a1)
    {
        return NativeCall<int, void*, void*>(nullptr, "UVictoryCore.IsChildOfClassesSoftRefT<AShooterWeapon>(TSubclassOf<UObject>,TArray<TSoftClassPtr<AShooterWeapon>,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsChildOfClassesSoftRefT<UObject>(TSubclassOf<UObject>,TArray<TSoftClassPtr<UObject
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=772+bytes40+grafo=4/4]]
    static int IsChildOfClassesSoftRefT_UObject_(void* a0, void* a1)
    {
        return NativeCall<int, void*, void*>(nullptr, "UVictoryCore.IsChildOfClassesSoftRefT<UObject>(TSubclassOf<UObject>,TArray<TSoftClassPtr<UObject>,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsChildOfClassesT<APrimalStructure>(TSubclassOf<UObject>,TArray<TSubclassOf<APrimal
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=322+bytes40+chamadores=2]]
    static int IsChildOfClassesT_APrimalStructure_(void* a0, void* a1)
    {
        return NativeCall<int, void*, void*>(nullptr, "UVictoryCore.IsChildOfClassesT<APrimalStructure>(TSubclassOf<UObject>,TArray<TSubclassOf<APrimalStructure>,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsChildOfClassesT<UPrimalItem>(TSubclassOf<UObject>,TArray<TSubclassOf<UPrimalItem>
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static int IsChildOfClassesT_UPrimalItem_(void* a0, void* a1)
    {
        return NativeCall<int, void*, void*>(nullptr, "UVictoryCore.IsChildOfClassesT<UPrimalItem>(TSubclassOf<UObject>,TArray<TSubclassOf<UPrimalItem>,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsConsoleBuild()
    // endereco: cache_pdb_25090264
    static bool IsConsoleBuild()
    {
        return NativeCall<bool>(nullptr, "UVictoryCore.IsConsoleBuild()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsConsoleServerBuild()
    // endereco: cache_pdb_25090264
    static bool IsConsoleServerBuild()
    {
        return NativeCall<bool>(nullptr, "UVictoryCore.IsConsoleServerBuild()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsCooldownComplete(UObject*,double,float)
    // endereco: casamento de bytes com a build de referencia
    static bool IsCooldownComplete(void* a0, double a1, float a2)
    {
        return NativeCall<bool, void*, double, float>(nullptr, "UVictoryCore.IsCooldownComplete(UObject*,double,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsCryopodNerfEnabled(UObject*,float&,float&,float&)
    // endereco: casamento de bytes com a build de referencia
    static bool IsCryopodNerfEnabled(void* a0, void* a1, void* a2, void* a3)
    {
        return NativeCall<bool, void*, void*, void*, void*>(nullptr, "UVictoryCore.IsCryopodNerfEnabled(UObject*,float&,float&,float&)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsDLCInstalled(FString)
    // endereco: casamento de bytes com a build de referencia
    static bool IsDLCInstalled(const FString& a0)
    {
        return NativeCall<bool, void*>(nullptr, "UVictoryCore.IsDLCInstalled(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static bool IsDLCInstalled(FString* a0)
    { return IsDLCInstalled(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsDinoDuped(UObject*,int,int)
    // endereco: casamento de bytes com a build de referencia
    static bool IsDinoDuped(void* a0, int a1, int a2)
    {
        return NativeCall<bool, void*, int, int>(nullptr, "UVictoryCore.IsDinoDuped(UObject*,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsDistanceGreaterThan(UE::Math::TVector<double>,UE::Math::TVector<double>,float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    static bool IsDistanceGreaterThan(void* a0, void* a1, float a2)
    {
        return NativeCall<bool, void*, void*, float>(nullptr, "UVictoryCore.IsDistanceGreaterThan(UE::Math::TVector<double>,UE::Math::TVector<double>,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsDistanceLessThan(UE::Math::TVector<double>,UE::Math::TVector<double>,float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    static bool IsDistanceLessThan(void* a0, void* a1, float a2)
    {
        return NativeCall<bool, void*, void*, float>(nullptr, "UVictoryCore.IsDistanceLessThan(UE::Math::TVector<double>,UE::Math::TVector<double>,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsEngramGroupAllowed(AShooterPlayerController*,int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static bool IsEngramGroupAllowed(void* a0, int a1)
    {
        return NativeCall<bool, void*, int>(nullptr, "UVictoryCore.IsEngramGroupAllowed(AShooterPlayerController*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsFluidInteractionEnabled(UObject*)
    // endereco: casamento de bytes com a build de referencia
    static bool IsFluidInteractionEnabled(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UVictoryCore.IsFluidInteractionEnabled(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsGamePadConnected()
    // endereco: casamento de bytes com a build de referencia
    static bool IsGamePadConnected()
    {
        return NativeCall<bool>(nullptr, "UVictoryCore.IsGamePadConnected()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsGameWorld(UObject*)
    // endereco: casamento de bytes com a build de referencia
    static bool IsGameWorld(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UVictoryCore.IsGameWorld(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsInsideBox(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UShapeComponent*)
    // endereco: casamento de bytes com a build de referencia
    static bool IsInsideBox(void* a0, void* a1, void* a2)
    {
        return NativeCall<bool, void*, void*, void*>(nullptr, "UVictoryCore.IsInsideBox(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UShapeComponent*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsInsideOrIntersectsBox(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UShap
    // endereco: casamento de bytes com a build de referencia
    static bool IsInsideOrIntersectsBox(void* a0, void* a1, void* a2)
    {
        return NativeCall<bool, void*, void*, void*>(nullptr, "UVictoryCore.IsInsideOrIntersectsBox(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UShapeComponent*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsInsideTekBunker(UE::Math::TVector<double>,UObject*)
    // endereco: casamento de bytes com a build de referencia
    static APrimalStructure* IsInsideTekBunker(void* a0, void* a1)
    {
        return NativeCall<APrimalStructure*, void*, void*>(nullptr, "UVictoryCore.IsInsideTekBunker(UE::Math::TVector<double>,UObject*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsLandscapeUsingRVT(UObject*)
    // endereco: casamento de bytes com a build de referencia
    static bool IsLandscapeUsingRVT(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UVictoryCore.IsLandscapeUsingRVT(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsLastInputGamepadForUI()
    // endereco: casamento de bytes com a build de referencia
    static bool IsLastInputGamepadForUI()
    {
        return NativeCall<bool>(nullptr, "UVictoryCore.IsLastInputGamepadForUI()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsLoadingSaveGame()
    // endereco: cache_pdb_25090264
    static bool IsLoadingSaveGame()
    {
        return NativeCall<bool>(nullptr, "UVictoryCore.IsLoadingSaveGame()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsLocationLikelyWithinAnIncorrectlyPlacedWaterVolume(UObject*,UE::Math::TVector<dou
    // endereco: casamento de bytes com a build de referencia
    static bool IsLocationLikelyWithinAnIncorrectlyPlacedWaterVolume(void* a0, void* a1, void* a2)
    {
        return NativeCall<bool, void*, void*, void*>(nullptr, "UVictoryCore.IsLocationLikelyWithinAnIncorrectlyPlacedWaterVolume(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.IsLocationStreamingCompleted(UObject*,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsLocationStreamingCompleted(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "UVictoryCore.IsLocationStreamingCompleted(UObject*,UE::Math::TVector<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsLocationUnderMesh(UObject*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,
    // endereco: casamento de bytes com a build de referencia
    static bool IsLocationUnderMesh(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, bool a7, float a8, void* a9)
    {
        return NativeCall<bool, void*, void*, void*, void*, void*, void*, void*, bool, float, void*>(nullptr, "UVictoryCore.IsLocationUnderMesh(UObject*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool&,UActorComponent*&,bool,float,AActor*)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsMissionActiveAnywhere(TSubclassOf<AMissionType>)
    // endereco: casamento de bytes com a build de referencia
    static bool IsMissionActiveAnywhere(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UVictoryCore.IsMissionActiveAnywhere(TSubclassOf<AMissionType>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsMissionTagActiveAnywhere(AShooterPlayerController*,FName)
    // endereco: casamento de bytes com a build de referencia
    static bool IsMissionTagActiveAnywhere(void* a0, unsigned long long a1)
    {
        return NativeCall<bool, void*, unsigned long long>(nullptr, "UVictoryCore.IsMissionTagActiveAnywhere(AShooterPlayerController*,FName)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsModEnabled(__int64)
    // endereco: casamento de bytes com a build de referencia
    static bool IsModEnabled(int a0)
    {
        return NativeCall<bool, int>(nullptr, "UVictoryCore.IsModEnabled(__int64)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsModInstalled(__int64)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=255]]
    static bool IsModInstalled(int a0)
    {
        return NativeCall<bool, int>(nullptr, "UVictoryCore.IsModInstalled(__int64)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsModPremium(__int64)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=260]]
    static bool IsModPremium(int a0)
    {
        return NativeCall<bool, int>(nullptr, "UVictoryCore.IsModPremium(__int64)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsNonHostPlayer(UObject*,AController*)
    // endereco: casamento de bytes com a build de referencia
    static bool IsNonHostPlayer(void* a0, void* a1)
    {
        return NativeCall<bool, void*, void*>(nullptr, "UVictoryCore.IsNonHostPlayer(UObject*,AController*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.IsOnMap(EPrimalMaps)
    // endereco: cache_pdb_25090264
    static BrzPonteiro IsOnMap(int a0)
    {
        return NativeCall<void*, int>(nullptr, "UVictoryCore.IsOnMap(EPrimalMaps)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsPS4Build()
    // endereco: cache_pdb_25090264
    static bool IsPS4Build()
    {
        return NativeCall<bool>(nullptr, "UVictoryCore.IsPS4Build()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsPVEServer(UObject*)
    // endereco: casamento de bytes com a build de referencia
    static bool IsPVEServer(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UVictoryCore.IsPVEServer(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsPassengerInVehicle(AShooterCharacter*)
    // endereco: casamento de bytes com a build de referencia
    static bool IsPassengerInVehicle(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UVictoryCore.IsPassengerInVehicle(AShooterCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsPlayingMovie()
    // endereco: casamento de bytes com a build de referencia
    static bool IsPlayingMovie()
    {
        return NativeCall<bool>(nullptr, "UVictoryCore.IsPlayingMovie()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsPointInCone(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVect
    // endereco: casamento de bytes com a build de referencia
    static bool IsPointInCone(void* a0, void* a1, void* a2, float a3, float a4)
    {
        return NativeCall<bool, void*, void*, void*, float, float>(nullptr, "UVictoryCore.IsPointInCone(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,float,float)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.IsPointInsideARaft(UWorld*,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsPointInsideARaft(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "UVictoryCore.IsPointInsideARaft(UWorld*,UE::Math::TVector<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsPointStuckWithinMesh(UObject*,UE::Math::TVector<double>,int,float,float,AActor*,b
    // endereco: casamento de bytes com a build de referencia
    static bool IsPointStuckWithinMesh(void* a0, void* a1, int a2, float a3, float a4, void* a5, bool a6, bool a7)
    {
        return NativeCall<bool, void*, void*, int, float, float, void*, bool, bool>(nullptr, "UVictoryCore.IsPointStuckWithinMesh(UObject*,UE::Math::TVector<double>,int,float,float,AActor*,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.IsPointTrulyWithinWater(UWorld*,UE::Math::TVector<double>&,APhysicsVolume*&,bool)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsPointTrulyWithinWater(void* a0, void* a1, void* a2, bool a3)
    {
        return NativeCall<void*, void*, void*, void*, bool>(nullptr, "UVictoryCore.IsPointTrulyWithinWater(UWorld*,UE::Math::TVector<double>&,APhysicsVolume*&,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsSOTF()
    // endereco: cache_pdb_25090264
    static bool IsSOTF()
    {
        return NativeCall<bool>(nullptr, "UVictoryCore.IsSOTF()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsStringContainedInArray(FString&,TArray<FString,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    static int IsStringContainedInArray(const FString& a0, void* a1)
    {
        return NativeCall<int, void*, void*>(nullptr, "UVictoryCore.IsStringContainedInArray(FString&,TArray<FString,TSizedDefaultAllocator<32>>&)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static int IsStringContainedInArray(FString* a0, void* a1)
    { return IsStringContainedInArray(*a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsThereANonObstructedTraceToTheLocation(UObject*,UE::Math::TVector<double>,UE::Math
    // endereco: casamento de bytes com a build de referencia
    static bool IsThereANonObstructedTraceToTheLocation(void* a0, void* a1, void* a2, void* a3, void* a4, float a5, float a6, float a7, int a8, int a9, float a10, bool a11, float a12)
    {
        return NativeCall<bool, void*, void*, void*, void*, void*, float, float, float, int, int, float, bool, float>(nullptr, "UVictoryCore.IsThereANonObstructedTraceToTheLocation(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,TArray<AActor*,TSizedDefaultAllocator<32>>&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,float,float,float,int,int,float,bool,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsTimeSince(UObject*,double,float,bool)
    // endereco: casamento de bytes com a build de referencia
    static bool IsTimeSince(void* a0, double a1, float a2, bool a3)
    {
        return NativeCall<bool, void*, double, float, bool>(nullptr, "UVictoryCore.IsTimeSince(UObject*,double,float,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsTimeSince_Network(UObject*,double,float,bool)
    // endereco: casamento de bytes com a build de referencia
    static bool IsTimeSince_Network(void* a0, double a1, float a2, bool a3)
    {
        return NativeCall<bool, void*, double, float, bool>(nullptr, "UVictoryCore.IsTimeSince_Network(UObject*,double,float,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsTimeSince_Utc(double,float,bool)
    // endereco: casamento de bytes com a build de referencia
    static bool IsTimeSince_Utc(double a0, float a1, bool a2)
    {
        return NativeCall<bool, double, float, bool>(nullptr, "UVictoryCore.IsTimeSince_Utc(double,float,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsTimerActive(UObject*,FString)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=439+grafo=11/11]]
    static bool IsTimerActive(void* a0, const FString& a1)
    {
        return NativeCall<bool, void*, void*>(nullptr, "UVictoryCore.IsTimerActive(UObject*,FString)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static bool IsTimerActive(void* a0, FString* a1)
    { return IsTimerActive(a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsTimerPaused(UObject*,FString)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=439+grafo=11/11]]
    static bool IsTimerPaused(void* a0, const FString& a1)
    {
        return NativeCall<bool, void*, void*>(nullptr, "UVictoryCore.IsTimerPaused(UObject*,FString)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static bool IsTimerPaused(void* a0, FString* a1)
    { return IsTimerPaused(a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsUnderMesh(APrimalCharacter*,UE::Math::TVector<double>&,bool&,UActorComponent*&,bo
    // endereco: casamento de bytes com a build de referencia
    static bool IsUnderMesh(void* a0, void* a1, void* a2, void* a3, bool a4, float a5)
    {
        return NativeCall<bool, void*, void*, void*, void*, bool, float>(nullptr, "UVictoryCore.IsUnderMesh(APrimalCharacter*,UE::Math::TVector<double>&,bool&,UActorComponent*&,bool,float)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsValidItemForGrinding(UPrimalItem*,UPrimalInventoryComponent*)
    // endereco: casamento de bytes com a build de referencia
    static bool IsValidItemForGrinding(void* a0, void* a1)
    {
        return NativeCall<bool, void*, void*>(nullptr, "UVictoryCore.IsValidItemForGrinding(UPrimalItem*,UPrimalInventoryComponent*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.IsValidSlateBrushResource(FSlateBrush&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static BrzPonteiro IsValidSlateBrushResource(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "UVictoryCore.IsValidSlateBrushResource(FSlateBrush&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsVerboseDisplayEnabled(UObject*)
    // endereco: casamento de bytes com a build de referencia
    static bool IsVerboseDisplayEnabled(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UVictoryCore.IsVerboseDisplayEnabled(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsWeatherEnabled()
    // endereco: casamento de bytes com a build de referencia
    static bool IsWeatherEnabled()
    {
        return NativeCall<bool>(nullptr, "UVictoryCore.IsWeatherEnabled()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsWorkshopIDSubscribed(FString&)
    // endereco: casamento de bytes com a build de referencia
    static bool IsWorkshopIDSubscribed(const FString& a0)
    {
        return NativeCall<bool, void*>(nullptr, "UVictoryCore.IsWorkshopIDSubscribed(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static bool IsWorkshopIDSubscribed(FString* a0)
    { return IsWorkshopIDSubscribed(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.IsXboxOneBuild()
    // endereco: cache_pdb_25090264
    static bool IsXboxOneBuild()
    {
        return NativeCall<bool>(nullptr, "UVictoryCore.IsXboxOneBuild()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UVictoryCore.Is_A_NonMod_VanillaClass(UClass*)
    // endereco: casamento de bytes com a build de referencia
    static bool Is_A_NonMod_VanillaClass(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UVictoryCore.Is_A_NonMod_VanillaClass(UClass*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.JoinStringArrayWithNewlines(TArray<FString,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    static void JoinStringArrayWithNewlines(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.JoinStringArrayWithNewlines(TArray<FString,TSizedDefaultAllocator<32>>&)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.KillTargetCharacterOrStructure(AActor*,AActor*,bool)
    // endereco: casamento de bytes com a build de referencia
    static bool KillTargetCharacterOrStructure(void* a0, void* a1, bool a2)
    {
        return NativeCall<bool, void*, void*, bool>(nullptr, "UVictoryCore.KillTargetCharacterOrStructure(AActor*,AActor*,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.LeadTargetPosition(UE::Math::TVector<double>&,float,UE::Math::TVector<double>&,UE::
    // endereco: casamento de bytes com a build de referencia
    static void LeadTargetPosition(void* retorno, void* a0, float a1, void* a2, void* a3)
    {
        NativeCall<void, void*, void*, float, void*, void*>(nullptr, "UVictoryCore.LeadTargetPosition(UE::Math::TVector<double>&,float,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", retorno, a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.LeaderboardColumnNameToString(TEnumAsByte<ELeaderboardColumnName::Type>)
    // endereco: casamento de bytes com a build de referencia
    static void LeaderboardColumnNameToString(void* retorno, unsigned char a0)
    {
        NativeCall<void, void*, unsigned char>(nullptr, "UVictoryCore.LeaderboardColumnNameToString(TEnumAsByte<ELeaderboardColumnName::Type>)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ListDinos(UObject*,bool,int)
    // endereco: casamento de bytes com a build de referencia
    static void ListDinos(void* retorno, void* a0, bool a1, int a2)
    {
        NativeCall<void, void*, void*, bool, int>(nullptr, "UVictoryCore.ListDinos(UObject*,bool,int)", retorno, a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.ListDinosNew(UObject*,TFunction<bool__cdecl(APrimalDinoCharacter*)>&)
    // endereco: casamento de bytes com a build de referencia
    static void ListDinosNew(void* retorno, void* a0, void* a1)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "UVictoryCore.ListDinosNew(UObject*,TFunction<bool__cdecl(APrimalDinoCharacter*)>&)", retorno, a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.MakeBrushPreservingImageSize(FSlateBrush&,FSlateBrush&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro MakeBrushPreservingImageSize(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "UVictoryCore.MakeBrushPreservingImageSize(FSlateBrush&,FSlateBrush&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.MakeHitResult(UE::Math::TVector<double>,UE::Math::TVector<double>,UPhysicalMaterial
    // endereco: casamento de bytes com a build de referencia
    static void MakeHitResult(void* retorno, void* a0, void* a1, void* a2, void* a3, void* a4, unsigned long long a5, int a6, bool a7)
    {
        NativeCall<void, void*, void*, void*, void*, void*, void*, unsigned long long, int, bool>(nullptr, "UVictoryCore.MakeHitResult(UE::Math::TVector<double>,UE::Math::TVector<double>,UPhysicalMaterial*,AActor*,UPrimitiveComponent*,FName,int,bool)", retorno, a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.MakePlaneWithPoints(UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::T
    // endereco: casamento de bytes com a build de referencia
    static void MakePlaneWithPoints(void* retorno, void* a0, void* a1, void* a2)
    {
        NativeCall<void, void*, void*, void*, void*>(nullptr, "UVictoryCore.MakePlaneWithPoints(UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>)", retorno, a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.MakePlayerCharacterConfigStructReplicated(bool,TArray<FLinearColor,TSizedDefaultAll
    // endereco: casamento de bytes com a build de referencia
    static void MakePlayerCharacterConfigStructReplicated(void* retorno, bool a0, void* a1, const FString& a2, void* a3, int a4, unsigned char a5, unsigned char a6, float a7, float a8, void* a9, void* a10, void* a11, int a12, bool a13)
    {
        NativeCall<void, void*, bool, void*, void*, void*, int, unsigned char, unsigned char, float, float, void*, void*, void*, int, bool>(nullptr, "UVictoryCore.MakePlayerCharacterConfigStructReplicated(bool,TArray<FLinearColor,TSizedDefaultAllocator<32>>,FString,TArray<float,TSizedDefaultAllocator<32>>,int,unsignedchar,unsignedchar,float,float,TArray<unsignedchar,TSizedDefaultAllocator<32>>,TArray<unsignedchar,TSizedDefaultAllocator<32>>,TArray<unsignedchar,TSizedDefaultAllocator<32>>&,int,bool)", retorno, a0, a1, const_cast<FString*>(&a2), a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void MakePlayerCharacterConfigStructReplicated(void* retorno, bool a0, void* a1, FString* a2, void* a3, int a4, unsigned char a5, unsigned char a6, float a7, float a8, void* a9, void* a10, void* a11, int a12, bool a13)
    { MakePlayerCharacterConfigStructReplicated(retorno, a0, a1, *a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.MapAngleRangeToCurveClamped(float,float,float,float,float,TEnumAsByte<ESimpleCurve:
    // endereco: casamento de bytes com a build de referencia
    static float MapAngleRangeToCurveClamped(float a0, float a1, float a2, float a3, float a4, unsigned char a5)
    {
        return NativeCall<float, float, float, float, float, float, unsigned char>(nullptr, "UVictoryCore.MapAngleRangeToCurveClamped(float,float,float,float,float,TEnumAsByte<ESimpleCurve::Type>)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.MapRangeToCurveClamped(float,float,float,float,float,TEnumAsByte<ESimpleCurve::Type
    // endereco: casamento de bytes com a build de referencia
    static float MapRangeToCurveClamped(float a0, float a1, float a2, float a3, float a4, unsigned char a5)
    {
        return NativeCall<float, float, float, float, float, float, unsigned char>(nullptr, "UVictoryCore.MapRangeToCurveClamped(float,float,float,float,float,TEnumAsByte<ESimpleCurve::Type>)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.MarkGen2IntroAsSeen(UObject*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=29]]
    static void MarkGen2IntroAsSeen(void* a0)
    {
        NativeCall<void, void*>(nullptr, "UVictoryCore.MarkGen2IntroAsSeen(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ModifyDinoSetupTargetLevel(FDinoSetup&,float,int,int)
    // endereco: casamento de bytes com a build de referencia
    static void ModifyDinoSetupTargetLevel(void* retorno, void* a0, float a1, int a2, int a3)
    {
        NativeCall<void, void*, void*, float, int, int>(nullptr, "UVictoryCore.ModifyDinoSetupTargetLevel(FDinoSetup&,float,int,int)", retorno, a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.MultiLinePenetrationTraceByChannel(UObject*,TArray<FPenetrationTraceHit,TSizedDefau
    // endereco: casamento de bytes com a build de referencia
    static void MultiLinePenetrationTraceByChannel(void* a0, void* a1, void* a2, void* a3, int a4, void* a5, bool a6, bool a7, bool a8, float a9)
    {
        NativeCall<void, void*, void*, void*, void*, int, void*, bool, bool, bool, float>(nullptr, "UVictoryCore.MultiLinePenetrationTraceByChannel(UObject*,TArray<FPenetrationTraceHit,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,ECollisionChannel,TArray<AActor*,TSizedDefaultAllocator<32>>&,bool,bool,bool,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.MultiTraceProjectSphere(UObject*,TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE:
    // endereco: casamento de bytes com a build de referencia
    static void MultiTraceProjectSphere(void* a0, void* a1, void* a2, int a3, int a4, int a5, float a6, float a7, float a8, float a9, int a10, int a11, bool a12, float a13, bool a14)
    {
        NativeCall<void, void*, void*, void*, int, int, int, float, float, float, float, int, int, bool, float, bool>(nullptr, "UVictoryCore.MultiTraceProjectSphere(UObject*,TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,ECollisionChannel,int,int,float,float,float,float,int,int,bool,float,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UVictoryCore.MulticastComponentProperty(UActorComponent*,FName,bool)
    // endereco: casamento de bytes com a build de referencia
    static void MulticastComponentProperty(void* a0, unsigned long long a1, bool a2)
    {
        NativeCall<void, void*, unsigned long long, bool>(nullptr, "UVictoryCore.MulticastComponentProperty(UActorComponent*,FName,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.MulticastDrawDebugArrow(AActor*,UE::Math::TVector<double>,UE::Math::TVector<double>
    // endereco: casamento de bytes com a build de referencia
    static void MulticastDrawDebugArrow(void* a0, void* a1, void* a2, float a3, void* a4, float a5)
    {
        NativeCall<void, void*, void*, void*, float, void*, float>(nullptr, "UVictoryCore.MulticastDrawDebugArrow(AActor*,UE::Math::TVector<double>,UE::Math::TVector<double>,float,FLinearColor,float)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.MulticastDrawDebugBox(AActor*,UE::Math::TVector<double>,UE::Math::TVector<double>,F
    // endereco: casamento de bytes com a build de referencia
    static void MulticastDrawDebugBox(void* a0, void* a1, void* a2, void* a3, void* a4, float a5)
    {
        NativeCall<void, void*, void*, void*, void*, void*, float>(nullptr, "UVictoryCore.MulticastDrawDebugBox(AActor*,UE::Math::TVector<double>,UE::Math::TVector<double>,FLinearColor,UE::Math::TRotator<double>,float)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.MulticastDrawDebugCamera(AActor*,ACameraActor*,FLinearColor,float)
    // endereco: casamento de bytes com a build de referencia
    static void MulticastDrawDebugCamera(void* a0, void* a1, void* a2, float a3)
    {
        NativeCall<void, void*, void*, void*, float>(nullptr, "UVictoryCore.MulticastDrawDebugCamera(AActor*,ACameraActor*,FLinearColor,float)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.MulticastDrawDebugCapsule(AActor*,UE::Math::TVector<double>,float,float,UE::Math::T
    // endereco: casamento de bytes com a build de referencia
    static void MulticastDrawDebugCapsule(void* a0, void* a1, float a2, float a3, void* a4, void* a5, float a6)
    {
        NativeCall<void, void*, void*, float, float, void*, void*, float>(nullptr, "UVictoryCore.MulticastDrawDebugCapsule(AActor*,UE::Math::TVector<double>,float,float,UE::Math::TRotator<double>,FLinearColor,float)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.MulticastDrawDebugCapsuleWithExtents(AActor*,UE::Math::TVector<double>,UE::Math::TV
    // endereco: casamento de bytes com a build de referencia
    static void MulticastDrawDebugCapsuleWithExtents(void* a0, void* a1, void* a2, float a3, void* a4, float a5, bool a6)
    {
        NativeCall<void, void*, void*, void*, float, void*, float, bool>(nullptr, "UVictoryCore.MulticastDrawDebugCapsuleWithExtents(AActor*,UE::Math::TVector<double>,UE::Math::TVector<double>,float,FLinearColor,float,bool)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.MulticastDrawDebugCoordinateSystem(AActor*,UE::Math::TVector<double>,UE::Math::TRot
    // endereco: casamento de bytes com a build de referencia
    static void MulticastDrawDebugCoordinateSystem(void* a0, void* a1, void* a2, float a3, float a4, float a5)
    {
        NativeCall<void, void*, void*, void*, float, float, float>(nullptr, "UVictoryCore.MulticastDrawDebugCoordinateSystem(AActor*,UE::Math::TVector<double>,UE::Math::TRotator<double>,float,float,float)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.MulticastDrawDebugCylinder(AActor*,UE::Math::TVector<double>,UE::Math::TVector<doub
    // endereco: casamento de bytes com a build de referencia
    static void MulticastDrawDebugCylinder(void* a0, void* a1, void* a2, float a3, int a4, void* a5, float a6)
    {
        NativeCall<void, void*, void*, void*, float, int, void*, float>(nullptr, "UVictoryCore.MulticastDrawDebugCylinder(AActor*,UE::Math::TVector<double>,UE::Math::TVector<double>,float,int,FLinearColor,float)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.MulticastDrawDebugLine(AActor*,UE::Math::TVector<double>,UE::Math::TVector<double>,
    // endereco: casamento de bytes com a build de referencia
    static void MulticastDrawDebugLine(void* a0, void* a1, void* a2, void* a3, float a4, float a5, bool a6)
    {
        NativeCall<void, void*, void*, void*, void*, float, float, bool>(nullptr, "UVictoryCore.MulticastDrawDebugLine(AActor*,UE::Math::TVector<double>,UE::Math::TVector<double>,FLinearColor,float,float,bool)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.MulticastDrawDebugPoint(AActor*,UE::Math::TVector<double>,float,FLinearColor,float)
    // endereco: casamento de bytes com a build de referencia
    static void MulticastDrawDebugPoint(void* a0, void* a1, float a2, void* a3, float a4)
    {
        NativeCall<void, void*, void*, float, void*, float>(nullptr, "UVictoryCore.MulticastDrawDebugPoint(AActor*,UE::Math::TVector<double>,float,FLinearColor,float)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.MulticastDrawDebugSphere(AActor*,UE::Math::TVector<double>,float,int,FLinearColor,f
    // endereco: casamento de bytes com a build de referencia
    static void MulticastDrawDebugSphere(void* a0, void* a1, float a2, int a3, void* a4, float a5)
    {
        NativeCall<void, void*, void*, float, int, void*, float>(nullptr, "UVictoryCore.MulticastDrawDebugSphere(AActor*,UE::Math::TVector<double>,float,int,FLinearColor,float)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.MulticastDrawDebugString(AActor*,UE::Math::TVector<double>,FString&,AActor*,FLinear
    // endereco: casamento de bytes com a build de referencia
    static void MulticastDrawDebugString(void* a0, void* a1, const FString& a2, void* a3, void* a4, float a5)
    {
        NativeCall<void, void*, void*, void*, void*, void*, float>(nullptr, "UVictoryCore.MulticastDrawDebugString(AActor*,UE::Math::TVector<double>,FString&,AActor*,FLinearColor,float)", a0, a1, const_cast<FString*>(&a2), a3, a4, a5);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void MulticastDrawDebugString(void* a0, void* a1, FString* a2, void* a3, void* a4, float a5)
    { MulticastDrawDebugString(a0, a1, *a2, a3, a4, a5); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.NetIDHashOwnsDLC(UObject*,unsignedint,FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    static bool NetIDHashOwnsDLC(void* a0, unsigned int a1, const FString& a2, bool a3)
    {
        return NativeCall<bool, void*, unsigned int, void*, bool>(nullptr, "UVictoryCore.NetIDHashOwnsDLC(UObject*,unsignedint,FString&,bool)", a0, a1, const_cast<FString*>(&a2), a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static bool NetIDHashOwnsDLC(void* a0, unsigned int a1, FString* a2, bool a3)
    { return NetIDHashOwnsDLC(a0, a1, *a2, a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.NetIDOwnsDLC(UObject*,FUniqueNetIdRepl&,FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    static bool NetIDOwnsDLC(void* a0, void* a1, const FString& a2, bool a3)
    {
        return NativeCall<bool, void*, void*, void*, bool>(nullptr, "UVictoryCore.NetIDOwnsDLC(UObject*,FUniqueNetIdRepl&,FString&,bool)", a0, a1, const_cast<FString*>(&a2), a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static bool NetIDOwnsDLC(void* a0, void* a1, FString* a2, bool a3)
    { return NetIDOwnsDLC(a0, a1, *a2, a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.NetworkTimeToRealWorldUtcTime(UObject*,double)
    // endereco: casamento de bytes com a build de referencia
    static double NetworkTimeToRealWorldUtcTime(void* a0, double a1)
    {
        return NativeCall<double, void*, double>(nullptr, "UVictoryCore.NetworkTimeToRealWorldUtcTime(UObject*,double)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UVictoryCore.NoDinoSpawning()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static bool NoDinoSpawning()
    {
        return NativeCall<bool>(nullptr, "UVictoryCore.NoDinoSpawning()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.NormalizeRotator(UE::Math::TRotator<double>)
    // endereco: casamento de bytes com a build de referencia
    static void NormalizeRotator(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.NormalizeRotator(UE::Math::TRotator<double>)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ObjectIsChildOf(UObject*,UClass*,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    static bool ObjectIsChildOf(void* a0, void* a1, bool a2)
    {
        return NativeCall<bool, void*, void*, bool>(nullptr, "UVictoryCore.ObjectIsChildOf(UObject*,UClass*,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ObjectIsChildOfSoftRef(UObject*,TSoftClassPtr<UObject>,bool)
    // endereco: casamento de bytes com a build de referencia
    static bool ObjectIsChildOfSoftRef(void* a0, void* a1, bool a2)
    {
        return NativeCall<bool, void*, void*, bool>(nullptr, "UVictoryCore.ObjectIsChildOfSoftRef(UObject*,TSoftClassPtr<UObject>,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ObjectRefToClassRef(UObject*)
    // endereco: casamento de bytes com a build de referencia
    static UClass* ObjectRefToClassRef(void* a0)
    {
        return NativeCall<UClass*, void*>(nullptr, "UVictoryCore.ObjectRefToClassRef(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.OnQueryEpicEntitlementsComplete(bool,FUniqueNetId&,FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    static void OnQueryEpicEntitlementsComplete(bool a0, void* a1, const FString& a2, const FString& a3)
    {
        NativeCall<void, bool, void*, void*, void*>(nullptr, "UVictoryCore.OnQueryEpicEntitlementsComplete(bool,FUniqueNetId&,FString&,FString&)", a0, a1, const_cast<FString*>(&a2), const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void OnQueryEpicEntitlementsComplete(bool a0, void* a1, FString* a2, FString* a3)
    { OnQueryEpicEntitlementsComplete(a0, a1, *a2, *a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.OpenMapEx(FString,bool,bool,FString,bool,FString,bool,FString,FString)
    // endereco: casamento de bytes com a build de referencia
    static void OpenMapEx(const FString& a0, bool a1, bool a2, const FString& a3, bool a4, const FString& a5, bool a6, const FString& a7, const FString& a8)
    {
        NativeCall<void, void*, bool, bool, void*, bool, void*, bool, void*, void*>(nullptr, "UVictoryCore.OpenMapEx(FString,bool,bool,FString,bool,FString,bool,FString,FString)", const_cast<FString*>(&a0), a1, a2, const_cast<FString*>(&a3), a4, const_cast<FString*>(&a5), a6, const_cast<FString*>(&a7), const_cast<FString*>(&a8));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void OpenMapEx(FString* a0, bool a1, bool a2, FString* a3, bool a4, FString* a5, bool a6, FString* a7, FString* a8)
    { OpenMapEx(*a0, a1, a2, *a3, a4, *a5, a6, *a7, *a8); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.OpenStorePageForDLC(FString)
    // endereco: casamento de bytes com a build de referencia
    static void OpenStorePageForDLC(const FString& a0)
    {
        NativeCall<void, void*>(nullptr, "UVictoryCore.OpenStorePageForDLC(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void OpenStorePageForDLC(FString* a0)
    { OpenStorePageForDLC(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.OptimizeContainerOrder(UE::Math::TVector<double>&,FContainerSortingInfo&,TArray<FCo
    // endereco: casamento de bytes com a build de referencia
    static void OptimizeContainerOrder(void* a0, void* a1, void* a2, float a3, float a4, void* a5)
    {
        NativeCall<void, void*, void*, void*, float, float, void*>(nullptr, "UVictoryCore.OptimizeContainerOrder(UE::Math::TVector<double>&,FContainerSortingInfo&,TArray<FContainerTasks,TSizedDefaultAllocator<32>>&,float,float,UPrimalInventoryComponent*)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.OverlappingActors(UWorld*,TArray<FOverlapResult,TSizedDefaultAllocator<32>>&,UE::Ma
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=301+chamadores=8+grafo=5/5]]
    static bool OverlappingActors(void* a0, void* a1, void* a2, float a3, int a4, void* a5, unsigned long long a6, bool a7)
    {
        return NativeCall<bool, void*, void*, void*, float, int, void*, unsigned long long, bool>(nullptr, "UVictoryCore.OverlappingActors(UWorld*,TArray<FOverlapResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>,float,int,AActor*,FName,bool)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.OverlappingActorsBP(UObject*,TArray<FOverlapResult,TSizedDefaultAllocator<32>>&,UE:
    // endereco: casamento de bytes com a build de referencia
    static bool OverlappingActorsBP(void* a0, void* a1, void* a2, float a3, int a4, void* a5, unsigned long long a6, bool a7)
    {
        return NativeCall<bool, void*, void*, void*, float, int, void*, unsigned long long, bool>(nullptr, "UVictoryCore.OverlappingActorsBP(UObject*,TArray<FOverlapResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>,float,int,AActor*,FName,bool)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.OverlappingActorsTrace(UWorld*,TArray<FOverlapResult,TSizedDefaultAllocator<32>>&,U
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=298+chamadores=2+grafo=5/5]]
    static bool OverlappingActorsTrace(void* a0, void* a1, void* a2, float a3, int a4, void* a5, unsigned long long a6, bool a7)
    {
        return NativeCall<bool, void*, void*, void*, float, int, void*, unsigned long long, bool>(nullptr, "UVictoryCore.OverlappingActorsTrace(UWorld*,TArray<FOverlapResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>,float,ECollisionChannel,AActor*,FName,bool)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.OverlappingActorsTraceBP(UObject*,TArray<FOverlapResult,TSizedDefaultAllocator<32>>
    // endereco: casamento de bytes com a build de referencia
    static bool OverlappingActorsTraceBP(void* a0, void* a1, void* a2, float a3, int a4, void* a5, unsigned long long a6, bool a7)
    {
        return NativeCall<bool, void*, void*, void*, float, int, void*, unsigned long long, bool>(nullptr, "UVictoryCore.OverlappingActorsTraceBP(UObject*,TArray<FOverlapResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>,float,ECollisionChannel,AActor*,FName,bool)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.OverlappingStationaryObjectsTraceBP(UObject*,APrimalCharacter*,TArray<FOverlapResul
    // endereco: casamento de bytes com a build de referencia
    static bool OverlappingStationaryObjectsTraceBP(void* a0, void* a1, void* a2, void* a3, float a4, int a5, void* a6, unsigned long long a7, bool a8)
    {
        return NativeCall<bool, void*, void*, void*, void*, float, int, void*, unsigned long long, bool>(nullptr, "UVictoryCore.OverlappingStationaryObjectsTraceBP(UObject*,APrimalCharacter*,TArray<FOverlapResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>,float,ECollisionChannel,AActor*,FName,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.OwnsAberration()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static bool OwnsAberration()
    {
        return NativeCall<bool>(nullptr, "UVictoryCore.OwnsAberration()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.OwnsAstraeos()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static bool OwnsAstraeos()
    {
        return NativeCall<bool>(nullptr, "UVictoryCore.OwnsAstraeos()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.OwnsBobsTallTales()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static bool OwnsBobsTallTales()
    {
        return NativeCall<bool>(nullptr, "UVictoryCore.OwnsBobsTallTales()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.OwnsCrystalIsles()
    // endereco: casamento de bytes com a build de referencia
    static bool OwnsCrystalIsles()
    {
        return NativeCall<bool>(nullptr, "UVictoryCore.OwnsCrystalIsles()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.OwnsDLC(FString)
    // endereco: casamento de bytes com a build de referencia
    static bool OwnsDLC(const FString& a0)
    {
        return NativeCall<bool, void*>(nullptr, "UVictoryCore.OwnsDLC(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static bool OwnsDLC(FString* a0)
    { return OwnsDLC(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.OwnsDarkPegasus()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static bool OwnsDarkPegasus()
    {
        return NativeCall<bool>(nullptr, "UVictoryCore.OwnsDarkPegasus()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.OwnsExtinction()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static bool OwnsExtinction()
    {
        return NativeCall<bool>(nullptr, "UVictoryCore.OwnsExtinction()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.OwnsFireLion()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static bool OwnsFireLion()
    {
        return NativeCall<bool>(nullptr, "UVictoryCore.OwnsFireLion()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.OwnsGenesis()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=43]]
    static bool OwnsGenesis()
    {
        return NativeCall<bool>(nullptr, "UVictoryCore.OwnsGenesis()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.OwnsGenesisSeasonPass()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static bool OwnsGenesisSeasonPass()
    {
        return NativeCall<bool>(nullptr, "UVictoryCore.OwnsGenesisSeasonPass()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.OwnsScorchedEarth()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static bool OwnsScorchedEarth()
    {
        return NativeCall<bool>(nullptr, "UVictoryCore.OwnsScorchedEarth()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.OwnsShoulderDragon()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static bool OwnsShoulderDragon()
    {
        return NativeCall<bool>(nullptr, "UVictoryCore.OwnsShoulderDragon()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UVictoryCore.OwnsSpiritBear()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static bool OwnsSpiritBear()
    {
        return NativeCall<bool>(nullptr, "UVictoryCore.OwnsSpiritBear()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UVictoryCore.OwnsTidesOfFortune()
    // endereco: casamento de bytes com a build de referencia
    static bool OwnsTidesOfFortune()
    {
        return NativeCall<bool>(nullptr, "UVictoryCore.OwnsTidesOfFortune()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.PaginateMultiUseEntries(TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int,int,
    // endereco: casamento de bytes com a build de referencia
    static void PaginateMultiUseEntries(void* a0, int a1, int a2, int a3, int a4, void* a5, void* a6)
    {
        NativeCall<void, void*, int, int, int, int, void*, void*>(nullptr, "UVictoryCore.PaginateMultiUseEntries(TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int,int,int,int,FMultiUseEntry,FMultiUseEntry)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.PauseTimer(UObject*,FString)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=377+bytes40+grafo=11/11]]
    static void PauseTimer(void* a0, const FString& a1)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.PauseTimer(UObject*,FString)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void PauseTimer(void* a0, FString* a1)
    { PauseTimer(a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.PersistentToUtcTime(UObject*,double)
    // endereco: casamento de bytes com a build de referencia
    static double PersistentToUtcTime(void* a0, double a1)
    {
        return NativeCall<double, void*, double>(nullptr, "UVictoryCore.PersistentToUtcTime(UObject*,double)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.PlaceStructure(AShooterCharacter*,TSubclassOf<APrimalStructure>,FItemNetID,bool)
    // endereco: casamento de bytes com a build de referencia
    static void PlaceStructure(void* a0, void* a1, unsigned long long a2, bool a3)
    {
        NativeCall<void, void*, void*, unsigned long long, bool>(nullptr, "UVictoryCore.PlaceStructure(AShooterCharacter*,TSubclassOf<APrimalStructure>,FItemNetID,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.PlayCompanionReactionOnSolePlayer(APrimalCharacter*,FCompanionReactionData&,bool,UM
    // endereco: casamento de bytes com a build de referencia
    static void PlayCompanionReactionOnSolePlayer(void* a0, void* a1, bool a2, void* a3, bool a4, int a5)
    {
        NativeCall<void, void*, void*, bool, void*, bool, int>(nullptr, "UVictoryCore.PlayCompanionReactionOnSolePlayer(APrimalCharacter*,FCompanionReactionData&,bool,UMaterialInterface*,bool,int)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.PlayCompanionReactionToPlayers(TArray<APrimalCharacter*,TSizedDefaultAllocator<32>>
    // endereco: casamento de bytes com a build de referencia
    static void PlayCompanionReactionToPlayers(void* a0, void* a1, bool a2, void* a3, bool a4, int a5)
    {
        NativeCall<void, void*, void*, bool, void*, bool, int>(nullptr, "UVictoryCore.PlayCompanionReactionToPlayers(TArray<APrimalCharacter*,TSizedDefaultAllocator<32>>,FCompanionReactionData&,bool,UMaterialInterface*,bool,int)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.PlayExplorerNoteMovie(UObject*,FString,FOnMoviePlaybackFinished,bool,int)
    // endereco: casamento de bytes com a build de referencia
    static bool PlayExplorerNoteMovie(void* a0, const FString& a1, void* a2, bool a3, int a4)
    {
        return NativeCall<bool, void*, void*, void*, bool, int>(nullptr, "UVictoryCore.PlayExplorerNoteMovie(UObject*,FString,FOnMoviePlaybackFinished,bool,int)", a0, const_cast<FString*>(&a1), a2, a3, a4);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static bool PlayExplorerNoteMovie(void* a0, FString* a1, void* a2, bool a3, int a4)
    { return PlayExplorerNoteMovie(a0, *a1, a2, a3, a4); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.PlayMovie(UObject*,FString,bool,FOnMoviePlaybackFinished,bool,EPlayMovieVolumeType)
    // endereco: casamento de bytes com a build de referencia
    static bool PlayMovie(void* a0, const FString& a1, bool a2, void* a3, bool a4, int a5)
    {
        return NativeCall<bool, void*, void*, bool, void*, bool, int>(nullptr, "UVictoryCore.PlayMovie(UObject*,FString,bool,FOnMoviePlaybackFinished,bool,EPlayMovieVolumeType)", a0, const_cast<FString*>(&a1), a2, a3, a4, a5);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static bool PlayMovie(void* a0, FString* a1, bool a2, void* a3, bool a4, int a5)
    { return PlayMovie(a0, *a1, a2, a3, a4, a5); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.PlayMovieEx(FString,bool,FOnMoviePlaybackFinished,FOnMovieSkipRequested,USlateBrush
    // endereco: casamento de bytes com a build de referencia
    static bool PlayMovieEx(const FString& a0, bool a1, void* a2, void* a3, void* a4, void* a5)
    {
        return NativeCall<bool, void*, bool, void*, void*, void*, void*>(nullptr, "UVictoryCore.PlayMovieEx(FString,bool,FOnMoviePlaybackFinished,FOnMovieSkipRequested,USlateBrushAsset*,UE::Math::TVector2<double>&)", const_cast<FString*>(&a0), a1, a2, a3, a4, a5);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static bool PlayMovieEx(FString* a0, bool a1, void* a2, void* a3, void* a4, void* a5)
    { return PlayMovieEx(*a0, a1, a2, a3, a4, a5); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.PlayMusic(UObject*,FString,bool,float,bool,bool,float)
    // endereco: casamento de bytes com a build de referencia
    static void PlayMusic(void* a0, const FString& a1, bool a2, float a3, bool a4, bool a5, float a6)
    {
        NativeCall<void, void*, void*, bool, float, bool, bool, float>(nullptr, "UVictoryCore.PlayMusic(UObject*,FString,bool,float,bool,bool,float)", a0, const_cast<FString*>(&a1), a2, a3, a4, a5, a6);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void PlayMusic(void* a0, FString* a1, bool a2, float a3, bool a4, bool a5, float a6)
    { PlayMusic(a0, *a1, a2, a3, a4, a5, a6); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UVictoryCore.PlayerOwnsASASeasonPass1(AShooterPlayerController*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static bool PlayerOwnsASASeasonPass1(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UVictoryCore.PlayerOwnsASASeasonPass1(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.PlayerOwnsAberrationServer(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    static bool PlayerOwnsAberrationServer(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UVictoryCore.PlayerOwnsAberrationServer(AShooterPlayerController*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UVictoryCore.PlayerOwnsAstraeos(AShooterPlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=91]]
    static bool PlayerOwnsAstraeos(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UVictoryCore.PlayerOwnsAstraeos(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.PlayerOwnsBobsTallTales(AShooterPlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static bool PlayerOwnsBobsTallTales(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UVictoryCore.PlayerOwnsBobsTallTales(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.PlayerOwnsCurrentMap(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    static bool PlayerOwnsCurrentMap(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UVictoryCore.PlayerOwnsCurrentMap(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.PlayerOwnsDLC(APlayerState*,TSubclassOf<UDLC>)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro PlayerOwnsDLC(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "UVictoryCore.PlayerOwnsDLC(APlayerState*,TSubclassOf<UDLC>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.PlayerOwnsDLC(AShooterPlayerController*,TEnumAsByte<EEngramGroup::Type>)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro PlayerOwnsDLC(void* a0, unsigned char a1)
    {
        return NativeCall<void*, void*, unsigned char>(nullptr, "UVictoryCore.PlayerOwnsDLC(AShooterPlayerController*,TEnumAsByte<EEngramGroup::Type>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.PlayerOwnsDLCServerOnly(AShooterPlayerController*,FString&)
    // endereco: casamento de bytes com a build de referencia
    static bool PlayerOwnsDLCServerOnly(void* a0, const FString& a1)
    {
        return NativeCall<bool, void*, void*>(nullptr, "UVictoryCore.PlayerOwnsDLCServerOnly(AShooterPlayerController*,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static bool PlayerOwnsDLCServerOnly(void* a0, FString* a1)
    { return PlayerOwnsDLCServerOnly(a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.PlayerOwnsDarkPegasus(AShooterPlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=91]]
    static bool PlayerOwnsDarkPegasus(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UVictoryCore.PlayerOwnsDarkPegasus(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.PlayerOwnsExtinctionServer(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    static bool PlayerOwnsExtinctionServer(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UVictoryCore.PlayerOwnsExtinctionServer(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.PlayerOwnsFireLion(AShooterPlayerController*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static bool PlayerOwnsFireLion(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UVictoryCore.PlayerOwnsFireLion(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.PlayerOwnsGenesisSeasonPassServer(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    static bool PlayerOwnsGenesisSeasonPassServer(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UVictoryCore.PlayerOwnsGenesisSeasonPassServer(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.PlayerOwnsLostColony(AShooterPlayerController*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=91+chamadores=2]]
    static bool PlayerOwnsLostColony(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UVictoryCore.PlayerOwnsLostColony(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.PlayerOwnsScorchedEarthServer(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    static bool PlayerOwnsScorchedEarthServer(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UVictoryCore.PlayerOwnsScorchedEarthServer(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.PlayerOwnsShoulderDragon(AShooterPlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=91]]
    static bool PlayerOwnsShoulderDragon(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UVictoryCore.PlayerOwnsShoulderDragon(AShooterPlayerController*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UVictoryCore.PlayerOwnsSpiritBear(AShooterPlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=91]]
    static bool PlayerOwnsSpiritBear(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UVictoryCore.PlayerOwnsSpiritBear(AShooterPlayerController*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UVictoryCore.PlayerOwnsTidesOfFortune(AShooterPlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static bool PlayerOwnsTidesOfFortune(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UVictoryCore.PlayerOwnsTidesOfFortune(AShooterPlayerController*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UVictoryCore.PlayerStateOwnsASASeasonPass1(AShooterPlayerState*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=74]]
    static bool PlayerStateOwnsASASeasonPass1(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UVictoryCore.PlayerStateOwnsASASeasonPass1(AShooterPlayerState*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.PlayerStateOwnsBobsTallTales(AShooterPlayerState*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static bool PlayerStateOwnsBobsTallTales(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UVictoryCore.PlayerStateOwnsBobsTallTales(AShooterPlayerState*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.PlayerStateOwnsDLC(APlayerState*,FString&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static bool PlayerStateOwnsDLC(void* a0, const FString& a1)
    {
        return NativeCall<bool, void*, void*>(nullptr, "UVictoryCore.PlayerStateOwnsDLC(APlayerState*,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static bool PlayerStateOwnsDLC(void* a0, FString* a1)
    { return PlayerStateOwnsDLC(a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.PlayerStateOwnsLostColony(AShooterPlayerState*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=74]]
    static bool PlayerStateOwnsLostColony(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UVictoryCore.PlayerStateOwnsLostColony(AShooterPlayerState*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UVictoryCore.PlayerStateOwnsTidesOfFortune(AShooterPlayerState*)
    // endereco: casamento de bytes com a build de referencia
    static bool PlayerStateOwnsTidesOfFortune(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UVictoryCore.PlayerStateOwnsTidesOfFortune(AShooterPlayerState*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.PointOnCircle(float,float)
    // endereco: casamento de bytes com a build de referencia
    static void PointOnCircle(void* retorno, float a0, float a1)
    {
        NativeCall<void, void*, float, float>(nullptr, "UVictoryCore.PointOnCircle(float,float)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.PointOnSphere(float,float,float)
    // endereco: casamento de bytes com a build de referencia
    static void PointOnSphere(void* retorno, float a0, float a1, float a2)
    {
        NativeCall<void, void*, float, float, float>(nullptr, "UVictoryCore.PointOnSphere(float,float,float)", retorno, a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.PointsOnACircle(UE::Math::TVector<double>&,float,int)
    // endereco: casamento de bytes com a build de referencia
    static void PointsOnACircle(void* retorno, void* a0, float a1, int a2)
    {
        NativeCall<void, void*, void*, float, int>(nullptr, "UVictoryCore.PointsOnACircle(UE::Math::TVector<double>&,float,int)", retorno, a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.PointsOnAGrid(UObject*,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,float
    // endereco: casamento de bytes com a build de referencia
    static void PointsOnAGrid(void* retorno, void* a0, void* a1, void* a2, float a3, float a4, int a5, float a6)
    {
        NativeCall<void, void*, void*, void*, void*, float, float, int, float>(nullptr, "UVictoryCore.PointsOnAGrid(UObject*,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,float,float,int,float)", retorno, a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.PointsRandomDist(UE::Math::TVector<double>&,int,float,float)
    // endereco: casamento de bytes com a build de referencia
    static void PointsRandomDist(void* retorno, void* a0, int a1, float a2, float a3)
    {
        NativeCall<void, void*, void*, int, float, float>(nullptr, "UVictoryCore.PointsRandomDist(UE::Math::TVector<double>&,int,float,float)", retorno, a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.PrecisionRound(float,int)
    // endereco: cache_pdb_25090264
    static float PrecisionRound(float a0, int a1)
    {
        return NativeCall<float, float, int>(nullptr, "UVictoryCore.PrecisionRound(float,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.PredictProjectilePath(UObject*,FHitResult&,TArray<UE::Math::TVector<double>,TSizedD
    // endereco: casamento de bytes com a build de referencia
    static bool PredictProjectilePath(void* a0, void* a1, void* a2, void* a3, void* a4, bool a5, int a6, float a7, void* a8, float a9, float a10, float a11, bool a12, bool a13)
    {
        return NativeCall<bool, void*, void*, void*, void*, void*, bool, int, float, void*, float, float, float, bool, bool>(nullptr, "UVictoryCore.PredictProjectilePath(UObject*,FHitResult&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>,UE::Math::TVector<double>,bool,ECollisionChannel,float,TArray<AActor*,TSizedDefaultAllocator<32>>&,float,float,float,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.PredictProjectilePathWithIgnoreClasses(UObject*,FHitResult&,TArray<UE::Math::TVecto
    // endereco: casamento de bytes com a build de referencia
    static bool PredictProjectilePathWithIgnoreClasses(void* a0, void* a1, void* a2, void* a3, void* a4, bool a5, int a6, float a7, void* a8, float a9, float a10, float a11, bool a12, bool a13, void* a14)
    {
        return NativeCall<bool, void*, void*, void*, void*, void*, bool, int, float, void*, float, float, float, bool, bool, void*>(nullptr, "UVictoryCore.PredictProjectilePathWithIgnoreClasses(UObject*,FHitResult&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>,UE::Math::TVector<double>,bool,ECollisionChannel,float,TArray<AActor*,TSizedDefaultAllocator<32>>&,float,float,float,bool,bool,TArray<TSubclassOf<UObject>,TSizedDefaultAllocator<32>>&)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.PrintMessageInShippingBuild(FString&)
    // endereco: casamento de bytes com a build de referencia
    static void PrintMessageInShippingBuild(const FString& a0)
    {
        NativeCall<void, void*>(nullptr, "UVictoryCore.PrintMessageInShippingBuild(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void PrintMessageInShippingBuild(FString* a0)
    { PrintMessageInShippingBuild(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.PrintNativeCallstack()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=119+grafo=4/4]]
    static void PrintNativeCallstack()
    {
        NativeCall<void>(nullptr, "UVictoryCore.PrintNativeCallstack()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.PrintStringThreadSafe(FString&,bool,bool,FLinearColor,float,FName)
    // endereco: casamento de bytes com a build de referencia
    static void PrintStringThreadSafe(const FString& a0, bool a1, bool a2, void* a3, float a4, unsigned long long a5)
    {
        NativeCall<void, void*, bool, bool, void*, float, unsigned long long>(nullptr, "UVictoryCore.PrintStringThreadSafe(FString&,bool,bool,FLinearColor,float,FName)", const_cast<FString*>(&a0), a1, a2, a3, a4, a5);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void PrintStringThreadSafe(FString* a0, bool a1, bool a2, void* a3, float a4, unsigned long long a5)
    { PrintStringThreadSafe(*a0, a1, a2, a3, a4, a5); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.ProcessURLAction(FString&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro ProcessURLAction(const FString& a0)
    {
        return NativeCall<void*, void*>(nullptr, "UVictoryCore.ProcessURLAction(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static BrzPonteiro ProcessURLAction(FString* a0)
    { return ProcessURLAction(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ProjectLocationToEdgeOfSphere(bool&,UE::Math::TVector<double>&,UE::Math::TVector<do
    // endereco: casamento de bytes com a build de referencia
    static void ProjectLocationToEdgeOfSphere(void* retorno, void* a0, void* a1, void* a2, void* a3, bool a4, bool a5, bool a6, void* a7, float a8)
    {
        NativeCall<void, void*, void*, void*, void*, void*, bool, bool, bool, void*, float>(nullptr, "UVictoryCore.ProjectLocationToEdgeOfSphere(bool&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,float&,bool,bool,bool,AActor*,float)", retorno, a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ProjectScreenLocationIntoWorld(APlayerController*,UE::Math::TVector2<double>,float)
    // endereco: casamento de bytes com a build de referencia
    static void ProjectScreenLocationIntoWorld(void* retorno, void* a0, void* a1, float a2)
    {
        NativeCall<void, void*, void*, void*, float>(nullptr, "UVictoryCore.ProjectScreenLocationIntoWorld(APlayerController*,UE::Math::TVector2<double>,float)", retorno, a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ProjectVectorOntoInsideOfSphere(UE::Math::TVector<double>&,UE::Math::TVector<double
    // endereco: casamento de bytes com a build de referencia
    static void ProjectVectorOntoInsideOfSphere(void* retorno, void* a0, void* a1, void* a2, bool a3)
    {
        NativeCall<void, void*, void*, void*, void*, bool>(nullptr, "UVictoryCore.ProjectVectorOntoInsideOfSphere(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool)", retorno, a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ProjectWorldLocationToScreenOrScreenEdgePosition(APlayerController*,UE::Math::TVect
    // endereco: casamento de bytes com a build de referencia
    static bool ProjectWorldLocationToScreenOrScreenEdgePosition(void* a0, void* a1, void* a2, float a3, bool a4, void* a5, bool a6)
    {
        return NativeCall<bool, void*, void*, void*, float, bool, void*, bool>(nullptr, "UVictoryCore.ProjectWorldLocationToScreenOrScreenEdgePosition(APlayerController*,UE::Math::TVector<double>,UE::Math::TVector2<double>&,float,bool,bool&,bool)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ProjectWorldToScreenPositionRaw(APlayerController*,UE::Math::TVector<double>,UE::Ma
    // endereco: casamento de bytes com a build de referencia
    static bool ProjectWorldToScreenPositionRaw(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, bool a6)
    {
        return NativeCall<bool, void*, void*, void*, void*, void*, void*, bool>(nullptr, "UVictoryCore.ProjectWorldToScreenPositionRaw(APlayerController*,UE::Math::TVector<double>,UE::Math::TVector2<double>*,UE::Math::TVector<double>*,UE::Math::TBox2<double>*,bool*,bool)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.PureClassDefaultObject(UClass*)
    // endereco: casamento de bytes com a build de referencia
    static UObject* PureClassDefaultObject(void* a0)
    {
        return NativeCall<UObject*, void*>(nullptr, "UVictoryCore.PureClassDefaultObject(UClass*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.QuerySteamEntitlements(UObject*)
    // endereco: casamento de bytes com a build de referencia
    static void QuerySteamEntitlements(void* a0)
    {
        NativeCall<void, void*>(nullptr, "UVictoryCore.QuerySteamEntitlements(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.RLerp(UE::Math::TRotator<double>,UE::Math::TRotator<double>,float,bool)
    // endereco: casamento de bytes com a build de referencia
    static void RLerp(void* retorno, void* a0, void* a1, float a2, bool a3)
    {
        NativeCall<void, void*, void*, void*, float, bool>(nullptr, "UVictoryCore.RLerp(UE::Math::TRotator<double>,UE::Math::TRotator<double>,float,bool)", retorno, a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.RandInt(int)
    // endereco: casamento de bytes com a build de referencia
    static int RandInt(int a0)
    {
        return NativeCall<int, int>(nullptr, "UVictoryCore.RandInt(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.RandomPointInBoundingBoxFromStream(UE::Math::TVector<double>&,UE::Math::TVector<dou
    // endereco: casamento de bytes com a build de referencia
    static void RandomPointInBoundingBoxFromStream(void* retorno, void* a0, void* a1, void* a2)
    {
        NativeCall<void, void*, void*, void*, void*>(nullptr, "UVictoryCore.RandomPointInBoundingBoxFromStream(UE::Math::TVector<double>&,UE::Math::TVector<double>&,FRandomStream&)", retorno, a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.RecordMeshingMetrics(AActor*,bool)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo+string_aprovado]
    static void RecordMeshingMetrics(void* a0, bool a1)
    {
        NativeCall<void, void*, bool>(nullptr, "UVictoryCore.RecordMeshingMetrics(AActor*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.RecordOutsideWorldMetrics(AActor*,bool)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo+string_aprovado]
    static void RecordOutsideWorldMetrics(void* a0, bool a1)
    {
        NativeCall<void, void*, bool>(nullptr, "UVictoryCore.RecordOutsideWorldMetrics(AActor*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.RecordTribeChangeMetric(AShooterPlayerState*,FTribeData,FTribeChangeInfo)
    // endereco: casamento de bytes com a build de referencia
    static void RecordTribeChangeMetric(void* a0, void* a1, void* a2)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "UVictoryCore.RecordTribeChangeMetric(AShooterPlayerState*,FTribeData,FTribeChangeInfo)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UVictoryCore.RecursiveDuplicateAndAttach(USceneComponent*,USceneComponent*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    static void RecursiveDuplicateAndAttach(void* a0, void* a1, void* a2)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "UVictoryCore.RecursiveDuplicateAndAttach(USceneComponent*,USceneComponent*,AActor*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.RecursivelyApplDynamicMaterialParamsToMeshAndChildren_Helper(UMeshComponent*,TArray
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro RecursivelyApplDynamicMaterialParamsToMeshAndChildren_Helper(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, bool a7)
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, void*, void*, bool>(nullptr, "UVictoryCore.RecursivelyApplDynamicMaterialParamsToMeshAndChildren_Helper(UMeshComponent*,TArray<FName,TSizedDefaultAllocator<32>>&,TArray<float,TSizedDefaultAllocator<32>>&,TArray<FName,TSizedDefaultAllocator<32>>&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,TArray<FName,TSizedDefaultAllocator<32>>&,TArray<UTexture*,TSizedDefaultAllocator<32>>&,bool)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.RefreshApplySoundVolumes()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static void RefreshApplySoundVolumes()
    {
        NativeCall<void>(nullptr, "UVictoryCore.RefreshApplySoundVolumes()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.RemoveActorFromCustomActorList(UObject*,FName,AActor*)
    // endereco: casamento de bytes com a build de referencia
    static bool RemoveActorFromCustomActorList(void* a0, unsigned long long a1, void* a2)
    {
        return NativeCall<bool, void*, unsigned long long, void*>(nullptr, "UVictoryCore.RemoveActorFromCustomActorList(UObject*,FName,AActor*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.RemoveInvalidObjectsInContainer(TArray<APrimalDinoCharacter*,TSizedDefaultAllocator
    // endereco: casamento de bytes com a build de referencia
    static void RemoveInvalidObjectsInContainer(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.RemoveInvalidObjectsInContainer(TArray<APrimalDinoCharacter*,TSizedDefaultAllocator<32>>&)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.RemovePitchAndRollFromRotator(UE::Math::TRotator<double>&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static void RemovePitchAndRollFromRotator(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.RemovePitchAndRollFromRotator(UE::Math::TRotator<double>&)", retorno, a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.RemoveTraitFromDino(APrimalDinoCharacter*,FName,FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro RemoveTraitFromDino(void* a0, unsigned long long a1, const FString& a2, bool a3)
    {
        return NativeCall<void*, void*, unsigned long long, void*, bool>(nullptr, "UVictoryCore.RemoveTraitFromDino(APrimalDinoCharacter*,FName,FString&,bool)", a0, a1, const_cast<FString*>(&a2), a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static BrzPonteiro RemoveTraitFromDino(void* a0, unsigned long long a1, FString* a2, bool a3)
    { return RemoveTraitFromDino(a0, a1, *a2, a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ResetCharacterBoneModifiersToPreset(UObject*,UPrimalPlayerData*,AShooterPlayerState
    // endereco: casamento de bytes com a build de referencia
    static void ResetCharacterBoneModifiersToPreset(void* a0, void* a1, void* a2, int a3)
    {
        NativeCall<void, void*, void*, void*, int>(nullptr, "UVictoryCore.ResetCharacterBoneModifiersToPreset(UObject*,UPrimalPlayerData*,AShooterPlayerState*,int)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ResetCooldown(double&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static void ResetCooldown(void* a0)
    {
        NativeCall<void, void*>(nullptr, "UVictoryCore.ResetCooldown(double&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ResetMousePositionToCenter(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    static void ResetMousePositionToCenter(void* a0)
    {
        NativeCall<void, void*>(nullptr, "UVictoryCore.ResetMousePositionToCenter(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ReupdateCaptures(UObject*,bool)
    // endereco: casamento de bytes com a build de referencia
    static void ReupdateCaptures(void* a0, bool a1)
    {
        NativeCall<void, void*, bool>(nullptr, "UVictoryCore.ReupdateCaptures(UObject*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.RotDegreesBetweenYaw(UE::Math::TRotator<double>,UE::Math::TRotator<double>)
    // endereco: cache_pdb_25090264
    static BrzPonteiro RotDegreesBetweenYaw(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "UVictoryCore.RotDegreesBetweenYaw(UE::Math::TRotator<double>,UE::Math::TRotator<double>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.RotateDirToTargetWithAngleLimits(UE::Math::TVector<double>&,UE::Math::TVector<doubl
    // endereco: casamento de bytes com a build de referencia
    static void RotateDirToTargetWithAngleLimits(void* retorno, void* a0, void* a1, void* a2, bool a3)
    {
        NativeCall<void, void*, void*, void*, void*, bool>(nullptr, "UVictoryCore.RotateDirToTargetWithAngleLimits(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TRotator<double>,bool)", retorno, a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.SafeUTCNow()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro SafeUTCNow()
    {
        return NativeCall<void*>(nullptr, "UVictoryCore.SafeUTCNow()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.SanitizeChatString(FString&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro SanitizeChatString(const FString& a0)
    {
        return NativeCall<void*, void*>(nullptr, "UVictoryCore.SanitizeChatString(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static BrzPonteiro SanitizeChatString(FString* a0)
    { return SanitizeChatString(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SaveWorld(UWorld*,float)
    // endereco: casamento de bytes com a build de referencia
    static bool SaveWorld(void* a0, float a1)
    {
        return NativeCall<bool, void*, float>(nullptr, "UVictoryCore.SaveWorld(UWorld*,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SelectCloserVector(UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TV
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    static void SelectCloserVector(void* retorno, void* a0, void* a1, void* a2, void* a3)
    {
        NativeCall<void, void*, void*, void*, void*, void*>(nullptr, "UVictoryCore.SelectCloserVector(UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,bool&)", retorno, a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SelectVectorIfWithinRange(UE::Math::TVector<double>,UE::Math::TVector<double>,bool&
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    static void SelectVectorIfWithinRange(void* retorno, void* a0, void* a1, void* a2, float a3)
    {
        NativeCall<void, void*, void*, void*, void*, float>(nullptr, "UVictoryCore.SelectVectorIfWithinRange(UE::Math::TVector<double>,UE::Math::TVector<double>,bool&,float)", retorno, a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.SerializeDynamicPropertiesWriter(UNetConnection*,FBitWriter&,FProperty*,unsignedcha
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro SerializeDynamicPropertiesWriter(void* a0, void* a1, void* a2, void* a3, int a4)
    {
        return NativeCall<void*, void*, void*, void*, void*, int>(nullptr, "UVictoryCore.SerializeDynamicPropertiesWriter(UNetConnection*,FBitWriter&,FProperty*,unsignedchar*,int)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ServerAllowLineOfSightInteraction(AShooterCharacter*,AActor*,ECollisionChannel)
    // endereco: casamento de bytes com a build de referencia
    static bool ServerAllowLineOfSightInteraction(void* a0, void* a1, int a2)
    {
        return NativeCall<bool, void*, void*, int>(nullptr, "UVictoryCore.ServerAllowLineOfSightInteraction(AShooterCharacter*,AActor*,ECollisionChannel)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ServerCheckMeshingOnActor(AActor*,bool)
    // endereco: casamento de bytes com a build de referencia
    static bool ServerCheckMeshingOnActor(void* a0, bool a1)
    {
        return NativeCall<bool, void*, bool>(nullptr, "UVictoryCore.ServerCheckMeshingOnActor(AActor*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ServerOctreeOverlapActors(UObject*,UE::Math::TVector<double>,float,EServerOctreeGro
    // endereco: casamento de bytes com a build de referencia
    static void ServerOctreeOverlapActors(void* retorno, void* a0, void* a1, float a2, int a3, bool a4)
    {
        NativeCall<void, void*, void*, void*, float, int, bool>(nullptr, "UVictoryCore.ServerOctreeOverlapActors(UObject*,UE::Math::TVector<double>,float,EServerOctreeGroup::Type,bool)", retorno, a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ServerOctreeOverlapActorsBitMask(UObject*,UE::Math::TVector<double>,float,int,bool)
    // endereco: casamento de bytes com a build de referencia
    static void ServerOctreeOverlapActorsBitMask(void* retorno, void* a0, void* a1, float a2, int a3, bool a4)
    {
        NativeCall<void, void*, void*, void*, float, int, bool>(nullptr, "UVictoryCore.ServerOctreeOverlapActorsBitMask(UObject*,UE::Math::TVector<double>,float,int,bool)", retorno, a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ServerOctreeOverlapActorsClass(UObject*,UE::Math::TVector<double>,float,EServerOctr
    // endereco: casamento de bytes com a build de referencia
    static void ServerOctreeOverlapActorsClass(void* retorno, void* a0, void* a1, float a2, int a3, void* a4, bool a5)
    {
        NativeCall<void, void*, void*, void*, float, int, void*, bool>(nullptr, "UVictoryCore.ServerOctreeOverlapActorsClass(UObject*,UE::Math::TVector<double>,float,EServerOctreeGroup::Type,TSubclassOf<AActor>,bool)", retorno, a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ServerOctreeOverlapActorsClassBitMask(UObject*,UE::Math::TVector<double>,float,int,
    // endereco: casamento de bytes com a build de referencia
    static void ServerOctreeOverlapActorsClassBitMask(void* retorno, void* a0, void* a1, float a2, int a3, void* a4, bool a5)
    {
        NativeCall<void, void*, void*, void*, float, int, void*, bool>(nullptr, "UVictoryCore.ServerOctreeOverlapActorsClassBitMask(UObject*,UE::Math::TVector<double>,float,int,TSubclassOf<AActor>,bool)", retorno, a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ServerSearchFoliage(UObject*,UE::Math::TVector<double>,float,TArray<FOverlappedFoli
    // endereco: casamento de bytes com a build de referencia
    static void ServerSearchFoliage(void* a0, void* a1, float a2, void* a3, bool a4, bool a5, bool a6, bool a7, bool a8)
    {
        NativeCall<void, void*, void*, float, void*, bool, bool, bool, bool, bool>(nullptr, "UVictoryCore.ServerSearchFoliage(UObject*,UE::Math::TVector<double>,float,TArray<FOverlappedFoliageElement,TSizedDefaultAllocator<32>>&,bool,bool,bool,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ServerSearchFoliageByResource(UObject*,UE::Math::TVector<double>,float,TArray<FOver
    // endereco: casamento de bytes com a build de referencia
    static void ServerSearchFoliageByResource(void* a0, void* a1, float a2, void* a3, void* a4, bool a5, bool a6, bool a7, bool a8, bool a9)
    {
        NativeCall<void, void*, void*, float, void*, void*, bool, bool, bool, bool, bool>(nullptr, "UVictoryCore.ServerSearchFoliageByResource(UObject*,UE::Math::TVector<double>,float,TArray<FOverlappedFoliageElement,TSizedDefaultAllocator<32>>&,TArray<TSubclassOf<UPrimalItem>,TSizedDefaultAllocator<32>>&,bool,bool,bool,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SetAnimBPBlinkBlend(UAnimInstance*,float)
    // endereco: casamento de bytes com a build de referencia
    static void SetAnimBPBlinkBlend(void* a0, float a1)
    {
        NativeCall<void, void*, float>(nullptr, "UVictoryCore.SetAnimBPBlinkBlend(UAnimInstance*,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SetAnimBPDisableIK(UAnimInstance*,bool,bool,bool,bool&,bool&,bool&,bool&)
    // endereco: casamento de bytes com a build de referencia
    static void SetAnimBPDisableIK(void* a0, bool a1, bool a2, bool a3, void* a4, void* a5, void* a6, void* a7)
    {
        NativeCall<void, void*, bool, bool, bool, void*, void*, void*, void*>(nullptr, "UVictoryCore.SetAnimBPDisableIK(UAnimInstance*,bool,bool,bool,bool&,bool&,bool&,bool&)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SetAnimBPMovementMode(UAnimInstance*,int)
    // endereco: casamento de bytes com a build de referencia
    static void SetAnimBPMovementMode(void* a0, int a1)
    {
        NativeCall<void, void*, int>(nullptr, "UVictoryCore.SetAnimBPMovementMode(UAnimInstance*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SetAnimBPOffsets(UAnimInstance*,UE::Math::TVector<double>,UE::Math::TRotator<double
    // endereco: casamento de bytes com a build de referencia
    static void SetAnimBPOffsets(void* a0, void* a1, void* a2, void* a3)
    {
        NativeCall<void, void*, void*, void*, void*>(nullptr, "UVictoryCore.SetAnimBPOffsets(UAnimInstance*,UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TTransform<double>)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.SetAnimBPOffsetsLocalSpace(USkeletalMeshComponent*,UE::Math::TTransform<double>&,UE
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro SetAnimBPOffsetsLocalSpace(void* a0, void* a1, void* a2)
    {
        return NativeCall<void*, void*, void*, void*>(nullptr, "UVictoryCore.SetAnimBPOffsetsLocalSpace(USkeletalMeshComponent*,UE::Math::TTransform<double>&,UE::Math::TTransform<double>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SetBoolCVarValue(FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    static bool SetBoolCVarValue(const FString& a0, bool a1)
    {
        return NativeCall<bool, void*, bool>(nullptr, "UVictoryCore.SetBoolCVarValue(FString&,bool)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static bool SetBoolCVarValue(FString* a0, bool a1)
    { return SetBoolCVarValue(*a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SetDinoSetupPointsPerStat(FDinoSetup&,TEnumAsByte<EPrimalCharacterStatusValue::Type
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    static void SetDinoSetupPointsPerStat(void* a0, unsigned char a1, int a2, bool a3, bool a4)
    {
        NativeCall<void, void*, unsigned char, int, bool, bool>(nullptr, "UVictoryCore.SetDinoSetupPointsPerStat(FDinoSetup&,TEnumAsByte<EPrimalCharacterStatusValue::Type>,int,bool,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UVictoryCore.SetExplorerNoteSubtitlesMediaTimeOnWidget(UBorder*,float)
    // endereco: casamento de bytes com a build de referencia
    static void SetExplorerNoteSubtitlesMediaTimeOnWidget(void* a0, float a1)
    {
        NativeCall<void, void*, float>(nullptr, "UVictoryCore.SetExplorerNoteSubtitlesMediaTimeOnWidget(UBorder*,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SetExtraCmdLine(FString&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=23]]
    static void SetExtraCmdLine(const FString& a0)
    {
        NativeCall<void, void*>(nullptr, "UVictoryCore.SetExtraCmdLine(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void SetExtraCmdLine(FString* a0)
    { SetExtraCmdLine(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SetFloatCVarValue(FString&,float)
    // endereco: casamento de bytes com a build de referencia
    static bool SetFloatCVarValue(const FString& a0, float a1)
    {
        return NativeCall<bool, void*, float>(nullptr, "UVictoryCore.SetFloatCVarValue(FString&,float)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static bool SetFloatCVarValue(FString* a0, float a1)
    { return SetFloatCVarValue(*a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SetGrassEnable(bool)
    // endereco: casamento de bytes com a build de referencia
    static void SetGrassEnable(bool a0)
    {
        NativeCall<void, bool>(nullptr, "UVictoryCore.SetGrassEnable(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SetIntCVarValue(FString&,int)
    // endereco: casamento de bytes com a build de referencia
    static bool SetIntCVarValue(const FString& a0, int a1)
    {
        return NativeCall<bool, void*, int>(nullptr, "UVictoryCore.SetIntCVarValue(FString&,int)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static bool SetIntCVarValue(FString* a0, int a1)
    { return SetIntCVarValue(*a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SetLastHostedMapPlayed(FString&)
    // endereco: casamento de bytes com a build de referencia
    static void SetLastHostedMapPlayed(const FString& a0)
    {
        NativeCall<void, void*>(nullptr, "UVictoryCore.SetLastHostedMapPlayed(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void SetLastHostedMapPlayed(FString* a0)
    { SetLastHostedMapPlayed(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SetLastMapPlayed(FString&)
    // endereco: casamento de bytes com a build de referencia
    static void SetLastMapPlayed(const FString& a0)
    {
        NativeCall<void, void*>(nullptr, "UVictoryCore.SetLastMapPlayed(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void SetLastMapPlayed(FString* a0)
    { SetLastMapPlayed(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SetMaterialColorizationFromItemColors(UPrimalItem*,UMaterialInstanceDynamic*)
    // endereco: casamento de bytes com a build de referencia
    static void SetMaterialColorizationFromItemColors(void* a0, void* a1)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.SetMaterialColorizationFromItemColors(UPrimalItem*,UMaterialInstanceDynamic*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SetMousePosition(APlayerController*,float,float)
    // endereco: casamento de bytes com a build de referencia
    static void SetMousePosition(void* a0, float a1, float a2)
    {
        NativeCall<void, void*, float, float>(nullptr, "UVictoryCore.SetMousePosition(APlayerController*,float,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SetMultiUseEntryPriority(TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,bool,in
    // endereco: thunk
    static bool SetMultiUseEntryPriority(void* a0, bool a1, int a2, int a3)
    {
        return NativeCall<bool, void*, bool, int, int>(nullptr, "UVictoryCore.SetMultiUseEntryPriority(TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,bool,int,int)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SetSessionPrefix(FString&)
    // endereco: casamento de bytes com a build de referencia
    static void SetSessionPrefix(const FString& a0)
    {
        NativeCall<void, void*>(nullptr, "UVictoryCore.SetSessionPrefix(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void SetSessionPrefix(FString* a0)
    { SetSessionPrefix(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SetStringCVarValue(FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    static bool SetStringCVarValue(const FString& a0, const FString& a1)
    {
        return NativeCall<bool, void*, void*>(nullptr, "UVictoryCore.SetStringCVarValue(FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static bool SetStringCVarValue(FString* a0, FString* a1)
    { return SetStringCVarValue(*a0, *a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.ShouldGenerateTargetLoc(UWorld*,UE::Math::TVector<double>&,UE::Math::TVector<double
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro ShouldGenerateTargetLoc(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8)
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, void*, void*, void*, void*>(nullptr, "UVictoryCore.ShouldGenerateTargetLoc(UWorld*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,unsignedchar&,float&,float&,float&,UE::Math::TVector2<double>&,float&)", a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ShowCustomModDeeplinkPrompt(AShooterPlayerController*,__int64,FString,FString)
    // endereco: casamento de bytes com a build de referencia
    static void ShowCustomModDeeplinkPrompt(void* a0, int a1, const FString& a2, const FString& a3)
    {
        NativeCall<void, void*, int, void*, void*>(nullptr, "UVictoryCore.ShowCustomModDeeplinkPrompt(AShooterPlayerController*,__int64,FString,FString)", a0, a1, const_cast<FString*>(&a2), const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void ShowCustomModDeeplinkPrompt(void* a0, int a1, FString* a2, FString* a3)
    { ShowCustomModDeeplinkPrompt(a0, a1, *a2, *a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.ShowProfileUI(UWorld*,TSharedPtr<FUniqueNetId,1>&,TSharedPtr<FUniqueNetId,1>&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro ShowProfileUI(void* a0, void* a1, void* a2)
    {
        return NativeCall<void*, void*, void*, void*>(nullptr, "UVictoryCore.ShowProfileUI(UWorld*,TSharedPtr<FUniqueNetId,1>&,TSharedPtr<FUniqueNetId,1>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SimpleCurveEval(float,TEnumAsByte<ESimpleCurve::Type>)
    // endereco: casamento de bytes com a build de referencia
    static float SimpleCurveEval(float a0, unsigned char a1)
    {
        return NativeCall<float, float, unsigned char>(nullptr, "UVictoryCore.SimpleCurveEval(float,TEnumAsByte<ESimpleCurve::Type>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SimpleCurveInterpClamped(float,float,float,TEnumAsByte<ESimpleCurve::Type>)
    // endereco: casamento de bytes com a build de referencia
    static float SimpleCurveInterpClamped(float a0, float a1, float a2, unsigned char a3)
    {
        return NativeCall<float, float, float, float, unsigned char>(nullptr, "UVictoryCore.SimpleCurveInterpClamped(float,float,float,TEnumAsByte<ESimpleCurve::Type>)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SimpleCurveInterpClampedLinearColor(FLinearColor,FLinearColor,float,TEnumAsByte<ESi
    // endereco: casamento de bytes com a build de referencia
    static void SimpleCurveInterpClampedLinearColor(void* retorno, void* a0, void* a1, float a2, unsigned char a3)
    {
        NativeCall<void, void*, void*, void*, float, unsigned char>(nullptr, "UVictoryCore.SimpleCurveInterpClampedLinearColor(FLinearColor,FLinearColor,float,TEnumAsByte<ESimpleCurve::Type>)", retorno, a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SimpleCurveInterpClampedRotator(UE::Math::TRotator<double>,UE::Math::TRotator<doubl
    // endereco: casamento de bytes com a build de referencia
    static void SimpleCurveInterpClampedRotator(void* retorno, void* a0, void* a1, float a2, bool a3, unsigned char a4)
    {
        NativeCall<void, void*, void*, void*, float, bool, unsigned char>(nullptr, "UVictoryCore.SimpleCurveInterpClampedRotator(UE::Math::TRotator<double>,UE::Math::TRotator<double>,float,bool,TEnumAsByte<ESimpleCurve::Type>)", retorno, a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SimpleCurveInterpClampedTransform(UE::Math::TTransform<double>,UE::Math::TTransform
    // endereco: casamento de bytes com a build de referencia
    static void SimpleCurveInterpClampedTransform(void* retorno, void* a0, void* a1, float a2, unsigned char a3)
    {
        NativeCall<void, void*, void*, void*, float, unsigned char>(nullptr, "UVictoryCore.SimpleCurveInterpClampedTransform(UE::Math::TTransform<double>,UE::Math::TTransform<double>,float,TEnumAsByte<ESimpleCurve::Type>)", retorno, a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SimpleCurveInterpClampedVector(UE::Math::TVector<double>,UE::Math::TVector<double>,
    // endereco: casamento de bytes com a build de referencia
    static void SimpleCurveInterpClampedVector(void* retorno, void* a0, void* a1, float a2, unsigned char a3)
    {
        NativeCall<void, void*, void*, void*, float, unsigned char>(nullptr, "UVictoryCore.SimpleCurveInterpClampedVector(UE::Math::TVector<double>,UE::Math::TVector<double>,float,TEnumAsByte<ESimpleCurve::Type>)", retorno, a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SimpleFloatString(float)
    // endereco: casamento de bytes com a build de referencia
    static void SimpleFloatString(void* retorno, float a0)
    {
        NativeCall<void, void*, float>(nullptr, "UVictoryCore.SimpleFloatString(float)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SimpleReplaceUnicodeWithSupportedAlternatives(FString&)
    // endereco: casamento de bytes com a build de referencia
    static void SimpleReplaceUnicodeWithSupportedAlternatives(void* retorno, const FString& a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.SimpleReplaceUnicodeWithSupportedAlternatives(FString&)", retorno, const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void SimpleReplaceUnicodeWithSupportedAlternatives(void* retorno, FString* a0)
    { SimpleReplaceUnicodeWithSupportedAlternatives(retorno, *a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.SortActorsByDistance(UE::Math::TVector<double>&,TArray<AActor*,TSizedDefaultAllocat
    // endereco: casamento de bytes com a build de referencia
    static void SortActorsByDistance(void* retorno, void* a0, void* a1)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "UVictoryCore.SortActorsByDistance(UE::Math::TVector<double>&,TArray<AActor*,TSizedDefaultAllocator<32>>&)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SortActorsByDistanceInPlace(UE::Math::TVector<double>&,TArray<AActor*,TSizedDefault
    // endereco: casamento de bytes com a build de referencia
    static void SortActorsByDistanceInPlace(void* a0, void* a1)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.SortActorsByDistanceInPlace(UE::Math::TVector<double>&,TArray<AActor*,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SortActorsByDistanceReturnNearest(UE::Math::TVector<double>&,TArray<AActor*,TSizedD
    // endereco: casamento de bytes com a build de referencia
    static AActor* SortActorsByDistanceReturnNearest(void* a0, void* a1, bool a2)
    {
        return NativeCall<AActor*, void*, void*, bool>(nullptr, "UVictoryCore.SortActorsByDistanceReturnNearest(UE::Math::TVector<double>&,TArray<AActor*,TSizedDefaultAllocator<32>>&,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SortActorsByDistance_WeakPointer(UE::Math::TVector<double>&,TArray<TWeakObjectPtr<A
    // endereco: casamento de bytes com a build de referencia
    static void SortActorsByDistance_WeakPointer(void* a0, void* a1)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.SortActorsByDistance_WeakPointer(UE::Math::TVector<double>&,TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SortActorsByTag(int,TArray<AActor*,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    static void SortActorsByTag(void* retorno, int a0, void* a1)
    {
        NativeCall<void, void*, int, void*>(nullptr, "UVictoryCore.SortActorsByTag(int,TArray<AActor*,TSizedDefaultAllocator<32>>&)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SortActorsByType(TArray<AActor*,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    static void SortActorsByType(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.SortActorsByType(TArray<AActor*,TSizedDefaultAllocator<32>>&)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SortPointsByDistance(UE::Math::TVector<double>&,TArray<UE::Math::TVector<double>,TS
    // endereco: casamento de bytes com a build de referencia
    static void SortPointsByDistance(void* retorno, void* a0, void* a1)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "UVictoryCore.SortPointsByDistance(UE::Math::TVector<double>&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SortPointsForOptimalRoute(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<3
    // endereco: casamento de bytes com a build de referencia
    static void SortPointsForOptimalRoute(void* a0, void* a1)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.SortPointsForOptimalRoute(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,TArray<int,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SortStringArrayASC(bool,TArray<FString,TSizedDefaultAllocator<32>>)
    // endereco: casamento de bytes com a build de referencia
    static void SortStringArrayASC(void* retorno, bool a0, void* a1)
    {
        NativeCall<void, void*, bool, void*>(nullptr, "UVictoryCore.SortStringArrayASC(bool,TArray<FString,TSizedDefaultAllocator<32>>)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SpawnActorDeferred(UClass*,UObject*,UE::Math::TVector<double>&,UE::Math::TRotator<d
    // endereco: casamento de bytes com a build de referencia
    static AActor* SpawnActorDeferred(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, bool a6)
    {
        return NativeCall<AActor*, void*, void*, void*, void*, void*, void*, bool>(nullptr, "UVictoryCore.SpawnActorDeferred(UClass*,UObject*,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,AActor*,APawn*,bool)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SpawnActorInWorld(UObject*,TSubclassOf<AActor>,UE::Math::TVector<double>,UE::Math::
    // endereco: casamento de bytes com a build de referencia
    static AActor* SpawnActorInWorld(void* a0, void* a1, void* a2, void* a3, void* a4, int a5, unsigned long long a6, void* a7, void* a8)
    {
        return NativeCall<AActor*, void*, void*, void*, void*, void*, int, unsigned long long, void*, void*>(nullptr, "UVictoryCore.SpawnActorInWorld(UObject*,TSubclassOf<AActor>,UE::Math::TVector<double>,UE::Math::TRotator<double>,USceneComponent*,int,FName,AActor*,APawn*)", a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SpawnCustomDino(UObject*,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,FDi
    // endereco: casamento de bytes com a build de referencia
    static APrimalDinoCharacter* SpawnCustomDino(void* a0, void* a1, void* a2, void* a3, void* a4, float a5, bool a6, bool a7, bool a8, bool a9, void* a10, void* a11)
    {
        return NativeCall<APrimalDinoCharacter*, void*, void*, void*, void*, void*, float, bool, bool, bool, bool, void*, void*>(nullptr, "UVictoryCore.SpawnCustomDino(UObject*,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,FDinoSetup&,AShooterPlayerController*,float,bool,bool,bool,bool,AMissionType*,TSubclassOf<UPrimalColorSet>)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SpawnFollower(UWorld*,APrimalDinoCharacter*,TSoftClassPtr<APrimalDinoCharacter>,boo
    // endereco: casamento de bytes com a build de referencia
    static APrimalDinoCharacter* SpawnFollower(void* a0, void* a1, void* a2, bool a3, float a4, float a5)
    {
        return NativeCall<APrimalDinoCharacter*, void*, void*, void*, bool, float, float>(nullptr, "UVictoryCore.SpawnFollower(UWorld*,APrimalDinoCharacter*,TSoftClassPtr<APrimalDinoCharacter>,bool,float,float)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SpawnFollowerBasedOnRNG(UWorld*,APrimalDinoCharacter*,TArray<float,TSizedDefaultAll
    // endereco: casamento de bytes com a build de referencia
    static void SpawnFollowerBasedOnRNG(void* retorno, void* a0, void* a1, void* a2, void* a3, float a4, float a5, bool a6, float a7, float a8)
    {
        NativeCall<void, void*, void*, void*, void*, void*, float, float, bool, float, float>(nullptr, "UVictoryCore.SpawnFollowerBasedOnRNG(UWorld*,APrimalDinoCharacter*,TArray<float,TSizedDefaultAllocator<32>>,TSoftClassPtr<APrimalDinoCharacter>,float,float,bool,float,float)", retorno, a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SpawnSaddleAttachedStructure(APrimalDinoCharacter*,TSubclassOf<APrimalStructure>,UE
    // endereco: casamento de bytes com a build de referencia
    static APrimalStructure* SpawnSaddleAttachedStructure(void* a0, void* a1, void* a2, void* a3, void* a4, bool a5, int a6, unsigned long long a7, bool a8)
    {
        return NativeCall<APrimalStructure*, void*, void*, void*, void*, void*, bool, int, unsigned long long, bool>(nullptr, "UVictoryCore.SpawnSaddleAttachedStructure(APrimalDinoCharacter*,TSubclassOf<APrimalStructure>,UE::Math::TVector<double>,UE::Math::TRotator<double>,APrimalStructure*,bool,int,FName,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SphereOverlapFast(UObject*,UE::Math::TVector<double>&,float)
    // endereco: casamento de bytes com a build de referencia
    static bool SphereOverlapFast(void* a0, void* a1, float a2)
    {
        return NativeCall<bool, void*, void*, float>(nullptr, "UVictoryCore.SphereOverlapFast(UObject*,UE::Math::TVector<double>&,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.SplineLineTrace(USplineComponent*,TArray<AActor*,TSizedDefaultAllocator<32>>&,TArra
    // endereco: casamento de bytes com a build de referencia
    static bool SplineLineTrace(void* a0, void* a1, void* a2, int a3, int a4, bool a5, float a6)
    {
        return NativeCall<bool, void*, void*, void*, int, int, bool, float>(nullptr, "UVictoryCore.SplineLineTrace(USplineComponent*,TArray<AActor*,TSizedDefaultAllocator<32>>&,TArray<FHitResult,TSizedDefaultAllocator<32>>&,int,ECollisionChannel,bool,float)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.StartCompanionEventForPlayer(APrimalCharacter*,FCompanionEventData&,AActor*)
    // endereco: casamento de bytes com a build de referencia
    static void StartCompanionEventForPlayer(void* a0, void* a1, void* a2)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "UVictoryCore.StartCompanionEventForPlayer(APrimalCharacter*,FCompanionEventData&,AActor*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.StaticApplyBabyBoneModifiersToMesh(USkeletalMeshComponent*,FDinoBabySetup,float,boo
    // endereco: casamento de bytes com a build de referencia
    static void StaticApplyBabyBoneModifiersToMesh(void* a0, void* a1, float a2, bool a3)
    {
        NativeCall<void, void*, void*, float, bool>(nullptr, "UVictoryCore.StaticApplyBabyBoneModifiersToMesh(USkeletalMeshComponent*,FDinoBabySetup,float,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.StaticCheckForCommand(FString)
    // endereco: casamento de bytes com a build de referencia
    static bool StaticCheckForCommand(const FString& a0)
    {
        return NativeCall<bool, void*>(nullptr, "UVictoryCore.StaticCheckForCommand(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static bool StaticCheckForCommand(FString* a0)
    { return StaticCheckForCommand(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.StaticGetMinimapLocation(UObject*,UE::Math::TVector<double>)
    // endereco: thunk
    static void StaticGetMinimapLocation(void* retorno, void* a0, void* a1)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "UVictoryCore.StaticGetMinimapLocation(UObject*,UE::Math::TVector<double>)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.StaticGetTimeSince(UObject*,double)
    // endereco: casamento de bytes com a build de referencia
    static float StaticGetTimeSince(void* a0, double a1)
    {
        return NativeCall<float, void*, double>(nullptr, "UVictoryCore.StaticGetTimeSince(UObject*,double)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.StaticIsLocationWithinMap(UObject*,UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    static bool StaticIsLocationWithinMap(void* a0, void* a1)
    {
        return NativeCall<bool, void*, void*>(nullptr, "UVictoryCore.StaticIsLocationWithinMap(UObject*,UE::Math::TVector<double>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.StaticPlaySoundAtLocation(UObject*,USoundBase*,UE::Math::TVector<double>,UE::Math::
    // endereco: casamento de bytes com a build de referencia
    static void StaticPlaySoundAtLocation(void* a0, void* a1, void* a2, void* a3, float a4, float a5, float a6, void* a7, void* a8, void* a9, void* a10, bool a11)
    {
        NativeCall<void, void*, void*, void*, void*, float, float, float, void*, void*, void*, void*, bool>(nullptr, "UVictoryCore.StaticPlaySoundAtLocation(UObject*,USoundBase*,UE::Math::TVector<double>,UE::Math::TRotator<double>,float,float,float,USoundAttenuation*,USoundConcurrency*,AActor*,UInitialActiveSoundParams*,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.StaticRegisterNativesUVictoryCore()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=34]]
    static void StaticRegisterNativesUVictoryCore()
    {
        NativeCall<void>(nullptr, "UVictoryCore.StaticRegisterNativesUVictoryCore()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.StopAllMusicTracks(UObject*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static void StopAllMusicTracks(void* a0)
    {
        NativeCall<void, void*>(nullptr, "UVictoryCore.StopAllMusicTracks(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.StopCompanionEventForPlayer(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    static void StopCompanionEventForPlayer(void* a0)
    {
        NativeCall<void, void*>(nullptr, "UVictoryCore.StopCompanionEventForPlayer(APrimalCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.StopMovie()
    // endereco: casamento de bytes com a build de referencia
    static void StopMovie()
    {
        NativeCall<void>(nullptr, "UVictoryCore.StopMovie()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.StopMusic(UObject*,FString,float)
    // endereco: casamento de bytes com a build de referencia
    static void StopMusic(void* a0, const FString& a1, float a2)
    {
        NativeCall<void, void*, void*, float>(nullptr, "UVictoryCore.StopMusic(UObject*,FString,float)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void StopMusic(void* a0, FString* a1, float a2)
    { StopMusic(a0, *a1, a2); }

    // jogo_confirmou_dump
    //   UVictoryCore.StringReferenceToClass(FString&)
    // endereco: casamento de bytes com a build de referencia
    static void StringReferenceToClass(void* retorno, const FString& a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.StringReferenceToClass(FString&)", retorno, const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void StringReferenceToClass(void* retorno, FString* a0)
    { StringReferenceToClass(retorno, *a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.StringToIntAscii(FString,int)
    // endereco: casamento de bytes com a build de referencia
    static int StringToIntAscii(const FString& a0, int a1)
    {
        return NativeCall<int, void*, int>(nullptr, "UVictoryCore.StringToIntAscii(FString,int)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static int StringToIntAscii(FString* a0, int a1)
    { return StringToIntAscii(*a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.StripEmptyUnicode(FString&,int)
    // endereco: casamento de bytes com a build de referencia
    static void StripEmptyUnicode(void* retorno, const FString& a0, int a1)
    {
        NativeCall<void, void*, void*, int>(nullptr, "UVictoryCore.StripEmptyUnicode(FString&,int)", retorno, const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void StripEmptyUnicode(void* retorno, FString* a0, int a1)
    { StripEmptyUnicode(retorno, *a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ThereIsANonObstructedTraceToTheLocation_ActualTrace(UObject*,UE::Math::TVector<doub
    // endereco: casamento de bytes com a build de referencia
    static bool ThereIsANonObstructedTraceToTheLocation_ActualTrace(void* a0, void* a1, void* a2, int a3, void* a4, float a5, float a6, bool a7, float a8)
    {
        return NativeCall<bool, void*, void*, void*, int, void*, float, float, bool, float>(nullptr, "UVictoryCore.ThereIsANonObstructedTraceToTheLocation_ActualTrace(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,ECollisionChannel,TArray<AActor*,TSizedDefaultAllocator<32>>&,float,float,bool,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ThereIsANonObstructedTraceToTheLocation_CheckVerticalVariations(UObject*,UE::Math::
    // endereco: casamento de bytes com a build de referencia
    static bool ThereIsANonObstructedTraceToTheLocation_CheckVerticalVariations(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, float a6, float a7, float a8, int a9, int a10, float a11, bool a12, float a13)
    {
        return NativeCall<bool, void*, void*, void*, void*, void*, void*, float, float, float, int, int, float, bool, float>(nullptr, "UVictoryCore.ThereIsANonObstructedTraceToTheLocation_CheckVerticalVariations(UObject*,UE::Math::TVector<double>&,UE::Math::TVector<double>,UE::Math::TVector<double>,TArray<AActor*,TSizedDefaultAllocator<32>>&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,float,float,float,int,int,float,bool,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ThereIsANonObstructedTraceToTheLocation_VariousChannels(UObject*,UE::Math::TVector<
    // endereco: casamento de bytes com a build de referencia
    static bool ThereIsANonObstructedTraceToTheLocation_VariousChannels(void* a0, void* a1, void* a2, void* a3, float a4, float a5, bool a6, float a7)
    {
        return NativeCall<bool, void*, void*, void*, void*, float, float, bool, float>(nullptr, "UVictoryCore.ThereIsANonObstructedTraceToTheLocation_VariousChannels(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,TArray<AActor*,TSizedDefaultAllocator<32>>&,float,float,bool,float)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.TimeSeconds(UObject*)
    // endereco: casamento de bytes com a build de referencia
    static float TimeSeconds(void* a0)
    {
        return NativeCall<float, void*>(nullptr, "UVictoryCore.TimeSeconds(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.TimeSince(UObject*,double)
    // endereco: casamento de bytes com a build de referencia
    static float TimeSince(void* a0, double a1)
    {
        return NativeCall<float, void*, double>(nullptr, "UVictoryCore.TimeSince(UObject*,double)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.TimeSince_Network(UObject*,double)
    // endereco: casamento de bytes com a build de referencia
    static float TimeSince_Network(void* a0, double a1)
    {
        return NativeCall<float, void*, double>(nullptr, "UVictoryCore.TimeSince_Network(UObject*,double)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.TimeSince_Utc(double)
    // endereco: casamento de bytes com a build de referencia
    static float TimeSince_Utc(double a0)
    {
        return NativeCall<float, double>(nullptr, "UVictoryCore.TimeSince_Utc(double)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ToggleFreezeLevelStreaming(UObject*)
    // endereco: casamento de bytes com a build de referencia
    static void ToggleFreezeLevelStreaming(void* a0)
    {
        NativeCall<void, void*>(nullptr, "UVictoryCore.ToggleFreezeLevelStreaming(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.TraceProjectileArc(UObject*,FProjectileArc&,FHitResult&,UE::Math::TVector<double>&,
    // endereco: casamento de bytes com a build de referencia
    static bool TraceProjectileArc(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, float a6, void* a7, float a8, int a9, bool a10, bool a11, float a12)
    {
        return NativeCall<bool, void*, void*, void*, void*, void*, void*, float, void*, float, int, bool, bool, float>(nullptr, "UVictoryCore.TraceProjectileArc(UObject*,FProjectileArc&,FHitResult&,UE::Math::TVector<double>&,float&,UE::Math::TVector<double>&,float,TArray<AActor*,TSizedDefaultAllocator<32>>&,float,ECollisionChannel,bool,bool,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UVictoryCore.TransferMeshStateAndAttachments(USkeletalMeshComponent*,USkeletalMeshComponent*)
    // endereco: casamento de bytes com a build de referencia
    static void TransferMeshStateAndAttachments(void* a0, void* a1)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.TransferMeshStateAndAttachments(USkeletalMeshComponent*,USkeletalMeshComponent*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.TransferTraitsBetweenDinos(APrimalDinoCharacter*,APrimalDinoCharacter*,bool,TMap<FN
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro TransferTraitsBetweenDinos(void* a0, void* a1, bool a2, void* a3, void* a4, bool a5)
    {
        return NativeCall<void*, void*, void*, bool, void*, void*, bool>(nullptr, "UVictoryCore.TransferTraitsBetweenDinos(APrimalDinoCharacter*,APrimalDinoCharacter*,bool,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>>&,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>>&,bool)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.TransformLocation(UE::Math::TVector<double>&,UE::Math::TTransform<double>&,bool)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro TransformLocation(void* a0, void* a1, bool a2)
    {
        return NativeCall<void*, void*, void*, bool>(nullptr, "UVictoryCore.TransformLocation(UE::Math::TVector<double>&,UE::Math::TTransform<double>&,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.TransformRotation(UE::Math::TRotator<double>&,UE::Math::TTransform<double>&,bool)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro TransformRotation(void* a0, void* a1, bool a2)
    {
        return NativeCall<void*, void*, void*, bool>(nullptr, "UVictoryCore.TransformRotation(UE::Math::TRotator<double>&,UE::Math::TTransform<double>&,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.TransformVectorByScreenProjectionGlobalTransform(UE::Math::TVector2<double>)
    // endereco: cache_pdb_25090264
    static void TransformVectorByScreenProjectionGlobalTransform(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.TransformVectorByScreenProjectionGlobalTransform(UE::Math::TVector2<double>)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.TrimArray_Float(TArray<float,TSizedDefaultAllocator<32>>&,int,bool)
    // endereco: casamento de bytes com a build de referencia
    static void TrimArray_Float(void* a0, int a1, bool a2)
    {
        NativeCall<void, void*, int, bool>(nullptr, "UVictoryCore.TrimArray_Float(TArray<float,TSizedDefaultAllocator<32>>&,int,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.TrimArray_Vector(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,int,
    // endereco: casamento de bytes com a build de referencia
    static void TrimArray_Vector(void* a0, int a1, bool a2)
    {
        NativeCall<void, void*, int, bool>(nullptr, "UVictoryCore.TrimArray_Vector(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,int,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.TryActivateFirstZoomLevel(AActor*,bool,AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro TryActivateFirstZoomLevel(void* a0, bool a1, void* a2)
    {
        return NativeCall<void*, void*, bool, void*>(nullptr, "UVictoryCore.TryActivateFirstZoomLevel(AActor*,bool,AShooterPlayerController*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.TryGetActorClassFromIncompletePath(FString&)
    // endereco: casamento de bytes com a build de referencia
    static UClass* TryGetActorClassFromIncompletePath(const FString& a0)
    {
        return NativeCall<UClass*, void*>(nullptr, "UVictoryCore.TryGetActorClassFromIncompletePath(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static UClass* TryGetActorClassFromIncompletePath(FString* a0)
    { return TryGetActorClassFromIncompletePath(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.TryGetLocalizedString(FString,FString,FString*)
    // endereco: casamento de bytes com a build de referencia
    static bool TryGetLocalizedString(const FString& a0, const FString& a1, const FString& a2)
    {
        return NativeCall<bool, void*, void*, void*>(nullptr, "UVictoryCore.TryGetLocalizedString(FString,FString,FString*)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static bool TryGetLocalizedString(FString* a0, FString* a1, FString* a2)
    { return TryGetLocalizedString(*a0, *a1, *a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.TryScrollToAdjacentZoomLevel(AActor*,bool,AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro TryScrollToAdjacentZoomLevel(void* a0, bool a1, void* a2)
    {
        return NativeCall<void*, void*, bool, void*>(nullptr, "UVictoryCore.TryScrollToAdjacentZoomLevel(AActor*,bool,AShooterPlayerController*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.UTCTimeUntilUnixTime(__int64&,bool&,FTimespan&)
    // endereco: casamento de bytes com a build de referencia
    static void UTCTimeUntilUnixTime(void* a0, void* a1, void* a2)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "UVictoryCore.UTCTimeUntilUnixTime(__int64&,bool&,FTimespan&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.UnPauseTimer(UObject*,FString)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=377+bytes40+grafo=11/11]]
    static void UnPauseTimer(void* a0, const FString& a1)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.UnPauseTimer(UObject*,FString)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void UnPauseTimer(void* a0, FString* a1)
    { UnPauseTimer(a0, *a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.UnixToDateTime(__int64&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro UnixToDateTime(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "UVictoryCore.UnixToDateTime(__int64&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.UnstasisAndTraceForStationaryObjects(UWorld*,UE::Math::TVector<double>,UE::Math::TV
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro UnstasisAndTraceForStationaryObjects(void* a0, void* a1, void* a2, void* a3, void* a4, float a5, float a6, float a7, bool a8)
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, float, float, float, bool>(nullptr, "UVictoryCore.UnstasisAndTraceForStationaryObjects(UWorld*,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>&,TArray<AActor*,TSizedDefaultAllocator<32>>,float,float,float,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UVictoryCore.UpdateCustomMovement(unsignedchar&,float&,UE::Math::TRotator<double>&,UE::Math::TTr
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro UpdateCustomMovement(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8, void* a9, void* a10, void* a11, void* a12, void* a13, void* a14, void* a15, void* a16, void* a17, void* a18)
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, void*, void*, void*, void*, void*, void*, void*, void*, void*, void*, void*, void*, void*, void*>(nullptr, "UVictoryCore.UpdateCustomMovement(unsignedchar&,float&,UE::Math::TRotator<double>&,UE::Math::TTransform<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,float&,float&,bool&,float&,float&,float&,float&,float&,bool&,bool&,bool&,float&,UE::Math::TTransform<double>&)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.UpdateTaskTags(TSet<AActor*,DefaultKeyFuncs<AActor*,0>,FDefaultSetAllocator>&,TArra
    // endereco: casamento de bytes com a build de referencia
    static void UpdateTaskTags(void* a0, void* a1, unsigned long long a2, bool a3)
    {
        NativeCall<void, void*, void*, unsigned long long, bool>(nullptr, "UVictoryCore.UpdateTaskTags(TSet<AActor*,DefaultKeyFuncs<AActor*,0>,FDefaultSetAllocator>&,TArray<FContainerTasks,TSizedDefaultAllocator<32>>&,FName,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.UseCooldown(UObject*,double&)
    // endereco: casamento de bytes com a build de referencia
    static void UseCooldown(void* a0, void* a1)
    {
        NativeCall<void, void*, void*>(nullptr, "UVictoryCore.UseCooldown(UObject*,double&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.UtcToPersistentTime(UObject*,double)
    // endereco: casamento de bytes com a build de referencia
    static double UtcToPersistentTime(void* a0, double a1)
    {
        return NativeCall<double, void*, double>(nullptr, "UVictoryCore.UtcToPersistentTime(UObject*,double)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.VNewObjectFromBlueprint(UObject*,UClass*)
    // endereco: casamento de bytes com a build de referencia
    static UObject* VNewObjectFromBlueprint(void* a0, void* a1)
    {
        return NativeCall<UObject*, void*, void*>(nullptr, "UVictoryCore.VNewObjectFromBlueprint(UObject*,UClass*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.VNewObjectFromBlueprintOuter(UObject*,UClass*)
    // endereco: casamento de bytes com a build de referencia
    static UObject* VNewObjectFromBlueprintOuter(void* a0, void* a1)
    {
        return NativeCall<UObject*, void*, void*>(nullptr, "UVictoryCore.VNewObjectFromBlueprintOuter(UObject*,UClass*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.VNewObjectTransient(UClass*)
    // endereco: casamento de bytes com a build de referencia
    static UObject* VNewObjectTransient(void* a0)
    {
        return NativeCall<UObject*, void*>(nullptr, "UVictoryCore.VNewObjectTransient(UClass*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.VTraceAgainstActorExpensive(UObject*,UE::Math::TVector<double>&,UE::Math::TVector<d
    // endereco: casamento de bytes com a build de referencia
    static bool VTraceAgainstActorExpensive(void* a0, void* a1, void* a2, void* a3, void* a4, int a5, int a6, float a7, bool a8, bool a9, void* a10, unsigned long long a11, bool a12)
    {
        return NativeCall<bool, void*, void*, void*, void*, void*, int, int, float, bool, bool, void*, unsigned long long, bool>(nullptr, "UVictoryCore.VTraceAgainstActorExpensive(UObject*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,FHitResult&,AActor*,ECollisionChannel,__int64,float,bool,bool,UE::Math::TVector<double>&,FName,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.VTraceIgnoreFoliage(UWorld*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,F
    // endereco: casamento de bytes com a build de referencia
    static bool VTraceIgnoreFoliage(void* a0, void* a1, void* a2, void* a3, void* a4, int a5, int a6, bool a7, bool a8, void* a9, unsigned long long a10, void* a11, void* a12, void* a13, void* a14, bool a15)
    {
        return NativeCall<bool, void*, void*, void*, void*, void*, int, int, bool, bool, void*, unsigned long long, void*, void*, void*, void*, bool>(nullptr, "UVictoryCore.VTraceIgnoreFoliage(UWorld*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,FHitResult&,AActor*,ECollisionChannel,int,bool,bool,UE::Math::TVector<double>&,FName,AActor*,TArray<AActor*,TSizedDefaultAllocator<32>>*,UE::Math::TQuat<double>&,AActor*,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.VTraceMulti(UWorld*,TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::TVecto
    // endereco: casamento de bytes com a build de referencia
    static bool VTraceMulti(void* a0, void* a1, void* a2, void* a3, void* a4, int a5, float a6, void* a7, bool a8, int a9, bool a10, unsigned long long a11, bool a12, bool a13, void* a14, void* a15, bool a16, void* a17)
    {
        return NativeCall<bool, void*, void*, void*, void*, void*, int, float, void*, bool, int, bool, unsigned long long, bool, bool, void*, void*, bool, void*>(nullptr, "UVictoryCore.VTraceMulti(UWorld*,TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,AActor*,int,float,UE::Math::TVector<double>&,bool,ECollisionChannel,bool,FName,bool,bool,AActor*,AActor*,bool,TArray<AActor*,TSizedDefaultAllocator<32>>*)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.VTraceMultiBP(UObject*,TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::TVe
    // endereco: casamento de bytes com a build de referencia
    static bool VTraceMultiBP(void* a0, void* a1, void* a2, void* a3, void* a4, int a5, float a6, void* a7, bool a8, int a9, bool a10, unsigned long long a11, bool a12, bool a13, void* a14, void* a15, bool a16, float a17)
    {
        return NativeCall<bool, void*, void*, void*, void*, void*, int, float, void*, bool, int, bool, unsigned long long, bool, bool, void*, void*, bool, float>(nullptr, "UVictoryCore.VTraceMultiBP(UObject*,TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,AActor*,int,float,UE::Math::TVector<double>&,bool,ECollisionChannel,bool,FName,bool,bool,AActor*,AActor*,bool,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.VTraceMultiBP_IgnoreActorsArray(UObject*,TArray<FHitResult,TSizedDefaultAllocator<3
    // endereco: casamento de bytes com a build de referencia
    static bool VTraceMultiBP_IgnoreActorsArray(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, int a6, float a7, void* a8, bool a9, int a10, bool a11, unsigned long long a12, bool a13, bool a14, bool a15, float a16)
    {
        return NativeCall<bool, void*, void*, void*, void*, void*, void*, int, float, void*, bool, int, bool, unsigned long long, bool, bool, bool, float>(nullptr, "UVictoryCore.VTraceMultiBP_IgnoreActorsArray(UObject*,TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,TArray<AActor*,TSizedDefaultAllocator<32>>&,AActor*,int,float,UE::Math::TVector<double>&,bool,ECollisionChannel,bool,FName,bool,bool,bool,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.VTraceShapeBP(UObject*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,FHitRe
    // endereco: casamento de bytes com a build de referencia
    static bool VTraceShapeBP(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, float a6, float a7, void* a8, void* a9, int a10, int a11, bool a12, bool a13, unsigned long long a14, float a15)
    {
        return NativeCall<bool, void*, void*, void*, void*, void*, void*, float, float, void*, void*, int, int, bool, bool, unsigned long long, float>(nullptr, "UVictoryCore.VTraceShapeBP(UObject*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,FHitResult&,TArray<AActor*,TSizedDefaultAllocator<32>>&,AActor*,float,float,UE::Math::TVector<double>,UE::Math::TRotator<double>,ECollisionChannel,int,bool,bool,FName,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.VTraceShapeMultiBP(UObject*,TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math
    // endereco: casamento de bytes com a build de referencia
    static bool VTraceShapeMultiBP(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, float a6, float a7, void* a8, void* a9, int a10, int a11, bool a12, bool a13, unsigned long long a14, float a15)
    {
        return NativeCall<bool, void*, void*, void*, void*, void*, void*, float, float, void*, void*, int, int, bool, bool, unsigned long long, float>(nullptr, "UVictoryCore.VTraceShapeMultiBP(UObject*,TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,TArray<AActor*,TSizedDefaultAllocator<32>>&,AActor*,float,float,UE::Math::TVector<double>,UE::Math::TRotator<double>,ECollisionChannel,int,bool,bool,FName,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.VTraceSingleBP(UObject*,FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<do
    // endereco: casamento de bytes com a build de referencia
    static bool VTraceSingleBP(void* a0, void* a1, void* a2, void* a3, int a4, int a5, unsigned long long a6, bool a7, void* a8, float a9)
    {
        return NativeCall<bool, void*, void*, void*, void*, int, int, unsigned long long, bool, void*, float>(nullptr, "UVictoryCore.VTraceSingleBP(UObject*,FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,ECollisionChannel,int,FName,bool,AActor*,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.VTraceSingleBP_IgnoreActorsArray(UObject*,FHitResult&,UE::Math::TVector<double>&,UE
    // endereco: casamento de bytes com a build de referencia
    static bool VTraceSingleBP_IgnoreActorsArray(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, int a6, int a7, unsigned long long a8, bool a9, bool a10, float a11)
    {
        return NativeCall<bool, void*, void*, void*, void*, void*, void*, int, int, unsigned long long, bool, bool, float>(nullptr, "UVictoryCore.VTraceSingleBP_IgnoreActorsArray(UObject*,FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,TArray<AActor*,TSizedDefaultAllocator<32>>&,AActor*,ECollisionChannel,int,FName,bool,bool,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.VTraceSphereBP(UObject*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,FHitR
    // endereco: casamento de bytes com a build de referencia
    static bool VTraceSphereBP(void* a0, void* a1, void* a2, void* a3, float a4, void* a5, int a6, int a7, bool a8, bool a9, unsigned long long a10, void* a11, void* a12, float a13)
    {
        return NativeCall<bool, void*, void*, void*, void*, float, void*, int, int, bool, bool, unsigned long long, void*, void*, float>(nullptr, "UVictoryCore.VTraceSphereBP(UObject*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,FHitResult&,float,AActor*,ECollisionChannel,int,bool,bool,FName,AActor*,AActor*,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.VTraceSphereBP_IgnoreActorsArray(UObject*,UE::Math::TVector<double>&,UE::Math::TVec
    // endereco: casamento de bytes com a build de referencia
    static bool VTraceSphereBP_IgnoreActorsArray(void* a0, void* a1, void* a2, void* a3, float a4, void* a5, void* a6, int a7, int a8, bool a9, bool a10, unsigned long long a11, float a12)
    {
        return NativeCall<bool, void*, void*, void*, void*, float, void*, void*, int, int, bool, bool, unsigned long long, float>(nullptr, "UVictoryCore.VTraceSphereBP_IgnoreActorsArray(UObject*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,FHitResult&,float,TArray<AActor*,TSizedDefaultAllocator<32>>&,AActor*,ECollisionChannel,int,bool,bool,FName,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.VectorDistance(UE::Math::TVector<double>,UE::Math::TVector<double>)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    static float VectorDistance(void* a0, void* a1)
    {
        return NativeCall<float, void*, void*>(nullptr, "UVictoryCore.VectorDistance(UE::Math::TVector<double>,UE::Math::TVector<double>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ViewDirectionAngleOffset(UE::Math::TVector<double>,UE::Math::TVector<double>,float,
    // endereco: casamento de bytes com a build de referencia
    static void ViewDirectionAngleOffset(void* retorno, void* a0, void* a1, float a2, float a3)
    {
        NativeCall<void, void*, void*, void*, float, float>(nullptr, "UVictoryCore.ViewDirectionAngleOffset(UE::Math::TVector<double>,UE::Math::TVector<double>,float,float)", retorno, a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.ViewTrailer(bool,bool)
    // endereco: thunk
    static void ViewTrailer(bool a0, bool a1)
    {
        NativeCall<void, bool, bool>(nullptr, "UVictoryCore.ViewTrailer(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.WebSocketIsConnected(__int64,UObject*)
    // endereco: casamento de bytes com a build de referencia
    static bool WebSocketIsConnected(int a0, void* a1)
    {
        return NativeCall<bool, int, void*>(nullptr, "UVictoryCore.WebSocketIsConnected(__int64,UObject*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UVictoryCore.WebSocketSendMessage(__int64,FString,UObject*)
    // endereco: casamento de bytes com a build de referencia
    static void WebSocketSendMessage(int a0, const FString& a1, void* a2)
    {
        NativeCall<void, int, void*, void*>(nullptr, "UVictoryCore.WebSocketSendMessage(__int64,FString,UObject*)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void WebSocketSendMessage(int a0, FString* a1, void* a2)
    { WebSocketSendMessage(a0, *a1, a2); }

    // ── SOBRECARGAS QUE NAO CABEM EM C++ ─────────────────────────────
    //
    //  Estas existem no jogo, e a chave delas resolve normalmente por
    //  `GetAddress` / `NativeCall`. O que nao cabe e' a DECLARACAO: em C
    //  os parametros viram os mesmos da que ficou, ou a diferenca esta'
    //  so' no retorno — e C++ nao sobrecarrega por retorno.
    //
    //  Para chamar uma destas, use `NativeCall` direto com a chave:
    //    UVictoryCore.CapsuleSweepFast(UObject*,FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::M
    //      (colide com UVictoryCore.CapsuleSweepFast(UObject*,FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<)
    //    UVictoryCore.PlayerOwnsDLC(AShooterPlayerController*,FString&)
    //      (colide com UVictoryCore.PlayerOwnsDLC(APlayerState*,TSubclassOf<UDLC>))
    //    UVictoryCore.PlayerOwnsDLC(AShooterPlayerController*,TSubclassOf<UDLC>)
    //      (colide com UVictoryCore.PlayerOwnsDLC(APlayerState*,TSubclassOf<UDLC>))

};

#endif  // BRZ_SDK_JOGO_UVICTORYCORE_H

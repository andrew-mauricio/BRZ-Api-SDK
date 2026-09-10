// ==========================================================================
//  UGameplayStatics — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UGAMEPLAYSTATICS_H
#define BRZ_SDK_JOGO_UGAMEPLAYSTATICS_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct ACharacter;
struct AGameModeBase;
struct AGameStateBase;
struct APlayerController;
struct APlayerState;
struct UAudioComponent;
struct UDecalComponent;
struct UGameInstance;
struct UObject;
struct UParticleSystemComponent;
struct USaveGame;


struct UGameplayStatics
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UGameplayStatics"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.ApplyDamage(AActor*,float,AController*,AActor*,TSubclassOf<UDamageType>,float)
    // endereco: casamento de bytes com a build de referencia
    static float ApplyDamage(void* a0, float a1, void* a2, void* a3, void* a4, float a5)
    {
        return NativeCall<float, void*, float, void*, void*, void*, float>(nullptr, "UGameplayStatics.ApplyDamage(AActor*,float,AController*,AActor*,TSubclassOf<UDamageType>,float)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.ApplyPointDamage(AActor*,float,UE::Math::TVector<double>&,FHitResult&,AControll
    // endereco: casamento de bytes com a build de referencia
    static float ApplyPointDamage(void* a0, float a1, void* a2, void* a3, void* a4, void* a5, void* a6, float a7, bool a8, int a9, float a10)
    {
        return NativeCall<float, void*, float, void*, void*, void*, void*, void*, float, bool, int, float>(nullptr, "UGameplayStatics.ApplyPointDamage(AActor*,float,UE::Math::TVector<double>&,FHitResult&,AController*,AActor*,TSubclassOf<UDamageType>,float,bool,ECollisionChannel,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.ApplyRadialDamage(UObject*,float,UE::Math::TVector<double>&,float,TSubclassOf<U
    // endereco: casamento de bytes com a build de referencia
    static bool ApplyRadialDamage(void* a0, float a1, void* a2, float a3, void* a4, void* a5, void* a6, void* a7, bool a8, int a9, float a10)
    {
        return NativeCall<bool, void*, float, void*, float, void*, void*, void*, void*, bool, int, float>(nullptr, "UGameplayStatics.ApplyRadialDamage(UObject*,float,UE::Math::TVector<double>&,float,TSubclassOf<UDamageType>,TArray<AActor*,TSizedDefaultAllocator<32>>&,AActor*,AController*,bool,ECollisionChannel,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.ApplyRadialDamageIgnoreDamageActors(UObject*,float,UE::Math::TVector<double>&,f
    // endereco: casamento de bytes com a build de referencia
    static bool ApplyRadialDamageIgnoreDamageActors(void* a0, float a1, void* a2, float a3, void* a4, void* a5, void* a6, void* a7, void* a8, bool a9, int a10, float a11, float a12)
    {
        return NativeCall<bool, void*, float, void*, float, void*, void*, void*, void*, void*, bool, int, float, float>(nullptr, "UGameplayStatics.ApplyRadialDamageIgnoreDamageActors(UObject*,float,UE::Math::TVector<double>&,float,TSubclassOf<UDamageType>,TArray<AActor*,TSizedDefaultAllocator<32>>&,TArray<AActor*,TSizedDefaultAllocator<32>>&,AActor*,AController*,bool,ECollisionChannel,float,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.ApplyRadialDamageIgnoreDamageActors_V2(UObject*,float,UE::Math::TVector<double>
    // endereco: casamento de bytes com a build de referencia
    static bool ApplyRadialDamageIgnoreDamageActors_V2(void* a0, float a1, void* a2, float a3, void* a4, void* a5, void* a6, void* a7, void* a8, bool a9, int a10, float a11, float a12, bool a13)
    {
        return NativeCall<bool, void*, float, void*, float, void*, void*, void*, void*, void*, bool, int, float, float, bool>(nullptr, "UGameplayStatics.ApplyRadialDamageIgnoreDamageActors_V2(UObject*,float,UE::Math::TVector<double>&,float,TSubclassOf<UDamageType>,TArray<AActor*,TSizedDefaultAllocator<32>>&,TArray<AActor*,TSizedDefaultAllocator<32>>&,AActor*,AController*,bool,ECollisionChannel,float,float,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.ApplyRadialDamageWithFalloff(UObject*,float,float,UE::Math::TVector<double>&,fl
    // endereco: casamento de bytes com a build de referencia
    static bool ApplyRadialDamageWithFalloff(void* a0, float a1, float a2, void* a3, float a4, float a5, float a6, void* a7, void* a8, void* a9, void* a10, int a11, float a12, void* a13, int a14)
    {
        return NativeCall<bool, void*, float, float, void*, float, float, float, void*, void*, void*, void*, int, float, void*, int>(nullptr, "UGameplayStatics.ApplyRadialDamageWithFalloff(UObject*,float,float,UE::Math::TVector<double>&,float,float,float,TSubclassOf<UDamageType>,TArray<AActor*,TSizedDefaultAllocator<32>>&,AActor*,AController*,ECollisionChannel,float,TArray<AActor*,TSizedDefaultAllocator<32>>*,int)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.ApplyRadialDamageWithFalloff_V2(UObject*,float,float,UE::Math::TVector<double>&
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static bool ApplyRadialDamageWithFalloff_V2(void* a0, float a1, float a2, void* a3, float a4, float a5, float a6, void* a7, void* a8, void* a9, void* a10, int a11, float a12, void* a13, int a14, bool a15)
    {
        return NativeCall<bool, void*, float, float, void*, float, float, float, void*, void*, void*, void*, int, float, void*, int, bool>(nullptr, "UGameplayStatics.ApplyRadialDamageWithFalloff_V2(UObject*,float,float,UE::Math::TVector<double>&,float,float,float,TSubclassOf<UDamageType>,TArray<AActor*,TSizedDefaultAllocator<32>>&,AActor*,AController*,ECollisionChannel,float,TArray<AActor*,TSizedDefaultAllocator<32>>*,int,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.BeginDeferredActorSpawnFromClass(UObject*,TSubclassOf<AActor>,UE::Math::TTransf
    // endereco: casamento de bytes com a build de referencia
    static AActor* BeginDeferredActorSpawnFromClass(void* a0, void* a1, void* a2, int a3, void* a4, int a5)
    {
        return NativeCall<AActor*, void*, void*, void*, int, void*, int>(nullptr, "UGameplayStatics.BeginDeferredActorSpawnFromClass(UObject*,TSubclassOf<AActor>,UE::Math::TTransform<double>&,ESpawnActorCollisionHandlingMethod,AActor*,ESpawnActorScaleMethod)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.Blueprint_PredictProjectilePath_ByObjectType(UObject*,FHitResult&,TArray<UE::Ma
    // endereco: casamento de bytes com a build de referencia
    static bool Blueprint_PredictProjectilePath_ByObjectType(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, bool a6, float a7, void* a8, bool a9, void* a10, int a11, float a12, float a13, float a14, float a15)
    {
        return NativeCall<bool, void*, void*, void*, void*, void*, void*, bool, float, void*, bool, void*, int, float, float, float, float>(nullptr, "UGameplayStatics.Blueprint_PredictProjectilePath_ByObjectType(UObject*,FHitResult&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TVector<double>,UE::Math::TVector<double>,bool,float,TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>>&,bool,TArray<AActor*,TSizedDefaultAllocator<32>>&,EDrawDebugTrace::Type,float,float,float,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayStatics.Blueprint_PredictProjectilePath_ByTraceChannel(UObject*,FHitResult&,TArray<UE::
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Blueprint_PredictProjectilePath_ByTraceChannel(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, bool a6, float a7, unsigned char a8, bool a9, void* a10, int a11, float a12, float a13, float a14, float a15) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, void*, bool, float, unsigned char, bool, void*, int, float, float, float, float>(this, "UGameplayStatics.Blueprint_PredictProjectilePath_ByTraceChannel(UObject*,FHitResult&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TVector<double>,UE::Math::TVector<double>,bool,float,TEnumAsByte<ECollisionChannel>,bool,TArray<AActor*,TSizedDefaultAllocator<32>>&,EDrawDebugTrace::Type,float,float,float,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.CalculateViewProjectionMatricesFromMinimalView(FMinimalViewInfo&,TOptional<UE::
    // endereco: casamento de bytes com a build de referencia
    static void CalculateViewProjectionMatricesFromMinimalView(void* a0, void* a1, void* a2, void* a3, void* a4)
    {
        NativeCall<void, void*, void*, void*, void*, void*>(nullptr, "UGameplayStatics.CalculateViewProjectionMatricesFromMinimalView(FMinimalViewInfo&,TOptional<UE::Math::TMatrix<double>>&,UE::Math::TMatrix<double>&,UE::Math::TMatrix<double>&,UE::Math::TMatrix<double>&)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.CreateSaveGameObject(TSubclassOf<USaveGame>)
    // endereco: casamento de bytes com a build de referencia
    static USaveGame* CreateSaveGameObject(void* a0)
    {
        return NativeCall<USaveGame*, void*>(nullptr, "UGameplayStatics.CreateSaveGameObject(TSubclassOf<USaveGame>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.DeprojectSceneCaptureComponentToWorld(USceneCaptureComponent2D*,UE::Math::TVect
    // endereco: casamento de bytes com a build de referencia
    static bool DeprojectSceneCaptureComponentToWorld(void* a0, void* a1, void* a2, void* a3)
    {
        return NativeCall<bool, void*, void*, void*, void*>(nullptr, "UGameplayStatics.DeprojectSceneCaptureComponentToWorld(USceneCaptureComponent2D*,UE::Math::TVector2<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.DeprojectScreenToWorld(APlayerController*,UE::Math::TVector2<double>&,UE::Math:
    // endereco: casamento de bytes com a build de referencia
    static bool DeprojectScreenToWorld(void* a0, void* a1, void* a2, void* a3)
    {
        return NativeCall<bool, void*, void*, void*, void*>(nullptr, "UGameplayStatics.DeprojectScreenToWorld(APlayerController*,UE::Math::TVector2<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.DoesSaveGameExist(FString&,int)
    // endereco: casamento de bytes com a build de referencia
    static bool DoesSaveGameExist(const FString& a0, int a1)
    {
        return NativeCall<bool, void*, int>(nullptr, "UGameplayStatics.DoesSaveGameExist(FString&,int)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static bool DoesSaveGameExist(FString* a0, int a1)
    { return DoesSaveGameExist(*a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.FindCollisionUV(FHitResult&,int,UE::Math::TVector2<double>&)
    // endereco: casamento de bytes com a build de referencia
    static bool FindCollisionUV(void* a0, int a1, void* a2)
    {
        return NativeCall<bool, void*, int, void*>(nullptr, "UGameplayStatics.FindCollisionUV(FHitResult&,int,UE::Math::TVector2<double>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.FinishSpawningActor(AActor*,UE::Math::TTransform<double>&,ESpawnActorScaleMetho
    // endereco: casamento de bytes com a build de referencia
    static AActor* FinishSpawningActor(void* a0, void* a1, int a2)
    {
        return NativeCall<AActor*, void*, void*, int>(nullptr, "UGameplayStatics.FinishSpawningActor(AActor*,UE::Math::TTransform<double>&,ESpawnActorScaleMethod)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.GetActorArrayBounds(TArray<AActor*,TSizedDefaultAllocator<32>>&,bool,UE::Math::
    // endereco: casamento de bytes com a build de referencia
    static void GetActorArrayBounds(void* a0, bool a1, void* a2, void* a3)
    {
        NativeCall<void, void*, bool, void*, void*>(nullptr, "UGameplayStatics.GetActorArrayBounds(TArray<AActor*,TSizedDefaultAllocator<32>>&,bool,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.GetAllActorsOfClass(UObject*,TSubclassOf<AActor>,TArray<AActor*,TSizedDefaultAl
    // endereco: casamento de bytes com a build de referencia
    static void GetAllActorsOfClass(void* a0, void* a1, void* a2)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "UGameplayStatics.GetAllActorsOfClass(UObject*,TSubclassOf<AActor>,TArray<AActor*,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.GetAllActorsOfClassInTribe(UObject*,TSubclassOf<AActor>,TArray<AActor*,TSizedDe
    // endereco: casamento de bytes com a build de referencia
    static void GetAllActorsOfClassInTribe(void* a0, void* a1, void* a2, int a3)
    {
        NativeCall<void, void*, void*, void*, int>(nullptr, "UGameplayStatics.GetAllActorsOfClassInTribe(UObject*,TSubclassOf<AActor>,TArray<AActor*,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.GetAllActorsWithInterface(UObject*,TSubclassOf<UInterface>,TArray<AActor*,TSize
    // endereco: casamento de bytes com a build de referencia
    static void GetAllActorsWithInterface(void* a0, void* a1, void* a2)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "UGameplayStatics.GetAllActorsWithInterface(UObject*,TSubclassOf<UInterface>,TArray<AActor*,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.GetAllActorsWithTag(UObject*,FName,TArray<AActor*,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    static void GetAllActorsWithTag(void* a0, unsigned long long a1, void* a2)
    {
        NativeCall<void, void*, unsigned long long, void*>(nullptr, "UGameplayStatics.GetAllActorsWithTag(UObject*,FName,TArray<AActor*,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.GetCurrentLevelName(UObject*,bool)
    // endereco: casamento de bytes com a build de referencia
    static void GetCurrentLevelName(void* retorno, void* a0, bool a1)
    {
        NativeCall<void, void*, void*, bool>(nullptr, "UGameplayStatics.GetCurrentLevelName(UObject*,bool)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.GetGameInstance(UObject*)
    // endereco: casamento de bytes com a build de referencia
    static UGameInstance* GetGameInstance(void* a0)
    {
        return NativeCall<UGameInstance*, void*>(nullptr, "UGameplayStatics.GetGameInstance(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.GetGameMode(UObject*)
    // endereco: casamento de bytes com a build de referencia
    static AGameModeBase* GetGameMode(void* a0)
    {
        return NativeCall<AGameModeBase*, void*>(nullptr, "UGameplayStatics.GetGameMode(UObject*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayStatics.GetGameState(UObject*)
    // endereco: casamento de bytes com a build de referencia
    AGameStateBase* GetGameState(void* a0) const
    {
        return NativeCall<AGameStateBase*, void*>(this, "UGameplayStatics.GetGameState(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.GetIntOption(FString&,FString&,int)
    // endereco: casamento de bytes com a build de referencia
    static int GetIntOption(const FString& a0, const FString& a1, int a2)
    {
        return NativeCall<int, void*, void*, int>(nullptr, "UGameplayStatics.GetIntOption(FString&,FString&,int)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static int GetIntOption(FString* a0, FString* a1, int a2)
    { return GetIntOption(*a0, *a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.GetKeyValue(FString&,FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    static void GetKeyValue(const FString& a0, const FString& a1, const FString& a2)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "UGameplayStatics.GetKeyValue(FString&,FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void GetKeyValue(FString* a0, FString* a1, FString* a2)
    { GetKeyValue(*a0, *a1, *a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.GetPlatformName()
    // endereco: casamento de bytes com a build de referencia
    static void GetPlatformName(void* retorno)
    {
        NativeCall<void, void*>(nullptr, "UGameplayStatics.GetPlatformName()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.GetPlayerCharacter(UObject*,int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static ACharacter* GetPlayerCharacter(void* a0, int a1)
    {
        return NativeCall<ACharacter*, void*, int>(nullptr, "UGameplayStatics.GetPlayerCharacter(UObject*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.GetPlayerController(UObject*,int)
    // endereco: casamento de bytes com a build de referencia
    static APlayerController* GetPlayerController(void* a0, int a1)
    {
        return NativeCall<APlayerController*, void*, int>(nullptr, "UGameplayStatics.GetPlayerController(UObject*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.GetPlayerControllerFromID(UObject*,int)
    // endereco: casamento de bytes com a build de referencia
    static APlayerController* GetPlayerControllerFromID(void* a0, int a1)
    {
        return NativeCall<APlayerController*, void*, int>(nullptr, "UGameplayStatics.GetPlayerControllerFromID(UObject*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.GetPlayerStateFromUniqueNetId(UObject*,FUniqueNetIdRepl&)
    // endereco: casamento de bytes com a build de referencia
    static APlayerState* GetPlayerStateFromUniqueNetId(void* a0, void* a1)
    {
        return NativeCall<APlayerState*, void*, void*>(nullptr, "UGameplayStatics.GetPlayerStateFromUniqueNetId(UObject*,FUniqueNetIdRepl&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.GetWorldDeltaSeconds(UObject*)
    // endereco: casamento de bytes com a build de referencia
    static double GetWorldDeltaSeconds(void* a0)
    {
        return NativeCall<double, void*>(nullptr, "UGameplayStatics.GetWorldDeltaSeconds(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.GrabOption(FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    static bool GrabOption(const FString& a0, const FString& a1)
    {
        return NativeCall<bool, void*, void*>(nullptr, "UGameplayStatics.GrabOption(FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static bool GrabOption(FString* a0, FString* a1)
    { return GrabOption(*a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.GrassOverlappingSphereCount(UObject*,UStaticMesh*,UE::Math::TVector<double>,flo
    // endereco: casamento de bytes com a build de referencia
    static int GrassOverlappingSphereCount(void* a0, void* a1, void* a2, float a3)
    {
        return NativeCall<int, void*, void*, void*, float>(nullptr, "UGameplayStatics.GrassOverlappingSphereCount(UObject*,UStaticMesh*,UE::Math::TVector<double>,float)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.HasOption(FString,FString&)
    // endereco: casamento de bytes com a build de referencia
    static bool HasOption(const FString& a0, const FString& a1)
    {
        return NativeCall<bool, void*, void*>(nullptr, "UGameplayStatics.HasOption(FString,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static bool HasOption(FString* a0, FString* a1)
    { return HasOption(*a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.IsProjectileTrajectoryBlocked(UWorld*,UE::Math::TVector<double>,UE::Math::TVect
    // endereco: casamento de bytes com a build de referencia
    static bool IsProjectileTrajectoryBlocked(void* a0, void* a1, void* a2, float a3, float a4, float a5, int a6, void* a7, void* a8, bool a9)
    {
        return NativeCall<bool, void*, void*, void*, float, float, float, int, void*, void*, bool>(nullptr, "UGameplayStatics.IsProjectileTrajectoryBlocked(UWorld*,UE::Math::TVector<double>,UE::Math::TVector<double>&,float,float,float,ESuggestProjVelocityTraceOption::Type,FCollisionResponseParams&,TArray<AActor*,TSizedDefaultAllocator<32>>&,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.LoadGameFromMemory(TArray<unsignedchar,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    static USaveGame* LoadGameFromMemory(void* a0)
    {
        return NativeCall<USaveGame*, void*>(nullptr, "UGameplayStatics.LoadGameFromMemory(TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.LoadGameFromSlot(FString&,int)
    // endereco: casamento de bytes com a build de referencia
    static USaveGame* LoadGameFromSlot(const FString& a0, int a1)
    {
        return NativeCall<USaveGame*, void*, int>(nullptr, "UGameplayStatics.LoadGameFromSlot(FString&,int)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static USaveGame* LoadGameFromSlot(FString* a0, int a1)
    { return LoadGameFromSlot(*a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.LoadStreamLevel(UObject*,FName,bool,bool,FLatentActionInfo)
    // endereco: casamento de bytes com a build de referencia
    static void LoadStreamLevel(void* a0, unsigned long long a1, bool a2, bool a3, void* a4)
    {
        NativeCall<void, void*, unsigned long long, bool, bool, void*>(nullptr, "UGameplayStatics.LoadStreamLevel(UObject*,FName,bool,bool,FLatentActionInfo)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.OpenLevel(UObject*,FName,bool,FString)
    // endereco: casamento de bytes com a build de referencia
    static void OpenLevel(void* a0, unsigned long long a1, bool a2, const FString& a3)
    {
        NativeCall<void, void*, unsigned long long, bool, void*>(nullptr, "UGameplayStatics.OpenLevel(UObject*,FName,bool,FString)", a0, a1, a2, const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void OpenLevel(void* a0, unsigned long long a1, bool a2, FString* a3)
    { OpenLevel(a0, a1, a2, *a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.ParseOption(FString,FString&)
    // endereco: casamento de bytes com a build de referencia
    static void ParseOption(void* retorno, const FString& a0, const FString& a1)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "UGameplayStatics.ParseOption(FString,FString&)", retorno, const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void ParseOption(void* retorno, FString* a0, FString* a1)
    { ParseOption(retorno, *a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.PlaySoundAtLocation(UObject*,USoundBase*,UE::Math::TVector<double>,UE::Math::TR
    // endereco: casamento de bytes com a build de referencia
    static void PlaySoundAtLocation(void* a0, void* a1, void* a2, void* a3, float a4, float a5, float a6, void* a7, void* a8, void* a9, void* a10, bool a11)
    {
        NativeCall<void, void*, void*, void*, void*, float, float, float, void*, void*, void*, void*, bool>(nullptr, "UGameplayStatics.PlaySoundAtLocation(UObject*,USoundBase*,UE::Math::TVector<double>,UE::Math::TRotator<double>,float,float,float,USoundAttenuation*,USoundConcurrency*,AActor*,UInitialActiveSoundParams*,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.PlaySoundAtLocation(UObject*,USoundBase*,UE::Math::TVector<double>,float,float,
    // endereco: casamento de bytes com a build de referencia
    static void PlaySoundAtLocation(void* a0, void* a1, void* a2, float a3, float a4, float a5, void* a6, void* a7, void* a8)
    {
        NativeCall<void, void*, void*, void*, float, float, float, void*, void*, void*>(nullptr, "UGameplayStatics.PlaySoundAtLocation(UObject*,USoundBase*,UE::Math::TVector<double>,float,float,float,USoundAttenuation*,USoundConcurrency*,UInitialActiveSoundParams*)", a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.PredictProjectilePath(UObject*,FPredictProjectilePathParams&,FPredictProjectile
    // endereco: casamento de bytes com a build de referencia
    static bool PredictProjectilePath(void* a0, void* a1, void* a2)
    {
        return NativeCall<bool, void*, void*, void*>(nullptr, "UGameplayStatics.PredictProjectilePath(UObject*,FPredictProjectilePathParams&,FPredictProjectilePathResult&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.PrimeSound(USoundBase*)
    // endereco: casamento de bytes com a build de referencia
    static void PrimeSound(void* a0)
    {
        NativeCall<void, void*>(nullptr, "UGameplayStatics.PrimeSound(USoundBase*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.ProjectWorldToScreen(APlayerController*,UE::Math::TVector<double>&,UE::Math::TV
    // endereco: casamento de bytes com a build de referencia
    static bool ProjectWorldToScreen(void* a0, void* a1, void* a2, bool a3)
    {
        return NativeCall<bool, void*, void*, void*, bool>(nullptr, "UGameplayStatics.ProjectWorldToScreen(APlayerController*,UE::Math::TVector<double>&,UE::Math::TVector2<double>&,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.SaveGameToMemory(USaveGame*,TArray<unsignedchar,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    static bool SaveGameToMemory(void* a0, void* a1)
    {
        return NativeCall<bool, void*, void*>(nullptr, "UGameplayStatics.SaveGameToMemory(USaveGame*,TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.SaveGameToSlot(USaveGame*,FString&,int)
    // endereco: casamento de bytes com a build de referencia
    static bool SaveGameToSlot(void* a0, const FString& a1, int a2)
    {
        return NativeCall<bool, void*, void*, int>(nullptr, "UGameplayStatics.SaveGameToSlot(USaveGame*,FString&,int)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static bool SaveGameToSlot(void* a0, FString* a1, int a2)
    { return SaveGameToSlot(a0, *a1, a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayStatics.SpawnDecalAtLocation(UObject*,UMaterialInterface*,UE::Math::TVector<double>,UE:
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SpawnDecalAtLocation(void* a0, void* a1, void* a2, void* a3, void* a4, float a5) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, float>(this, "UGameplayStatics.SpawnDecalAtLocation(UObject*,UMaterialInterface*,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TRotator<double>,float)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayStatics.SpawnDecalAttached(UMaterialInterface*,UE::Math::TVector<double>,USceneComponen
    // endereco: casamento de bytes com a build de referencia
    UDecalComponent* SpawnDecalAttached(void* a0, void* a1, void* a2, unsigned long long a3, void* a4, void* a5, int a6, float a7) const
    {
        return NativeCall<UDecalComponent*, void*, void*, void*, unsigned long long, void*, void*, int, float>(this, "UGameplayStatics.SpawnDecalAttached(UMaterialInterface*,UE::Math::TVector<double>,USceneComponent*,FName,UE::Math::TVector<double>,UE::Math::TRotator<double>,EAttachLocation::Type,float)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.SpawnEmitterAtLocation(UObject*,UParticleSystem*,UE::Math::TVector<double>,UE::
    // endereco: casamento de bytes com a build de referencia
    static UParticleSystemComponent* SpawnEmitterAtLocation(void* a0, void* a1, void* a2, void* a3, bool a4, int a5, bool a6, bool a7, float a8, bool a9)
    {
        return NativeCall<UParticleSystemComponent*, void*, void*, void*, void*, bool, int, bool, bool, float, bool>(nullptr, "UGameplayStatics.SpawnEmitterAtLocation(UObject*,UParticleSystem*,UE::Math::TVector<double>,UE::Math::TRotator<double>,bool,EPSCPoolMethod,bool,bool,float,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.SpawnEmitterAtLocation(UWorld*,UParticleSystem*,UE::Math::TTransform<double>&,b
    // endereco: casamento de bytes com a build de referencia
    static UParticleSystemComponent* SpawnEmitterAtLocation(void* a0, void* a1, void* a2, bool a3, int a4, bool a5, bool a6, float a7, bool a8)
    {
        return NativeCall<UParticleSystemComponent*, void*, void*, void*, bool, int, bool, bool, float, bool>(nullptr, "UGameplayStatics.SpawnEmitterAtLocation(UWorld*,UParticleSystem*,UE::Math::TTransform<double>&,bool,EPSCPoolMethod,bool,bool,float,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.SpawnEmitterAttached(UParticleSystem*,USceneComponent*,FName,UE::Math::TVector<
    // endereco: casamento de bytes com a build de referencia
    static UParticleSystemComponent* SpawnEmitterAttached(void* a0, void* a1, unsigned long long a2, void* a3, void* a4, int a5, bool a6, int a7, bool a8, bool a9, bool a10)
    {
        return NativeCall<UParticleSystemComponent*, void*, void*, unsigned long long, void*, void*, int, bool, int, bool, bool, bool>(nullptr, "UGameplayStatics.SpawnEmitterAttached(UParticleSystem*,USceneComponent*,FName,UE::Math::TVector<double>,UE::Math::TRotator<double>,EAttachLocation::Type,bool,EPSCPoolMethod,bool,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.SpawnEmitterAttached(UParticleSystem*,USceneComponent*,FName,UE::Math::TVector<
    // endereco: casamento de bytes com a build de referencia
    static UParticleSystemComponent* SpawnEmitterAttached(void* a0, void* a1, unsigned long long a2, void* a3, void* a4, int a5, bool a6, bool a7, bool a8, float a9)
    {
        return NativeCall<UParticleSystemComponent*, void*, void*, unsigned long long, void*, void*, int, bool, bool, bool, float>(nullptr, "UGameplayStatics.SpawnEmitterAttached(UParticleSystem*,USceneComponent*,FName,UE::Math::TVector<double>,UE::Math::TRotator<double>,EAttachLocation::Type,bool,bool,bool,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.SpawnEmitterAttached(UParticleSystem*,USceneComponent*,FName,UE::Math::TVector<
    // endereco: casamento de bytes com a build de referencia
    static UParticleSystemComponent* SpawnEmitterAttached(void* a0, void* a1, unsigned long long a2, void* a3, void* a4, void* a5, int a6, bool a7, int a8, bool a9, bool a10, bool a11)
    {
        return NativeCall<UParticleSystemComponent*, void*, void*, unsigned long long, void*, void*, void*, int, bool, int, bool, bool, bool>(nullptr, "UGameplayStatics.SpawnEmitterAttached(UParticleSystem*,USceneComponent*,FName,UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TVector<double>,EAttachLocation::Type,bool,EPSCPoolMethod,bool,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayStatics.SpawnForceFeedbackAtLocation(UObject*,UForceFeedbackEffect*,UE::Math::TVector<d
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SpawnForceFeedbackAtLocation(void* a0, void* a1, void* a2, void* a3, bool a4, float a5, float a6, void* a7, bool a8) const
    {
        return NativeCall<void*, void*, void*, void*, void*, bool, float, float, void*, bool>(this, "UGameplayStatics.SpawnForceFeedbackAtLocation(UObject*,UForceFeedbackEffect*,UE::Math::TVector<double>,UE::Math::TRotator<double>,bool,float,float,UForceFeedbackAttenuation*,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayStatics.SpawnForceFeedbackAttached(UForceFeedbackEffect*,USceneComponent*,FName,UE::Mat
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SpawnForceFeedbackAttached(void* a0, void* a1, unsigned long long a2, void* a3, void* a4, int a5, bool a6, bool a7, float a8, float a9, void* a10, bool a11) const
    {
        return NativeCall<void*, void*, void*, unsigned long long, void*, void*, int, bool, bool, float, float, void*, bool>(this, "UGameplayStatics.SpawnForceFeedbackAttached(UForceFeedbackEffect*,USceneComponent*,FName,UE::Math::TVector<double>,UE::Math::TRotator<double>,EAttachLocation::Type,bool,bool,float,float,UForceFeedbackAttenuation*,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.SpawnObject(TSubclassOf<UObject>,UObject*)
    // endereco: casamento de bytes com a build de referencia
    static UObject* SpawnObject(void* a0, void* a1)
    {
        return NativeCall<UObject*, void*, void*>(nullptr, "UGameplayStatics.SpawnObject(TSubclassOf<UObject>,UObject*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.SpawnSoundAtLocation(UObject*,USoundBase*,UE::Math::TVector<double>,UE::Math::T
    // endereco: casamento de bytes com a build de referencia
    static UAudioComponent* SpawnSoundAtLocation(void* a0, void* a1, void* a2, void* a3, float a4, float a5, float a6, void* a7, void* a8, bool a9)
    {
        return NativeCall<UAudioComponent*, void*, void*, void*, void*, float, float, float, void*, void*, bool>(nullptr, "UGameplayStatics.SpawnSoundAtLocation(UObject*,USoundBase*,UE::Math::TVector<double>,UE::Math::TRotator<double>,float,float,float,USoundAttenuation*,USoundConcurrency*,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.SpawnSoundAttached(USoundBase*,USceneComponent*,FName,UE::Math::TVector<double>
    // endereco: casamento de bytes com a build de referencia
    static UAudioComponent* SpawnSoundAttached(void* a0, void* a1, unsigned long long a2, void* a3, int a4, bool a5, float a6, float a7, float a8, void* a9, void* a10, bool a11, bool a12)
    {
        return NativeCall<UAudioComponent*, void*, void*, unsigned long long, void*, int, bool, float, float, float, void*, void*, bool, bool>(nullptr, "UGameplayStatics.SpawnSoundAttached(USoundBase*,USceneComponent*,FName,UE::Math::TVector<double>,EAttachLocation::Type,bool,float,float,float,USoundAttenuation*,USoundConcurrency*,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.SpawnSoundAttached(USoundBase*,USceneComponent*,FName,UE::Math::TVector<double>
    // endereco: casamento de bytes com a build de referencia
    static UAudioComponent* SpawnSoundAttached(void* a0, void* a1, unsigned long long a2, void* a3, void* a4, int a5, bool a6, float a7, float a8, float a9, void* a10, void* a11, bool a12, bool a13)
    {
        return NativeCall<UAudioComponent*, void*, void*, unsigned long long, void*, void*, int, bool, float, float, float, void*, void*, bool, bool>(nullptr, "UGameplayStatics.SpawnSoundAttached(USoundBase*,USceneComponent*,FName,UE::Math::TVector<double>,UE::Math::TRotator<double>,EAttachLocation::Type,bool,float,float,float,USoundAttenuation*,USoundConcurrency*,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.StaticRegisterNativesUGameplayStatics()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=34]]
    static void StaticRegisterNativesUGameplayStatics()
    {
        NativeCall<void>(nullptr, "UGameplayStatics.StaticRegisterNativesUGameplayStatics()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayStatics.SuggestProjectileVelocity(UGameplayStatics::FSuggestProjectileVelocityParameter
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SuggestProjectileVelocity(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UGameplayStatics.SuggestProjectileVelocity(UGameplayStatics::FSuggestProjectileVelocityParameters&,UE::Math::TVector<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.SuggestProjectileVelocity_CustomArc(UObject*,UE::Math::TVector<double>&,UE::Mat
    // endereco: casamento de bytes com a build de referencia
    static bool SuggestProjectileVelocity_CustomArc(void* a0, void* a1, void* a2, void* a3, float a4, float a5)
    {
        return NativeCall<bool, void*, void*, void*, void*, float, float>(nullptr, "UGameplayStatics.SuggestProjectileVelocity_CustomArc(UObject*,UE::Math::TVector<double>&,UE::Math::TVector<double>,UE::Math::TVector<double>,float,float)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UGameplayStatics.UnloadStreamLevel(UObject*,FName,FLatentActionInfo,bool)
    // endereco: casamento de bytes com a build de referencia
    static void UnloadStreamLevel(void* a0, unsigned long long a1, void* a2, bool a3)
    {
        NativeCall<void, void*, unsigned long long, void*, bool>(nullptr, "UGameplayStatics.UnloadStreamLevel(UObject*,FName,FLatentActionInfo,bool)", a0, a1, a2, a3);
    }

    TArray<AActor*>& ActorsToIgnoreField() const
    { return *GetNativePointerField<TArray<AActor*>*>(this, "UGameplayStatics.ActorsToIgnore"); }
    float& CollisionRadiusField() const
    { return *GetNativePointerField<float*>(this, "UGameplayStatics.CollisionRadius"); }
    BitFieldValue<bool, unsigned __int32> End()
    { return { (void*)this, "End" }; }
    float& OverrideGravityZField() const
    { return *GetNativePointerField<float*>(this, "UGameplayStatics.OverrideGravityZ"); }
    BitFieldValue<bool, unsigned __int32> Start()
    { return { (void*)this, "Start" }; }
    int& TraceOptionField() const
    { return *GetNativePointerField<int*>(this, "UGameplayStatics.TraceOption"); }
    BrzCampoPonteiro WorldContextObjectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayStatics.WorldContextObject")); }
    bool& bAcceptClosestOnNoSolutionsField() const
    { return *GetNativePointerField<bool*>(this, "UGameplayStatics.bAcceptClosestOnNoSolutions"); }
    bool& bDrawDebugField() const
    { return *GetNativePointerField<bool*>(this, "UGameplayStatics.bDrawDebug"); }
    bool& bFavorHighArcField() const
    { return *GetNativePointerField<bool*>(this, "UGameplayStatics.bFavorHighArc"); }
};

#endif  // BRZ_SDK_JOGO_UGAMEPLAYSTATICS_H

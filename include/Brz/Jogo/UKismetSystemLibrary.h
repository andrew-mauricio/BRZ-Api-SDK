// ==========================================================================
//  UKismetSystemLibrary — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UKISMETSYSTEMLIBRARY_H
#define BRZ_SDK_JOGO_UKISMETSYSTEMLIBRARY_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UObject;


struct UKismetSystemLibrary
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UKismetSystemLibrary"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.AddFloatHistorySample(float,FDebugFloatHistory&)
    // endereco: casamento de bytes com a build de referencia
    static void AddFloatHistorySample(void* retorno, float a0, void* a1)
    {
        NativeCall<void, void*, float, void*>(nullptr, "UKismetSystemLibrary.AddFloatHistorySample(float,FDebugFloatHistory&)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.BoxOverlapActors(UObject*,UE::Math::TVector<double>,UE::Math::TVector<doubl
    // endereco: casamento de bytes com a build de referencia
    static bool BoxOverlapActors(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, void* a6)
    {
        return NativeCall<bool, void*, void*, void*, void*, void*, void*, void*>(nullptr, "UKismetSystemLibrary.BoxOverlapActors(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>>&,UClass*,TArray<AActor*,TSizedDefaultAllocator<32>>&,TArray<AActor*,TSizedDefaultAllocator<32>>&)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.BoxOverlapComponents(UObject*,UE::Math::TVector<double>,UE::Math::TVector<d
    // endereco: casamento de bytes com a build de referencia
    static bool BoxOverlapComponents(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, void* a6)
    {
        return NativeCall<bool, void*, void*, void*, void*, void*, void*, void*>(nullptr, "UKismetSystemLibrary.BoxOverlapComponents(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>>&,UClass*,TArray<AActor*,TSizedDefaultAllocator<32>>&,TArray<UPrimitiveComponent*,TSizedDefaultAllocator<32>>&)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.BoxTraceMulti(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,
    // endereco: casamento de bytes com a build de referencia
    static bool BoxTraceMulti(void* a0, void* a1, void* a2, void* a3, void* a4, int a5, bool a6, void* a7, int a8, void* a9, bool a10, void* a11, void* a12, float a13)
    {
        return NativeCall<bool, void*, void*, void*, void*, void*, int, bool, void*, int, void*, bool, void*, void*, float>(nullptr, "UKismetSystemLibrary.BoxTraceMulti(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TRotator<double>,ETraceTypeQuery,bool,TArray<AActor*,TSizedDefaultAllocator<32>>&,EDrawDebugTrace::Type,TArray<FHitResult,TSizedDefaultAllocator<32>>&,bool,FLinearColor,FLinearColor,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.BoxTraceMultiByProfile(UObject*,UE::Math::TVector<double>,UE::Math::TVector
    // endereco: thunk
    static bool BoxTraceMultiByProfile(void* a0, void* a1, void* a2, void* a3, void* a4, unsigned long long a5, bool a6, void* a7, int a8, void* a9, bool a10, void* a11, void* a12, float a13)
    {
        return NativeCall<bool, void*, void*, void*, void*, void*, unsigned long long, bool, void*, int, void*, bool, void*, void*, float>(nullptr, "UKismetSystemLibrary.BoxTraceMultiByProfile(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TRotator<double>,FName,bool,TArray<AActor*,TSizedDefaultAllocator<32>>&,EDrawDebugTrace::Type,TArray<FHitResult,TSizedDefaultAllocator<32>>&,bool,FLinearColor,FLinearColor,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.BoxTraceMultiForObjects(UObject*,UE::Math::TVector<double>,UE::Math::TVecto
    // endereco: casamento de bytes com a build de referencia
    static bool BoxTraceMultiForObjects(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, bool a6, void* a7, int a8, void* a9, bool a10, void* a11, void* a12, float a13)
    {
        return NativeCall<bool, void*, void*, void*, void*, void*, void*, bool, void*, int, void*, bool, void*, void*, float>(nullptr, "UKismetSystemLibrary.BoxTraceMultiForObjects(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TRotator<double>,TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>>&,bool,TArray<AActor*,TSizedDefaultAllocator<32>>&,EDrawDebugTrace::Type,TArray<FHitResult,TSizedDefaultAllocator<32>>&,bool,FLinearColor,FLinearColor,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.BoxTraceSingle(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>
    // endereco: casamento de bytes com a build de referencia
    static bool BoxTraceSingle(void* a0, void* a1, void* a2, void* a3, void* a4, int a5, bool a6, void* a7, int a8, void* a9, bool a10, void* a11, void* a12, float a13)
    {
        return NativeCall<bool, void*, void*, void*, void*, void*, int, bool, void*, int, void*, bool, void*, void*, float>(nullptr, "UKismetSystemLibrary.BoxTraceSingle(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TRotator<double>,ETraceTypeQuery,bool,TArray<AActor*,TSizedDefaultAllocator<32>>&,EDrawDebugTrace::Type,FHitResult&,bool,FLinearColor,FLinearColor,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.BoxTraceSingleByProfile(UObject*,UE::Math::TVector<double>,UE::Math::TVecto
    // endereco: thunk
    static bool BoxTraceSingleByProfile(void* a0, void* a1, void* a2, void* a3, void* a4, unsigned long long a5, bool a6, void* a7, int a8, void* a9, bool a10, void* a11, void* a12, float a13)
    {
        return NativeCall<bool, void*, void*, void*, void*, void*, unsigned long long, bool, void*, int, void*, bool, void*, void*, float>(nullptr, "UKismetSystemLibrary.BoxTraceSingleByProfile(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TRotator<double>,FName,bool,TArray<AActor*,TSizedDefaultAllocator<32>>&,EDrawDebugTrace::Type,FHitResult&,bool,FLinearColor,FLinearColor,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.BoxTraceSingleForObjects(UObject*,UE::Math::TVector<double>,UE::Math::TVect
    // endereco: casamento de bytes com a build de referencia
    static bool BoxTraceSingleForObjects(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, bool a6, void* a7, int a8, void* a9, bool a10, void* a11, void* a12, float a13)
    {
        return NativeCall<bool, void*, void*, void*, void*, void*, void*, bool, void*, int, void*, bool, void*, void*, float>(nullptr, "UKismetSystemLibrary.BoxTraceSingleForObjects(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TRotator<double>,TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>>&,bool,TArray<AActor*,TSizedDefaultAllocator<32>>&,EDrawDebugTrace::Type,FHitResult&,bool,FLinearColor,FLinearColor,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.BreakARFilter(FARFilter,TArray<FName,TSizedDefaultAllocator<32>>&,TArray<FN
    // endereco: casamento de bytes com a build de referencia
    static void BreakARFilter(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8, void* a9, void* a10)
    {
        NativeCall<void, void*, void*, void*, void*, void*, void*, void*, void*, void*, void*, void*>(nullptr, "UKismetSystemLibrary.BreakARFilter(FARFilter,TArray<FName,TSizedDefaultAllocator<32>>&,TArray<FName,TSizedDefaultAllocator<32>>&,TArray<FSoftObjectPath,TSizedDefaultAllocator<32>>&,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>>&,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>&,TArray<FName,TSizedDefaultAllocator<32>>&,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>&,bool&,bool&,bool&)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.CanLaunchURL(FString&)
    // endereco: cache_pdb_25090264
    static bool CanLaunchURL(const FString& a0)
    {
        return NativeCall<bool, void*>(nullptr, "UKismetSystemLibrary.CanLaunchURL(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static bool CanLaunchURL(FString* a0)
    { return CanLaunchURL(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.CapsuleOverlapActors(UObject*,UE::Math::TVector<double>,float,float,TArray<
    // endereco: casamento de bytes com a build de referencia
    static bool CapsuleOverlapActors(void* a0, void* a1, float a2, float a3, void* a4, void* a5, void* a6, void* a7)
    {
        return NativeCall<bool, void*, void*, float, float, void*, void*, void*, void*>(nullptr, "UKismetSystemLibrary.CapsuleOverlapActors(UObject*,UE::Math::TVector<double>,float,float,TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>>&,UClass*,TArray<AActor*,TSizedDefaultAllocator<32>>&,TArray<AActor*,TSizedDefaultAllocator<32>>&)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.CapsuleOverlapComponents(UObject*,UE::Math::TVector<double>,float,float,TAr
    // endereco: casamento de bytes com a build de referencia
    static bool CapsuleOverlapComponents(void* a0, void* a1, float a2, float a3, void* a4, void* a5, void* a6, void* a7)
    {
        return NativeCall<bool, void*, void*, float, float, void*, void*, void*, void*>(nullptr, "UKismetSystemLibrary.CapsuleOverlapComponents(UObject*,UE::Math::TVector<double>,float,float,TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>>&,UClass*,TArray<AActor*,TSizedDefaultAllocator<32>>&,TArray<UPrimitiveComponent*,TSizedDefaultAllocator<32>>&)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.CapsuleTraceSingle(UObject*,UE::Math::TVector<double>,UE::Math::TVector<dou
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo+string_aprovado]
    static bool CapsuleTraceSingle(void* a0, void* a1, void* a2, float a3, float a4, int a5, bool a6, void* a7, int a8, void* a9, bool a10, void* a11, void* a12, float a13)
    {
        return NativeCall<bool, void*, void*, void*, float, float, int, bool, void*, int, void*, bool, void*, void*, float>(nullptr, "UKismetSystemLibrary.CapsuleTraceSingle(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,float,float,ETraceTypeQuery,bool,TArray<AActor*,TSizedDefaultAllocator<32>>&,EDrawDebugTrace::Type,FHitResult&,bool,FLinearColor,FLinearColor,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.ComponentOverlapActors(UPrimitiveComponent*,UE::Math::TTransform<double>&,T
    // endereco: casamento de bytes com a build de referencia
    static bool ComponentOverlapActors(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5)
    {
        return NativeCall<bool, void*, void*, void*, void*, void*, void*>(nullptr, "UKismetSystemLibrary.ComponentOverlapActors(UPrimitiveComponent*,UE::Math::TTransform<double>&,TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>>&,UClass*,TArray<AActor*,TSizedDefaultAllocator<32>>&,TArray<AActor*,TSizedDefaultAllocator<32>>&)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.ComponentOverlapComponents(UPrimitiveComponent*,UE::Math::TTransform<double
    // endereco: casamento de bytes com a build de referencia
    static bool ComponentOverlapComponents(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5)
    {
        return NativeCall<bool, void*, void*, void*, void*, void*, void*>(nullptr, "UKismetSystemLibrary.ComponentOverlapComponents(UPrimitiveComponent*,UE::Math::TTransform<double>&,TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>>&,UClass*,TArray<AActor*,TSizedDefaultAllocator<32>>&,TArray<UPrimitiveComponent*,TSizedDefaultAllocator<32>>&)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.Conv_ClassToSoftClassReference(TSubclassOf<UObject>&)
    // endereco: casamento de bytes com a build de referencia
    static void Conv_ClassToSoftClassReference(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UKismetSystemLibrary.Conv_ClassToSoftClassReference(TSubclassOf<UObject>&)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.Conv_ComponentReferenceToSoftComponentReference(FComponentReference&)
    // endereco: casamento de bytes com a build de referencia
    static void Conv_ComponentReferenceToSoftComponentReference(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UKismetSystemLibrary.Conv_ComponentReferenceToSoftComponentReference(FComponentReference&)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.Conv_SoftClassReferenceToClass(TSoftClassPtr<UObject>&)
    // endereco: casamento de bytes com a build de referencia
    static void Conv_SoftClassReferenceToClass(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UKismetSystemLibrary.Conv_SoftClassReferenceToClass(TSoftClassPtr<UObject>&)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.DrawDebugLineTraceHitResult(UObject*,FHitResult&,UE::Math::TVector<double>&
    // endereco: casamento de bytes com a build de referencia
    static void DrawDebugLineTraceHitResult(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, float a6, float a7, bool a8, void* a9, float a10, float a11, bool a12)
    {
        NativeCall<void, void*, void*, void*, void*, void*, void*, float, float, bool, void*, float, float, bool>(nullptr, "UKismetSystemLibrary.DrawDebugLineTraceHitResult(UObject*,FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,FLinearColor,FLinearColor,float,float,bool,FLinearColor,float,float,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.ExecuteConsoleCommand(UObject*,FString&,APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    static void ExecuteConsoleCommand(void* a0, const FString& a1, void* a2)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "UKismetSystemLibrary.ExecuteConsoleCommand(UObject*,FString&,APlayerController*)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void ExecuteConsoleCommand(void* a0, FString* a1, void* a2)
    { ExecuteConsoleCommand(a0, *a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.GetActorListFromComponentList(TArray<UPrimitiveComponent*,TSizedDefaultAllo
    // endereco: casamento de bytes com a build de referencia
    static void GetActorListFromComponentList(void* a0, void* a1, void* a2)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "UKismetSystemLibrary.GetActorListFromComponentList(TArray<UPrimitiveComponent*,TSizedDefaultAllocator<32>>&,UClass*,TArray<AActor*,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.GetClassFromPrimaryAssetId(FPrimaryAssetId)
    // endereco: casamento de bytes com a build de referencia
    static void GetClassFromPrimaryAssetId(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UKismetSystemLibrary.GetClassFromPrimaryAssetId(FPrimaryAssetId)", retorno, a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetSystemLibrary.GetGameTimeInSeconds(UObject*)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetGameTimeInSeconds(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "UKismetSystemLibrary.GetGameTimeInSeconds(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.GetSoftClassReferenceFromPrimaryAssetId(FPrimaryAssetId)
    // endereco: casamento de bytes com a build de referencia
    static void GetSoftClassReferenceFromPrimaryAssetId(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UKismetSystemLibrary.GetSoftClassReferenceFromPrimaryAssetId(FPrimaryAssetId)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.GetSoftObjectReferenceFromPrimaryAssetId(FPrimaryAssetId)
    // endereco: casamento de bytes com a build de referencia
    static void GetSoftObjectReferenceFromPrimaryAssetId(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UKismetSystemLibrary.GetSoftObjectReferenceFromPrimaryAssetId(FPrimaryAssetId)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.GetSupportedFullscreenResolutions(TArray<UE::Math::TIntPoint<int>,TSizedDef
    // endereco: casamento de bytes com a build de referencia
    static bool GetSupportedFullscreenResolutions(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UKismetSystemLibrary.GetSupportedFullscreenResolutions(TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.IsDedicatedServer(UObject*)
    // endereco: casamento de bytes com a build de referencia
    static bool IsDedicatedServer(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UKismetSystemLibrary.IsDedicatedServer(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.IsStandalone(UObject*)
    // endereco: casamento de bytes com a build de referencia
    static bool IsStandalone(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UKismetSystemLibrary.IsStandalone(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.K2_ClearTimerDelegate(FTimerDynamicDelegate)
    // endereco: casamento de bytes com a build de referencia
    static void K2_ClearTimerDelegate(void* a0)
    {
        NativeCall<void, void*>(nullptr, "UKismetSystemLibrary.K2_ClearTimerDelegate(FTimerDynamicDelegate)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.K2_IsTimerActiveDelegate(FTimerDynamicDelegate)
    // endereco: cache_pdb_25090264
    static bool K2_IsTimerActiveDelegate(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UKismetSystemLibrary.K2_IsTimerActiveDelegate(FTimerDynamicDelegate)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.K2_IsTimerPausedDelegate(FTimerDynamicDelegate)
    // endereco: cache_pdb_25090264
    static bool K2_IsTimerPausedDelegate(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UKismetSystemLibrary.K2_IsTimerPausedDelegate(FTimerDynamicDelegate)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.K2_SetTimerForNextTickDelegate(FBlueprintTimerDynamicDelegate,bool)
    // endereco: casamento de bytes com a build de referencia
    static void K2_SetTimerForNextTickDelegate(void* a0, bool a1)
    {
        NativeCall<void, void*, bool>(nullptr, "UKismetSystemLibrary.K2_SetTimerForNextTickDelegate(FBlueprintTimerDynamicDelegate,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.K2_TimerExistsDelegate(FTimerDynamicDelegate)
    // endereco: casamento de bytes com a build de referencia
    static bool K2_TimerExistsDelegate(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UKismetSystemLibrary.K2_TimerExistsDelegate(FTimerDynamicDelegate)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.LaunchExternalUrl(TArray<FString,TSizedDefaultAllocator<32>>&,FString&)
    // endereco: casamento de bytes com a build de referencia
    static void LaunchExternalUrl(void* a0, const FString& a1)
    {
        NativeCall<void, void*, void*>(nullptr, "UKismetSystemLibrary.LaunchExternalUrl(TArray<FString,TSizedDefaultAllocator<32>>&,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void LaunchExternalUrl(void* a0, FString* a1)
    { LaunchExternalUrl(a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.LaunchURL(FString&)
    // endereco: casamento de bytes com a build de referencia
    static void LaunchURL(const FString& a0)
    {
        NativeCall<void, void*>(nullptr, "UKismetSystemLibrary.LaunchURL(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void LaunchURL(FString* a0)
    { LaunchURL(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.LineTraceMulti(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>
    // endereco: thunk
    static bool LineTraceMulti(void* a0, void* a1, void* a2, int a3, bool a4, void* a5, int a6, void* a7, bool a8, void* a9, void* a10, float a11)
    {
        return NativeCall<bool, void*, void*, void*, int, bool, void*, int, void*, bool, void*, void*, float>(nullptr, "UKismetSystemLibrary.LineTraceMulti(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,ETraceTypeQuery,bool,TArray<AActor*,TSizedDefaultAllocator<32>>&,EDrawDebugTrace::Type,TArray<FHitResult,TSizedDefaultAllocator<32>>&,bool,FLinearColor,FLinearColor,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.LineTraceMultiByProfile(UObject*,UE::Math::TVector<double>,UE::Math::TVecto
    // endereco: thunk
    static bool LineTraceMultiByProfile(void* a0, void* a1, void* a2, unsigned long long a3, bool a4, void* a5, int a6, void* a7, bool a8, void* a9, void* a10, float a11)
    {
        return NativeCall<bool, void*, void*, void*, unsigned long long, bool, void*, int, void*, bool, void*, void*, float>(nullptr, "UKismetSystemLibrary.LineTraceMultiByProfile(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,FName,bool,TArray<AActor*,TSizedDefaultAllocator<32>>&,EDrawDebugTrace::Type,TArray<FHitResult,TSizedDefaultAllocator<32>>&,bool,FLinearColor,FLinearColor,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.LineTraceMultiForObjects(UObject*,UE::Math::TVector<double>,UE::Math::TVect
    // endereco: thunk
    static bool LineTraceMultiForObjects(void* a0, void* a1, void* a2, void* a3, bool a4, void* a5, int a6, void* a7, bool a8, void* a9, void* a10, float a11)
    {
        return NativeCall<bool, void*, void*, void*, void*, bool, void*, int, void*, bool, void*, void*, float>(nullptr, "UKismetSystemLibrary.LineTraceMultiForObjects(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>>&,bool,TArray<AActor*,TSizedDefaultAllocator<32>>&,EDrawDebugTrace::Type,TArray<FHitResult,TSizedDefaultAllocator<32>>&,bool,FLinearColor,FLinearColor,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.LineTraceSingle(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double
    // endereco: thunk
    static bool LineTraceSingle(void* a0, void* a1, void* a2, int a3, bool a4, void* a5, int a6, void* a7, bool a8, void* a9, void* a10, float a11)
    {
        return NativeCall<bool, void*, void*, void*, int, bool, void*, int, void*, bool, void*, void*, float>(nullptr, "UKismetSystemLibrary.LineTraceSingle(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,ETraceTypeQuery,bool,TArray<AActor*,TSizedDefaultAllocator<32>>&,EDrawDebugTrace::Type,FHitResult&,bool,FLinearColor,FLinearColor,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.LineTraceSingleByProfile(UObject*,UE::Math::TVector<double>,UE::Math::TVect
    // endereco: thunk
    static bool LineTraceSingleByProfile(void* a0, void* a1, void* a2, unsigned long long a3, bool a4, void* a5, int a6, void* a7, bool a8, void* a9, void* a10, float a11)
    {
        return NativeCall<bool, void*, void*, void*, unsigned long long, bool, void*, int, void*, bool, void*, void*, float>(nullptr, "UKismetSystemLibrary.LineTraceSingleByProfile(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,FName,bool,TArray<AActor*,TSizedDefaultAllocator<32>>&,EDrawDebugTrace::Type,FHitResult&,bool,FLinearColor,FLinearColor,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.LineTraceSingleForObjects(UObject*,UE::Math::TVector<double>,UE::Math::TVec
    // endereco: thunk
    static bool LineTraceSingleForObjects(void* a0, void* a1, void* a2, void* a3, bool a4, void* a5, int a6, void* a7, bool a8, void* a9, void* a10, float a11)
    {
        return NativeCall<bool, void*, void*, void*, void*, bool, void*, int, void*, bool, void*, void*, float>(nullptr, "UKismetSystemLibrary.LineTraceSingleForObjects(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>>&,bool,TArray<AActor*,TSizedDefaultAllocator<32>>&,EDrawDebugTrace::Type,FHitResult&,bool,FLinearColor,FLinearColor,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.LoadAsset_Blocking(TSoftObjectPtr<UObject>)
    // endereco: casamento de bytes com a build de referencia
    static UObject* LoadAsset_Blocking(void* a0)
    {
        return NativeCall<UObject*, void*>(nullptr, "UKismetSystemLibrary.LoadAsset_Blocking(TSoftObjectPtr<UObject>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetSystemLibrary.MakeARFilter(TArray<FName,TSizedDefaultAllocator<32>>&,TArray<FName,TSizedD
    // endereco: casamento de bytes com a build de referencia
    static void MakeARFilter(void* retorno, void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, bool a7, bool a8, bool a9)
    {
        NativeCall<void, void*, void*, void*, void*, void*, void*, void*, void*, bool, bool, bool>(nullptr, "UKismetSystemLibrary.MakeARFilter(TArray<FName,TSizedDefaultAllocator<32>>&,TArray<FName,TSizedDefaultAllocator<32>>&,TArray<FSoftObjectPath,TSizedDefaultAllocator<32>>&,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>>&,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>&,TArray<FName,TSizedDefaultAllocator<32>>&,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>&,bool,bool,bool)", retorno, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.MakeSoftObjectPath(FString&)
    // endereco: casamento de bytes com a build de referencia
    static void MakeSoftObjectPath(void* retorno, const FString& a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UKismetSystemLibrary.MakeSoftObjectPath(FString&)", retorno, const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void MakeSoftObjectPath(void* retorno, FString* a0)
    { MakeSoftObjectPath(retorno, *a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.MakeTopLevelAssetPath(FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    static void MakeTopLevelAssetPath(void* retorno, const FString& a0, const FString& a1)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "UKismetSystemLibrary.MakeTopLevelAssetPath(FString&,FString&)", retorno, const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void MakeTopLevelAssetPath(void* retorno, FString* a0, FString* a1)
    { MakeTopLevelAssetPath(retorno, *a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.MoveComponentTo(USceneComponent*,UE::Math::TVector<double>,UE::Math::TRotat
    // endereco: casamento de bytes com a build de referencia
    static void MoveComponentTo(void* a0, void* a1, void* a2, bool a3, bool a4, float a5, bool a6, unsigned char a7, void* a8, bool a9)
    {
        NativeCall<void, void*, void*, void*, bool, bool, float, bool, unsigned char, void*, bool>(nullptr, "UKismetSystemLibrary.MoveComponentTo(USceneComponent*,UE::Math::TVector<double>,UE::Math::TRotator<double>,bool,bool,float,bool,TEnumAsByte<EMoveComponentAction::Type>,FLatentActionInfo,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.SetUserActivity(FUserActivity&)
    // endereco: thunk
    static void SetUserActivity(void* a0)
    {
        NativeCall<void, void*>(nullptr, "UKismetSystemLibrary.SetUserActivity(FUserActivity&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.SetWindowTitle(FText&)
    // endereco: casamento de bytes com a build de referencia
    static void SetWindowTitle(void* a0)
    {
        NativeCall<void, void*>(nullptr, "UKismetSystemLibrary.SetWindowTitle(FText&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.SphereOverlapActors(UObject*,UE::Math::TVector<double>,float,TArray<TEnumAs
    // endereco: casamento de bytes com a build de referencia
    static bool SphereOverlapActors(void* a0, void* a1, float a2, void* a3, void* a4, void* a5, void* a6)
    {
        return NativeCall<bool, void*, void*, float, void*, void*, void*, void*>(nullptr, "UKismetSystemLibrary.SphereOverlapActors(UObject*,UE::Math::TVector<double>,float,TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>>&,UClass*,TArray<AActor*,TSizedDefaultAllocator<32>>&,TArray<AActor*,TSizedDefaultAllocator<32>>&)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.SphereOverlapActorsSimple(UObject*,UE::Math::TVector<double>,float,TEnumAsB
    // endereco: casamento de bytes com a build de referencia
    static bool SphereOverlapActorsSimple(void* a0, void* a1, float a2, unsigned char a3, void* a4, void* a5, void* a6)
    {
        return NativeCall<bool, void*, void*, float, unsigned char, void*, void*, void*>(nullptr, "UKismetSystemLibrary.SphereOverlapActorsSimple(UObject*,UE::Math::TVector<double>,float,TEnumAsByte<EObjectTypeQuery>,UClass*,TArray<AActor*,TSizedDefaultAllocator<32>>&,TArray<AActor*,TSizedDefaultAllocator<32>>&)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.SphereOverlapComponents(UObject*,UE::Math::TVector<double>,float,TArray<TEn
    // endereco: casamento de bytes com a build de referencia
    static bool SphereOverlapComponents(void* a0, void* a1, float a2, void* a3, void* a4, void* a5, void* a6)
    {
        return NativeCall<bool, void*, void*, float, void*, void*, void*, void*>(nullptr, "UKismetSystemLibrary.SphereOverlapComponents(UObject*,UE::Math::TVector<double>,float,TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>>&,UClass*,TArray<AActor*,TSizedDefaultAllocator<32>>&,TArray<UPrimitiveComponent*,TSizedDefaultAllocator<32>>&)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.SphereOverlapComponents_NEW(UObject*,UE::Math::TVector<double>,float,TArray
    // endereco: casamento de bytes com a build de referencia
    static bool SphereOverlapComponents_NEW(void* a0, void* a1, float a2, void* a3, void* a4, void* a5, void* a6)
    {
        return NativeCall<bool, void*, void*, float, void*, void*, void*, void*>(nullptr, "UKismetSystemLibrary.SphereOverlapComponents_NEW(UObject*,UE::Math::TVector<double>,float,TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>>&,UClass*,TArray<AActor*,TSizedDefaultAllocator<32>>&,TArray<UPrimitiveComponent*,TSizedDefaultAllocator<32>>&)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.SphereTraceMultiForObjects(UObject*,UE::Math::TVector<double>,UE::Math::TVe
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo+string_aprovado]
    static bool SphereTraceMultiForObjects(void* a0, void* a1, void* a2, float a3, void* a4, bool a5, void* a6, int a7, void* a8, bool a9, void* a10, void* a11, float a12)
    {
        return NativeCall<bool, void*, void*, void*, float, void*, bool, void*, int, void*, bool, void*, void*, float>(nullptr, "UKismetSystemLibrary.SphereTraceMultiForObjects(UObject*,UE::Math::TVector<double>,UE::Math::TVector<double>,float,TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>>&,bool,TArray<AActor*,TSizedDefaultAllocator<32>>&,EDrawDebugTrace::Type,TArray<FHitResult,TSizedDefaultAllocator<32>>&,bool,FLinearColor,FLinearColor,float)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UKismetSystemLibrary.StaticRegisterNativesUKismetSystemLibrary()
    // endereco: cache_pdb_25090264
    static void StaticRegisterNativesUKismetSystemLibrary()
    {
        NativeCall<void>(nullptr, "UKismetSystemLibrary.StaticRegisterNativesUKismetSystemLibrary()");
    }

};

#endif  // BRZ_SDK_JOGO_UKISMETSYSTEMLIBRARY_H

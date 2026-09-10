// ==========================================================================
//  UPrimalPathFollowingComponent — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALPATHFOLLOWINGCOMPONENT_H
#define BRZ_SDK_JOGO_UPRIMALPATHFOLLOWINGCOMPONENT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FActorComponentTickFunction;
struct FName;


struct UPrimalPathFollowingComponent
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalPathFollowingComponent"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalPathFollowingComponent.CalculateAngleChange(TArray<UE::Math::TVector<double>,TSizedDefaul
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CalculateAngleChange(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalPathFollowingComponent.CalculateAngleChange(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalPathFollowingComponent.FollowPathSegment(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FollowPathSegment(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalPathFollowingComponent.FollowPathSegment(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalPathFollowingComponent.GetAdditionalGoalOffset()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    BrzPonteiro GetAdditionalGoalOffset() const
    {
        return NativeCall<void*>(this, "UPrimalPathFollowingComponent.GetAdditionalGoalOffset()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalPathFollowingComponent.HasReachedCurrentTarget(UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HasReachedCurrentTarget(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalPathFollowingComponent.HasReachedCurrentTarget(UE::Math::TVector<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalPathFollowingComponent.HasReachedInternal(UE::Math::TVector<double>&,float,float,UE::Math
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HasReachedInternal(void* a0, float a1, float a2, void* a3, float a4, float a5, bool a6) const
    {
        return NativeCall<void*, void*, float, float, void*, float, float, bool>(this, "UPrimalPathFollowingComponent.HasReachedInternal(UE::Math::TVector<double>&,float,float,UE::Math::TVector<double>&,float,float,bool)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalPathFollowingComponent.OnMoveBlockedBy(FHitResult&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnMoveBlockedBy(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalPathFollowingComponent.OnMoveBlockedBy(FHitResult&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalPathFollowingComponent.OnMoveSegmentUpdated()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnMoveSegmentUpdated() const
    {
        return NativeCall<void*>(this, "UPrimalPathFollowingComponent.OnMoveSegmentUpdated()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalPathFollowingComponent.OnPathFinished(FPathFollowingResult&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnPathFinished(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalPathFollowingComponent.OnPathFinished(FPathFollowingResult&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalPathFollowingComponent.OnPathUpdated()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnPathUpdated() const
    {
        return NativeCall<void*>(this, "UPrimalPathFollowingComponent.OnPathUpdated()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalPathFollowingComponent.SetNavMovementInterface(INavMovementInterface*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetNavMovementInterface(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalPathFollowingComponent.SetNavMovementInterface(INavMovementInterface*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalPathFollowingComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TickComponent(float a0, int a1, void* a2) const
    {
        return NativeCall<void*, float, int, void*>(this, "UPrimalPathFollowingComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", a0, a1, a2);
    }

    float& AccelerationRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPathFollowingComponent.AccelerationRate"); }
    float& AngleToSpeedConstField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPathFollowingComponent.AngleToSpeedConst"); }
    TArray<void*>& AssetUserDataField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalPathFollowingComponent.AssetUserData"); }
    TArray<void*>& ComponentTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalPathFollowingComponent.ComponentTags"); }
    int& CreationMethodField() const
    { return *GetNativePointerField<int*>(this, "UPrimalPathFollowingComponent.CreationMethod"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UPrimalPathFollowingComponent.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalPathFollowingComponent.CustomTag"); }
    float& DecelerationDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPathFollowingComponent.DecelerationDistance"); }
    float& DecelerationRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPathFollowingComponent.DecelerationRate"); }
    BrzCampoPonteiro LastMoveBlockedLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalPathFollowingComponent.LastMoveBlockedLocation")); }
    double& LastMoveBlockedTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalPathFollowingComponent.LastMoveBlockedTime"); }
    BrzCampoPonteiro MoveTowardTargetOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalPathFollowingComponent.MoveTowardTargetOffset")); }
    BrzCampoPonteiro MovementCompField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalPathFollowingComponent.MovementComp")); }
    float& MovementGoalHeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPathFollowingComponent.MovementGoalHeight"); }
    BrzCampoPonteiro MyNavDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalPathFollowingComponent.MyNavData")); }
    BrzCampoPonteiro OnComponentActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalPathFollowingComponent.OnComponentActivated")); }
    BrzCampoPonteiro OnComponentDeactivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalPathFollowingComponent.OnComponentDeactivated")); }
    BrzCampoPonteiro OnPathUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalPathFollowingComponent.OnPathUpdate")); }
    FActorComponentTickFunction& PrimaryComponentTickField() const
    { return *GetNativePointerField<FActorComponentTickFunction*>(this, "UPrimalPathFollowingComponent.PrimaryComponentTick"); }
    float& ReachedDestinationThresholdOffsetField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPathFollowingComponent.ReachedDestinationThresholdOffset"); }
    BrzCampoPonteiro StartAngleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalPathFollowingComponent.startAngle")); }
    BrzCampoPonteiro TargetFocalPositionOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalPathFollowingComponent.TargetFocalPositionOffset")); }
    int& UCSSerializationIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalPathFollowingComponent.UCSSerializationIndex"); }
    BitFieldValue<bool, unsigned __int32> bAlwaysReplicatePropertyConditional()
    { return { (void*)this, "bAlwaysReplicatePropertyConditional" }; }
    BitFieldValue<bool, unsigned __int32> bAutoActivate()
    { return { (void*)this, "bAutoActivate" }; }
    BitFieldValue<bool, unsigned __int32> bCanEverAffectNavigation()
    { return { (void*)this, "bCanEverAffectNavigation" }; }
    BitFieldValue<bool, unsigned __int32> bDedicatedForceTickingEveryFrame()
    { return { (void*)this, "bDedicatedForceTickingEveryFrame" }; }
    BitFieldValue<bool, unsigned __int32> bEditableWhenInherited()
    { return { (void*)this, "bEditableWhenInherited" }; }
    BitFieldValue<bool, unsigned __int32> bHasMultiUseEntries()
    { return { (void*)this, "bHasMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bIsActive()
    { return { (void*)this, "bIsActive" }; }
    BitFieldValue<bool, unsigned __int32> bIsEditorOnly()
    { return { (void*)this, "bIsEditorOnly" }; }
    BitFieldValue<bool, unsigned __int32> bNetAddressable()
    { return { (void*)this, "bNetAddressable" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyInitialReplication()
    { return { (void*)this, "bOnlyInitialReplication" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyRelevantToOwner()
    { return { (void*)this, "bOnlyRelevantToOwner" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnClient()
    { return { (void*)this, "bPreventOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnConsoles()
    { return { (void*)this, "bPreventOnConsoles" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnDedicatedServer()
    { return { (void*)this, "bPreventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnNonDedicatedHost()
    { return { (void*)this, "bPreventOnNonDedicatedHost" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateUsingRegisteredSubObjectList()
    { return { (void*)this, "bReplicateUsingRegisteredSubObjectList" }; }
    BitFieldValue<bool, unsigned __int32> bReplicates()
    { return { (void*)this, "bReplicates" }; }
    BitFieldValue<bool, unsigned __int32> bStasisPreventUnregister()
    { return { (void*)this, "bStasisPreventUnregister" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentCreated()
    { return { (void*)this, "bUseBPOnComponentCreated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentDestroyed()
    { return { (void*)this, "bUseBPOnComponentDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentTick()
    { return { (void*)this, "bUseBPOnComponentTick" }; }
    float& startAngleField() const
    { return *GetNativePointerField<float*>(this, "UPrimalPathFollowingComponent.startAngle"); }
    BitFieldValue<bool, unsigned __int32> bDebugPathFollowing()
    { return { (void*)this, "bDebugPathFollowing" }; }
    BitFieldValue<bool, unsigned __int32> bForceInputAcceptanceRadius()
    { return { (void*)this, "bForceInputAcceptanceRadius" }; }
    BitFieldValue<bool, unsigned __int32> bIsDeceleratingForTurn()
    { return { (void*)this, "bIsDeceleratingForTurn" }; }
    BitFieldValue<bool, unsigned __int32> bReachedCurrentTargetUseFeetLocation()
    { return { (void*)this, "bReachedCurrentTargetUseFeetLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUse3DGoalRadius()
    { return { (void*)this, "bUse3DGoalRadius" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALPATHFOLLOWINGCOMPONENT_H

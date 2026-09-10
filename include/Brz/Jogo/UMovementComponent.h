// ==========================================================================
//  UMovementComponent — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UMOVEMENTCOMPONENT_H
#define BRZ_SDK_JOGO_UMOVEMENTCOMPONENT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UPrimitiveComponent;
struct USceneComponent;

#include "UActorComponent.h"

struct UMovementComponent : public UActorComponent
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UMovementComponent"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UMovementComponent.Deactivate()
    // endereco: casamento de bytes com a build de referencia
    void Deactivate() const
    {
        NativeCall<void>(this, "UMovementComponent.Deactivate()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UMovementComponent.GetGravityZ()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    float GetGravityZ() const
    {
        return NativeCall<float>(this, "UMovementComponent.GetGravityZ()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UMovementComponent.InitCollisionParams(FCollisionQueryParams&,FCollisionResponseParams&)
    // endereco: cache_pdb_25090264
    void InitCollisionParams(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "UMovementComponent.InitCollisionParams(FCollisionQueryParams&,FCollisionResponseParams&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UMovementComponent.InitializeComponent()
    // endereco: casamento de bytes com a build de referencia
    void InitializeComponent() const
    {
        NativeCall<void>(this, "UMovementComponent.InitializeComponent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UMovementComponent.IsExceedingMaxSpeed(float)
    // endereco: cache_pdb_25090264
    bool IsExceedingMaxSpeed(float a0) const
    {
        return NativeCall<bool, float>(this, "UMovementComponent.IsExceedingMaxSpeed(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UMovementComponent.IsInWater()
    // endereco: casamento de bytes com a build de referencia
    bool IsInWater() const
    {
        return NativeCall<bool>(this, "UMovementComponent.IsInWater()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UMovementComponent.MoveUpdatedComponentImpl(UE::Math::TVector<double>&,UE::Math::TQuat<double>&,
    // endereco: casamento de bytes com a build de referencia
    bool MoveUpdatedComponentImpl(void* a0, void* a1, bool a2, void* a3, int a4) const
    {
        return NativeCall<bool, void*, void*, bool, void*, int>(this, "UMovementComponent.MoveUpdatedComponentImpl(UE::Math::TVector<double>&,UE::Math::TQuat<double>&,bool,FHitResult*,ETeleportType)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UMovementComponent.OnRegister()
    // endereco: casamento de bytes com a build de referencia
    void OnRegister() const
    {
        NativeCall<void>(this, "UMovementComponent.OnRegister()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UMovementComponent.OverlapTest(UE::Math::TVector<double>&,UE::Math::TQuat<double>&,ECollisionCha
    // endereco: casamento de bytes com a build de referencia
    bool OverlapTest(void* a0, void* a1, int a2, void* a3, void* a4) const
    {
        return NativeCall<bool, void*, void*, int, void*, void*>(this, "UMovementComponent.OverlapTest(UE::Math::TVector<double>&,UE::Math::TQuat<double>&,ECollisionChannel,FCollisionShape&,AActor*)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UMovementComponent.PostLoad()
    // endereco: casamento de bytes com a build de referencia
    void PostLoad() const
    {
        NativeCall<void>(this, "UMovementComponent.PostLoad()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UMovementComponent.RegisterComponentTickFunctions(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void RegisterComponentTickFunctions(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "UMovementComponent.RegisterComponentTickFunctions(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UMovementComponent.ResolvePenetrationImpl(UE::Math::TVector<double>&,FHitResult&,UE::Math::TQuat
    // endereco: casamento de bytes com a build de referencia
    bool ResolvePenetrationImpl(void* a0, void* a1, void* a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "UMovementComponent.ResolvePenetrationImpl(UE::Math::TVector<double>&,FHitResult&,UE::Math::TQuat<double>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UMovementComponent.SafeMoveUpdatedComponent(UE::Math::TVector<double>&,UE::Math::TQuat<double>&,
    // endereco: casamento de bytes com a build de referencia
    bool SafeMoveUpdatedComponent(void* a0, void* a1, bool a2, void* a3, int a4) const
    {
        return NativeCall<bool, void*, void*, bool, void*, int>(this, "UMovementComponent.SafeMoveUpdatedComponent(UE::Math::TVector<double>&,UE::Math::TQuat<double>&,bool,FHitResult&,ETeleportType)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UMovementComponent.Serialize(FArchive&)
    // endereco: casamento de bytes com a build de referencia
    void Serialize(void* a0) const
    {
        NativeCall<void, void*>(this, "UMovementComponent.Serialize(FArchive&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UMovementComponent.SetPlaneConstraintAxisSetting(EPlaneConstraintAxisSetting)
    // endereco: casamento de bytes com a build de referencia
    void SetPlaneConstraintAxisSetting(int a0) const
    {
        NativeCall<void, int>(this, "UMovementComponent.SetPlaneConstraintAxisSetting(EPlaneConstraintAxisSetting)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UMovementComponent.SetPlaneConstraintEnabled(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    void SetPlaneConstraintEnabled(bool a0) const
    {
        NativeCall<void, bool>(this, "UMovementComponent.SetPlaneConstraintEnabled(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UMovementComponent.SetPlaneConstraintFromVectors(UE::Math::TVector<double>,UE::Math::TVector<dou
    // endereco: casamento de bytes com a build de referencia
    void SetPlaneConstraintFromVectors(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "UMovementComponent.SetPlaneConstraintFromVectors(UE::Math::TVector<double>,UE::Math::TVector<double>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UMovementComponent.SetPlaneConstraintNormal(UE::Math::TVector<double>)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void SetPlaneConstraintNormal(void* a0) const
    {
        NativeCall<void, void*>(this, "UMovementComponent.SetPlaneConstraintNormal(UE::Math::TVector<double>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UMovementComponent.SetPlaneConstraintOrigin(UE::Math::TVector<double>)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    void SetPlaneConstraintOrigin(void* a0) const
    {
        NativeCall<void, void*>(this, "UMovementComponent.SetPlaneConstraintOrigin(UE::Math::TVector<double>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UMovementComponent.SetUpdatedComponent(USceneComponent*)
    // endereco: casamento de bytes com a build de referencia
    void SetUpdatedComponent(void* a0) const
    {
        NativeCall<void, void*>(this, "UMovementComponent.SetUpdatedComponent(USceneComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UMovementComponent.ShouldSkipUpdate(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool ShouldSkipUpdate(float a0) const
    {
        return NativeCall<bool, float>(this, "UMovementComponent.ShouldSkipUpdate(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UMovementComponent.SlideAlongSurface(UE::Math::TVector<double>&,float,UE::Math::TVector<double>&
    // endereco: casamento de bytes com a build de referencia
    float SlideAlongSurface(void* a0, float a1, void* a2, void* a3, bool a4) const
    {
        return NativeCall<float, void*, float, void*, void*, bool>(this, "UMovementComponent.SlideAlongSurface(UE::Math::TVector<double>&,float,UE::Math::TVector<double>&,FHitResult&,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UMovementComponent.SnapUpdatedComponentToPlane()
    // endereco: casamento de bytes com a build de referencia
    void SnapUpdatedComponentToPlane() const
    {
        NativeCall<void>(this, "UMovementComponent.SnapUpdatedComponentToPlane()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UMovementComponent.StopMovementImmediately()
    // endereco: cache_pdb_25090264
    void StopMovementImmediately() const
    {
        NativeCall<void>(this, "UMovementComponent.StopMovementImmediately()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UMovementComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)
    // endereco: casamento de bytes com a build de referencia
    void TickComponent(float a0, int a1, void* a2) const
    {
        NativeCall<void, float, int, void*>(this, "UMovementComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UMovementComponent.TwoWallAdjust(UE::Math::TVector<double>&,FHitResult&,UE::Math::TVector<double
    // endereco: casamento de bytes com a build de referencia
    void TwoWallAdjust(void* a0, void* a1, void* a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "UMovementComponent.TwoWallAdjust(UE::Math::TVector<double>&,FHitResult&,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UMovementComponent.UpdateComponentVelocity()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    void UpdateComponentVelocity() const
    {
        NativeCall<void>(this, "UMovementComponent.UpdateComponentVelocity()");
    }

    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `UpdatedPrimitive` +8, medido na build 25090264
    //  (offset absoluto medido: 0xE0; confianca alta)
    int& MoveComponentFlagsField() const
    { return BrzCampoAncorado<int>(this, "UpdatedPrimitive", 8); }
    int& PlaneConstraintAxisSettingField() const
    { return *GetNativePointerField<int*>(this, "UMovementComponent.PlaneConstraintAxisSetting"); }
    BrzCampoPonteiro PlaneConstraintNormalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UMovementComponent.PlaneConstraintNormal")); }
    BrzCampoPonteiro PlaneConstraintOriginField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UMovementComponent.PlaneConstraintOrigin")); }
    TObjectPtr<USceneComponent>& UpdatedComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "UMovementComponent.UpdatedComponent"); }
    TObjectPtr<UPrimitiveComponent>& UpdatedPrimitiveField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "UMovementComponent.UpdatedPrimitive"); }
    BitFieldValue<bool, unsigned __int32> Velocity()
    { return { (void*)this, "Velocity" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PlaneConstraintOrigin` +26, medido na build 25090264
    //  (offset absoluto medido: 0x132; confianca alta)
    bool& bInInitializeComponentField() const
    { return BrzCampoAncorado<bool>(this, "PlaneConstraintOrigin", 26); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PlaneConstraintOrigin` +25, medido na build 25090264
    //  (offset absoluto medido: 0x131; confianca alta)
    bool& bInOnRegisterField() const
    { return BrzCampoAncorado<bool>(this, "PlaneConstraintOrigin", 25); }
    BitFieldValue<bool, unsigned __int32> bUpdateOnlyIfRendered()
    { return { (void*)this, "bUpdateOnlyIfRendered" }; }
    BitFieldValue<bool, unsigned __int32> bAutoUpdateTickRegistration()
    { return { (void*)this, "bAutoUpdateTickRegistration" }; }
    BitFieldValue<bool, unsigned __int32> bTickBeforeOwner()
    { return { (void*)this, "bTickBeforeOwner" }; }
    BitFieldValue<bool, unsigned __int32> bAutoRegisterUpdatedComponent()
    { return { (void*)this, "bAutoRegisterUpdatedComponent" }; }
    BitFieldValue<bool, unsigned __int32> bConstrainToPlane()
    { return { (void*)this, "bConstrainToPlane" }; }
    BitFieldValue<bool, unsigned __int32> bSnapToPlaneAtStart()
    { return { (void*)this, "bSnapToPlaneAtStart" }; }
    BitFieldValue<bool, unsigned __int32> bAutoRegisterPhysicsVolumeUpdates()
    { return { (void*)this, "bAutoRegisterPhysicsVolumeUpdates" }; }
    BitFieldValue<bool, unsigned __int32> bComponentShouldUpdatePhysicsVolume()
    { return { (void*)this, "bComponentShouldUpdatePhysicsVolume" }; }

};

#endif  // BRZ_SDK_JOGO_UMOVEMENTCOMPONENT_H

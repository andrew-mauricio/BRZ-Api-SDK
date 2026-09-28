// ==========================================================================
//  APhysicsVolume — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APHYSICSVOLUME_H
#define BRZ_SDK_JOGO_APHYSICSVOLUME_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

#include "AActor.h"

struct APhysicsVolume : public AActor
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APhysicsVolume"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APhysicsVolume.Destroyed()
    // endereco: casamento de bytes com a build de referencia
    void Destroyed() const
    {
        NativeCall<void>(this, "APhysicsVolume.Destroyed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APhysicsVolume.EndPlay(EEndPlayReason::Type)
    // endereco: casamento de bytes com a build de referencia
    void EndPlay(int a0) const
    {
        NativeCall<void, int>(this, "APhysicsVolume.EndPlay(EEndPlayReason::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APhysicsVolume.GetGravityZ()
    // endereco: casamento de bytes com a build de referencia
    float GetGravityZ() const
    {
        return NativeCall<float>(this, "APhysicsVolume.GetGravityZ()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APhysicsVolume.GetVolumeZAtPosition(UE::Math::TVector2<double>)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    float GetVolumeZAtPosition(void* a0) const
    {
        return NativeCall<float, void*>(this, "APhysicsVolume.GetVolumeZAtPosition(UE::Math::TVector2<double>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APhysicsVolume.GetVolumeZAtPosition2D(UE::Math::TVector2<double>)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    float GetVolumeZAtPosition2D(void* a0) const
    {
        return NativeCall<float, void*>(this, "APhysicsVolume.GetVolumeZAtPosition2D(UE::Math::TVector2<double>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APhysicsVolume.IsOverlapInVolume(USceneComponent&)
    // endereco: casamento de bytes com a build de referencia
    bool IsOverlapInVolume(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APhysicsVolume.IsOverlapInVolume(USceneComponent&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APhysicsVolume.PostInitializeComponents()
    // endereco: casamento de bytes com a build de referencia
    void PostInitializeComponents() const
    {
        NativeCall<void>(this, "APhysicsVolume.PostInitializeComponents()");
    }

    float& FluidFrictionField() const
    { return *GetNativePointerField<float*>(this, "APhysicsVolume.FluidFriction"); }
    float& PhysicsMinWalkableFloorZField() const
    { return *GetNativePointerField<float*>(this, "APhysicsVolume.PhysicsMinWalkableFloorZ"); }
    int& PriorityField() const
    { return *GetNativePointerField<int*>(this, "APhysicsVolume.Priority"); }
    float& TerminalVelocityField() const
    { return *GetNativePointerField<float*>(this, "APhysicsVolume.TerminalVelocity"); }
    float& WaterDampingField() const
    { return *GetNativePointerField<float*>(this, "APhysicsVolume.WaterDamping"); }
    float& WaterDensityField() const
    { return *GetNativePointerField<float*>(this, "APhysicsVolume.WaterDensity"); }
    BrzCampoPonteiro bDontSetWaterNavCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APhysicsVolume.bDontSetWaterNavCollision")); }
    BrzCampoPonteiro bDynamicWaterVolumeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APhysicsVolume.bDynamicWaterVolume")); }
    BrzCampoPonteiro bPhysicsOnContactField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APhysicsVolume.bPhysicsOnContact")); }
    BrzCampoPonteiro bPreventWaterSubmersionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APhysicsVolume.bPreventWaterSubmersion")); }
    BrzCampoPonteiro bWaterVolumeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APhysicsVolume.bWaterVolume")); }
    BitFieldValue<bool, unsigned __int32> bWaterVolume()
    { return { (void*)this, "bWaterVolume" }; }
    BitFieldValue<bool, unsigned __int32> bPhysicsOnContact()
    { return { (void*)this, "bPhysicsOnContact" }; }
    BitFieldValue<bool, unsigned __int32> bOceanVolume()
    { return { (void*)this, "bOceanVolume" }; }
    BitFieldValue<bool, unsigned __int32> bPreventWaterSubmersion()
    { return { (void*)this, "bPreventWaterSubmersion" }; }
    BitFieldValue<bool, unsigned __int32> bDynamicWaterVolume()
    { return { (void*)this, "bDynamicWaterVolume" }; }
    BitFieldValue<bool, unsigned __int32> bDontSetWaterNavCollision()
    { return { (void*)this, "bDontSetWaterNavCollision" }; }

};

#endif  // BRZ_SDK_JOGO_APHYSICSVOLUME_H

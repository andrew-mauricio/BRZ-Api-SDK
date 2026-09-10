// ==========================================================================
//  APrimalStructureSeaMine — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALSTRUCTURESEAMINE_H
#define BRZ_SDK_JOGO_APRIMALSTRUCTURESEAMINE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct APrimalCharacter;
struct UMaterialInterface;
struct UParticleSystem;
struct USoundBase;
struct USphereComponent;

#include "APrimalStructure.h"

struct APrimalStructureSeaMine : public APrimalStructure
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalStructureSeaMine"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureSeaMine.ActivateSeaMine()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=1439+grafo=15/17]]
    void ActivateSeaMine() const
    {
        NativeCall<void>(this, "APrimalStructureSeaMine.ActivateSeaMine()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureSeaMine.FinalStructurePlacement(APlayerController*,UE::Math::TVector<double>,UE:
    // endereco: casamento de bytes com a build de referencia
    bool FinalStructurePlacement(void* a0, void* a1, void* a2, void* a3, void* a4, unsigned long long a5, bool a6, void* a7) const
    {
        return NativeCall<bool, void*, void*, void*, void*, void*, unsigned long long, bool, void*>(this, "APrimalStructureSeaMine.FinalStructurePlacement(APlayerController*,UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TRotator<double>,APawn*,FName,bool,FPlacementData&)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureSeaMine.PlacedStructure(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void PlacedStructure(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureSeaMine.PlacedStructure(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureSeaMine.RefreshSeaMineTarget()
    // endereco: casamento de bytes com a build de referencia
    void RefreshSeaMineTarget() const
    {
        NativeCall<void>(this, "APrimalStructureSeaMine.RefreshSeaMineTarget()");
    }

    TArray<UMaterialInterface*>& ActivateMaterialsField() const
    { return *GetNativePointerField<TArray<UMaterialInterface*>*>(this, "APrimalStructureSeaMine.ActivateMaterials"); }
    UParticleSystem*& ActivatedMineParticleSystemField() const
    { return *GetNativePointerField<UParticleSystem**>(this, "APrimalStructureSeaMine.ActivatedMineParticleSystem"); }
    BrzCampoPonteiro ActivatedMineParticleSystemOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeaMine.ActivatedMineParticleSystemOffset")); }
    USoundBase*& ActivatedSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureSeaMine.ActivatedSound"); }
    USphereComponent*& ExplodingTriggerComponentField() const
    { return *GetNativePointerField<USphereComponent**>(this, "APrimalStructureSeaMine.ExplodingTriggerComponent"); }
    float& ExplosionDamageField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeaMine.ExplosionDamage"); }
    BrzCampoPonteiro ExplosionDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeaMine.ExplosionDamageType")); }
    float& ExplosionImpulseField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeaMine.ExplosionImpulse"); }
    float& ExplosionRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeaMine.ExplosionRadius"); }
    BrzCampoPonteiro LastKnownTargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeaMine.LastKnownTargetLocation")); }
    int& OwnerTargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureSeaMine.OwnerTargetingTeam"); }
    float& SeaMineExplodeTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeaMine.SeaMineExplodeTime"); }
    float& SeaMineSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeaMine.SeaMineSpeed"); }
    APrimalCharacter*& SeaMineTargetField() const
    { return *GetNativePointerField<APrimalCharacter**>(this, "APrimalStructureSeaMine.SeaMineTarget"); }
    USphereComponent*& TriggerComponentField() const
    { return *GetNativePointerField<USphereComponent**>(this, "APrimalStructureSeaMine.TriggerComponent"); }
    TArray<APrimalCharacter*>& TriggerOverlappingCharactersField() const
    { return *GetNativePointerField<TArray<APrimalCharacter*>*>(this, "APrimalStructureSeaMine.TriggerOverlappingCharacters"); }
    BitFieldValue<bool, unsigned __int32> bActivatedSeaMine()
    { return { (void*)this, "bActivatedSeaMine" }; }
    BitFieldValue<bool, unsigned __int32> bDisableExplosion()
    { return { (void*)this, "bDisableExplosion" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALSTRUCTURESEAMINE_H

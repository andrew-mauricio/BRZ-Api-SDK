// ==========================================================================
//  APrimalStructureExplosive — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALSTRUCTUREEXPLOSIVE_H
#define BRZ_SDK_JOGO_APRIMALSTRUCTUREEXPLOSIVE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AShooterCharacter;
struct UNiagaraSystem;
struct UStaticMeshComponent;

#include "APrimalStructure.h"

struct APrimalStructureExplosive : public APrimalStructure
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalStructureExplosive"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureExplosive.CanDetonateMe(AShooterCharacter*,bool)
    // endereco: casamento de bytes com a build de referencia
    bool CanDetonateMe(void* a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "APrimalStructureExplosive.CanDetonateMe(AShooterCharacter*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureExplosive.ForceDetonateExplosive()
    // endereco: cache_pdb_25090264
    BrzPonteiro ForceDetonateExplosive() const
    {
        return NativeCall<void*>(this, "APrimalStructureExplosive.ForceDetonateExplosive()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureExplosive.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAlloc
    // endereco: casamento de bytes com a build de referencia
    void GetLifetimeReplicatedProps(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureExplosive.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureExplosive.OnDeserializedByGame(EOnDeserializationType::Type)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=19]]
    BrzPonteiro OnDeserializedByGame(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalStructureExplosive.OnDeserializedByGame(EOnDeserializationType::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureExplosive.PlayDying(float,FDamageEvent&,APawn*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void PlayDying(float a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, float, void*, void*, void*>(this, "APrimalStructureExplosive.PlayDying(float,FDamageEvent&,APawn*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureExplosive.PostSpawnInitialize()
    // endereco: casamento de bytes com a build de referencia
    void PostSpawnInitialize() const
    {
        NativeCall<void>(this, "APrimalStructureExplosive.PostSpawnInitialize()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureExplosive.PrepareAsPlacementPreview()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=408+grafo=7/7]]
    void PrepareAsPlacementPreview() const
    {
        NativeCall<void>(this, "APrimalStructureExplosive.PrepareAsPlacementPreview()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureExplosive.SetPlayerConstructor(APlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=74]]
    void SetPlayerConstructor(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureExplosive.SetPlayerConstructor(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureExplosive.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "APrimalStructureExplosive.Tick(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureExplosive.TryMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    bool TryMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<bool, void*, int, int>(this, "APrimalStructureExplosive.TryMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    float& AlertDinosRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureExplosive.AlertDinosRange"); }
    UStaticMeshComponent*& AnimatedComponentField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructureExplosive.AnimatedComponent"); }
    AShooterCharacter*& ConstructorPawnField() const
    { return *GetNativePointerField<AShooterCharacter**>(this, "APrimalStructureExplosive.ConstructorPawn"); }
    unsigned int& ConstructorPlayerDataIDField() const
    { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureExplosive.ConstructorPlayerDataID"); }
    int& ConstructorTargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureExplosive.ConstructorTargetingTeam"); }
    float& ExplosionDamageField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureExplosive.ExplosionDamage"); }
    BrzCampoPonteiro ExplosionDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureExplosive.ExplosionDamageType")); }
    float& ExplosionImpulseField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureExplosive.ExplosionImpulse"); }
    float& ExplosionRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureExplosive.ExplosionRadius"); }
    BrzCampoPonteiro ExplosiveAmmoItemTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureExplosive.ExplosiveAmmoItemTemplate")); }
    BrzCampoPonteiro ExplosiveLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureExplosive.ExplosiveLocOffset")); }
    BrzCampoPonteiro ExplosiveRotOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureExplosive.ExplosiveRotOffset")); }
    float& FluidSimSplashStrengthField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureExplosive.FluidSimSplashStrength"); }
    UNiagaraSystem*& FluidSimSplashTemplateOverrideField() const
    { return *GetNativePointerField<UNiagaraSystem**>(this, "APrimalStructureExplosive.FluidSimSplashTemplateOverride"); }
    //  no cache antigo este campo se chamava OriginalRelativeLocation.
    //  nesta build ele e' `PlacementAccel` — resolve por NOME.
    BrzCampoPonteiro OriginalRelativeLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureExplosive.PlacementAccel")); }
    //  no cache antigo este campo se chamava OriginalRelativeRotation.
    //  nesta build ele e' `ExplosiveAmmoItemTemplate` — resolve por NOME.
    BrzCampoPonteiro OriginalRelativeRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureExplosive.ExplosiveAmmoItemTemplate")); }
    int& PickUpQuantityField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureExplosive.PickUpQuantity"); }
    BrzCampoPonteiro PickupItemClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureExplosive.PickupItemClass")); }
    float& PlacementAccelField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureExplosive.PlacementAccel"); }
    float& PlacementInitialSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureExplosive.PlacementInitialSpeed"); }
    float& PlacementMaxSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureExplosive.PlacementMaxSpeed"); }
    //  no cache antigo este campo se chamava bExplosiveReady.
    //  nesta build ele e' `PlacementInitialSpeed` — resolve por NOME.
    BrzCampoPonteiro bExplosiveReadyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureExplosive.PlacementInitialSpeed")); }
    BitFieldValue<bool, unsigned __int32> bDoNotUseAmmoOnNextPlace()
    { return { (void*)this, "bDoNotUseAmmoOnNextPlace" }; }
    BitFieldValue<bool, unsigned __int32> bAnimatePlacement()
    { return { (void*)this, "bAnimatePlacement" }; }
    BitFieldValue<bool, unsigned __int32> bAlertDinos()
    { return { (void*)this, "bAlertDinos" }; }
    BitFieldValue<bool, unsigned __int32> bWasJustPlaced()
    { return { (void*)this, "bWasJustPlaced" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALSTRUCTUREEXPLOSIVE_H

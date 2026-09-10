// ==========================================================================
//  APrimalStructureBearTrap — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALSTRUCTUREBEARTRAP_H
#define BRZ_SDK_JOGO_APRIMALSTRUCTUREBEARTRAP_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct APrimalCharacter;
struct UParticleSystem;
struct USkeletalMeshComponent;
struct USoundCue;
struct USphereComponent;

#include "APrimalStructure.h"

struct APrimalStructureBearTrap : public APrimalStructure
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalStructureBearTrap"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureBearTrap.AllowPickupForItem(AShooterPlayerController*)
    // classe: a funcao mora em APrimalStructure, e APrimalStructureBearTrap herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    bool AllowPickupForItem(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructure.AllowPickupForItem(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureBearTrap.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "APrimalStructureBearTrap.BeginPlay()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureBearTrap.CallTriggerTouched(AActor*,UPrimitiveComponent*)
    // endereco: casamento de bytes com a build de referencia
    void CallTriggerTouched(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalStructureBearTrap.CallTriggerTouched(AActor*,UPrimitiveComponent*)", a0, a1);
    }

    // jogo_confirmou_dump
    //   APrimalStructureBearTrap.DecreaseDamageTimer()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=232]]
    void DecreaseDamageTimer() const
    {
        NativeCall<void>(this, "APrimalStructureBearTrap.DecreaseDamageTimer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureBearTrap.Destroyed()
    // endereco: casamento de bytes com a build de referencia
    void Destroyed() const
    {
        NativeCall<void>(this, "APrimalStructureBearTrap.Destroyed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureBearTrap.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefau
    // classe: a funcao mora em APrimalStructure, e APrimalStructureBearTrap herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void GetMultiUseEntries(void* a0, void* a1, int a2) const
    {
        NativeCall<void, void*, void*, int>(this, "APrimalStructure.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureBearTrap.GotoTrapState(signedchar)
    // endereco: casamento de bytes com a build de referencia
    void GotoTrapState(char a0) const
    {
        NativeCall<void, char>(this, "APrimalStructureBearTrap.GotoTrapState(signedchar)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureBearTrap.HideAnimatedSK()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=492+grafo=7/7]]
    void HideAnimatedSK() const
    {
        NativeCall<void>(this, "APrimalStructureBearTrap.HideAnimatedSK()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureBearTrap.InitBearTrap()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=32]]
    void InitBearTrap() const
    {
        NativeCall<void>(this, "APrimalStructureBearTrap.InitBearTrap()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureBearTrap.IsTrapPrepared(float)
    // endereco: cache_pdb_25090264
    bool IsTrapPrepared(float a0) const
    {
        return NativeCall<bool, float>(this, "APrimalStructureBearTrap.IsTrapPrepared(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureBearTrap.PeriodicalTrapDamageTimer()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void PeriodicalTrapDamageTimer() const
    {
        NativeCall<void>(this, "APrimalStructureBearTrap.PeriodicalTrapDamageTimer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureBearTrap.PlacedStructure(AShooterPlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=37]]
    void PlacedStructure(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureBearTrap.PlacedStructure(AShooterPlayerController*)", a0);
    }

    // dump_sobre_sdk_287a0
    //   APrimalStructureBearTrap.ShowAnimatedSK()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ShowAnimatedSK() const
    {
        NativeCall<void>(this, "APrimalStructureBearTrap.ShowAnimatedSK()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureBearTrap.TakeDamage(float,FDamageEvent&,AController*,AActor*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=421]]
    float TakeDamage(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<float, float, void*, void*, void*>(this, "APrimalStructureBearTrap.TakeDamage(float,FDamageEvent&,AController*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureBearTrap.TriggerTouched(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int,bo
    // endereco: casamento de bytes com a build de referencia
    void TriggerTouched(void* a0, void* a1, void* a2, int a3, bool a4, void* a5) const
    {
        NativeCall<void, void*, void*, void*, int, bool, void*>(this, "APrimalStructureBearTrap.TriggerTouched(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int,bool,FHitResult&)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureBearTrap.TryMultiUse(APlayerController*,int,int)
    // classe: a funcao mora em APrimalStructure, e APrimalStructureBearTrap herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    bool TryMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<bool, void*, int, int>(this, "APrimalStructure.TryMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureBearTrap.UpdateStructureMesh()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    void UpdateStructureMesh() const
    {
        NativeCall<void>(this, "APrimalStructureBearTrap.UpdateStructureMesh()");
    }

    char& ClientPrevTrapStateField() const
    { return *GetNativePointerField<char*>(this, "APrimalStructureBearTrap.ClientPrevTrapState"); }
    signed char& CurrentTrapStateField() const
    { return *GetNativePointerField<signed char*>(this, "APrimalStructureBearTrap.CurrentTrapState"); }
    TArray<void*>& DamagedOnlyByField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureBearTrap.DamagedOnlyBy"); }
    float& DestroyAfterTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureBearTrap.DestroyAfterTime"); }
    double& DestroyTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureBearTrap.DestroyTime"); }
    TArray<void*>& ForceImmobilizeDinosWithCustomTagField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureBearTrap.ForceImmobilizeDinosWithCustomTag"); }
    float& HealthDecreasePerSecField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureBearTrap.HealthDecreasePerSec"); }
    float& HealthDecreasePerSecPlayersField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureBearTrap.HealthDecreasePerSecPlayers"); }
    float& HealthDecreasePerSecWildField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureBearTrap.HealthDecreasePerSecWild"); }
    TArray<void*>& IgnoreDinosWithCustomTagField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureBearTrap.IgnoreDinosWithCustomTag"); }
    float& IgnoreTriggerAfterSpawnTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureBearTrap.IgnoreTriggerAfterSpawnTime"); }
    APrimalCharacter*& ImmobilizedCharacterField() const
    { return *GetNativePointerField<APrimalCharacter**>(this, "APrimalStructureBearTrap.ImmobilizedCharacter"); }
    double& NetworkPlacementTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureBearTrap.NetworkPlacementTime"); }
    UParticleSystem*& OnDestroyFXField() const
    { return *GetNativePointerField<UParticleSystem**>(this, "APrimalStructureBearTrap.OnDestroyFX"); }
    float& PeriodicalTrapDamageAmountField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureBearTrap.PeriodicalTrapDamageAmount"); }
    float& PeriodicalTrapDamageTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureBearTrap.PeriodicalTrapDamageTime"); }
    float& TrapDamageAmountField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureBearTrap.TrapDamageAmount"); }
    BrzCampoPonteiro TrapDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureBearTrap.TrapDamageType")); }
    float& TrapMaxPawnMassField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureBearTrap.TrapMaxPawnMass"); }
    float& TrapMinPawnMassField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureBearTrap.TrapMinPawnMass"); }
    USkeletalMeshComponent*& TrapSKField() const
    { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalStructureBearTrap.TrapSK"); }
    USoundCue*& TrapTriggerSoundField() const
    { return *GetNativePointerField<USoundCue**>(this, "APrimalStructureBearTrap.TrapTriggerSound"); }
    USphereComponent*& TriggerComponentField() const
    { return *GetNativePointerField<USphereComponent**>(this, "APrimalStructureBearTrap.TriggerComponent"); }
    BitFieldValue<bool, unsigned __int32> bBPUseNotifyImmobilizedCharacterIsDeadOrInConscious()
    { return { (void*)this, "bBPUseNotifyImmobilizedCharacterIsDeadOrInConscious" }; }
    BitFieldValue<bool, unsigned __int32> bClosedTrap()
    { return { (void*)this, "bClosedTrap" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyOnTrapActivated()
    { return { (void*)this, "bDestroyOnTrapActivated" }; }
    BitFieldValue<bool, unsigned __int32> bImmuneToNormalDamage()
    { return { (void*)this, "bImmuneToNormalDamage" }; }
    BitFieldValue<bool, unsigned __int32> bSkipUpdateTrapMeshVisibility()
    { return { (void*)this, "bSkipUpdateTrapMeshVisibility" }; }
    BitFieldValue<bool, unsigned __int32> bUseDragWeightForMassCheck()
    { return { (void*)this, "bUseDragWeightForMassCheck" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnlyOnNonAllied()
    { return { (void*)this, "bUseOnlyOnNonAllied" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALSTRUCTUREBEARTRAP_H

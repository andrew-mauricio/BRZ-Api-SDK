// ==========================================================================
//  APrimalTargetableActor — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALTARGETABLEACTOR_H
#define BRZ_SDK_JOGO_APRIMALTARGETABLEACTOR_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct UParticleSystem;
struct UPrimalHarvestingComponent;
struct UPrimalStructureSettings;
struct USoundCue;

#include "AActor.h"

struct APrimalTargetableActor : public AActor
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalTargetableActor"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalTargetableActor.AdjustDamage(float&,FDamageEvent&,AController*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void AdjustDamage(void* a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, void*, void*, void*, void*>(this, "APrimalTargetableActor.AdjustDamage(float&,FDamageEvent&,AController*,AActor*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalTargetableActor.BPAdjustDamage(float,FDamageEvent,AController*,AActor*,bool,FHitResult)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPAdjustDamage(float a0, void* a1, void* a2, void* a3, bool a4, void* a5) const
    {
        return NativeCall<void*, float, void*, void*, void*, bool, void*>(this, "APrimalTargetableActor.BPAdjustDamage(float,FDamageEvent,AController*,AActor*,bool,FHitResult)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalTargetableActor.BPDied(float,FDamageEvent&,AController*,AActor*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPDied(float a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, float, void*, void*, void*>(this, "APrimalTargetableActor.BPDied(float,FDamageEvent&,AController*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalTargetableActor.BPGetDestroyedMeshes()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetDestroyedMeshes() const
    {
        return NativeCall<void*>(this, "APrimalTargetableActor.BPGetDestroyedMeshes()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalTargetableActor.BPHitEffect(float,FDamageEvent&,APawn*,AActor*,bool,UPrimitiveComponent*,
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPHitEffect(float a0, void* a1, void* a2, void* a3, bool a4, void* a5, void* a6, void* a7) const
    {
        return NativeCall<void*, float, void*, void*, void*, bool, void*, void*, void*>(this, "APrimalTargetableActor.BPHitEffect(float,FDamageEvent&,APawn*,AActor*,bool,UPrimitiveComponent*,UE::Math::TVector<double>,UE::Math::TRotator<double>)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalTargetableActor.BPPlayDyingFXOnly(float,FDamageEvent&,APawn*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPPlayDyingFXOnly(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, float, void*, void*, void*>(this, "APrimalTargetableActor.BPPlayDyingFXOnly(float,FDamageEvent&,APawn*,AActor*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalTargetableActor.BPSupressImpactEffects(float,FDamageEvent&,APawn*,AActor*,bool,UPrimitive
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPSupressImpactEffects(float a0, void* a1, void* a2, void* a3, bool a4, void* a5) const
    {
        return NativeCall<void*, float, void*, void*, void*, bool, void*>(this, "APrimalTargetableActor.BPSupressImpactEffects(float,FDamageEvent&,APawn*,AActor*,bool,UPrimitiveComponent*)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalTargetableActor.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "APrimalTargetableActor.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalTargetableActor.Die(float,FDamageEvent&,AController*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    bool Die(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<bool, float, void*, void*, void*>(this, "APrimalTargetableActor.Die(float,FDamageEvent&,AController*,AActor*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalTargetableActor.EndPlay(EEndPlayReason::Type)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EndPlay(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalTargetableActor.EndPlay(EEndPlayReason::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalTargetableActor.FellOutOfWorld(UDamageType&)
    // classe: a funcao mora em AActor, e APrimalTargetableActor herda dela: o `this` e' compativel por construcao
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=82]]
    void FellOutOfWorld(void* a0) const
    {
        NativeCall<void, void*>(this, "AActor.FellOutOfWorld(UDamageType&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalTargetableActor.GetDestroyedMesh()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDestroyedMesh() const
    {
        return NativeCall<void*>(this, "APrimalTargetableActor.GetDestroyedMesh()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalTargetableActor.GetDestroyedMeshes()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDestroyedMeshes() const
    {
        return NativeCall<void*>(this, "APrimalTargetableActor.GetDestroyedMeshes()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalTargetableActor.GetDestructionEffectTransform(UE::Math::TVector<double>&,UE::Math::TRotat
    // endereco: casamento de bytes com a build de referencia
    void GetDestructionEffectTransform(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalTargetableActor.GetDestructionEffectTransform(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalTargetableActor.GetHealthPercentage()
    // endereco: casamento de bytes com a build de referencia
    float GetHealthPercentage() const
    {
        return NativeCall<float>(this, "APrimalTargetableActor.GetHealthPercentage()");
    }

    // dump_sobre_sdk_287a0
    //   APrimalTargetableActor.GetOverlayTooltipTemplate()
    // endereco: casamento de bytes com a build de referencia
    void** GetOverlayTooltipTemplate() const
    {
        return NativeCall<void**>(this, "APrimalTargetableActor.GetOverlayTooltipTemplate()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalTargetableActor.GetRepGraphBehavior()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    int GetRepGraphBehavior() const
    {
        return NativeCall<int>(this, "APrimalTargetableActor.GetRepGraphBehavior()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalTargetableActor.GetTargetableDamageFXDefaultPhysMaterial()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetTargetableDamageFXDefaultPhysMaterial() const
    {
        return NativeCall<void*>(this, "APrimalTargetableActor.GetTargetableDamageFXDefaultPhysMaterial()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalTargetableActor.HarvestingDepleted(UPrimalHarvestingComponent*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void HarvestingDepleted(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalTargetableActor.HarvestingDepleted(UPrimalHarvestingComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalTargetableActor.IsAlive()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=30]]
    bool IsAlive() const
    {
        return NativeCall<bool>(this, "APrimalTargetableActor.IsAlive()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalTargetableActor.IsDead()
    // endereco: cache_pdb_25090264
    bool IsDead() const
    {
        return NativeCall<bool>(this, "APrimalTargetableActor.IsDead()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalTargetableActor.IsInvincible()
    // endereco: casamento de bytes com a build de referencia
    bool IsInvincible() const
    {
        return NativeCall<bool>(this, "APrimalTargetableActor.IsInvincible()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalTargetableActor.IsOfTribe(int)
    // endereco: cache_pdb_25090264
    bool IsOfTribe(int a0) const
    {
        return NativeCall<bool, int>(this, "APrimalTargetableActor.IsOfTribe(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalTargetableActor.IsTargetableDead()
    // endereco: cache_pdb_25090264
    bool IsTargetableDead() const
    {
        return NativeCall<bool>(this, "APrimalTargetableActor.IsTargetableDead()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalTargetableActor.NetExecCommand(FName,FNetExecParams&)
    // endereco: casamento de bytes com a build de referencia
    bool NetExecCommand(unsigned long long a0, void* a1) const
    {
        return NativeCall<bool, unsigned long long, void*>(this, "APrimalTargetableActor.NetExecCommand(FName,FNetExecParams&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalTargetableActor.NetUpdatedHealth_Implementation(int)
    // endereco: cache_pdb_25090264
    void NetUpdatedHealth_Implementation(int a0) const
    {
        NativeCall<void, int>(this, "APrimalTargetableActor.NetUpdatedHealth_Implementation(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalTargetableActor.OnRep_ReplicatedHealth()
    // endereco: cache_pdb_25090264
    void OnRep_ReplicatedHealth() const
    {
        NativeCall<void>(this, "APrimalTargetableActor.OnRep_ReplicatedHealth()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalTargetableActor.OverrideDestroyedMeshTextures(UMeshComponent*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void OverrideDestroyedMeshTextures(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalTargetableActor.OverrideDestroyedMeshTextures(UMeshComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalTargetableActor.PlayDying(float,FDamageEvent&,APawn*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void PlayDying(float a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, float, void*, void*, void*>(this, "APrimalTargetableActor.PlayDying(float,FDamageEvent&,APawn*,AActor*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalTargetableActor.PlayDyingGeneric(float,FDamageEvent,APawn*,AActor*)
    // endereco: cache_pdb_25090264
    BrzPonteiro PlayDyingGeneric(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, float, void*, void*, void*>(this, "APrimalTargetableActor.PlayDyingGeneric(float,FDamageEvent,APawn*,AActor*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalTargetableActor.PlayDyingPoint(float,FPointDamageEvent,APawn*,AActor*)
    // endereco: cache_pdb_25090264
    BrzPonteiro PlayDyingPoint(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, float, void*, void*, void*>(this, "APrimalTargetableActor.PlayDyingPoint(float,FPointDamageEvent,APawn*,AActor*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalTargetableActor.PlayDyingRadial(float,FRadialDamageEvent,APawn*,AActor*)
    // endereco: cache_pdb_25090264
    BrzPonteiro PlayDyingRadial(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, float, void*, void*, void*>(this, "APrimalTargetableActor.PlayDyingRadial(float,FRadialDamageEvent,APawn*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalTargetableActor.PlayHitEffect(float,FDamageEvent&,APawn*,AActor*,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void PlayHitEffect(float a0, void* a1, void* a2, void* a3, bool a4, bool a5) const
    {
        NativeCall<void, float, void*, void*, void*, bool, bool>(this, "APrimalTargetableActor.PlayHitEffect(float,FDamageEvent&,APawn*,AActor*,bool,bool)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalTargetableActor.PlayHitEffectGeneric(float,FDamageEvent,APawn*,AActor*)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=212]]
    BrzPonteiro PlayHitEffectGeneric(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, float, void*, void*, void*>(this, "APrimalTargetableActor.PlayHitEffectGeneric(float,FDamageEvent,APawn*,AActor*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalTargetableActor.PlayHitEffectPoint(float,FPointDamageEvent,APawn*,AActor*)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=230]]
    BrzPonteiro PlayHitEffectPoint(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, float, void*, void*, void*>(this, "APrimalTargetableActor.PlayHitEffectPoint(float,FPointDamageEvent,APawn*,AActor*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalTargetableActor.PlayHitEffectRadial(float,FRadialDamageEvent,APawn*,AActor*)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=251+grafo=3/3]]
    BrzPonteiro PlayHitEffectRadial(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, float, void*, void*, void*>(this, "APrimalTargetableActor.PlayHitEffectRadial(float,FRadialDamageEvent,APawn*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalTargetableActor.PostInitializeComponents()
    // endereco: casamento de bytes com a build de referencia
    void PostInitializeComponents() const
    {
        NativeCall<void>(this, "APrimalTargetableActor.PostInitializeComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalTargetableActor.SetHealth(float)
    // endereco: casamento de bytes com a build de referencia
    float SetHealth(float a0) const
    {
        return NativeCall<float, float>(this, "APrimalTargetableActor.SetHealth(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalTargetableActor.SpawnDestroyedMesh(float,FDamageEvent&,APawn*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void SpawnDestroyedMesh(float a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, float, void*, void*, void*>(this, "APrimalTargetableActor.SpawnDestroyedMesh(float,FDamageEvent&,APawn*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalTargetableActor.TakeDamage(float,FDamageEvent&,AController*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    float TakeDamage(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<float, float, void*, void*, void*>(this, "APrimalTargetableActor.TakeDamage(float,FDamageEvent&,AController*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalTargetableActor.TestAdjustDamage(float&,FDamageEvent&,AController*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void TestAdjustDamage(void* a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, void*, void*, void*, void*>(this, "APrimalTargetableActor.TestAdjustDamage(float&,FDamageEvent&,AController*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalTargetableActor.UpdatedHealth(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void UpdatedHealth(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalTargetableActor.UpdatedHealth(bool)", a0);
    }

    TArray<void*>& BoneDamageAdjustersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalTargetableActor.BoneDamageAdjusters"); }
    TArray<void*>& DamageTypeAdjustersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalTargetableActor.DamageTypeAdjusters"); }
    USoundCue*& DeathSoundField() const
    { return *GetNativePointerField<USoundCue**>(this, "APrimalTargetableActor.DeathSound"); }
    FString& DescriptiveNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalTargetableActor.DescriptiveName"); }
    BrzCampoPonteiro DestroyedMeshActorClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalTargetableActor.DestroyedMeshActorClass")); }
    BrzCampoPonteiro DestructibleMeshLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalTargetableActor.DestructibleMeshLocationOffset")); }
    BrzCampoPonteiro DestructibleMeshScaleOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalTargetableActor.DestructibleMeshScaleOverride")); }
    float& HealthField() const
    { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.Health"); }
    UParticleSystem*& HurtFXField() const
    { return *GetNativePointerField<UParticleSystem**>(this, "APrimalTargetableActor.HurtFX"); }
    BrzCampoPonteiro HurtFX_NiagaraField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalTargetableActor.HurtFX_Niagara")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxHealth` +8, medido na build 25090264
    //  (offset absoluto medido: 0x580; confianca alta)
    float& LastHealthBeforeTakeDamageField() const
    { return BrzCampoAncorado<float>(this, "MaxHealth", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxHealth` +12, medido na build 25090264
    //  (offset absoluto medido: 0x584; confianca alta)
    float& LastPreBlueprintAdjustmentActualDamageField() const
    { return BrzCampoAncorado<float>(this, "MaxHealth", 12); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxHealth` +16, medido na build 25090264
    //  (offset absoluto medido: 0x588; confianca alta)
    float& LastReplicatedHealthField() const
    { return BrzCampoAncorado<float>(this, "MaxHealth", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxHealth` +4, medido na build 25090264
    //  (offset absoluto medido: 0x57C; confianca alta)
    float& LastReplicatedHealthValueField() const
    { return BrzCampoAncorado<float>(this, "MaxHealth", 4); }
    float& LifeSpanAfterDeathField() const
    { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.LifeSpanAfterDeath"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DescriptiveName` +24, medido na build 25090264
    //  (offset absoluto medido: 0x568; confianca alta)
    float& LowHealthPercentageField() const
    { return BrzCampoAncorado<float>(this, "DescriptiveName", 24); }
    float& MaxHealthField() const
    { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.MaxHealth"); }
    BrzCampoPonteiro MultiSoftDestructionGeoCollectionAssetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalTargetableActor.MultiSoftDestructionGeoCollectionAssets")); }
    AActor*& MyDestructionActorField() const
    { return *GetNativePointerField<AActor**>(this, "APrimalTargetableActor.MyDestructionActor"); }
    UPrimalHarvestingComponent*& MyHarvestingComponentField() const
    { return *GetNativePointerField<UPrimalHarvestingComponent**>(this, "APrimalTargetableActor.MyHarvestingComponent"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DestructibleMeshScaleOverride` +24, medido na build 25090264
    //  (offset absoluto medido: 0x510; confianca alta)
    void*& MyHarvestingElementField() const
    { return BrzCampoAncorado<void*>(this, "DestructibleMeshScaleOverride", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MyHarvestingComponent` +8, medido na build 25090264
    //  (offset absoluto medido: 0x548; confianca alta)
    UPrimalStructureSettings*& MyStructureSettingsCDOField() const
    { return BrzCampoAncorado<UPrimalStructureSettings*>(this, "MyHarvestingComponent", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DescriptiveName` +16, medido na build 25090264
    //  (offset absoluto medido: 0x560; confianca alta)
    double& NextAllowRepairTimeField() const
    { return BrzCampoAncorado<double>(this, "DescriptiveName", 16); }
    float& ReplicatedHealthField() const
    { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.ReplicatedHealth"); }
    BrzCampoPonteiro StructureSettingsClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalTargetableActor.StructureSettingsClass")); }
    unsigned char& TargetableDamageFXDefaultPhysMaterialField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalTargetableActor.TargetableDamageFXDefaultPhysMaterial"); }
    BitFieldValue<bool, unsigned __int32> bDestructionActorTemplateServerOnly()
    { return { (void*)this, "bDestructionActorTemplateServerOnly" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyedMeshUseSkeletalMeshComponent()
    { return { (void*)this, "bDestroyedMeshUseSkeletalMeshComponent" }; }
    BitFieldValue<bool, unsigned __int32> bPreventZeroDamageInstigatorSelfDamage()
    { return { (void*)this, "bPreventZeroDamageInstigatorSelfDamage" }; }
    BitFieldValue<bool, unsigned __int32> bIsDead()
    { return { (void*)this, "bIsDead" }; }
    BitFieldValue<bool, unsigned __int32> bDamageNotifyTeamAggroAI()
    { return { (void*)this, "bDamageNotifyTeamAggroAI" }; }
    BitFieldValue<bool, unsigned __int32> bSetWithinPreventionVolume()
    { return { (void*)this, "bSetWithinPreventionVolume" }; }
    BitFieldValue<bool, unsigned __int32> bWithinPreventionVolume()
    { return { (void*)this, "bWithinPreventionVolume" }; }
    BitFieldValue<bool, unsigned __int32> bAllowDamageByFriendlyDinos()
    { return { (void*)this, "bAllowDamageByFriendlyDinos" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustDamage()
    { return { (void*)this, "bUseBPAdjustDamage" }; }
    BitFieldValue<bool, unsigned __int32> bForceZeroDamageProcessing()
    { return { (void*)this, "bForceZeroDamageProcessing" }; }
    BitFieldValue<bool, unsigned __int32> bForceFloatingDamageNumbers()
    { return { (void*)this, "bForceFloatingDamageNumbers" }; }
    BitFieldValue<bool, unsigned __int32> bDoAllowRadialDamageWithoutVisiblityTrace()
    { return { (void*)this, "bDoAllowRadialDamageWithoutVisiblityTrace" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreDestructionEffects()
    { return { (void*)this, "bIgnoreDestructionEffects" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreDamageRepairCooldown()
    { return { (void*)this, "bIgnoreDamageRepairCooldown" }; }
    BitFieldValue<bool, unsigned __int32> bUseHarvestingComponent()
    { return { (void*)this, "bUseHarvestingComponent" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPDied()
    { return { (void*)this, "bUseBPDied" }; }
    BitFieldValue<bool, unsigned __int32> BPOverrideDestroyedMeshTextures()
    { return { (void*)this, "BPOverrideDestroyedMeshTextures" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreSpawnEffects()
    { return { (void*)this, "bIgnoreSpawnEffects" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALTARGETABLEACTOR_H

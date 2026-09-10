// ==========================================================================
//  UGameplayAbility — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UGAMEPLAYABILITY_H
#define BRZ_SDK_JOGO_UGAMEPLAYABILITY_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct UAnimMontage;
struct UGameplayTasksComponent;
struct UWorld;


struct UGameplayAbility
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UGameplayAbility"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.ApplyAbilityTagsToGameplayEffectSpec(FGameplayEffectSpec&,FGameplayAbilitySpec*
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyAbilityTagsToGameplayEffectSpec(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UGameplayAbility.ApplyAbilityTagsToGameplayEffectSpec(FGameplayEffectSpec&,FGameplayAbilitySpec*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.CallRemoteFunction(UFunction*,void*,FOutParmRec*,FFrame*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CallRemoteFunction(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "UGameplayAbility.CallRemoteFunction(UFunction*,void*,FOutParmRec*,FFrame*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.CancelTaskByInstanceName(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CancelTaskByInstanceName(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "UGameplayAbility.CancelTaskByInstanceName(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.ConfirmActivateSucceed()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ConfirmActivateSucceed() const
    {
        return NativeCall<void*>(this, "UGameplayAbility.ConfirmActivateSucceed()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.DecrementListLock()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DecrementListLock() const
    {
        return NativeCall<void*>(this, "UGameplayAbility.DecrementListLock()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.DoesAbilitySatisfyTagRequirements(UAbilitySystemComponent&,FGameplayTagContaine
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DoesAbilitySatisfyTagRequirements(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "UGameplayAbility.DoesAbilitySatisfyTagRequirements(UAbilitySystemComponent&,FGameplayTagContainer*,FGameplayTagContainer*,FGameplayTagContainer*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.EndOrCancelTasksByInstanceName()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EndOrCancelTasksByInstanceName() const
    {
        return NativeCall<void*>(this, "UGameplayAbility.EndOrCancelTasksByInstanceName()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.EndTaskByInstanceName(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EndTaskByInstanceName(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "UGameplayAbility.EndTaskByInstanceName(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.GetAbilityLevel()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAbilityLevel() const
    {
        return NativeCall<void*>(this, "UGameplayAbility.GetAbilityLevel()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.GetContextFromOwner(FGameplayAbilityTargetDataHandle)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetContextFromOwner(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayAbility.GetContextFromOwner(FGameplayAbilityTargetDataHandle)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.GetCooldownTags()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCooldownTags() const
    {
        return NativeCall<void*>(this, "UGameplayAbility.GetCooldownTags()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.GetCooldownTimeRemaining(FGameplayAbilityActorInfo*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCooldownTimeRemaining(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayAbility.GetCooldownTimeRemaining(FGameplayAbilityActorInfo*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.GetCurrentAbilitySpec()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCurrentAbilitySpec() const
    {
        return NativeCall<void*>(this, "UGameplayAbility.GetCurrentAbilitySpec()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.GetCurrentAbilitySpecHandle()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetCurrentAbilitySpecHandle() const
    {
        return NativeCall<void*>(this, "UGameplayAbility.GetCurrentAbilitySpecHandle()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.GetCurrentActivationInfo()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetCurrentActivationInfo() const
    {
        return NativeCall<void*>(this, "UGameplayAbility.GetCurrentActivationInfo()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.GetCurrentActorInfo()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetCurrentActorInfo() const
    {
        return NativeCall<void*>(this, "UGameplayAbility.GetCurrentActorInfo()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.GetCurrentMontage()
    // endereco: cache_pdb_25090264
    UAnimMontage* GetCurrentMontage() const
    {
        return NativeCall<UAnimMontage*>(this, "UGameplayAbility.GetCurrentMontage()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.GetFunctionCallspace(UFunction*,FFrame*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetFunctionCallspace(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UGameplayAbility.GetFunctionCallspace(UFunction*,FFrame*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.GetGameplayTaskAvatar(UGameplayTask*)
    // endereco: cache_pdb_25090264
    AActor* GetGameplayTaskAvatar(void* a0) const
    {
        return NativeCall<AActor*, void*>(this, "UGameplayAbility.GetGameplayTaskAvatar(UGameplayTask*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.GetGameplayTaskOwner(UGameplayTask*)
    // endereco: cache_pdb_25090264
    AActor* GetGameplayTaskOwner(void* a0) const
    {
        return NativeCall<AActor*, void*>(this, "UGameplayAbility.GetGameplayTaskOwner(UGameplayTask*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.GetGameplayTasksComponent(UGameplayTask&)
    // endereco: cache_pdb_25090264
    UGameplayTasksComponent* GetGameplayTasksComponent(void* a0) const
    {
        return NativeCall<UGameplayTasksComponent*, void*>(this, "UGameplayAbility.GetGameplayTasksComponent(UGameplayTask&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.GetInstancingPolicy()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetInstancingPolicy() const
    {
        return NativeCall<void*>(this, "UGameplayAbility.GetInstancingPolicy()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetLifetimeReplicatedProps(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayAbility.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.GetWorld()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    UWorld* GetWorld() const
    {
        return NativeCall<UWorld*>(this, "UGameplayAbility.GetWorld()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.HasAuthorityOrPredictionKey(FGameplayAbilityActorInfo*,FGameplayAbilityActivati
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HasAuthorityOrPredictionKey(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UGameplayAbility.HasAuthorityOrPredictionKey(FGameplayAbilityActorInfo*,FGameplayAbilityActivationInfo*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.IncrementListLock()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro IncrementListLock() const
    {
        return NativeCall<void*>(this, "UGameplayAbility.IncrementListLock()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.IsActive()
    // endereco: cache_pdb_25090264
    BrzPonteiro IsActive() const
    {
        return NativeCall<void*>(this, "UGameplayAbility.IsActive()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.IsForRemoteClient()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsForRemoteClient() const
    {
        return NativeCall<void*>(this, "UGameplayAbility.IsForRemoteClient()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.IsInstantiated()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro IsInstantiated() const
    {
        return NativeCall<void*>(this, "UGameplayAbility.IsInstantiated()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.IsLocallyControlled()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsLocallyControlled() const
    {
        return NativeCall<void*>(this, "UGameplayAbility.IsLocallyControlled()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.IsPredictingClient()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsPredictingClient() const
    {
        return NativeCall<void*>(this, "UGameplayAbility.IsPredictingClient()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.IsSupportedForNetworking()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsSupportedForNetworking() const
    {
        return NativeCall<void*>(this, "UGameplayAbility.IsSupportedForNetworking()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.IsTriggered()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro IsTriggered() const
    {
        return NativeCall<void*>(this, "UGameplayAbility.IsTriggered()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.K2_CheckAbilityCooldown()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro K2_CheckAbilityCooldown() const
    {
        return NativeCall<void*>(this, "UGameplayAbility.K2_CheckAbilityCooldown()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.K2_CheckAbilityCost()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro K2_CheckAbilityCost() const
    {
        return NativeCall<void*>(this, "UGameplayAbility.K2_CheckAbilityCost()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.K2_CommitAbility()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro K2_CommitAbility() const
    {
        return NativeCall<void*>(this, "UGameplayAbility.K2_CommitAbility()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.K2_CommitAbilityCooldown(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro K2_CommitAbilityCooldown(bool a0, bool a1) const
    {
        return NativeCall<void*, bool, bool>(this, "UGameplayAbility.K2_CommitAbilityCooldown(bool,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.K2_CommitAbilityCost(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro K2_CommitAbilityCost(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UGameplayAbility.K2_CommitAbilityCost(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.K2_EndAbility()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro K2_EndAbility() const
    {
        return NativeCall<void*>(this, "UGameplayAbility.K2_EndAbility()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.K2_EndAbilityLocally()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro K2_EndAbilityLocally() const
    {
        return NativeCall<void*>(this, "UGameplayAbility.K2_EndAbilityLocally()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.K2_ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo,FGameplayEventData)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro K2_ShouldAbilityRespondToEvent(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UGameplayAbility.K2_ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo,FGameplayEventData)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.MakeTargetLocationInfoFromOwnerActor()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MakeTargetLocationInfoFromOwnerActor() const
    {
        return NativeCall<void*>(this, "UGameplayAbility.MakeTargetLocationInfoFromOwnerActor()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "UGameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.NotifyAbilityTaskWaitingOnAvatar(UAbilityTask*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NotifyAbilityTaskWaitingOnAvatar(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayAbility.NotifyAbilityTaskWaitingOnAvatar(UAbilityTask*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.NotifyAbilityTaskWaitingOnPlayerData(UAbilityTask*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NotifyAbilityTaskWaitingOnPlayerData(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayAbility.NotifyAbilityTaskWaitingOnPlayerData(UAbilityTask*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.OnGameplayTaskInitialized(UGameplayTask&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnGameplayTaskInitialized(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayAbility.OnGameplayTaskInitialized(UGameplayTask&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.OnGiveAbility(FGameplayAbilityActorInfo*,FGameplayAbilitySpec&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnGiveAbility(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UGameplayAbility.OnGiveAbility(FGameplayAbilityActorInfo*,FGameplayAbilitySpec&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.PostNetInit()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PostNetInit() const
    {
        return NativeCall<void*>(this, "UGameplayAbility.PostNetInit()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.RemoveGrantedByEffect()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveGrantedByEffect() const
    {
        return NativeCall<void*>(this, "UGameplayAbility.RemoveGrantedByEffect()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.SetCanBeCanceled(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetCanBeCanceled(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UGameplayAbility.SetCanBeCanceled(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.SetCurrentMontage(UAnimMontage*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetCurrentMontage(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayAbility.SetCurrentMontage(UAnimMontage*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.SetShouldBlockOtherAbilities(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetShouldBlockOtherAbilities(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UGameplayAbility.SetShouldBlockOtherAbilities(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo*,FGameplayEventData*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShouldAbilityRespondToEvent(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UGameplayAbility.ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo*,FGameplayEventData*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.ShouldActivateAbility(ENetRole)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=56]]
    BrzPonteiro ShouldActivateAbility(int a0) const
    {
        return NativeCall<void*, int>(this, "UGameplayAbility.ShouldActivateAbility(ENetRole)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayAbility.StaticRegisterNativesUGameplayAbility()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro StaticRegisterNativesUGameplayAbility() const
    {
        return NativeCall<void*>(this, "UGameplayAbility.StaticRegisterNativesUGameplayAbility()");
    }

    BrzCampoPonteiro AbilityTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility.AbilityTags")); }
    BrzCampoPonteiro AbilityTriggersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility.AbilityTriggers")); }
    BrzCampoPonteiro ActivationBlockedTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility.ActivationBlockedTags")); }
    BrzCampoPonteiro ActivationOwnedTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility.ActivationOwnedTags")); }
    BrzCampoPonteiro ActivationRequiredTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility.ActivationRequiredTags")); }
    BrzCampoPonteiro ActiveTasksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility.ActiveTasks")); }
    BrzCampoPonteiro BlockAbilitiesWithTagField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility.BlockAbilitiesWithTag")); }
    BrzCampoPonteiro CancelAbilitiesWithTagField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility.CancelAbilitiesWithTag")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TargetBlockedTags` +32, medido na build 25090264
    //  (offset absoluto medido: 0x2E0; confianca alta)
    void*& CancelTaskInstanceNamesField() const
    { return BrzCampoAncorado<void*>(this, "TargetBlockedTags", 32); }
    BrzCampoPonteiro CooldownGameplayEffectClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility.CooldownGameplayEffectClass")); }
    BrzCampoPonteiro CostGameplayEffectClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility.CostGameplayEffectClass")); }
    BrzCampoPonteiro CurrentActivationInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility.CurrentActivationInfo")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CurrentMontage` +8, medido na build 25090264
    //  (offset absoluto medido: 0x328; confianca alta)
    void*& CurrentActorInfoField() const
    { return BrzCampoAncorado<void*>(this, "CurrentMontage", 8); }
    BrzCampoPonteiro CurrentEventDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility.CurrentEventData")); }
    BrzCampoPonteiro CurrentMontageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility.CurrentMontage")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CurrentMontage` +16, medido na build 25090264
    //  (offset absoluto medido: 0x330; confianca alta)
    void*& CurrentSpecHandleField() const
    { return BrzCampoAncorado<void*>(this, "CurrentMontage", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TargetBlockedTags` +48, medido na build 25090264
    //  (offset absoluto medido: 0x2F0; confianca media)
    void*& EndTaskInstanceNamesField() const
    { return BrzCampoAncorado<void*>(this, "TargetBlockedTags", 48); }
    unsigned char& InstancingPolicyField() const
    { return *GetNativePointerField<unsigned char*>(this, "UGameplayAbility.InstancingPolicy"); }
    unsigned char& NetExecutionPolicyField() const
    { return *GetNativePointerField<unsigned char*>(this, "UGameplayAbility.NetExecutionPolicy"); }
    unsigned char& NetSecurityPolicyField() const
    { return *GetNativePointerField<unsigned char*>(this, "UGameplayAbility.NetSecurityPolicy"); }
    unsigned char& ReplicationPolicyField() const
    { return *GetNativePointerField<unsigned char*>(this, "UGameplayAbility.ReplicationPolicy"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bIsBlockingOtherAbilities` +1, medido na build 25090264
    //  (offset absoluto medido: 0x38C; confianca alta)
    void*& ScopeLockCountField() const
    { return BrzCampoAncorado<void*>(this, "bIsBlockingOtherAbilities", 1); }
    BrzCampoPonteiro SourceBlockedTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility.SourceBlockedTags")); }
    BrzCampoPonteiro SourceRequiredTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility.SourceRequiredTags")); }
    BrzCampoPonteiro TargetBlockedTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility.TargetBlockedTags")); }
    BrzCampoPonteiro TargetRequiredTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayAbility.TargetRequiredTags")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ActiveTasks` +16, medido na build 25090264
    //  (offset absoluto medido: 0x310; confianca alta)
    void*& TaskDebugMessagesField() const
    { return BrzCampoAncorado<void*>(this, "ActiveTasks", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CurrentMontage` +24, medido na build 25090264
    //  (offset absoluto medido: 0x338; confianca alta)
    void*& TrackedGameplayCuesField() const
    { return BrzCampoAncorado<void*>(this, "CurrentMontage", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bIsBlockingOtherAbilities` +5, medido na build 25090264
    //  (offset absoluto medido: 0x390; confianca alta)
    void*& WaitingToExecuteField() const
    { return BrzCampoAncorado<void*>(this, "bIsBlockingOtherAbilities", 5); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `RemoteInstanceEnded` +3, medido na build 25090264
    //  (offset absoluto medido: 0xCC; confianca alta)
    void*& bHasBlueprintActivateField() const
    { return BrzCampoAncorado<void*>(this, "RemoteInstanceEnded", 3); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `RemoteInstanceEnded` +4, medido na build 25090264
    //  (offset absoluto medido: 0xCD; confianca alta)
    void*& bHasBlueprintActivateFromEventField() const
    { return BrzCampoAncorado<void*>(this, "RemoteInstanceEnded", 4); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `RemoteInstanceEnded` +2, medido na build 25090264
    //  (offset absoluto medido: 0xCB; confianca alta)
    void*& bHasBlueprintCanUseField() const
    { return BrzCampoAncorado<void*>(this, "RemoteInstanceEnded", 2); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `RemoteInstanceEnded` +1, medido na build 25090264
    //  (offset absoluto medido: 0xCA; confianca alta)
    void*& bHasBlueprintShouldAbilityRespondToEventField() const
    { return BrzCampoAncorado<void*>(this, "RemoteInstanceEnded", 1); }
    BitFieldValue<bool, unsigned __int32> RemoteInstanceEnded()
    { return { (void*)this, "RemoteInstanceEnded" }; }
    BitFieldValue<bool, unsigned __int32> bIsAbilityEnding()
    { return { (void*)this, "bIsAbilityEnding" }; }
    BitFieldValue<bool, unsigned __int32> bIsActive()
    { return { (void*)this, "bIsActive" }; }
    BitFieldValue<bool, unsigned __int32> bIsBlockingOtherAbilities()
    { return { (void*)this, "bIsBlockingOtherAbilities" }; }
    BitFieldValue<bool, unsigned __int32> bIsCancelable()
    { return { (void*)this, "bIsCancelable" }; }
    BitFieldValue<bool, unsigned __int32> bMarkPendingKillOnAbilityEnd()
    { return { (void*)this, "bMarkPendingKillOnAbilityEnd" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateInputDirectly()
    { return { (void*)this, "bReplicateInputDirectly" }; }
    BitFieldValue<bool, unsigned __int32> bRetriggerInstancedAbility()
    { return { (void*)this, "bRetriggerInstancedAbility" }; }
    BitFieldValue<bool, unsigned __int32> bServerRespectsRemoteAbilityCancellation()
    { return { (void*)this, "bServerRespectsRemoteAbilityCancellation" }; }

};

#endif  // BRZ_SDK_JOGO_UGAMEPLAYABILITY_H

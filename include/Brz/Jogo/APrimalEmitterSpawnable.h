// ==========================================================================
//  APrimalEmitterSpawnable — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALEMITTERSPAWNABLE_H
#define BRZ_SDK_JOGO_APRIMALEMITTERSPAWNABLE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UAudioComponent;

#include "AActor.h"

struct APrimalEmitterSpawnable : public AActor
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalEmitterSpawnable"); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalEmitterSpawnable.Activate()
    // endereco: cache_pdb_25090264
    BrzPonteiro Activate() const
    {
        return NativeCall<void*>(this, "APrimalEmitterSpawnable.Activate()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalEmitterSpawnable.BPOnSetEmitterInstigatorFromSpawn(APawn*)
    // endereco: casamento de bytes com a build de referencia
    void BPOnSetEmitterInstigatorFromSpawn(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalEmitterSpawnable.BPOnSetEmitterInstigatorFromSpawn(APawn*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalEmitterSpawnable.BeginPlay()
    // classe: a funcao mora em AActor, e APrimalEmitterSpawnable herda dela: o `this` e' compativel por construcao
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo+string_aprovado]
    BrzPonteiro BeginPlay() const
    {
        return NativeCall<void*>(this, "AActor.BeginPlay()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalEmitterSpawnable.Deactivate()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [grafo=3/3]]
    BrzPonteiro Deactivate() const
    {
        return NativeCall<void*>(this, "APrimalEmitterSpawnable.Deactivate()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalEmitterSpawnable.Destroyed()
    // classe: a funcao mora em AActor, e APrimalEmitterSpawnable herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Destroyed() const
    {
        return NativeCall<void*>(this, "AActor.Destroyed()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalEmitterSpawnable.EndPlay(EEndPlayReason::Type)
    // classe: a funcao mora em AActor, e APrimalEmitterSpawnable herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EndPlay(int a0) const
    {
        return NativeCall<void*, int>(this, "AActor.EndPlay(EEndPlayReason::Type)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalEmitterSpawnable.IsSameSourceNotify(UAnimNotifyState_SpawnProp*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsSameSourceNotify(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalEmitterSpawnable.IsSameSourceNotify(UAnimNotifyState_SpawnProp*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalEmitterSpawnable.OnNiagaraSystemFinished(UNiagaraComponent*)
    // endereco: cache_pdb_25090264
    void OnNiagaraSystemFinished(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalEmitterSpawnable.OnNiagaraSystemFinished(UNiagaraComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalEmitterSpawnable.PostInitializeComponents()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PostInitializeComponents() const
    {
        return NativeCall<void*>(this, "APrimalEmitterSpawnable.PostInitializeComponents()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalEmitterSpawnable.PreActivation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=45]]
    void PreActivation() const
    {
        NativeCall<void>(this, "APrimalEmitterSpawnable.PreActivation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalEmitterSpawnable.PreInitializeComponents()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PreInitializeComponents() const
    {
        return NativeCall<void*>(this, "APrimalEmitterSpawnable.PreInitializeComponents()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalEmitterSpawnable.SetImpulseData(FDamageEvent&,APawn*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetImpulseData(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalEmitterSpawnable.SetImpulseData(FDamageEvent&,APawn*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalEmitterSpawnable.SetSourceNotify(UAnimNotifyState_SpawnProp*)
    // endereco: cache_pdb_25090264
    BrzPonteiro SetSourceNotify(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalEmitterSpawnable.SetSourceNotify(UAnimNotifyState_SpawnProp*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalEmitterSpawnable.SetupEmitter(AActor*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=53]]
    void SetupEmitter(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalEmitterSpawnable.SetupEmitter(AActor*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalEmitterSpawnable.StartDeactivation()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void StartDeactivation() const
    {
        NativeCall<void>(this, "APrimalEmitterSpawnable.StartDeactivation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalEmitterSpawnable.TemplateAllowActorSpawn(UWorld*,UE::Math::TVector<double>&,UE::Math::TRo
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TemplateAllowActorSpawn(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "APrimalEmitterSpawnable.TemplateAllowActorSpawn(UWorld*,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,FActorSpawnParameters&)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalEmitterSpawnable.ToggleActivation(bool)
    // endereco: cache_pdb_25090264
    void ToggleActivation(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalEmitterSpawnable.ToggleActivation(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalEmitterSpawnable.Unstasis()
    // classe: a funcao mora em AActor, e APrimalEmitterSpawnable herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Unstasis() const
    {
        return NativeCall<void*>(this, "AActor.Unstasis()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalEmitterSpawnable.UpdateAmbientSound()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateAmbientSound() const
    {
        return NativeCall<void*>(this, "APrimalEmitterSpawnable.UpdateAmbientSound()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalEmitterSpawnable.UpdateEmitter(float,float,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void UpdateEmitter(float a0, float a1, void* a2) const
    {
        NativeCall<void, float, float, void*>(this, "APrimalEmitterSpawnable.UpdateEmitter(float,float,AActor*)", a0, a1, a2);
    }

    float& ActivateSoundFadeInDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalEmitterSpawnable.ActivateSoundFadeInDuration"); }
    BrzCampoPonteiro CameraShakeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalEmitterSpawnable.CameraShake")); }
    float& CameraShakeFalloffField() const
    { return *GetNativePointerField<float*>(this, "APrimalEmitterSpawnable.CameraShakeFalloff"); }
    float& CameraShakeInnerRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalEmitterSpawnable.CameraShakeInnerRadius"); }
    float& CameraShakeOuterRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalEmitterSpawnable.CameraShakeOuterRadius"); }
    float& CameraShakeScaleMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalEmitterSpawnable.CameraShakeScaleMultiplier"); }
    BrzCampoPonteiro ColorParameterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalEmitterSpawnable.ColorParameter")); }
    float& DeactivateSoundFadeOutDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalEmitterSpawnable.DeactivateSoundFadeOutDuration"); }
    BrzCampoPonteiro DecalToSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalEmitterSpawnable.DecalToSpawn")); }
    BrzCampoPonteiro EmitterNiagaraComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalEmitterSpawnable.EmitterNiagaraComponent")); }
    BrzCampoPonteiro HitLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalEmitterSpawnable.HitLocation")); }
    BrzCampoPonteiro ImpulseDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalEmitterSpawnable.ImpulseData")); }
    BrzCampoPonteiro NiagaraComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalEmitterSpawnable.NiagaraComponent")); }
    BrzCampoPonteiro RootTransformCompField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalEmitterSpawnable.RootTransformComp")); }
    float& ShallowEmitterDontSpawnOutOfViewCheckRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalEmitterSpawnable.ShallowEmitterDontSpawnOutOfViewCheckRadius"); }
    float& ShallowEmitterOverrideSecondsBeforeInactiveField() const
    { return *GetNativePointerField<float*>(this, "APrimalEmitterSpawnable.ShallowEmitterOverrideSecondsBeforeInactive"); }
    float& ShallowEmitterSpawnableMaxDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalEmitterSpawnable.ShallowEmitterSpawnableMaxDistance"); }
    UAudioComponent*& SoundToPlayField() const
    { return *GetNativePointerField<UAudioComponent**>(this, "APrimalEmitterSpawnable.SoundToPlay"); }
    BrzCampoPonteiro SpawnedForActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalEmitterSpawnable.SpawnedForActor")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ColorParameter` +16, medido na build 25090264
    //  (offset absoluto medido: 0x55C; confianca alta)
    void*& bUseNiagaraComponentField() const
    { return BrzCampoAncorado<void*>(this, "ColorParameter", 16); }
    BitFieldValue<bool, unsigned __int32> bAllowLoopingEmitter()
    { return { (void*)this, "bAllowLoopingEmitter" }; }
    BitFieldValue<bool, unsigned __int32> bCameraShakeOrientTowardsEpicenter()
    { return { (void*)this, "bCameraShakeOrientTowardsEpicenter" }; }
    BitFieldValue<bool, unsigned __int32> bDelayedDeactivation()
    { return { (void*)this, "bDelayedDeactivation" }; }
    BitFieldValue<bool, unsigned __int32> bForceNoRotation()
    { return { (void*)this, "bForceNoRotation" }; }
    BitFieldValue<bool, unsigned __int32> bHasImpulseDataAvailable()
    { return { (void*)this, "bHasImpulseDataAvailable" }; }
    BitFieldValue<bool, unsigned __int32> bHighPrioritySound()
    { return { (void*)this, "bHighPrioritySound" }; }
    BitFieldValue<bool, unsigned __int32> bShallowEmitterDontSpawnOutOfView()
    { return { (void*)this, "bShallowEmitterDontSpawnOutOfView" }; }
    BitFieldValue<bool, unsigned __int32> bShallowEmitterSpawnable()
    { return { (void*)this, "bShallowEmitterSpawnable" }; }
    BitFieldValue<bool, unsigned __int32> bTickSoundInRangePlayback()
    { return { (void*)this, "bTickSoundInRangePlayback" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCustomApplyColor()
    { return { (void*)this, "bUseBPCustomApplyColor" }; }
    BitFieldValue<bool, unsigned __int32> bUseNiagaraDestroyOnSystemFinish()
    { return { (void*)this, "bUseNiagaraDestroyOnSystemFinish" }; }
    BitFieldValue<bool, unsigned __int32> bWasActivated()
    { return { (void*)this, "bWasActivated" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALEMITTERSPAWNABLE_H

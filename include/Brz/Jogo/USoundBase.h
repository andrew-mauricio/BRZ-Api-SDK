// ==========================================================================
//  USoundBase — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_USOUNDBASE_H
#define BRZ_SDK_JOGO_USOUNDBASE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct USoundAttenuation;
struct USoundClass;

#include "UObject.h"

struct USoundBase : public UObject
{
    static UClass* StaticClass()
    { return BrzClassePorNome("USoundBase"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USoundBase.GetAssetUserDataArray()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro GetAssetUserDataArray() const
    {
        return NativeCall<void*>(this, "USoundBase.GetAssetUserDataArray()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USoundBase.GetMaxDistance()
    // endereco: cache_pdb_25090264
    float GetMaxDistance() const
    {
        return NativeCall<float>(this, "USoundBase.GetMaxDistance()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USoundBase.GetSoundClass()
    // endereco: casamento de bytes com a build de referencia
    USoundClass* GetSoundClass() const
    {
        return NativeCall<USoundClass*>(this, "USoundBase.GetSoundClass()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USoundBase.HasConcatenatorNode()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    bool HasConcatenatorNode() const
    {
        return NativeCall<bool>(this, "USoundBase.HasConcatenatorNode()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USoundBase.HasDelayNode()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    bool HasDelayNode() const
    {
        return NativeCall<bool>(this, "USoundBase.HasDelayNode()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USoundBase.IsLooping()
    // endereco: casamento de bytes com a build de referencia
    bool IsLooping() const
    {
        return NativeCall<bool>(this, "USoundBase.IsLooping()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USoundBase.IsOneShot()
    // endereco: casamento de bytes com a build de referencia
    bool IsOneShot() const
    {
        return NativeCall<bool>(this, "USoundBase.IsOneShot()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USoundBase.IsPlayWhenSilent()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    bool IsPlayWhenSilent() const
    {
        return NativeCall<bool>(this, "USoundBase.IsPlayWhenSilent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USoundBase.ShouldApplyInteriorVolumes()
    // endereco: casamento de bytes com a build de referencia
    bool ShouldApplyInteriorVolumes() const
    {
        return NativeCall<bool>(this, "USoundBase.ShouldApplyInteriorVolumes()");
    }

    TArray<void*>& AssetUserDataField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "USoundBase.AssetUserData"); }
    TObjectPtr<USoundAttenuation>& AttenuationSettingsField() const
    { return *GetNativePointerField<TObjectPtr<USoundAttenuation>*>(this, "USoundBase.AttenuationSettings"); }
    BrzCampoPonteiro BusSendsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "USoundBase.BusSends")); }
    BrzCampoPonteiro ConcurrencyOverridesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "USoundBase.ConcurrencyOverrides")); }
    BrzCampoPonteiro ConcurrencySetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "USoundBase.ConcurrencySet")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `VirtualizationMode` +7, medido na build 25090264
    //  (offset absoluto medido: 0x40; confianca alta)
    void*& CurrentPlayCountField() const
    { return BrzCampoAncorado<void*>(this, "VirtualizationMode", 7); }
    float& DurationField() const
    { return *GetNativePointerField<float*>(this, "USoundBase.Duration"); }
    float& MaxDistanceField() const
    { return *GetNativePointerField<float*>(this, "USoundBase.MaxDistance"); }
    BrzCampoPonteiro PreEffectBusSendsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "USoundBase.PreEffectBusSends")); }
    float& PriorityField() const
    { return *GetNativePointerField<float*>(this, "USoundBase.Priority"); }
    TObjectPtr<USoundClass>& SoundClassObjectField() const
    { return *GetNativePointerField<TObjectPtr<USoundClass>*>(this, "USoundBase.SoundClassObject"); }
    BrzCampoPonteiro SoundSubmixObjectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "USoundBase.SoundSubmixObject")); }
    BrzCampoPonteiro SoundSubmixSendsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "USoundBase.SoundSubmixSends")); }
    BrzCampoPonteiro SourceEffectChainField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "USoundBase.SourceEffectChain")); }
    float& TotalSamplesField() const
    { return *GetNativePointerField<float*>(this, "USoundBase.TotalSamples"); }
    int& VirtualizationModeField() const
    { return *GetNativePointerField<int*>(this, "USoundBase.VirtualizationMode"); }
    BitFieldValue<bool, unsigned __int32> bDebug()
    { return { (void*)this, "bDebug" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideConcurrency()
    { return { (void*)this, "bOverrideConcurrency" }; }
    BitFieldValue<bool, unsigned __int32> bEnableBusSends()
    { return { (void*)this, "bEnableBusSends" }; }
    BitFieldValue<bool, unsigned __int32> bEnableBaseSubmix()
    { return { (void*)this, "bEnableBaseSubmix" }; }
    BitFieldValue<bool, unsigned __int32> bEnableSubmixSends()
    { return { (void*)this, "bEnableSubmixSends" }; }
    BitFieldValue<bool, unsigned __int32> bHasDelayNode()
    { return { (void*)this, "bHasDelayNode" }; }
    BitFieldValue<bool, unsigned __int32> bHasConcatenatorNode()
    { return { (void*)this, "bHasConcatenatorNode" }; }
    BitFieldValue<bool, unsigned __int32> bBypassVolumeScaleForPriority()
    { return { (void*)this, "bBypassVolumeScaleForPriority" }; }

};

#endif  // BRZ_SDK_JOGO_USOUNDBASE_H

// ==========================================================================
//  ATogglePainVolume — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ATOGGLEPAINVOLUME_H
#define BRZ_SDK_JOGO_ATOGGLEPAINVOLUME_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct AController;

#include "AActor.h"

struct ATogglePainVolume : public AActor
{
    static UClass* StaticClass()
    { return BrzClassePorNome("ATogglePainVolume"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ATogglePainVolume.BeginPlay()
    // classe: a funcao mora em AActor, e ATogglePainVolume herda dela: o `this` e' compativel por construcao
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo+string_aprovado]
    void BeginPlay() const
    {
        NativeCall<void>(this, "AActor.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ATogglePainVolume.CausePainTo(AActor*)
    // endereco: casamento de bytes com a build de referencia
    void CausePainTo(void* a0) const
    {
        NativeCall<void, void*>(this, "ATogglePainVolume.CausePainTo(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ATogglePainVolume.CheckForStructures(bool,TSet<APrimalStructure*,DefaultKeyFuncs<APrimalStructur
    // endereco: casamento de bytes com a build de referencia
    bool CheckForStructures(bool a0, void* a1) const
    {
        return NativeCall<bool, bool, void*>(this, "ATogglePainVolume.CheckForStructures(bool,TSet<APrimalStructure*,DefaultKeyFuncs<APrimalStructure*,0>,FDefaultSetAllocator>*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ATogglePainVolume.DelayedActive()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=138+grafo=3/3]]
    void DelayedActive() const
    {
        NativeCall<void>(this, "ATogglePainVolume.DelayedActive()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ATogglePainVolume.EndPlay(EEndPlayReason::Type)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=88+grafo=5/5]]
    void EndPlay(int a0) const
    {
        NativeCall<void, int>(this, "ATogglePainVolume.EndPlay(EEndPlayReason::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ATogglePainVolume.OnBeginOverlap(AActor*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void OnBeginOverlap(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "ATogglePainVolume.OnBeginOverlap(AActor*,AActor*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ATogglePainVolume.PainTimer()
    // endereco: casamento de bytes com a build de referencia
    void PainTimer() const
    {
        NativeCall<void>(this, "ATogglePainVolume.PainTimer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ATogglePainVolume.PreSave(ITargetPlatform*)
    // endereco: casamento de bytes com a build de referencia
    void PreSave(void* a0) const
    {
        NativeCall<void, void*>(this, "ATogglePainVolume.PreSave(ITargetPlatform*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ATogglePainVolume.SetPainVolumeEnabled(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetPainVolumeEnabled(bool a0) const
    {
        NativeCall<void, bool>(this, "ATogglePainVolume.SetPainVolumeEnabled(bool)", a0);
    }

    TArray<void*>& ActorClassesToExcludeField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "ATogglePainVolume.ActorClassesToExclude"); }
    TArray<void*>& ActorClassesToIncludeField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "ATogglePainVolume.ActorClassesToInclude"); }
    BrzCampoPonteiro BeginOverlapEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ATogglePainVolume.BeginOverlapEvent")); }
    BrzCampoPonteiro CausedPainEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ATogglePainVolume.CausedPainEvent")); }
    AController*& DamageInstigatorField() const
    { return *GetNativePointerField<AController**>(this, "ATogglePainVolume.DamageInstigator"); }
    float& DamagePerSecField() const
    { return *GetNativePointerField<float*>(this, "ATogglePainVolume.DamagePerSec"); }
    BrzCampoPonteiro DamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ATogglePainVolume.DamageType")); }
    float& DelayTogglePainActiveField() const
    { return *GetNativePointerField<float*>(this, "ATogglePainVolume.DelayTogglePainActive"); }
    BrzCampoPonteiro EndOverlapEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ATogglePainVolume.EndOverlapEvent")); }
    BrzCampoPonteiro IgnoreActorsWithTagField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ATogglePainVolume.IgnoreActorsWithTag")); }
    float& PainIntervalField() const
    { return *GetNativePointerField<float*>(this, "ATogglePainVolume.PainInterval"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `StructureDamageOverlapRadius` +8, medido na build 25090264
    //  (offset absoluto medido: 0x540; confianca alta)
    void*& PainTimerHandleField() const
    { return BrzCampoAncorado<void*>(this, "StructureDamageOverlapRadius", 8); }
    TArray<void*>& SavedStructureDamageOverlapPointsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "ATogglePainVolume.SavedStructureDamageOverlapPoints"); }
    TArray<AActor*>& StructureDamageOverlapPointsField() const
    { return *GetNativePointerField<TArray<AActor*>*>(this, "ATogglePainVolume.StructureDamageOverlapPoints"); }
    float& StructureDamageOverlapRadiusField() const
    { return *GetNativePointerField<float*>(this, "ATogglePainVolume.StructureDamageOverlapRadius"); }
    float& StructureDamagePerSecField() const
    { return *GetNativePointerField<float*>(this, "ATogglePainVolume.StructureDamagePerSec"); }
    BrzCampoPonteiro StructureDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ATogglePainVolume.StructureDamageType")); }
    BrzCampoPonteiro ToggleEmittersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ATogglePainVolume.ToggleEmitters")); }
    BitFieldValue<bool, unsigned __int32> bPainCausing()
    { return { (void*)this, "bPainCausing" }; }
    BitFieldValue<bool, unsigned __int32> bEntryPain()
    { return { (void*)this, "bEntryPain" }; }
    BitFieldValue<bool, unsigned __int32> bPainWalkingOnly()
    { return { (void*)this, "bPainWalkingOnly" }; }
    BitFieldValue<bool, unsigned __int32> bUseBeginOverlapEvent()
    { return { (void*)this, "bUseBeginOverlapEvent" }; }
    BitFieldValue<bool, unsigned __int32> bUseEndOverlapEvent()
    { return { (void*)this, "bUseEndOverlapEvent" }; }
    BitFieldValue<bool, unsigned __int32> bUseCausedPainEvent()
    { return { (void*)this, "bUseCausedPainEvent" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreWildDinos()
    { return { (void*)this, "bIgnoreWildDinos" }; }
    BitFieldValue<bool, unsigned __int32> bTriggerUndermeshDetection()
    { return { (void*)this, "bTriggerUndermeshDetection" }; }
    BitFieldValue<bool, unsigned __int32> bIsTimerActive()
    { return { (void*)this, "bIsTimerActive" }; }
    BitFieldValue<bool, unsigned __int32> bEnabled()
    { return { (void*)this, "bEnabled" }; }

};

#endif  // BRZ_SDK_JOGO_ATOGGLEPAINVOLUME_H

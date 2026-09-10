// ==========================================================================
//  UPrimalAIStateDinoSpiderMinions — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALAISTATEDINOSPIDERMINIONS_H
#define BRZ_SDK_JOGO_UPRIMALAISTATEDINOSPIDERMINIONS_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct APawn;


struct UPrimalAIStateDinoSpiderMinions
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalAIStateDinoSpiderMinions"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoSpiderMinions.CanUseState()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanUseState() const
    {
        return NativeCall<void*>(this, "UPrimalAIStateDinoSpiderMinions.CanUseState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoSpiderMinions.EndAnimationState(FName,ENetRole)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EndAnimationState(unsigned long long a0, int a1) const
    {
        return NativeCall<void*, unsigned long long, int>(this, "UPrimalAIStateDinoSpiderMinions.EndAnimationState(FName,ENetRole)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoSpiderMinions.IsInAnimationStateActive()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro IsInAnimationStateActive() const
    {
        return NativeCall<void*>(this, "UPrimalAIStateDinoSpiderMinions.IsInAnimationStateActive()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoSpiderMinions.OnEnd()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro OnEnd() const
    {
        return NativeCall<void*>(this, "UPrimalAIStateDinoSpiderMinions.OnEnd()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAIStateDinoSpiderMinions.TickAnimationState(float,FName,ENetRole)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TickAnimationState(float a0, unsigned long long a1, int a2) const
    {
        return NativeCall<void*, float, unsigned long long, int>(this, "UPrimalAIStateDinoSpiderMinions.TickAnimationState(float,FName,ENetRole)", a0, a1, a2);
    }

    unsigned char& AbsoluteMaxMinionsField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalAIStateDinoSpiderMinions.AbsoluteMaxMinions"); }
    FName& AnimationCustomNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalAIStateDinoSpiderMinions.AnimationCustomName"); }
    unsigned char& BatchCountField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalAIStateDinoSpiderMinions.BatchCount"); }
    float& BatchMinionCoolDownField() const
    { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoSpiderMinions.BatchMinionCoolDown"); }
    BrzCampoPonteiro ChildStatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderMinions.ChildStates")); }
    FName& EggSocketField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalAIStateDinoSpiderMinions.EggSocket"); }
    BitFieldValue<bool, unsigned __int32> IsInAnimationState()
    { return { (void*)this, "IsInAnimationState" }; }
    BitFieldValue<bool, unsigned __int32> IsInAttackState()
    { return { (void*)this, "IsInAttackState" }; }
    double& LastBatchTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalAIStateDinoSpiderMinions.LastBatchTime"); }
    BrzCampoPonteiro MinionCharacterTypeClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderMinions.MinionCharacterTypeClass")); }
    BrzCampoPonteiro MinionCharacterTypeClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderMinions.MinionCharacterTypeClasses")); }
    BrzCampoPonteiro MinionCharacterTypeClassesWeightsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderMinions.MinionCharacterTypeClassesWeights")); }
    unsigned char& MinionMaxCountField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalAIStateDinoSpiderMinions.MinionMaxCount"); }
    int& NumMinionsToSpawnField() const
    { return *GetNativePointerField<int*>(this, "UPrimalAIStateDinoSpiderMinions.NumMinionsToSpawn"); }
    int& OverrideMinionBaseLevelField() const
    { return *GetNativePointerField<int*>(this, "UPrimalAIStateDinoSpiderMinions.OverrideMinionBaseLevel"); }
    BrzCampoPonteiro ParentStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderMinions.ParentState")); }
    TObjectPtr<APawn>& PawnField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "UPrimalAIStateDinoSpiderMinions.Pawn"); }
    unsigned char& RemainingMinionBatchCountField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalAIStateDinoSpiderMinions.RemainingMinionBatchCount"); }
    BrzCampoPonteiro SpawnFixedOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderMinions.SpawnFixedOffset")); }
    BrzCampoPonteiro SpawnRandomOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAIStateDinoSpiderMinions.SpawnRandomOffset")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MinionMaxCount` +8, medido na build 25090264
    //  (offset absoluto medido: 0x88; confianca alta)
    void*& SpawnedMinionsField() const
    { return BrzCampoAncorado<void*>(this, "MinionMaxCount", 8); }
    BitFieldValue<bool, unsigned __int32> bBPCanUseState()
    { return { (void*)this, "bBPCanUseState" }; }
    BitFieldValue<bool, unsigned __int32> bShouldResetInLosingTarget()
    { return { (void*)this, "bShouldResetInLosingTarget" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanAttack()
    { return { (void*)this, "bUseBPCanAttack" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanInterrupt()
    { return { (void*)this, "bUseBPCanInterrupt" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideAttackWeight()
    { return { (void*)this, "bUseBPOverrideAttackWeight" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSkipIntervalCheck()
    { return { (void*)this, "bUseBPSkipIntervalCheck" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSkipRangeCheck()
    { return { (void*)this, "bUseBPSkipRangeCheck" }; }
    BitFieldValue<bool, unsigned __int32> bFirstBatch()
    { return { (void*)this, "bFirstBatch" }; }
    BitFieldValue<bool, unsigned __int32> bPreventMinionSaving()
    { return { (void*)this, "bPreventMinionSaving" }; }
    BitFieldValue<bool, unsigned __int32> bPreventMinionTaming()
    { return { (void*)this, "bPreventMinionTaming" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALAISTATEDINOSPIDERMINIONS_H

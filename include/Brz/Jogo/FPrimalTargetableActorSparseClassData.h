// ==========================================================================
//  FPrimalTargetableActorSparseClassData — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FPRIMALTARGETABLEACTORSPARSECLASSDATA_H
#define BRZ_SDK_JOGO_FPRIMALTARGETABLEACTORSPARSECLASSDATA_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FPrimalTargetableActorSparseClassData
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FPrimalTargetableActorSparseClassData"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   FPrimalTargetableActorSparseClassData.operator=(FPrimalTargetableActorSparseClassData&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro operator_(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FPrimalTargetableActorSparseClassData.operator=(FPrimalTargetableActorSparseClassData&)", a0);
    }

    float& DamageNotifyTeamAggroMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalTargetableActorSparseClassData.DamageNotifyTeamAggroMultiplier"); }
    float& DamageNotifyTeamAggroRangeField() const
    { return *GetNativePointerField<float*>(this, "FPrimalTargetableActorSparseClassData.DamageNotifyTeamAggroRange"); }
    float& DamageNotifyTeamAggroRangeFalloffField() const
    { return *GetNativePointerField<float*>(this, "FPrimalTargetableActorSparseClassData.DamageNotifyTeamAggroRangeFalloff"); }
    float& DestructibleMeshDeathImpulseScaleField() const
    { return *GetNativePointerField<float*>(this, "FPrimalTargetableActorSparseClassData.DestructibleMeshDeathImpulseScale"); }
    BrzCampoPonteiro DestructibleMeshRotationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalTargetableActorSparseClassData.DestructibleMeshRotationOffset")); }
    BrzCampoPonteiro DestructionActorTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalTargetableActorSparseClassData.DestructionActorTemplate")); }
    BrzCampoPonteiro OverlayMultiUseTooltipPaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalTargetableActorSparseClassData.OverlayMultiUseTooltipPadding")); }
    BrzCampoPonteiro OverlayMultiUseTooltipScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalTargetableActorSparseClassData.OverlayMultiUseTooltipScale")); }
    BrzCampoPonteiro OverlayToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalTargetableActorSparseClassData.OverlayToolTipWidget")); }
    float& PassiveDamageHealthReplicationPercentIntervalField() const
    { return *GetNativePointerField<float*>(this, "FPrimalTargetableActorSparseClassData.PassiveDamageHealthReplicationPercentInterval"); }
    BrzCampoPonteiro SoftDestructionGeoCollectionAssetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalTargetableActorSparseClassData.SoftDestructionGeoCollectionAsset")); }
    BitFieldValue<bool, unsigned __int32> bDestructionActorTemplateServerOnly()
    { return { (void*)this, "bDestructionActorTemplateServerOnly" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyedMeshUseSkeletalMeshComponent()
    { return { (void*)this, "bDestroyedMeshUseSkeletalMeshComponent" }; }
    BitFieldValue<bool, unsigned __int32> bPreventZeroDamageInstigatorSelfDamage()
    { return { (void*)this, "bPreventZeroDamageInstigatorSelfDamage" }; }
    BitFieldValue<bool, unsigned __int32> bDamageNotifyTeamAggroAI()
    { return { (void*)this, "bDamageNotifyTeamAggroAI" }; }
    BitFieldValue<bool, unsigned __int32> bAllowDamageByFriendlyDinos()
    { return { (void*)this, "bAllowDamageByFriendlyDinos" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustDamage()
    { return { (void*)this, "bUseBPAdjustDamage" }; }
    BitFieldValue<bool, unsigned __int32> bDoAllowRadialDamageWithoutVisiblityTrace()
    { return { (void*)this, "bDoAllowRadialDamageWithoutVisiblityTrace" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreDamageRepairCooldown()
    { return { (void*)this, "bIgnoreDamageRepairCooldown" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPDied()
    { return { (void*)this, "bUseBPDied" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetDestroyedMeshes()
    { return { (void*)this, "bUseBPGetDestroyedMeshes" }; }

};

#endif  // BRZ_SDK_JOGO_FPRIMALTARGETABLEACTORSPARSECLASSDATA_H

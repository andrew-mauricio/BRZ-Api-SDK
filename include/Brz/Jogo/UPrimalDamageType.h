// ==========================================================================
//  UPrimalDamageType — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALDAMAGETYPE_H
#define BRZ_SDK_JOGO_UPRIMALDAMAGETYPE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UPrimalDamageType
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalDamageType"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    float& ArmorDurabilityDegradationMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDamageType.ArmorDurabilityDegradationMultiplier"); }
    float& DamageFalloffField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDamageType.DamageFalloff"); }
    float& DamageImpulseField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDamageType.DamageImpulse"); }
    float& DefaultImpulseField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDamageType.DefaultImpulse"); }
    float& DestructibleDamageSpreadScaleField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDamageType.DestructibleDamageSpreadScale"); }
    float& DestructibleImpulseField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDamageType.DestructibleImpulse"); }
    float& DestructibleImpulseScaleField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDamageType.DestructibleImpulseScale"); }
    float& GeneralDamageArmorEffectivenessField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDamageType.GeneralDamageArmorEffectiveness"); }
    float& ImpulseMinimumZPercentField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDamageType.ImpulseMinimumZPercent"); }
    float& ImpulseRagdollScaleField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDamageType.ImpulseRagdollScale"); }
    float& PointDamageArmorEffectivenessField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDamageType.PointDamageArmorEffectiveness"); }
    float& RadialPartiallyObstructedDamagePercentField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDamageType.RadialPartiallyObstructedDamagePercent"); }
    BitFieldValue<bool, unsigned __int32> bCausedByWorld()
    { return { (void*)this, "bCausedByWorld" }; }
    BitFieldValue<bool, unsigned __int32> bIsPassiveDamage()
    { return { (void*)this, "bIsPassiveDamage" }; }
    BitFieldValue<bool, unsigned __int32> bRadialDamageVelChange()
    { return { (void*)this, "bRadialDamageVelChange" }; }
    BitFieldValue<bool, unsigned __int32> bScaleMomentumByMass()
    { return { (void*)this, "bScaleMomentumByMass" }; }
    BitFieldValue<bool, unsigned __int32> bAllowPerBoneDamageAdjustment()
    { return { (void*)this, "bAllowPerBoneDamageAdjustment" }; }
    BitFieldValue<bool, unsigned __int32> bImpulseAffectsLivePawns()
    { return { (void*)this, "bImpulseAffectsLivePawns" }; }
    BitFieldValue<bool, unsigned __int32> bIsPhysicalDamage()
    { return { (void*)this, "bIsPhysicalDamage" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALDAMAGETYPE_H

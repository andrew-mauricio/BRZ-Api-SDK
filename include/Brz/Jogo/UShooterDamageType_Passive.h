// ==========================================================================
//  UShooterDamageType_Passive — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_USHOOTERDAMAGETYPE_PASSIVE_H
#define BRZ_SDK_JOGO_USHOOTERDAMAGETYPE_PASSIVE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UShooterDamageType_Passive
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UShooterDamageType_Passive"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    float& ArmorDurabilityDegradationMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UShooterDamageType_Passive.ArmorDurabilityDegradationMultiplier"); }
    float& DamageFalloffField() const
    { return *GetNativePointerField<float*>(this, "UShooterDamageType_Passive.DamageFalloff"); }
    float& DamageImpulseField() const
    { return *GetNativePointerField<float*>(this, "UShooterDamageType_Passive.DamageImpulse"); }
    float& DefaultImpulseField() const
    { return *GetNativePointerField<float*>(this, "UShooterDamageType_Passive.DefaultImpulse"); }
    float& DestructibleDamageSpreadScaleField() const
    { return *GetNativePointerField<float*>(this, "UShooterDamageType_Passive.DestructibleDamageSpreadScale"); }
    float& DestructibleImpulseField() const
    { return *GetNativePointerField<float*>(this, "UShooterDamageType_Passive.DestructibleImpulse"); }
    float& DestructibleImpulseScaleField() const
    { return *GetNativePointerField<float*>(this, "UShooterDamageType_Passive.DestructibleImpulseScale"); }
    float& GeneralDamageArmorEffectivenessField() const
    { return *GetNativePointerField<float*>(this, "UShooterDamageType_Passive.GeneralDamageArmorEffectiveness"); }
    float& ImpulseMinimumZPercentField() const
    { return *GetNativePointerField<float*>(this, "UShooterDamageType_Passive.ImpulseMinimumZPercent"); }
    float& ImpulseRagdollScaleField() const
    { return *GetNativePointerField<float*>(this, "UShooterDamageType_Passive.ImpulseRagdollScale"); }
    float& PointDamageArmorEffectivenessField() const
    { return *GetNativePointerField<float*>(this, "UShooterDamageType_Passive.PointDamageArmorEffectiveness"); }
    float& RadialPartiallyObstructedDamagePercentField() const
    { return *GetNativePointerField<float*>(this, "UShooterDamageType_Passive.RadialPartiallyObstructedDamagePercent"); }
    BitFieldValue<bool, unsigned __int32> bAllowPerBoneDamageAdjustment()
    { return { (void*)this, "bAllowPerBoneDamageAdjustment" }; }
    BitFieldValue<bool, unsigned __int32> bCausedByWorld()
    { return { (void*)this, "bCausedByWorld" }; }
    BitFieldValue<bool, unsigned __int32> bImpulseAffectsLivePawns()
    { return { (void*)this, "bImpulseAffectsLivePawns" }; }
    BitFieldValue<bool, unsigned __int32> bIsPassiveDamage()
    { return { (void*)this, "bIsPassiveDamage" }; }
    BitFieldValue<bool, unsigned __int32> bIsPhysicalDamage()
    { return { (void*)this, "bIsPhysicalDamage" }; }
    BitFieldValue<bool, unsigned __int32> bRadialDamageVelChange()
    { return { (void*)this, "bRadialDamageVelChange" }; }
    BitFieldValue<bool, unsigned __int32> bScaleMomentumByMass()
    { return { (void*)this, "bScaleMomentumByMass" }; }
};

#endif  // BRZ_SDK_JOGO_USHOOTERDAMAGETYPE_PASSIVE_H

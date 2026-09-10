// ==========================================================================
//  UPrimalCharacterStatusComponent — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALCHARACTERSTATUSCOMPONENT_H
#define BRZ_SDK_JOGO_UPRIMALCHARACTERSTATUSCOMPONENT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FPrimalCharacterStatusStateThresholds;
struct USoundBase;
struct UTexture2D;

#include "UActorComponent.h"

struct UPrimalCharacterStatusComponent : public UActorComponent
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalCharacterStatusComponent"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.AddExperience(float,bool,EXPType::Type)
    // endereco: casamento de bytes com a build de referencia
    void AddExperience(float a0, bool a1, int a2) const
    {
        NativeCall<void, float, bool, int>(this, "UPrimalCharacterStatusComponent.AddExperience(float,bool,EXPType::Type)", a0, a1, a2);
    }

    // jogo_confirmou_dump
    //   UPrimalCharacterStatusComponent.AddStatusValueModifier(EPrimalCharacterStatusValue::Type,float,f
    // endereco: casamento de bytes com a build de referencia
    void AddStatusValueModifier(int a0, float a1, float a2, bool a3, bool a4, int a5, bool a6, float a7, bool a8, int a9, bool a10, void* a11, void* a12, bool a13) const
    {
        NativeCall<void, int, float, float, bool, bool, int, bool, float, bool, int, bool, void*, void*, bool>(this, "UPrimalCharacterStatusComponent.AddStatusValueModifier(EPrimalCharacterStatusValue::Type,float,float,bool,bool,int,bool,float,bool,EPrimalCharacterStatusValue::Type,bool,TSubclassOf<UDamageType>,AActor*,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.AdjustStatusValueModification(EPrimalCharacterStatusValue::Type,
    // endereco: casamento de bytes com a build de referencia
    void AdjustStatusValueModification(int a0, void* a1, void* a2, bool a3) const
    {
        NativeCall<void, int, void*, void*, bool>(this, "UPrimalCharacterStatusComponent.AdjustStatusValueModification(EPrimalCharacterStatusValue::Type,float&,TSubclassOf<UDamageType>,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterStatusComponent.AllowTaming()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=55]]
    BrzPonteiro AllowTaming() const
    {
        return NativeCall<void*>(this, "UPrimalCharacterStatusComponent.AllowTaming()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.ApplyStatusValueModifiers(float)
    // endereco: casamento de bytes com a build de referencia
    void ApplyStatusValueModifiers(float a0) const
    {
        NativeCall<void, float>(this, "UPrimalCharacterStatusComponent.ApplyStatusValueModifiers(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.ApplyTamingStatModifiers(float)
    // endereco: casamento de bytes com a build de referencia
    void ApplyTamingStatModifiers(float a0) const
    {
        NativeCall<void, float>(this, "UPrimalCharacterStatusComponent.ApplyTamingStatModifiers(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterStatusComponent.ApplyWildLevelUp(TEnumAsByte<EPrimalCharacterStatusValue::Type>,
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyWildLevelUp(unsigned char a0, int a1) const
    {
        return NativeCall<void*, unsigned char, int>(this, "UPrimalCharacterStatusComponent.ApplyWildLevelUp(TEnumAsByte<EPrimalCharacterStatusValue::Type>,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterStatusComponent.BPAdjustStatusValueModification(EPrimalCharacterStatusValue::Typ
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPAdjustStatusValueModification(int a0, float a1, void* a2, bool a3) const
    {
        return NativeCall<void*, int, float, void*, bool>(this, "UPrimalCharacterStatusComponent.BPAdjustStatusValueModification(EPrimalCharacterStatusValue::Type,float,TSubclassOf<UDamageType>,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterStatusComponent.BPCanLevelUp(EPrimalCharacterStatusValue::Type,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPCanLevelUp(int a0, bool a1) const
    {
        return NativeCall<void*, int, bool>(this, "UPrimalCharacterStatusComponent.BPCanLevelUp(EPrimalCharacterStatusValue::Type,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterStatusComponent.BPCanRecoverStatusValue(EPrimalCharacterStatusValue::Type)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPCanRecoverStatusValue(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalCharacterStatusComponent.BPCanRecoverStatusValue(EPrimalCharacterStatusValue::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.BPDirectSetCurrentStatusValue(EPrimalCharacterStatusValue::Type,
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    void BPDirectSetCurrentStatusValue(int a0, float a1) const
    {
        NativeCall<void, int, float>(this, "UPrimalCharacterStatusComponent.BPDirectSetCurrentStatusValue(EPrimalCharacterStatusValue::Type,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterStatusComponent.BPDirectSetMaxStatusValue(EPrimalCharacterStatusValue::Type,floa
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro BPDirectSetMaxStatusValue(int a0, float a1) const
    {
        return NativeCall<void*, int, float>(this, "UPrimalCharacterStatusComponent.BPDirectSetMaxStatusValue(EPrimalCharacterStatusValue::Type,float)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalCharacterStatusComponent.BPForceAllowUntamedStaminaReduction()
    // endereco: casamento de bytes com a build de referencia
    bool BPForceAllowUntamedStaminaReduction() const
    {
        return NativeCall<bool>(this, "UPrimalCharacterStatusComponent.BPForceAllowUntamedStaminaReduction()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterStatusComponent.BPGetAmountMaxGainedPerLevelUpValue(EPrimalCharacterStatusValue:
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro BPGetAmountMaxGainedPerLevelUpValue(int a0, bool a1) const
    {
        return NativeCall<void*, int, bool>(this, "UPrimalCharacterStatusComponent.BPGetAmountMaxGainedPerLevelUpValue(EPrimalCharacterStatusValue::Type,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.BPGetCurrentStatusValue(EPrimalCharacterStatusValue::Type)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    float BPGetCurrentStatusValue(int a0) const
    {
        return NativeCall<float, int>(this, "UPrimalCharacterStatusComponent.BPGetCurrentStatusValue(EPrimalCharacterStatusValue::Type)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalCharacterStatusComponent.BPGetMaxExperiencePoints()
    // endereco: casamento de bytes com a build de referencia
    float BPGetMaxExperiencePoints() const
    {
        return NativeCall<float>(this, "UPrimalCharacterStatusComponent.BPGetMaxExperiencePoints()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.BPGetMaxStatusValue(EPrimalCharacterStatusValue::Type)
    // endereco: casamento de bytes com a build de referencia
    float BPGetMaxStatusValue(int a0) const
    {
        return NativeCall<float, int>(this, "UPrimalCharacterStatusComponent.BPGetMaxStatusValue(EPrimalCharacterStatusValue::Type)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterStatusComponent.BPGetOverrideMaxStatusValue(EPrimalCharacterStatusValue::Type,fl
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetOverrideMaxStatusValue(int a0, float a1) const
    {
        return NativeCall<void*, int, float>(this, "UPrimalCharacterStatusComponent.BPGetOverrideMaxStatusValue(EPrimalCharacterStatusValue::Type,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterStatusComponent.BPGetPendingTotalStatusValueModificationFromModifiers(EPrimalCha
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetPendingTotalStatusValueModificationFromModifiers(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalCharacterStatusComponent.BPGetPendingTotalStatusValueModificationFromModifiers(EPrimalCharacterStatusValue::Type)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterStatusComponent.BPGetPercentStatusValue(EPrimalCharacterStatusValue::Type)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetPercentStatusValue(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalCharacterStatusComponent.BPGetPercentStatusValue(EPrimalCharacterStatusValue::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.BPModifyMaxExperiencePoints(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    float BPModifyMaxExperiencePoints(float a0) const
    {
        return NativeCall<float, float>(this, "UPrimalCharacterStatusComponent.BPModifyMaxExperiencePoints(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.BPModifyMaxLevel(int)
    // endereco: casamento de bytes com a build de referencia
    int BPModifyMaxLevel(int a0) const
    {
        return NativeCall<int, int>(this, "UPrimalCharacterStatusComponent.BPModifyMaxLevel(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterStatusComponent.BPOverrideShouldSkipWildLevelUpValue(EPrimalCharacterStatusValue
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOverrideShouldSkipWildLevelUpValue(int a0, bool a1, unsigned char a2) const
    {
        return NativeCall<void*, int, bool, unsigned char>(this, "UPrimalCharacterStatusComponent.BPOverrideShouldSkipWildLevelUpValue(EPrimalCharacterStatusValue::Type,bool,unsignedchar)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterStatusComponent.BPSetRecoveryRateStatusValue(EPrimalCharacterStatusValue::Type,f
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    BrzPonteiro BPSetRecoveryRateStatusValue(int a0, float a1) const
    {
        return NativeCall<void*, int, float>(this, "UPrimalCharacterStatusComponent.BPSetRecoveryRateStatusValue(EPrimalCharacterStatusValue::Type,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.CanGainLevel()
    // endereco: casamento de bytes com a build de referencia
    bool CanGainLevel() const
    {
        return NativeCall<bool>(this, "UPrimalCharacterStatusComponent.CanGainLevel()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.CanLevelUp(EPrimalCharacterStatusValue::Type,bool)
    // endereco: casamento de bytes com a build de referencia
    bool CanLevelUp(int a0, bool a1) const
    {
        return NativeCall<bool, int, bool>(this, "UPrimalCharacterStatusComponent.CanLevelUp(EPrimalCharacterStatusValue::Type,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.ChangedStatusState(EPrimalCharacterStatusState::Type,bool)
    // endereco: casamento de bytes com a build de referencia
    void ChangedStatusState(int a0, bool a1) const
    {
        NativeCall<void, int, bool>(this, "UPrimalCharacterStatusComponent.ChangedStatusState(EPrimalCharacterStatusState::Type,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.CharacterUpdatedInventory(bool)
    // endereco: casamento de bytes com a build de referencia
    void CharacterUpdatedInventory(bool a0) const
    {
        NativeCall<void, bool>(this, "UPrimalCharacterStatusComponent.CharacterUpdatedInventory(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalCharacterStatusComponent.ClearAllLevelUpPoints(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    void ClearAllLevelUpPoints(bool a0) const
    {
        NativeCall<void, bool>(this, "UPrimalCharacterStatusComponent.ClearAllLevelUpPoints(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalCharacterStatusComponent.ClearAllMutationPoints()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ClearAllMutationPoints() const
    {
        NativeCall<void>(this, "UPrimalCharacterStatusComponent.ClearAllMutationPoints()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.ClientSyncMaxStatusValues(TArray<float,TSizedDefaultAllocator<32
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=295+bytes40+chamadores=2]]
    void ClientSyncMaxStatusValues(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "UPrimalCharacterStatusComponent.ClientSyncMaxStatusValues(TArray<float,TSizedDefaultAllocator<32>>&,TArray<float,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.ClientSyncMaxStatusValues_Implementation(TArray<float,TSizedDefa
    // endereco: cache_pdb_25090264
    void ClientSyncMaxStatusValues_Implementation(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "UPrimalCharacterStatusComponent.ClientSyncMaxStatusValues_Implementation(TArray<float,TSizedDefaultAllocator<32>>&,TArray<float,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalCharacterStatusComponent.CopyPrimalStatusComponentValues(UPrimalCharacterStatusComponent*
    // endereco: casamento de bytes com a build de referencia
    void CopyPrimalStatusComponentValues(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalCharacterStatusComponent.CopyPrimalStatusComponentValues(UPrimalCharacterStatusComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.DrawLocalPlayerHUD(AShooterHUD*,float,bool)
    // endereco: casamento de bytes com a build de referencia
    void DrawLocalPlayerHUD(void* a0, float a1, bool a2) const
    {
        NativeCall<void, void*, float, bool>(this, "UPrimalCharacterStatusComponent.DrawLocalPlayerHUD(AShooterHUD*,float,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.DrawLocalPlayerHUDDescriptions(AShooterHUD*,double,float,bool)
    // endereco: casamento de bytes com a build de referencia
    void DrawLocalPlayerHUDDescriptions(void* a0, double a1, float a2, bool a3) const
    {
        NativeCall<void, void*, double, float, bool>(this, "UPrimalCharacterStatusComponent.DrawLocalPlayerHUDDescriptions(AShooterHUD*,double,float,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.GetBaseLevelFromLevelUpPoints(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    int GetBaseLevelFromLevelUpPoints(bool a0) const
    {
        return NativeCall<int, bool>(this, "UPrimalCharacterStatusComponent.GetBaseLevelFromLevelUpPoints(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterStatusComponent.GetCanLevelUpValue(EPrimalCharacterStatusValue::Type)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetCanLevelUpValue(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalCharacterStatusComponent.GetCanLevelUpValue(EPrimalCharacterStatusValue::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.GetCharacterLevel()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    int GetCharacterLevel() const
    {
        return NativeCall<int>(this, "UPrimalCharacterStatusComponent.GetCharacterLevel()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalCharacterStatusComponent.GetCraftingSpeedModifier()
    // endereco: cache_pdb_25090264
    float GetCraftingSpeedModifier() const
    {
        return NativeCall<float>(this, "UPrimalCharacterStatusComponent.GetCraftingSpeedModifier()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.GetDebugString()
    // endereco: casamento de bytes com a build de referencia
    void GetDebugString(void* retorno) const
    {
        NativeCall<void, void*>(this, "UPrimalCharacterStatusComponent.GetDebugString()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.GetDefaultCharacterStatusComponent()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDefaultCharacterStatusComponent() const
    {
        return NativeCall<void*>(this, "UPrimalCharacterStatusComponent.GetDefaultCharacterStatusComponent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.GetDinoFoodConsumptionRateMultiplier(float&)
    // endereco: casamento de bytes com a build de referencia
    void GetDinoFoodConsumptionRateMultiplier(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalCharacterStatusComponent.GetDinoFoodConsumptionRateMultiplier(float&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.GetDinoStatDistributionAgainstMax(EPrimalCharacterStatusValue::T
    // endereco: casamento de bytes com a build de referencia
    float GetDinoStatDistributionAgainstMax(int a0, bool a1, bool a2, bool a3) const
    {
        return NativeCall<float, int, bool, bool, bool>(this, "UPrimalCharacterStatusComponent.GetDinoStatDistributionAgainstMax(EPrimalCharacterStatusValue::Type,bool,bool,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterStatusComponent.GetDontUseValue(EPrimalCharacterStatusValue::Type)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetDontUseValue(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalCharacterStatusComponent.GetDontUseValue(EPrimalCharacterStatusValue::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.GetExperiencePercent()
    // endereco: casamento de bytes com a build de referencia
    float GetExperiencePercent() const
    {
        return NativeCall<float>(this, "UPrimalCharacterStatusComponent.GetExperiencePercent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.GetExperienceRequiredForNextLevelUp()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    float GetExperienceRequiredForNextLevelUp() const
    {
        return NativeCall<float>(this, "UPrimalCharacterStatusComponent.GetExperienceRequiredForNextLevelUp()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.GetExperienceRequiredForPreviousLevelUp()
    // endereco: casamento de bytes com a build de referencia
    float GetExperienceRequiredForPreviousLevelUp() const
    {
        return NativeCall<float>(this, "UPrimalCharacterStatusComponent.GetExperienceRequiredForPreviousLevelUp()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalCharacterStatusComponent.GetExtraCharacterLevel()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    int GetExtraCharacterLevel() const
    {
        return NativeCall<int>(this, "UPrimalCharacterStatusComponent.GetExtraCharacterLevel()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.GetJumpZModifier()
    // endereco: casamento de bytes com a build de referencia
    float GetJumpZModifier() const
    {
        return NativeCall<float>(this, "UPrimalCharacterStatusComponent.GetJumpZModifier()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterStatusComponent.GetLevelUpPoints(EPrimalCharacterStatusValue::Type,bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetLevelUpPoints(int a0, bool a1) const
    {
        return NativeCall<void*, int, bool>(this, "UPrimalCharacterStatusComponent.GetLevelUpPoints(EPrimalCharacterStatusValue::Type,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaul
    // endereco: casamento de bytes com a build de referencia
    void GetLifetimeReplicatedProps(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalCharacterStatusComponent.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.GetMaxLevel()
    // endereco: casamento de bytes com a build de referencia
    int GetMaxLevel() const
    {
        return NativeCall<int>(this, "UPrimalCharacterStatusComponent.GetMaxLevel()");
    }

    // jogo_confirmou_dump
    //   UPrimalCharacterStatusComponent.GetMeleeDamageModifier()
    // endereco: casamento de bytes com a build de referencia
    float GetMeleeDamageModifier() const
    {
        return NativeCall<float>(this, "UPrimalCharacterStatusComponent.GetMeleeDamageModifier()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.GetMovementSpeedModifier()
    // endereco: casamento de bytes com a build de referencia
    float GetMovementSpeedModifier() const
    {
        return NativeCall<float>(this, "UPrimalCharacterStatusComponent.GetMovementSpeedModifier()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterStatusComponent.GetMutationPoints(EPrimalCharacterStatusValue::Type)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    BrzPonteiro GetMutationPoints(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalCharacterStatusComponent.GetMutationPoints(EPrimalCharacterStatusValue::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.GetNumLevelUpsAvailable()
    // endereco: casamento de bytes com a build de referencia
    int GetNumLevelUpsAvailable() const
    {
        return NativeCall<int>(this, "UPrimalCharacterStatusComponent.GetNumLevelUpsAvailable()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterStatusComponent.GetRawStatusValueRecoveryRate(EPrimalCharacterStatusValue::Type)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro GetRawStatusValueRecoveryRate(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalCharacterStatusComponent.GetRawStatusValueRecoveryRate(EPrimalCharacterStatusValue::Type)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalCharacterStatusComponent.GetStatusCompUsesStat(int,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    bool GetStatusCompUsesStat(int a0, bool a1) const
    {
        return NativeCall<bool, int, bool>(this, "UPrimalCharacterStatusComponent.GetStatusCompUsesStat(int,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.GetStatusMaxValueString(EPrimalCharacterStatusValue::Type,bool)
    // endereco: casamento de bytes com a build de referencia
    void GetStatusMaxValueString(void* retorno, int a0, bool a1) const
    {
        NativeCall<void, void*, int, bool>(this, "UPrimalCharacterStatusComponent.GetStatusMaxValueString(EPrimalCharacterStatusValue::Type,bool)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.GetStatusNameString(EPrimalCharacterStatusValue::Type)
    // endereco: casamento de bytes com a build de referencia
    void GetStatusNameString(void* retorno, int a0) const
    {
        NativeCall<void, void*, int>(this, "UPrimalCharacterStatusComponent.GetStatusNameString(EPrimalCharacterStatusValue::Type)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.GetStatusValueRecoveryRate(EPrimalCharacterStatusValue::Type)
    // endereco: casamento de bytes com a build de referencia
    float GetStatusValueRecoveryRate(int a0) const
    {
        return NativeCall<float, int>(this, "UPrimalCharacterStatusComponent.GetStatusValueRecoveryRate(EPrimalCharacterStatusValue::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.GetStatusValueString(EPrimalCharacterStatusValue::Type,bool)
    // endereco: casamento de bytes com a build de referencia
    void GetStatusValueString(void* retorno, int a0, bool a1) const
    {
        NativeCall<void, void*, int, bool>(this, "UPrimalCharacterStatusComponent.GetStatusValueString(EPrimalCharacterStatusValue::Type,bool)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.HasExperienceForLevelUp()
    // endereco: casamento de bytes com a build de referencia
    bool HasExperienceForLevelUp() const
    {
        return NativeCall<bool>(this, "UPrimalCharacterStatusComponent.HasExperienceForLevelUp()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalCharacterStatusComponent.HasStatusValueModifierWithInstigator(AActor*,bool)
    // endereco: casamento de bytes com a build de referencia
    bool HasStatusValueModifierWithInstigator(void* a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "UPrimalCharacterStatusComponent.HasStatusValueModifierWithInstigator(AActor*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.InitializeComponent()
    // endereco: casamento de bytes com a build de referencia
    void InitializeComponent() const
    {
        NativeCall<void>(this, "UPrimalCharacterStatusComponent.InitializeComponent()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterStatusComponent.IsAlignedWithTeam(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro IsAlignedWithTeam(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalCharacterStatusComponent.IsAlignedWithTeam(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.IsAtMaxExperience()
    // endereco: casamento de bytes com a build de referencia
    bool IsAtMaxExperience() const
    {
        return NativeCall<bool>(this, "UPrimalCharacterStatusComponent.IsAtMaxExperience()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalCharacterStatusComponent.IsAtMaxLevel()
    // endereco: casamento de bytes com a build de referencia
    bool IsAtMaxLevel() const
    {
        return NativeCall<bool>(this, "UPrimalCharacterStatusComponent.IsAtMaxLevel()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.IsInStatusState(EPrimalCharacterStatusState::Type)
    // endereco: casamento de bytes com a build de referencia
    bool IsInStatusState(int a0) const
    {
        return NativeCall<bool, int>(this, "UPrimalCharacterStatusComponent.IsInStatusState(EPrimalCharacterStatusState::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.ModifyCurrentStatusValue(EPrimalCharacterStatusValue::Type,float
    // endereco: casamento de bytes com a build de referencia
    float ModifyCurrentStatusValue(int a0, float a1, bool a2, bool a3, bool a4, bool a5, void* a6, bool a7, bool a8) const
    {
        return NativeCall<float, int, float, bool, bool, bool, bool, void*, bool, bool>(this, "UPrimalCharacterStatusComponent.ModifyCurrentStatusValue(EPrimalCharacterStatusValue::Type,float,bool,bool,bool,bool,TSubclassOf<UDamageType>,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalCharacterStatusComponent.NetSetMaxTamingEffectivenessBaseLevelMultiplier(float)
    // endereco: casamento de bytes com a build de referencia
    void NetSetMaxTamingEffectivenessBaseLevelMultiplier(float a0) const
    {
        NativeCall<void, float>(this, "UPrimalCharacterStatusComponent.NetSetMaxTamingEffectivenessBaseLevelMultiplier(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterStatusComponent.NetSetMaxTamingEffectivenessBaseLevelMultiplier_Implementation(f
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro NetSetMaxTamingEffectivenessBaseLevelMultiplier_Implementation(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalCharacterStatusComponent.NetSetMaxTamingEffectivenessBaseLevelMultiplier_Implementation(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.NetSyncMaxStatusValues(TArray<float,TSizedDefaultAllocator<32>>&
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=295+bytes40+chamadores=6]]
    void NetSyncMaxStatusValues(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "UPrimalCharacterStatusComponent.NetSyncMaxStatusValues(TArray<float,TSizedDefaultAllocator<32>>&,TArray<float,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.NetSyncMaxStatusValues_Implementation(TArray<float,TSizedDefault
    // endereco: casamento de bytes com a build de referencia
    void NetSyncMaxStatusValues_Implementation(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "UPrimalCharacterStatusComponent.NetSyncMaxStatusValues_Implementation(TArray<float,TSizedDefaultAllocator<32>>&,TArray<float,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.OnJumped()
    // endereco: casamento de bytes com a build de referencia
    void OnJumped() const
    {
        NativeCall<void>(this, "UPrimalCharacterStatusComponent.OnJumped()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalCharacterStatusComponent.OnMaxStatusValueChanged()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=1122+grafo=22/22]]
    void OnMaxStatusValueChanged() const
    {
        NativeCall<void>(this, "UPrimalCharacterStatusComponent.OnMaxStatusValueChanged()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalCharacterStatusComponent.OnRep_CurrentStatusValues()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    void OnRep_CurrentStatusValues() const
    {
        NativeCall<void>(this, "UPrimalCharacterStatusComponent.OnRep_CurrentStatusValues()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalCharacterStatusComponent.OnRep_GlobalBaseLevelMaxStatusValues()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    void OnRep_GlobalBaseLevelMaxStatusValues() const
    {
        NativeCall<void>(this, "UPrimalCharacterStatusComponent.OnRep_GlobalBaseLevelMaxStatusValues()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalCharacterStatusComponent.OnRep_GlobalCurrentStatusValues()
    // endereco: cache_pdb_25090264
    void OnRep_GlobalCurrentStatusValues() const
    {
        NativeCall<void>(this, "UPrimalCharacterStatusComponent.OnRep_GlobalCurrentStatusValues()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalCharacterStatusComponent.OnRep_GlobalMaxStatusValues()
    // endereco: cache_pdb_25090264
    void OnRep_GlobalMaxStatusValues() const
    {
        NativeCall<void>(this, "UPrimalCharacterStatusComponent.OnRep_GlobalMaxStatusValues()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalCharacterStatusComponent.OnRep_ReplicatedExperiencePoints()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    void OnRep_ReplicatedExperiencePoints() const
    {
        NativeCall<void>(this, "UPrimalCharacterStatusComponent.OnRep_ReplicatedExperiencePoints()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterStatusComponent.OverrideBestStatusState(EPrimalCharacterStatusState::Type,EPrima
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OverrideBestStatusState(int a0, int a1, float a2, void* a3) const
    {
        return NativeCall<void*, int, int, float, void*>(this, "UPrimalCharacterStatusComponent.OverrideBestStatusState(EPrimalCharacterStatusState::Type,EPrimalCharacterStatusValue::Type,float,signedchar&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterStatusComponent.PredictSingleMaxStatusValue(unsignedchar,EPrimalCharacterStatusV
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PredictSingleMaxStatusValue(unsigned char a0, int a1) const
    {
        return NativeCall<void*, unsigned char, int>(this, "UPrimalCharacterStatusComponent.PredictSingleMaxStatusValue(unsignedchar,EPrimalCharacterStatusValue::Type)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.RefreshInsulation()
    // endereco: casamento de bytes com a build de referencia
    void RefreshInsulation() const
    {
        NativeCall<void>(this, "UPrimalCharacterStatusComponent.RefreshInsulation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.RefreshTemperature()
    // endereco: casamento de bytes com a build de referencia
    void RefreshTemperature() const
    {
        NativeCall<void>(this, "UPrimalCharacterStatusComponent.RefreshTemperature()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.RemoveStatusValueModifierByIndex(int)
    // endereco: casamento de bytes com a build de referencia
    void RemoveStatusValueModifierByIndex(int a0) const
    {
        NativeCall<void, int>(this, "UPrimalCharacterStatusComponent.RemoveStatusValueModifierByIndex(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalCharacterStatusComponent.RemoveStatusValueModifierByInstigator(AActor*)
    // endereco: casamento de bytes com a build de referencia
    void RemoveStatusValueModifierByInstigator(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalCharacterStatusComponent.RemoveStatusValueModifierByInstigator(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.RescaleAllStats()
    // endereco: casamento de bytes com a build de referencia
    void RescaleAllStats() const
    {
        NativeCall<void>(this, "UPrimalCharacterStatusComponent.RescaleAllStats()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.RescaleMaxStat(EPrimalCharacterStatusValue::Type,float,bool)
    // endereco: casamento de bytes com a build de referencia
    void RescaleMaxStat(int a0, float a1, bool a2) const
    {
        NativeCall<void, int, float, bool>(this, "UPrimalCharacterStatusComponent.RescaleMaxStat(EPrimalCharacterStatusValue::Type,float,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.Serialize(FArchive&)
    // endereco: casamento de bytes com a build de referencia
    void Serialize(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalCharacterStatusComponent.Serialize(FArchive&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.ServerApplyLevelUp(EPrimalCharacterStatusValue::Type,AShooterPla
    // endereco: casamento de bytes com a build de referencia
    void ServerApplyLevelUp(int a0, void* a1, bool a2) const
    {
        NativeCall<void, int, void*, bool>(this, "UPrimalCharacterStatusComponent.ServerApplyLevelUp(EPrimalCharacterStatusValue::Type,AShooterPlayerController*,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.ServerApplyMutagen(bool)
    // endereco: casamento de bytes com a build de referencia
    void ServerApplyMutagen(bool a0) const
    {
        NativeCall<void, bool>(this, "UPrimalCharacterStatusComponent.ServerApplyMutagen(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.ServerForceUpdateMaxStatValues()
    // endereco: casamento de bytes com a build de referencia
    void ServerForceUpdateMaxStatValues() const
    {
        NativeCall<void>(this, "UPrimalCharacterStatusComponent.ServerForceUpdateMaxStatValues()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.ServerSyncReplicatedValues()
    // endereco: casamento de bytes com a build de referencia
    void ServerSyncReplicatedValues() const
    {
        NativeCall<void>(this, "UPrimalCharacterStatusComponent.ServerSyncReplicatedValues()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.SetAllStatsToMaximum()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void SetAllStatsToMaximum() const
    {
        NativeCall<void>(this, "UPrimalCharacterStatusComponent.SetAllStatsToMaximum()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.SetAllStatsToMaximumExcluding(EPrimalCharacterStatusValue::Type)
    // endereco: casamento de bytes com a build de referencia
    void SetAllStatsToMaximumExcluding(int a0) const
    {
        NativeCall<void, int>(this, "UPrimalCharacterStatusComponent.SetAllStatsToMaximumExcluding(EPrimalCharacterStatusValue::Type)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterStatusComponent.SetAllTamedLevels(TArray<int,TSizedDefaultAllocator<32>>,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetAllTamedLevels(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "UPrimalCharacterStatusComponent.SetAllTamedLevels(TArray<int,TSizedDefaultAllocator<32>>,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.SetBaseLevel(int,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetBaseLevel(int a0, bool a1) const
    {
        NativeCall<void, int, bool>(this, "UPrimalCharacterStatusComponent.SetBaseLevel(int,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.SetBaseLevelCustomized(int,TArray<FStatValuePair,TSizedDefaultAl
    // endereco: casamento de bytes com a build de referencia
    void SetBaseLevelCustomized(int a0, void* a1, void* a2, bool a3) const
    {
        NativeCall<void, int, void*, void*, bool>(this, "UPrimalCharacterStatusComponent.SetBaseLevelCustomized(int,TArray<FStatValuePair,TSizedDefaultAllocator<32>>&,TArray<TEnumAsByte<EPrimalCharacterStatusValue::Type>,TSizedDefaultAllocator<32>>&,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.SetBaseLevelNoStatChange(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    void SetBaseLevelNoStatChange(int a0) const
    {
        NativeCall<void, int>(this, "UPrimalCharacterStatusComponent.SetBaseLevelNoStatChange(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalCharacterStatusComponent.SetExtraCharacterLevel(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    void SetExtraCharacterLevel(int a0) const
    {
        NativeCall<void, int>(this, "UPrimalCharacterStatusComponent.SetExtraCharacterLevel(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterStatusComponent.SetLevelUpPoints(EPrimalCharacterStatusValue::Type,bool,int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro SetLevelUpPoints(int a0, bool a1, int a2) const
    {
        return NativeCall<void*, int, bool, int>(this, "UPrimalCharacterStatusComponent.SetLevelUpPoints(EPrimalCharacterStatusValue::Type,bool,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterStatusComponent.SetLevelUpStatWeightOverrides(TArray<float,TSizedDefaultAllocato
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetLevelUpStatWeightOverrides(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalCharacterStatusComponent.SetLevelUpStatWeightOverrides(TArray<float,TSizedDefaultAllocator<32>>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.SetMaxStatusValue(EPrimalCharacterStatusValue::Type,float)
    // endereco: casamento de bytes com a build de referencia
    void SetMaxStatusValue(int a0, float a1) const
    {
        NativeCall<void, int, float>(this, "UPrimalCharacterStatusComponent.SetMaxStatusValue(EPrimalCharacterStatusValue::Type,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCharacterStatusComponent.SetMutationPoints(EPrimalCharacterStatusValue::Type,int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    BrzPonteiro SetMutationPoints(int a0, int a1) const
    {
        return NativeCall<void*, int, int>(this, "UPrimalCharacterStatusComponent.SetMutationPoints(EPrimalCharacterStatusValue::Type,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.SetTameable(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetTameable(bool a0) const
    {
        NativeCall<void, bool>(this, "UPrimalCharacterStatusComponent.SetTameable(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.SetTamed(float,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetTamed(float a0, bool a1) const
    {
        NativeCall<void, float, bool>(this, "UPrimalCharacterStatusComponent.SetTamed(float,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.TickStatus(float,bool)
    // endereco: casamento de bytes com a build de referencia
    void TickStatus(float a0, bool a1) const
    {
        NativeCall<void, float, bool>(this, "UPrimalCharacterStatusComponent.TickStatus(float,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.UninitializeComponent()
    // endereco: casamento de bytes com a build de referencia
    void UninitializeComponent() const
    {
        NativeCall<void>(this, "UPrimalCharacterStatusComponent.UninitializeComponent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.UpdateInventoryWeight(APrimalCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void UpdateInventoryWeight(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalCharacterStatusComponent.UpdateInventoryWeight(APrimalCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.UpdateStatusValue(EPrimalCharacterStatusValue::Type,float,bool)
    // endereco: casamento de bytes com a build de referencia
    void UpdateStatusValue(int a0, float a1, bool a2) const
    {
        NativeCall<void, int, float, bool>(this, "UPrimalCharacterStatusComponent.UpdateStatusValue(EPrimalCharacterStatusValue::Type,float,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.UpdateWeightStat(bool)
    // endereco: casamento de bytes com a build de referencia
    void UpdateWeightStat(bool a0) const
    {
        NativeCall<void, bool>(this, "UPrimalCharacterStatusComponent.UpdateWeightStat(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.UpdatedCurrentStatusValue(EPrimalCharacterStatusValue::Type,floa
    // endereco: casamento de bytes com a build de referencia
    void UpdatedCurrentStatusValue(int a0, float a1, bool a2, void* a3, bool a4, bool a5) const
    {
        NativeCall<void, int, float, bool, void*, bool, bool>(this, "UPrimalCharacterStatusComponent.UpdatedCurrentStatusValue(EPrimalCharacterStatusValue::Type,float,bool,TSubclassOf<UDamageType>,bool,bool)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalCharacterStatusComponent.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocat
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=1344+grafo=32/32]]
    void ValidateGeneratedRepEnums(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalCharacterStatusComponent.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", a0);
    }

    FieldArray<float> AdditionalStatusValuesField() const
    { return { (void*)this, "UPrimalCharacterStatusComponent.AdditionalStatusValues" }; }
    FieldArray<float> AmountMaxGainedPerLevelUpValueField() const
    { return { (void*)this, "UPrimalCharacterStatusComponent.AmountMaxGainedPerLevelUpValue" }; }
    FieldArray<float> AmountMaxGainedPerLevelUpValueTamedField() const
    { return { (void*)this, "UPrimalCharacterStatusComponent.AmountMaxGainedPerLevelUpValueTamed" }; }
    float& BabyDinoConsumingFoodRateMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.BabyDinoConsumingFoodRateMultiplier"); }
    float& BabyDinoStarvationHealthDecreaseRateMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.BabyDinoStarvationHealthDecreaseRateMultiplier"); }
    float& BabyGestationConsumingFoodRateMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.BabyGestationConsumingFoodRateMultiplier"); }
    float& BabyMaxHealthPercentField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.BabyMaxHealthPercent"); }
    int& BaseCharacterLevelField() const
    { return *GetNativePointerField<int*>(this, "UPrimalCharacterStatusComponent.BaseCharacterLevel"); }
    float& BaseFoodConsumptionRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.BaseFoodConsumptionRate"); }
    FieldArray<float> BaseLevelMaxStatusValuesField() const
    { return { (void*)this, "UPrimalCharacterStatusComponent.BaseLevelMaxStatusValues" }; }
    float& BaseWaterConsumptionRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.BaseWaterConsumptionRate"); }
    FieldArray<unsigned char> CanLevelUpValueField() const
    { return { (void*)this, "UPrimalCharacterStatusComponent.CanLevelUpValue" }; }
    int& CharacterStatusComponentPriorityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalCharacterStatusComponent.CharacterStatusComponentPriority"); }
    float& CheatMaxWeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.CheatMaxWeight"); }
    float& CraftEarnXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.CraftEarnXPMultiplier"); }
    float& CrouchedStaminaConsumptionMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.CrouchedStaminaConsumptionMultiplier"); }
    float& CrouchedWaterFoodConsumptionMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.CrouchedWaterFoodConsumptionMultiplier"); }
    FieldArray<char> CurrentStatusStatesField() const
    { return { (void*)this, "UPrimalCharacterStatusComponent.CurrentStatusStates" }; }
    FieldArray<float> CurrentStatusValuesField() const
    { return { (void*)this, "UPrimalCharacterStatusComponent.CurrentStatusValues" }; }
    float& CurrentStatusValuesReplicationIntervalField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.CurrentStatusValuesReplicationInterval"); }
    float& DefaultHyperthermicInsulationField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.DefaultHyperthermicInsulation"); }
    float& DefaultHypothermicInsulationField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.DefaultHypothermicInsulation"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SwimmingStaminaRecoveryRateMultiplier` +12, medido na build 25090264
    //  (offset absoluto medido: 0xB78; confianca alta)
    float& DefaultMaxOxygenField() const
    { return BrzCampoAncorado<float>(this, "SwimmingStaminaRecoveryRateMultiplier", 12); }
    float& DehydrationStaminaRecoveryRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.DehydrationStaminaRecoveryRate"); }
    float& DehydrationTorpidityMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.DehydrationTorpidityMultiplier"); }
    float& DehyrdationHealthConsumptionRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.DehyrdationHealthConsumptionRate"); }
    float& DehyrdationTorpidityIncreaseRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.DehyrdationTorpidityIncreaseRate"); }
    float& DinoImprintingQualityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.DinoImprintingQuality"); }
    FieldArray<float> DinoMaxStatAddMultiplierImprintingField() const
    { return { (void*)this, "UPrimalCharacterStatusComponent.DinoMaxStatAddMultiplierImprinting" }; }
    float& DinoRiderWeightMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.DinoRiderWeightMultiplier"); }
    float& DinoTamedAdultConsumingFoodRateMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.DinoTamedAdultConsumingFoodRateMultiplier"); }
    FieldArray<unsigned char> DontUseValueField() const
    { return { (void*)this, "UPrimalCharacterStatusComponent.DontUseValue" }; }
    TArray<USoundBase*>& EnteredStatusStateSoundsField() const
    { return *GetNativePointerField<TArray<USoundBase*>*>(this, "UPrimalCharacterStatusComponent.EnteredStatusStateSounds"); }
    TArray<USoundBase*>& ExitStatusStateSoundsField() const
    { return *GetNativePointerField<TArray<USoundBase*>*>(this, "UPrimalCharacterStatusComponent.ExitStatusStateSounds"); }
    float& ExperienceAutomaticConsciousIncreaseSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.ExperienceAutomaticConsciousIncreaseSpeed"); }
    float& ExperiencePointsField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.ExperiencePoints"); }
    float& ExplorerNoteEarnXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.ExplorerNoteEarnXPMultiplier"); }
    float& ExtraBabyDinoConsumingFoodRateMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.ExtraBabyDinoConsumingFoodRateMultiplier"); }
    unsigned short& ExtraCharacterLevelField() const
    { return *GetNativePointerField<unsigned short*>(this, "UPrimalCharacterStatusComponent.ExtraCharacterLevel"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SwimmingStaminaRecoveryRateMultiplier` +8, medido na build 25090264
    //  (offset absoluto medido: 0xB74; confianca alta)
    float& ExtraFoodConsumptionMultiplierField() const
    { return BrzCampoAncorado<float>(this, "SwimmingStaminaRecoveryRateMultiplier", 8); }
    float& ExtraOxygenSpeedStatMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.ExtraOxygenSpeedStatMultiplier"); }
    float& ExtraTamedDinoDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.ExtraTamedDinoDamageMultiplier"); }
    float& ExtraTamedHealthMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.ExtraTamedHealthMultiplier"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SwimmingStaminaRecoveryRateMultiplier` +4, medido na build 25090264
    //  (offset absoluto medido: 0xB70; confianca alta)
    float& ExtraWaterConsumptionMultiplierField() const
    { return BrzCampoAncorado<float>(this, "SwimmingStaminaRecoveryRateMultiplier", 4); }
    BrzCampoPonteiro ExtraWidgetClassesForStatPanelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCharacterStatusComponent.ExtraWidgetClassesForStatPanel")); }
    float& ExtraWildDinoDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.ExtraWildDinoDamageMultiplier"); }
    float& FoodConsumptionMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.FoodConsumptionMultiplier"); }
    UTexture2D*& FoodStatusIconBackgroundOverrideField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalCharacterStatusComponent.FoodStatusIconBackgroundOverride"); }
    UTexture2D*& FoodStatusIconForegroundOverrideField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalCharacterStatusComponent.FoodStatusIconForegroundOverride"); }
    FString& FoodStatusNameOverrideField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalCharacterStatusComponent.FoodStatusNameOverride"); }
    float& FortitudeTorpidityDecreaseMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.FortitudeTorpidityDecreaseMultiplier"); }
    float& FortitudeTorpidityIncreaseResistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.FortitudeTorpidityIncreaseResistance"); }
    float& GenericEarnXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.GenericEarnXPMultiplier"); }
    float& GenericXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.GenericXPMultiplier"); }
    float& HarvestEarnXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HarvestEarnXPMultiplier"); }
    float& HealthRecoveryDecreaseFoodMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HealthRecoveryDecreaseFoodMultiplier"); }
    float& HyperCharacterInsulationValueField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HyperCharacterInsulationValue"); }
    float& HyperthermiaDecreaseWaterMultiplierBaseField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HyperthermiaDecreaseWaterMultiplierBase"); }
    float& HyperthermiaDecreaseWaterMultiplierPerDegreeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HyperthermiaDecreaseWaterMultiplierPerDegree"); }
    float& HyperthermiaTemperatureThresholdField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HyperthermiaTemperatureThreshold"); }
    float& HyperthermicHealthDecreaseRateBaseField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HyperthermicHealthDecreaseRateBase"); }
    float& HyperthermicHealthDecreaseRatePerDegreeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HyperthermicHealthDecreaseRatePerDegree"); }
    float& HypoCharacterInsulationValueField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HypoCharacterInsulationValue"); }
    float& HypothermiaDecreaseFoodMultiplierBaseField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HypothermiaDecreaseFoodMultiplierBase"); }
    float& HypothermiaDecreaseFoodMultiplierPerDegreeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HypothermiaDecreaseFoodMultiplierPerDegree"); }
    float& HypothermiaTemperatureThresholdField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HypothermiaTemperatureThreshold"); }
    float& HypothermicHealthDecreaseRateBaseField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HypothermicHealthDecreaseRateBase"); }
    float& HypothermicHealthDecreaseRatePerDegreeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.HypothermicHealthDecreaseRatePerDegree"); }
    float& InjuredSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.InjuredSpeedModifier"); }
    float& InjuredTorpidityIncreaseMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.InjuredTorpidityIncreaseMultiplier"); }
    float& InsulationHyperthermiaOffsetExponentField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.InsulationHyperthermiaOffsetExponent"); }
    float& InsulationHyperthermiaOffsetScalerField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.InsulationHyperthermiaOffsetScaler"); }
    float& InsulationHypothermiaOffsetExponentField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.InsulationHypothermiaOffsetExponent"); }
    float& InsulationHypothermiaOffsetScalerField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.InsulationHypothermiaOffsetScaler"); }
    float& JumpStaminaConsumptionField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.JumpStaminaConsumption"); }
    float& KillEarnXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.KillEarnXPMultiplier"); }
    float& KillXPMultiplierPerCharacterLevelField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.KillXPMultiplierPerCharacterLevel"); }
    float& KnockedOutTorpidityRecoveryRateMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.KnockedOutTorpidityRecoveryRateMultiplier"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CurrentStatusStates` +12, medido na build 25090264
    //  (offset absoluto medido: 0x9B0; confianca media)
    void*& LastDecreasedStatusValuesTimesField() const
    { return BrzCampoAncorado<void*>(this, "CurrentStatusStates", 12); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CurrentStatusStates` +300, medido na build 25090264
    //  (offset absoluto medido: 0xAD0; confianca baixa)
    void*& LastDepletedStatusValuesTimesField() const
    { return BrzCampoAncorado<void*>(this, "CurrentStatusStates", 300); }
    float& LastHyperthermalCharacterInsulationValueField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.LastHyperthermalCharacterInsulationValue"); }
    float& LastHypothermalCharacterInsulationValueField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.LastHypothermalCharacterInsulationValue"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CurrentStatusStates` +108, medido na build 25090264
    //  (offset absoluto medido: 0xA10; confianca media)
    void*& LastIncreasedStatusValuesTimesField() const
    { return BrzCampoAncorado<void*>(this, "CurrentStatusStates", 108); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CurrentStatusStates` +204, medido na build 25090264
    //  (offset absoluto medido: 0xA70; confianca baixa)
    void*& LastMaxedStatusValuesTimesField() const
    { return BrzCampoAncorado<void*>(this, "CurrentStatusStates", 204); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SwimmingStaminaRecoveryRateMultiplier` +20, medido na build 25090264
    //  (offset absoluto medido: 0xB80; confianca alta)
    double& LastReplicatedCurrentStatusValuesTimeField() const
    { return BrzCampoAncorado<double>(this, "SwimmingStaminaRecoveryRateMultiplier", 20); }
    unsigned char& LevelExperienceRampTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalCharacterStatusComponent.LevelExperienceRampType"); }
    float& MaxExperiencePointsField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.MaxExperiencePoints"); }
    FieldArray<unsigned char> MaxGainedPerLevelUpValueIsPercentField() const
    { return { (void*)this, "UPrimalCharacterStatusComponent.MaxGainedPerLevelUpValueIsPercent" }; }
    FieldArray<float> MaxLevelUpMultiplierField() const
    { return { (void*)this, "UPrimalCharacterStatusComponent.MaxLevelUpMultiplier" }; }
    unsigned char& MaxStatusValueToAutoUpdateField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalCharacterStatusComponent.MaxStatusValueToAutoUpdate"); }
    FieldArray<float> MaxStatusValuesField() const
    { return { (void*)this, "UPrimalCharacterStatusComponent.MaxStatusValues" }; }
    float& MaxTamingEffectivenessBaseLevelMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.MaxTamingEffectivenessBaseLevelMultiplier"); }
    float& MinInventoryWeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.MinInventoryWeight"); }
    float& MountedDinoDinoWeightMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.MountedDinoDinoWeightMultiplier"); }
    float& MountedReceiveRiderXPPercentField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.MountedReceiveRiderXPPercent"); }
    float& MovingStaminaRecoveryRateMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.MovingStaminaRecoveryRateMultiplier"); }
    FieldArray<float> MutationMultiplierField() const
    { return { (void*)this, "UPrimalCharacterStatusComponent.MutationMultiplier" }; }
    FieldArray<unsigned char> NumberOfLevelUpPointsAppliedField() const
    { return { (void*)this, "UPrimalCharacterStatusComponent.NumberOfLevelUpPointsApplied" }; }
    FieldArray<unsigned char> NumberOfLevelUpPointsAppliedTamedField() const
    { return { (void*)this, "UPrimalCharacterStatusComponent.NumberOfLevelUpPointsAppliedTamed" }; }
    FieldArray<unsigned char> NumberOfMutationsAppliedTamedField() const
    { return { (void*)this, "UPrimalCharacterStatusComponent.NumberOfMutationsAppliedTamed" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SwimmingStaminaRecoveryRateMultiplier` +32, medido na build 25090264
    //  (offset absoluto medido: 0xB8C; confianca alta)
    float& OriginalMaxTorporField() const
    { return BrzCampoAncorado<float>(this, "SwimmingStaminaRecoveryRateMultiplier", 32); }
    float& PoopItemFoodConsumptionCacheField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.PoopItemFoodConsumptionCache"); }
    float& PoopItemMaxFoodConsumptionIntervalField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.PoopItemMaxFoodConsumptionInterval"); }
    float& PoopItemMinFoodConsumptionIntervalField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.PoopItemMinFoodConsumptionInterval"); }
    float& ProneStaminaConsumptionMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.ProneStaminaConsumptionMultiplier"); }
    float& ProneWaterFoodConsumptionMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.ProneWaterFoodConsumptionMultiplier"); }
    FieldArray<unsigned char> RecoveryRateIsPercentField() const
    { return { (void*)this, "UPrimalCharacterStatusComponent.RecoveryRateIsPercent" }; }
    FieldArray<float> RecoveryRateStatusValueField() const
    { return { (void*)this, "UPrimalCharacterStatusComponent.RecoveryRateStatusValue" }; }
    BrzCampoPonteiro RegainOxygenDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCharacterStatusComponent.RegainOxygenDamageType")); }
    FieldArray<float> ReplicatedBaseLevelMaxStatusValuesField() const
    { return { (void*)this, "UPrimalCharacterStatusComponent.ReplicatedBaseLevelMaxStatusValues" }; }
    FieldArray<float> ReplicatedCurrentStatusValuesField() const
    { return { (void*)this, "UPrimalCharacterStatusComponent.ReplicatedCurrentStatusValues" }; }
    float& ReplicatedExperiencePointsField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.ReplicatedExperiencePoints"); }
    FieldArray<float> ReplicatedGlobalCurrentStatusValuesField() const
    { return { (void*)this, "UPrimalCharacterStatusComponent.ReplicatedGlobalCurrentStatusValues" }; }
    FieldArray<float> ReplicatedGlobalMaxStatusValuesField() const
    { return { (void*)this, "UPrimalCharacterStatusComponent.ReplicatedGlobalMaxStatusValues" }; }
    float& RunningStaminaConsumptionRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.RunningStaminaConsumptionRate"); }
    float& ShareXPWithTribeRangeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.ShareXPWithTribeRange"); }
    FName& SkillTreeQuickAccessField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalCharacterStatusComponent.SkillTreeQuickAccess"); }
    FieldArray<unsigned char> SkipWildLevelUpValueField() const
    { return { (void*)this, "UPrimalCharacterStatusComponent.SkipWildLevelUpValue" }; }
    float& SpecialEarnXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.SpecialEarnXPMultiplier"); }
    float& StaminaConsumptionDecreaseFoodMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.StaminaConsumptionDecreaseFoodMultiplier"); }
    float& StaminaConsumptionDecreaseWaterMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.StaminaConsumptionDecreaseWaterMultiplier"); }
    float& StaminaRecoveryDecreaseFoodMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.StaminaRecoveryDecreaseFoodMultiplier"); }
    float& StaminaRecoveryDecreaseWaterMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.StaminaRecoveryDecreaseWaterMultiplier"); }
    float& StaminaRecoveryExtraResourceDecreaseMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.StaminaRecoveryExtraResourceDecreaseMultiplier"); }
    float& StarvationHealthConsumptionRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.StarvationHealthConsumptionRate"); }
    float& StarvationTorpidityIncreaseRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.StarvationTorpidityIncreaseRate"); }
    float& StarvationTorpidityMultuplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.StarvationTorpidityMultuplier"); }
    FieldArray<FPrimalCharacterStatusStateThresholds> StatusStateThresholdsField() const
    { return { (void*)this, "UPrimalCharacterStatusComponent.StatusStateThresholds" }; }
    TArray<void*>& StatusValueModifierDescriptionIndicesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalCharacterStatusComponent.StatusValueModifierDescriptionIndices"); }
    TArray<void*>& StatusValueModifiersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalCharacterStatusComponent.StatusValueModifiers"); }
    TArray<void*>& StatusValueNameOverridesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalCharacterStatusComponent.StatusValueNameOverrides"); }
    BrzCampoPonteiro StatusValueTooltipStringsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalCharacterStatusComponent.StatusValueTooltipStrings")); }
    float& SubmergedOxygenDecreaseSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.SubmergedOxygenDecreaseSpeed"); }
    float& SubmergedWaterIncreaseRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.SubmergedWaterIncreaseRate"); }
    float& SuffocationHealthPercentDecreaseSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.SuffocationHealthPercentDecreaseSpeed"); }
    float& SwimmingOrFlyingStaminaConsumptionRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.SwimmingOrFlyingStaminaConsumptionRate"); }
    float& SwimmingStaminaRecoveryRateMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.SwimmingStaminaRecoveryRateMultiplier"); }
    float& TamedBaseHealthMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.TamedBaseHealthMultiplier"); }
    float& TamedIneffectivenessModifierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.TamedIneffectivenessModifier"); }
    float& TamedLandDinoSwimSpeedLevelUpEffectivenessField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.TamedLandDinoSwimSpeedLevelUpEffectiveness"); }
    float& TamingIneffectivenessMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.TamingIneffectivenessMultiplier"); }
    FieldArray<float> TamingMaxStatAdditionsField() const
    { return { (void*)this, "UPrimalCharacterStatusComponent.TamingMaxStatAdditions" }; }
    FieldArray<float> TamingMaxStatMultipliersField() const
    { return { (void*)this, "UPrimalCharacterStatusComponent.TamingMaxStatMultipliers" }; }
    float& TheMaxTorporIncreasePerBaseLevelField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.TheMaxTorporIncreasePerBaseLevel"); }
    FieldArray<float> TimeToRecoverAfterDecreaseStatusValueField() const
    { return { (void*)this, "UPrimalCharacterStatusComponent.TimeToRecoverAfterDecreaseStatusValue" }; }
    FieldArray<float> TimeToRecoverAfterDepletionStatusValueField() const
    { return { (void*)this, "UPrimalCharacterStatusComponent.TimeToRecoverAfterDepletionStatusValue" }; }
    float& TorporExitPercentThresholdField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.TorporExitPercentThreshold"); }
    float& UnsubmergedOxygenIncreaseSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.UnsubmergedOxygenIncreaseSpeed"); }
    float& WakingTameFoodConsumptionRateMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.WakingTameFoodConsumptionRateMultiplier"); }
    float& WalkingStaminaConsumptionRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.WalkingStaminaConsumptionRate"); }
    float& WaterConsumptionMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.WaterConsumptionMultiplier"); }
    float& WeightJumpDecreasePowerField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.WeightJumpDecreasePower"); }
    float& WeightMultiplierForCarriedPassengersField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.WeightMultiplierForCarriedPassengers"); }
    float& WeightMultiplierForPlatformPassengersInventoryField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.WeightMultiplierForPlatformPassengersInventory"); }
    float& WeightMultiplierWhenCarriedOrBasedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.WeightMultiplierWhenCarriedOrBased"); }
    float& WeightSpeedDecreasePowerField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.WeightSpeedDecreasePower"); }
    float& WindedSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.WindedSpeedModifier"); }
    float& WindedSpeedModifierSwimmingOrFlyingField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.WindedSpeedModifierSwimmingOrFlying"); }
    float& XPEarnedPerStaminaConsumedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalCharacterStatusComponent.XPEarnedPerStaminaConsumed"); }
    BitFieldValue<bool, unsigned __int32> bCanSuffocate()
    { return { (void*)this, "bCanSuffocate" }; }
    BitFieldValue<bool, unsigned __int32> bCanSuffocateIfTamed()
    { return { (void*)this, "bCanSuffocateIfTamed" }; }
    BitFieldValue<bool, unsigned __int32> bCanGetHungry()
    { return { (void*)this, "bCanGetHungry" }; }
    BitFieldValue<bool, unsigned __int32> bUseStamina()
    { return { (void*)this, "bUseStamina" }; }
    BitFieldValue<bool, unsigned __int32> bWalkingConsumesStamina()
    { return { (void*)this, "bWalkingConsumesStamina" }; }
    BitFieldValue<bool, unsigned __int32> bRunningConsumesStamina()
    { return { (void*)this, "bRunningConsumesStamina" }; }
    BitFieldValue<bool, unsigned __int32> bConsumeFoodAutomatically()
    { return { (void*)this, "bConsumeFoodAutomatically" }; }
    BitFieldValue<bool, unsigned __int32> bInfiniteFood()
    { return { (void*)this, "bInfiniteFood" }; }
    BitFieldValue<bool, unsigned __int32> bAddExperienceAutomatically()
    { return { (void*)this, "bAddExperienceAutomatically" }; }
    BitFieldValue<bool, unsigned __int32> bConsumeWaterAutomatically()
    { return { (void*)this, "bConsumeWaterAutomatically" }; }
    BitFieldValue<bool, unsigned __int32> bAutomaticallyUpdateTemperature()
    { return { (void*)this, "bAutomaticallyUpdateTemperature" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateGlobalStatusValues()
    { return { (void*)this, "bReplicateGlobalStatusValues" }; }
    BitFieldValue<bool, unsigned __int32> bAllowLevelUps()
    { return { (void*)this, "bAllowLevelUps" }; }
    BitFieldValue<bool, unsigned __int32> bInfiniteStats()
    { return { (void*)this, "bInfiniteStats" }; }
    BitFieldValue<bool, unsigned __int32> bAllowSharingXPWithTribe()
    { return { (void*)this, "bAllowSharingXPWithTribe" }; }
    BitFieldValue<bool, unsigned __int32> bUseStatusSpeedModifiers()
    { return { (void*)this, "bUseStatusSpeedModifiers" }; }
    BitFieldValue<bool, unsigned __int32> bStatusSpeedModifierOnlyFullOrNone()
    { return { (void*)this, "bStatusSpeedModifierOnlyFullOrNone" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreStatusSpeedModifierIfSwimming()
    { return { (void*)this, "bIgnoreStatusSpeedModifierIfSwimming" }; }
    BitFieldValue<bool, unsigned __int32> bPreventJump()
    { return { (void*)this, "bPreventJump" }; }
    BitFieldValue<bool, unsigned __int32> bInitializedBaseLevelMaxStatusValues()
    { return { (void*)this, "bInitializedBaseLevelMaxStatusValues" }; }
    BitFieldValue<bool, unsigned __int32> bInitializedMe()
    { return { (void*)this, "bInitializedMe" }; }
    BitFieldValue<bool, unsigned __int32> bServerFirstInitialized()
    { return { (void*)this, "bServerFirstInitialized" }; }
    BitFieldValue<bool, unsigned __int32> bRunningUseDefaultSpeed()
    { return { (void*)this, "bRunningUseDefaultSpeed" }; }
    BitFieldValue<bool, unsigned __int32> bNeverAllowXP()
    { return { (void*)this, "bNeverAllowXP" }; }
    BitFieldValue<bool, unsigned __int32> bPreventTamedStatReplication()
    { return { (void*)this, "bPreventTamedStatReplication" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustStatusValueModification()
    { return { (void*)this, "bUseBPAdjustStatusValueModification" }; }
    BitFieldValue<bool, unsigned __int32> bForceDefaultSpeed()
    { return { (void*)this, "bForceDefaultSpeed" }; }
    BitFieldValue<bool, unsigned __int32> bCheatStatus()
    { return { (void*)this, "bCheatStatus" }; }
    BitFieldValue<bool, unsigned __int32> bForceRefreshWeight()
    { return { (void*)this, "bForceRefreshWeight" }; }
    BitFieldValue<bool, unsigned __int32> bHideFoodStatusFromHUD()
    { return { (void*)this, "bHideFoodStatusFromHUD" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetStatusNameString()
    { return { (void*)this, "bUseBPGetStatusNameString" }; }
    BitFieldValue<bool, unsigned __int32> bHideStaminaStatusFromHUD()
    { return { (void*)this, "bHideStaminaStatusFromHUD" }; }
    BitFieldValue<bool, unsigned __int32> bDontUseSpeedMultipleAsSpeed()
    { return { (void*)this, "bDontUseSpeedMultipleAsSpeed" }; }
    BitFieldValue<bool, unsigned __int32> bForceGainOxygen()
    { return { (void*)this, "bForceGainOxygen" }; }
    BitFieldValue<bool, unsigned __int32> bFreezeStatusValues()
    { return { (void*)this, "bFreezeStatusValues" }; }
    BitFieldValue<bool, unsigned __int32> bTicked()
    { return { (void*)this, "bTicked" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPModifyMaxLevel()
    { return { (void*)this, "bUseBPModifyMaxLevel" }; }
    BitFieldValue<bool, unsigned __int32> bNoStaminaRecoveryWhenStarving()
    { return { (void*)this, "bNoStaminaRecoveryWhenStarving" }; }
    BitFieldValue<bool, unsigned __int32> bApplyingStatusValueModifiers()
    { return { (void*)this, "bApplyingStatusValueModifiers" }; }
    BitFieldValue<bool, unsigned __int32> bDontScaleMeleeDamage()
    { return { (void*)this, "bDontScaleMeleeDamage" }; }
    BitFieldValue<bool, unsigned __int32> bInfiniteWeight()
    { return { (void*)this, "bInfiniteWeight" }; }
    BitFieldValue<bool, unsigned __int32> bUseLevelUpStatWeightOverrides()
    { return { (void*)this, "bUseLevelUpStatWeightOverrides" }; }
    BitFieldValue<bool, unsigned __int32> bAlsoUseLevelUpAnimWhenSwimming()
    { return { (void*)this, "bAlsoUseLevelUpAnimWhenSwimming" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowStatusModifierSortingWhenTamed()
    { return { (void*)this, "bForceAllowStatusModifierSortingWhenTamed" }; }
    BitFieldValue<bool, unsigned __int32> bHideXPStatusFromHUD()
    { return { (void*)this, "bHideXPStatusFromHUD" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanLevelUp()
    { return { (void*)this, "bUseBPCanLevelUp" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetOverrideMaxStatusValue()
    { return { (void*)this, "bUseBPGetOverrideMaxStatusValue" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideShouldSkipWildLevelUpValue()
    { return { (void*)this, "bUseBPOverrideShouldSkipWildLevelUpValue" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALCHARACTERSTATUSCOMPONENT_H

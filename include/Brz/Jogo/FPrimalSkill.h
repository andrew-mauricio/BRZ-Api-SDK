// ==========================================================================
//  FPrimalSkill — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FPRIMALSKILL_H
#define BRZ_SDK_JOGO_FPRIMALSKILL_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UScriptStruct;


struct FPrimalSkill
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FPrimalSkill"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FPrimalSkill.StaticStruct()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo+string_aprovado]
    static UScriptStruct* StaticStruct()
    {
        return NativeCall<UScriptStruct*>(nullptr, "FPrimalSkill.StaticStruct()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FPrimalSkill.operator=(FPrimalSkill&&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro operator_(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FPrimalSkill.operator=(FPrimalSkill&&)", a0);
    }

    BrzCampoPonteiro AdditionalClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalSkill.AdditionalClasses")); }
    BrzCampoPonteiro AdditionalModifierDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalSkill.AdditionalModifierData")); }
    BrzCampoPonteiro AdditionalObjectClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalSkill.AdditionalObjectClasses")); }
    BrzCampoPonteiro CooldownsPerRankField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalSkill.CooldownsPerRank")); }
    BrzCampoPonteiro GrantedBuffPerRankField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalSkill.GrantedBuffPerRank")); }
    BrzCampoPonteiro GrantedModifiersPerRankField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalSkill.GrantedModifiersPerRank")); }
    BrzCampoPonteiro RanksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalSkill.Ranks")); }
    BrzCampoPonteiro SkillBuffApplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalSkill.SkillBuffApplication")); }
    BrzCampoPonteiro SkillDescriptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalSkill.SkillDescription")); }
    BrzCampoPonteiro SkillIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalSkill.SkillIcon")); }
    BrzCampoPonteiro SkillNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalSkill.SkillName")); }
    BrzCampoPonteiro UnlockCostPerRankField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalSkill.UnlockCostPerRank")); }
    BitFieldValue<bool, unsigned __int32> bBuffIsPassivePermanentApplication()
    { return { (void*)this, "bBuffIsPassivePermanentApplication" }; }
    BitFieldValue<bool, unsigned __int32> bDontNotifyClientOnActivation()
    { return { (void*)this, "bDontNotifyClientOnActivation" }; }
    BitFieldValue<bool, unsigned __int32> bDontPlaySoundOnActivation()
    { return { (void*)this, "bDontPlaySoundOnActivation" }; }
    BitFieldValue<bool, unsigned __int32> bDontSetCooldownOnActivation()
    { return { (void*)this, "bDontSetCooldownOnActivation" }; }
    BitFieldValue<bool, unsigned __int32> bIsActiveSkill()
    { return { (void*)this, "bIsActiveSkill" }; }
    BitFieldValue<bool, unsigned __int32> bPreventToEquip()
    { return { (void*)this, "bPreventToEquip" }; }

};

#endif  // BRZ_SDK_JOGO_FPRIMALSKILL_H

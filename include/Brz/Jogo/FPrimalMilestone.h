// ==========================================================================
//  FPrimalMilestone — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FPRIMALMILESTONE_H
#define BRZ_SDK_JOGO_FPRIMALMILESTONE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UScriptStruct;


struct FPrimalMilestone
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FPrimalMilestone"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FPrimalMilestone.StaticStruct()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo+string_aprovado]
    static UScriptStruct* StaticStruct()
    {
        return NativeCall<UScriptStruct*>(nullptr, "FPrimalMilestone.StaticStruct()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FPrimalMilestone.operator=(FPrimalMilestone&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro operator_(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FPrimalMilestone.operator=(FPrimalMilestone&)", a0);
    }

    BrzCampoPonteiro ItemsGrantedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMilestone.ItemsGranted")); }
    BrzCampoPonteiro MilestoneAdditionalClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMilestone.MilestoneAdditionalClasses")); }
    BrzCampoPonteiro MilestoneAmountField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMilestone.MilestoneAmount")); }
    BrzCampoPonteiro MilestoneDescriptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMilestone.MilestoneDescription")); }
    BrzCampoPonteiro MilestoneIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMilestone.MilestoneIcon")); }
    BrzCampoPonteiro MilestoneNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMilestone.MilestoneName")); }
    BrzCampoPonteiro MilestoneTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMilestone.MilestoneType")); }
    BrzCampoPonteiro RewardSkillTreeTagField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMilestone.RewardSkillTreeTag")); }
    BrzCampoPonteiro SkillPointsGrantedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalMilestone.SkillPointsGranted")); }
    BitFieldValue<bool, unsigned __int32> bAutoComplete()
    { return { (void*)this, "bAutoComplete" }; }
    BitFieldValue<bool, unsigned __int32> bIncreasesMilestoneLevel()
    { return { (void*)this, "bIncreasesMilestoneLevel" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnMilestoneCompleted()
    { return { (void*)this, "bUseBPOnMilestoneCompleted" }; }

};

#endif  // BRZ_SDK_JOGO_FPRIMALMILESTONE_H

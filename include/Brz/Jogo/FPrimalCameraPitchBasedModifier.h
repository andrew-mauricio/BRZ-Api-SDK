// ==========================================================================
//  FPrimalCameraPitchBasedModifier — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FPRIMALCAMERAPITCHBASEDMODIFIER_H
#define BRZ_SDK_JOGO_FPRIMALCAMERAPITCHBASEDMODIFIER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FPrimalCameraPitchBasedModifier
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FPrimalCameraPitchBasedModifier"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    BrzCampoPonteiro ApplyBetweenPitchValuesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCameraPitchBasedModifier.ApplyBetweenPitchValues")); }
    BrzCampoPonteiro ArmLengthStartingLerpValueField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCameraPitchBasedModifier.ArmLengthStartingLerpValue")); }
    BrzCampoPonteiro ExponentialLerpBaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCameraPitchBasedModifier.ExponentialLerpBase")); }
    BrzCampoPonteiro FinalArmLengthField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCameraPitchBasedModifier.FinalArmLength")); }
    BrzCampoPonteiro FinalArmLengthInterpParamsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCameraPitchBasedModifier.FinalArmLengthInterpParams")); }
    BrzCampoPonteiro FinalInterpParamsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCameraPitchBasedModifier.FinalInterpParams")); }
    BrzCampoPonteiro FinalPivotOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCameraPitchBasedModifier.FinalPivotOffset")); }
    BrzCampoPonteiro InterpParamsAxisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCameraPitchBasedModifier.InterpParamsAxis")); }
    BrzCampoPonteiro LerpBetweenPitchValuesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCameraPitchBasedModifier.LerpBetweenPitchValues")); }
    BrzCampoPonteiro PivotLocationOffsetStartingLerpValueField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCameraPitchBasedModifier.PivotLocationOffsetStartingLerpValue")); }
    BitFieldValue<bool, unsigned __int32> bLerpValue()
    { return { (void*)this, "bLerpValue" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideArmLengthInterpParams()
    { return { (void*)this, "bOverrideArmLengthInterpParams" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideArmLengthStartingLerpValue()
    { return { (void*)this, "bOverrideArmLengthStartingLerpValue" }; }
    BitFieldValue<bool, unsigned __int32> bOverridePivotLocationOffset()
    { return { (void*)this, "bOverridePivotLocationOffset" }; }
    BitFieldValue<bool, unsigned __int32> bOverridePivotLocationOffsetStartingLerpValue()
    { return { (void*)this, "bOverridePivotLocationOffsetStartingLerpValue" }; }

};

#endif  // BRZ_SDK_JOGO_FPRIMALCAMERAPITCHBASEDMODIFIER_H

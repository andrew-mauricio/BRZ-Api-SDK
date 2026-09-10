// ==========================================================================
//  FItemStatInfo — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FITEMSTATINFO_H
#define BRZ_SDK_JOGO_FITEMSTATINFO_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FItemStatInfo
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FItemStatInfo"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   FItemStatInfo.GetItemStatModifier(unsignedshort)
    // endereco: cache_pdb_25090264
    float GetItemStatModifier(unsigned short a0) const
    {
        return NativeCall<float, unsigned short>(this, "FItemStatInfo.GetItemStatModifier(unsignedshort)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   FItemStatInfo.GetRandomValue(float,float,float*)
    // endereco: casamento de bytes com a build de referencia
    unsigned short GetRandomValue(float a0, float a1, void* a2) const
    {
        return NativeCall<unsigned short, float, float, void*>(this, "FItemStatInfo.GetRandomValue(float,float,float*)", a0, a1, a2);
    }

    float& AbsoluteMaxValueField() const
    { return *GetNativePointerField<float*>(this, "FItemStatInfo.AbsoluteMaxValue"); }
    int& DefaultModifierValueField() const
    { return *GetNativePointerField<int*>(this, "FItemStatInfo.DefaultModifierValue"); }
    float& InitialValueConstantField() const
    { return *GetNativePointerField<float*>(this, "FItemStatInfo.InitialValueConstant"); }
    float& RandomizerRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FItemStatInfo.RandomizerRangeMultiplier"); }
    int& RandomizerRangeOverrideField() const
    { return *GetNativePointerField<int*>(this, "FItemStatInfo.RandomizerRangeOverride"); }
    float& RatingValueMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FItemStatInfo.RatingValueMultiplier"); }
    float& StateModifierScaleField() const
    { return *GetNativePointerField<float*>(this, "FItemStatInfo.StateModifierScale"); }
    float& TheRandomizerPowerField() const
    { return *GetNativePointerField<float*>(this, "FItemStatInfo.TheRandomizerPower"); }
    BitFieldValue<bool, unsigned __int32> bUsed()
    { return { (void*)this, "bUsed" }; }
    BitFieldValue<bool, unsigned __int32> bCalculateAsPercent()
    { return { (void*)this, "bCalculateAsPercent" }; }
    BitFieldValue<bool, unsigned __int32> bDisplayAsPercent()
    { return { (void*)this, "bDisplayAsPercent" }; }
    BitFieldValue<bool, unsigned __int32> bRequiresSubmerged()
    { return { (void*)this, "bRequiresSubmerged" }; }
    BitFieldValue<bool, unsigned __int32> bPreventIfSubmerged()
    { return { (void*)this, "bPreventIfSubmerged" }; }
    BitFieldValue<bool, unsigned __int32> bHideStatFromTooltip()
    { return { (void*)this, "bHideStatFromTooltip" }; }

};

#endif  // BRZ_SDK_JOGO_FITEMSTATINFO_H

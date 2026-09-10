// ==========================================================================
//  FPrimalPlayerCharacterConfigStruct — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FPRIMALPLAYERCHARACTERCONFIGSTRUCT_H
#define BRZ_SDK_JOGO_FPRIMALPLAYERCHARACTERCONFIGSTRUCT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FPrimalPlayerCharacterConfigStruct
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FPrimalPlayerCharacterConfigStruct"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FPrimalPlayerCharacterConfigStruct.operator=(FPrimalPlayerCharacterConfigStruct&&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro operator_(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FPrimalPlayerCharacterConfigStruct.operator=(FPrimalPlayerCharacterConfigStruct&&)", a0);
    }

    // ── SOBRECARGAS QUE NAO CABEM EM C++ ─────────────────────────────
    //
    //  Estas existem no jogo, e a chave delas resolve normalmente por
    //  `GetAddress` / `NativeCall`. O que nao cabe e' a DECLARACAO: em C
    //  os parametros viram os mesmos da que ficou, ou a diferenca esta'
    //  so' no retorno — e C++ nao sobrecarrega por retorno.
    //
    //  Para chamar uma destas, use `NativeCall` direto com a chave:
    //    FPrimalPlayerCharacterConfigStruct.operator=(FPrimalPlayerCharacterConfigStruct&)
    //      (colide com FPrimalPlayerCharacterConfigStruct.operator=(FPrimalPlayerCharacterConfigStruct&&))

    FieldArray<unsigned char> BodyColorsField() const
    { return { (void*)this, "FPrimalPlayerCharacterConfigStruct.BodyColors" }; }
    BrzCampoPonteiro DynamicFaceIndexField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalPlayerCharacterConfigStruct.DynamicFaceIndex")); }
    BrzCampoPonteiro DynamicFaceMaterialBytesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalPlayerCharacterConfigStruct.DynamicFaceMaterialBytes")); }
    FieldArray<unsigned char> DynamicMaterialBytesField() const
    { return { (void*)this, "FPrimalPlayerCharacterConfigStruct.DynamicMaterialBytes" }; }
    long& EyebrowCustomCosmeticModIDField() const
    { return *GetNativePointerField<long*>(this, "FPrimalPlayerCharacterConfigStruct.EyebrowCustomCosmeticModID"); }
    BrzCampoPonteiro EyebrowIndexField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalPlayerCharacterConfigStruct.EyebrowIndex")); }
    long& FacialHairCustomCosmeticModIDField() const
    { return *GetNativePointerField<long*>(this, "FPrimalPlayerCharacterConfigStruct.FacialHairCustomCosmeticModID"); }
    BrzCampoPonteiro FacialHairIndexField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalPlayerCharacterConfigStruct.FacialHairIndex")); }
    long& HeadHairCustomCosmeticModIDField() const
    { return *GetNativePointerField<long*>(this, "FPrimalPlayerCharacterConfigStruct.HeadHairCustomCosmeticModID"); }
    unsigned char& HeadHairIndexField() const
    { return *GetNativePointerField<unsigned char*>(this, "FPrimalPlayerCharacterConfigStruct.HeadHairIndex"); }
    FieldArray<unsigned char> OverrideFacialHairColorField() const
    { return { (void*)this, "FPrimalPlayerCharacterConfigStruct.OverrideFacialHairColor" }; }
    FieldArray<unsigned char> OverrideHeadHairColorField() const
    { return { (void*)this, "FPrimalPlayerCharacterConfigStruct.OverrideHeadHairColor" }; }
    float& PercentOfFullFacialHairGrowthField() const
    { return *GetNativePointerField<float*>(this, "FPrimalPlayerCharacterConfigStruct.PercentOfFullFacialHairGrowth"); }
    float& PercentOfFullHeadHairGrowthField() const
    { return *GetNativePointerField<float*>(this, "FPrimalPlayerCharacterConfigStruct.PercentOfFullHeadHairGrowth"); }
    FString& PlayerCharacterNameField() const
    { return *GetNativePointerField<FString*>(this, "FPrimalPlayerCharacterConfigStruct.PlayerCharacterName"); }
    int& PlayerSpawnRegionIndexField() const
    { return *GetNativePointerField<int*>(this, "FPrimalPlayerCharacterConfigStruct.PlayerSpawnRegionIndex"); }
    int& PlayerVoiceCollectionIndexField() const
    { return *GetNativePointerField<int*>(this, "FPrimalPlayerCharacterConfigStruct.PlayerVoiceCollectionIndex"); }
    FieldArray<float> RawBoneModifiersField() const
    { return { (void*)this, "FPrimalPlayerCharacterConfigStruct.RawBoneModifiers" }; }
    BitFieldValue<bool, unsigned __int32> bIsFemale()
    { return { (void*)this, "bIsFemale" }; }
    BitFieldValue<bool, unsigned __int32> bUsingCustomPlayerVoiceCollection()
    { return { (void*)this, "bUsingCustomPlayerVoiceCollection" }; }

};

#endif  // BRZ_SDK_JOGO_FPRIMALPLAYERCHARACTERCONFIGSTRUCT_H

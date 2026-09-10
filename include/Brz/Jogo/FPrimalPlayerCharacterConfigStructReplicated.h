// ==========================================================================
//  FPrimalPlayerCharacterConfigStructReplicated — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FPRIMALPLAYERCHARACTERCONFIGSTRUCTREPLICATED_H
#define BRZ_SDK_JOGO_FPRIMALPLAYERCHARACTERCONFIGSTRUCTREPLICATED_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UScriptStruct;


struct FPrimalPlayerCharacterConfigStructReplicated
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FPrimalPlayerCharacterConfigStructReplicated"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   FPrimalPlayerCharacterConfigStructReplicated.GetPlayerCharacterConfig()
    // endereco: casamento de bytes com a build de referencia
    void GetPlayerCharacterConfig(void* retorno) const
    {
        NativeCall<void, void*>(this, "FPrimalPlayerCharacterConfigStructReplicated.GetPlayerCharacterConfig()", retorno);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FPrimalPlayerCharacterConfigStructReplicated.StaticStruct()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo+string_aprovado]
    static UScriptStruct* StaticStruct()
    {
        return NativeCall<UScriptStruct*>(nullptr, "FPrimalPlayerCharacterConfigStructReplicated.StaticStruct()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   FPrimalPlayerCharacterConfigStructReplicated.operator=(FPrimalPlayerCharacterConfigStructReplica
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro operator_(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FPrimalPlayerCharacterConfigStructReplicated.operator=(FPrimalPlayerCharacterConfigStructReplicated&&)", a0);
    }

    // ── SOBRECARGAS QUE NAO CABEM EM C++ ─────────────────────────────
    //
    //  Estas existem no jogo, e a chave delas resolve normalmente por
    //  `GetAddress` / `NativeCall`. O que nao cabe e' a DECLARACAO: em C
    //  os parametros viram os mesmos da que ficou, ou a diferenca esta'
    //  so' no retorno — e C++ nao sobrecarrega por retorno.
    //
    //  Para chamar uma destas, use `NativeCall` direto com a chave:
    //    FPrimalPlayerCharacterConfigStructReplicated.operator=(FPrimalPlayerCharacterConfigStructReplicated&)
    //      (colide com FPrimalPlayerCharacterConfigStructReplicated.operator=(FPrimalPlayerCharacterConfigStructReplica)

    FieldArray<unsigned char> BodyColorsField() const
    { return { (void*)this, "FPrimalPlayerCharacterConfigStructReplicated.BodyColors" }; }
    BrzCampoPonteiro DynamicFaceIndexField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalPlayerCharacterConfigStructReplicated.DynamicFaceIndex")); }
    BrzCampoPonteiro DynamicFaceMaterialBytesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalPlayerCharacterConfigStructReplicated.DynamicFaceMaterialBytes")); }
    FieldArray<unsigned char> DynamicMaterialBytesField() const
    { return { (void*)this, "FPrimalPlayerCharacterConfigStructReplicated.DynamicMaterialBytes" }; }
    long& EyebrowCustomCosmeticModIDField() const
    { return *GetNativePointerField<long*>(this, "FPrimalPlayerCharacterConfigStructReplicated.EyebrowCustomCosmeticModID"); }
    BrzCampoPonteiro EyebrowIndexField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalPlayerCharacterConfigStructReplicated.EyebrowIndex")); }
    long& FacialHairCustomCosmeticModIDField() const
    { return *GetNativePointerField<long*>(this, "FPrimalPlayerCharacterConfigStructReplicated.FacialHairCustomCosmeticModID"); }
    BrzCampoPonteiro FacialHairIndexField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalPlayerCharacterConfigStructReplicated.FacialHairIndex")); }
    long& HeadHairCustomCosmeticModIDField() const
    { return *GetNativePointerField<long*>(this, "FPrimalPlayerCharacterConfigStructReplicated.HeadHairCustomCosmeticModID"); }
    BrzCampoPonteiro HeadHairIndexField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalPlayerCharacterConfigStructReplicated.HeadHairIndex")); }
    FieldArray<unsigned char> OverrideFacialHairColorField() const
    { return { (void*)this, "FPrimalPlayerCharacterConfigStructReplicated.OverrideFacialHairColor" }; }
    FieldArray<unsigned char> OverrideHeadHairColorField() const
    { return { (void*)this, "FPrimalPlayerCharacterConfigStructReplicated.OverrideHeadHairColor" }; }
    float& PercentOfFullFacialHairGrowthField() const
    { return *GetNativePointerField<float*>(this, "FPrimalPlayerCharacterConfigStructReplicated.PercentOfFullFacialHairGrowth"); }
    float& PercentOfFullHeadHairGrowthField() const
    { return *GetNativePointerField<float*>(this, "FPrimalPlayerCharacterConfigStructReplicated.PercentOfFullHeadHairGrowth"); }
    FString& PlayerCharacterNameField() const
    { return *GetNativePointerField<FString*>(this, "FPrimalPlayerCharacterConfigStructReplicated.PlayerCharacterName"); }
    int& PlayerSpawnRegionIndexField() const
    { return *GetNativePointerField<int*>(this, "FPrimalPlayerCharacterConfigStructReplicated.PlayerSpawnRegionIndex"); }
    int& PlayerVoiceCollectionIndexField() const
    { return *GetNativePointerField<int*>(this, "FPrimalPlayerCharacterConfigStructReplicated.PlayerVoiceCollectionIndex"); }
    FieldArray<float> RawBoneModifiersField() const
    { return { (void*)this, "FPrimalPlayerCharacterConfigStructReplicated.RawBoneModifiers" }; }
    BitFieldValue<bool, unsigned __int32> bIsFemale()
    { return { (void*)this, "bIsFemale" }; }
    BitFieldValue<bool, unsigned __int32> bUsingCustomPlayerVoiceCollection()
    { return { (void*)this, "bUsingCustomPlayerVoiceCollection" }; }

};

#endif  // BRZ_SDK_JOGO_FPRIMALPLAYERCHARACTERCONFIGSTRUCTREPLICATED_H

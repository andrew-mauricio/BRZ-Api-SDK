// ==========================================================================
//  FDinoSetup — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FDINOSETUP_H
#define BRZ_SDK_JOGO_FDINOSETUP_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UScriptStruct;


struct FDinoSetup
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FDinoSetup"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FDinoSetup.NetSerialize(FArchive&,UPackageMap*,bool&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro NetSerialize(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "FDinoSetup.NetSerialize(FArchive&,UPackageMap*,bool&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FDinoSetup.Serialize(FArchive&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Serialize(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FDinoSetup.Serialize(FArchive&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FDinoSetup.StaticStruct()
    // endereco: casamento de bytes com a build de referencia
    static UScriptStruct* StaticStruct()
    {
        return NativeCall<UScriptStruct*>(nullptr, "FDinoSetup.StaticStruct()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FDinoSetup.operator=(FDinoSetup&&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro operator_(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FDinoSetup.operator=(FDinoSetup&&)", a0);
    }

    // ── SOBRECARGAS QUE NAO CABEM EM C++ ─────────────────────────────
    //
    //  Estas existem no jogo, e a chave delas resolve normalmente por
    //  `GetAddress` / `NativeCall`. O que nao cabe e' a DECLARACAO: em C
    //  os parametros viram os mesmos da que ficou, ou a diferenca esta'
    //  so' no retorno — e C++ nao sobrecarrega por retorno.
    //
    //  Para chamar uma destas, use `NativeCall` direto com a chave:
    //    FDinoSetup.operator=(FDinoSetup&)
    //      (colide com FDinoSetup.operator=(FDinoSetup&&))

    FieldArray<unsigned char> BasePointsPerStatField() const
    { return { (void*)this, "FDinoSetup.BasePointsPerStat" }; }
    FString& DinoBlueprintPathField() const
    { return *GetNativePointerField<FString*>(this, "FDinoSetup.DinoBlueprintPath"); }
    float& DinoImprintingQualityField() const
    { return *GetNativePointerField<float*>(this, "FDinoSetup.DinoImprintingQuality"); }
    int& DinoLevelField() const
    { return *GetNativePointerField<int*>(this, "FDinoSetup.DinoLevel"); }
    FString& DinoNameField() const
    { return *GetNativePointerField<FString*>(this, "FDinoSetup.DinoName"); }
    BrzCampoPonteiro DinoSoftReferenceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FDinoSetup.DinoSoftReference")); }
    BrzCampoPonteiro DinoStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FDinoSetup.DinoState")); }
    BrzCampoPonteiro DinoTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FDinoSetup.DinoType")); }
    FieldArray<unsigned char> PlayerAddedPointsPerStatField() const
    { return { (void*)this, "FDinoSetup.PlayerAddedPointsPerStat" }; }
    TArray<void*>& PrioritizeStatsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FDinoSetup.PrioritizeStats"); }
    float& RandomWeightField() const
    { return *GetNativePointerField<float*>(this, "FDinoSetup.RandomWeight"); }
    FString& SaddleBlueprintPathField() const
    { return *GetNativePointerField<FString*>(this, "FDinoSetup.SaddleBlueprintPath"); }
    float& SaddleMinRandomQualityField() const
    { return *GetNativePointerField<float*>(this, "FDinoSetup.SaddleMinRandomQuality"); }
    float& SaddleQualityField() const
    { return *GetNativePointerField<float*>(this, "FDinoSetup.SaddleQuality"); }
    BrzCampoPonteiro SaddleSoftReferenceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FDinoSetup.SaddleSoftReference")); }
    BrzCampoPonteiro SaddleTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FDinoSetup.SaddleType")); }
    BrzCampoPonteiro SpawnOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FDinoSetup.SpawnOffset")); }
    TArray<void*>& TamedDinoInventoryField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FDinoSetup.TamedDinoInventory"); }
    float& WildRandomScaleOverrideField() const
    { return *GetNativePointerField<float*>(this, "FDinoSetup.WildRandomScaleOverride"); }
    bool& bNetInfoFromClientField() const
    { return *GetNativePointerField<bool*>(this, "FDinoSetup.bNetInfoFromClient"); }
    BitFieldValue<bool, unsigned __int32> bIsTamed()
    { return { (void*)this, "bIsTamed" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreMaxTameLimit()
    { return { (void*)this, "bIgnoreMaxTameLimit" }; }
    BitFieldValue<bool, unsigned __int32> bPreventSpawningAtTameLimit()
    { return { (void*)this, "bPreventSpawningAtTameLimit" }; }
    BitFieldValue<bool, unsigned __int32> bBlockTamedDialog()
    { return { (void*)this, "bBlockTamedDialog" }; }
    BitFieldValue<bool, unsigned __int32> bAutoEquipSaddle()
    { return { (void*)this, "bAutoEquipSaddle" }; }
    BitFieldValue<bool, unsigned __int32> bUseFixedSpawnLevel()
    { return { (void*)this, "bUseFixedSpawnLevel" }; }
    BitFieldValue<bool, unsigned __int32> bNetInfoFromClient()
    { return { (void*)this, "bNetInfoFromClient" }; }

};

#endif  // BRZ_SDK_JOGO_FDINOSETUP_H

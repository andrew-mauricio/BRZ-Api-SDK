// ==========================================================================
//  UPrimalGameData — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALGAMEDATA_H
#define BRZ_SDK_JOGO_UPRIMALGAMEDATA_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FName;
struct UClass;
struct UDataTable;
struct UGenericDataListEntry;
struct UMaterialInterface;
struct UMaterialParameterCollection;
struct UModDataAsset;
struct UObject;
struct UParticleSystem;
struct UPrimalDinoEntry;
struct UPrimalEngramEntry;
struct UPrimalGlobalUIData;
struct UPrimalWorldBuffData;
struct UShooterHaptics;
struct USoundBase;
struct USoundClass;
struct UStaticMesh;
struct UTexture2D;

#include "UObject.h"

struct UPrimalGameData : public UObject
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalGameData"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGameData.AddPartBoneModifiers(USkeletalMeshComponent*,TArray<FBoneModifierRange,TSizedDef
    // endereco: casamento de bytes com a build de referencia
    static void AddPartBoneModifiers(void* a0, void* a1, float a2, void* a3)
    {
        NativeCall<void, void*, void*, float, void*>(nullptr, "UPrimalGameData.AddPartBoneModifiers(USkeletalMeshComponent*,TArray<FBoneModifierRange,TSizedDefaultAllocator<32>>&,float,TArray<FBoneModifier,TSizedDefaultAllocator<32>>&)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGameData.AppendBoneModifiers(USkeletalMeshComponent*,TArray<FBoneModifierNamed,TSizedDefa
    // endereco: casamento de bytes com a build de referencia
    static void AppendBoneModifiers(void* a0, void* a1, void* a2)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "UPrimalGameData.AppendBoneModifiers(USkeletalMeshComponent*,TArray<FBoneModifierNamed,TSizedDefaultAllocator<32>>&,TArray<FBoneModifier,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGameData.AppendGlobalBoneModifiers(USkeletalMeshComponent*,bool,TArray<FBoneModifier,TSiz
    // endereco: casamento de bytes com a build de referencia
    static void AppendGlobalBoneModifiers(void* a0, bool a1, void* a2)
    {
        NativeCall<void, void*, bool, void*>(nullptr, "UPrimalGameData.AppendGlobalBoneModifiers(USkeletalMeshComponent*,bool,TArray<FBoneModifier,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // jogo_confirmou_dump
    //   UPrimalGameData.ArkChangeUIPlatform(FString)
    // endereco: casamento de bytes com a build de referencia
    static void ArkChangeUIPlatform(const FString& a0)
    {
        NativeCall<void, void*>(nullptr, "UPrimalGameData.ArkChangeUIPlatform(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void ArkChangeUIPlatform(FString* a0)
    { ArkChangeUIPlatform(*a0); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalGameData.BPCanTeamDamage(int,int,AActor*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPCanTeamDamage(int a0, int a1, void* a2) const
    {
        return NativeCall<bool, int, int, void*>(this, "UPrimalGameData.BPCanTeamDamage(int,int,AActor*)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalGameData.BPCanTeamTarget(int,int,int,AActor*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    bool BPCanTeamTarget(int a0, int a1, int a2, void* a3, void* a4) const
    {
        return NativeCall<bool, int, int, int, void*, void*>(this, "UPrimalGameData.BPCanTeamTarget(int,int,int,AActor*,AActor*)", a0, a1, a2, a3, a4);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalGameData.BPGetDinoBabySetup(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetDinoBabySetup(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "UPrimalGameData.BPGetDinoBabySetup(FName)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalGameData.BPGetDinoGestationSetup(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetDinoGestationSetup(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "UPrimalGameData.BPGetDinoGestationSetup(FName)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalGameData.BPGetGameData()
    // endereco: cache_pdb_25090264
    UObject* BPGetGameData() const
    {
        return NativeCall<UObject*>(this, "UPrimalGameData.BPGetGameData()");
    }

    // jogo_confirmou_dump
    //   UPrimalGameData.BPGetGlobalUIData(bool&,TSubclassOf<UPrimalGlobalUIData>,TSubclassOf<UPrimalGlob
    // endereco: casamento de bytes com a build de referencia
    static UPrimalGlobalUIData* BPGetGlobalUIData(void* a0, void* a1, void* a2, void* a3)
    {
        return NativeCall<UPrimalGlobalUIData*, void*, void*, void*, void*>(nullptr, "UPrimalGameData.BPGetGlobalUIData(bool&,TSubclassOf<UPrimalGlobalUIData>,TSubclassOf<UPrimalGlobalUIData>,TSubclassOf<UPrimalGlobalUIData>)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalGameData.BPInitializeGameData()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=45]]
    void BPInitializeGameData() const
    {
        NativeCall<void>(this, "UPrimalGameData.BPInitializeGameData()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   UPrimalGameData.BPMergeModGameData(UPrimalGameData*)
    // endereco: casamento de bytes com a build de referencia
    void BPMergeModGameData(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalGameData.BPMergeModGameData(UPrimalGameData*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalGameData.BPPreventAddingLocalPlayer(UWorld*,int,AShooterPlayerController*,int)
    // endereco: casamento de bytes com a build de referencia
    bool BPPreventAddingLocalPlayer(void* a0, int a1, void* a2, int a3) const
    {
        return NativeCall<bool, void*, int, void*, int>(this, "UPrimalGameData.BPPreventAddingLocalPlayer(UWorld*,int,AShooterPlayerController*,int)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGameData.CallGeneTrait_BPGetCustomBlueprintData(FName,FFunctionParams_NoArrays,FFunctionP
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=299+bytes40+grafo=10/10]]
    bool CallGeneTrait_BPGetCustomBlueprintData(unsigned long long a0, void* a1, void* a2) const
    {
        return NativeCall<bool, unsigned long long, void*, void*>(this, "UPrimalGameData.CallGeneTrait_BPGetCustomBlueprintData(FName,FFunctionParams_NoArrays,FFunctionParams_NoArrays&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGameData.CallGeneTrait_BPGetCustomBlueprintData_Implementation(FName,FFunctionParams_NoAr
    // endereco: casamento de bytes com a build de referencia
    bool CallGeneTrait_BPGetCustomBlueprintData_Implementation(unsigned long long a0, void* a1, void* a2) const
    {
        return NativeCall<bool, unsigned long long, void*, void*>(this, "UPrimalGameData.CallGeneTrait_BPGetCustomBlueprintData_Implementation(FName,FFunctionParams_NoArrays,FFunctionParams_NoArrays&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGameData.CanTeamDamage(int,int,AActor*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=226+chamadores=2]]
    bool CanTeamDamage(int a0, int a1, void* a2) const
    {
        return NativeCall<bool, int, int, void*>(this, "UPrimalGameData.CanTeamDamage(int,int,AActor*)", a0, a1, a2);
    }

    // dump_sobre_sdk_287a0
    //   UPrimalGameData.CanTeamTarget(int,int,int,AActor*,AActor*,bool)
    // endereco: casamento de bytes com a build de referencia
    bool CanTeamTarget(int a0, int a1, int a2, void* a3, void* a4, bool a5) const
    {
        return NativeCall<bool, int, int, int, void*, void*, bool>(this, "UPrimalGameData.CanTeamTarget(int,int,int,AActor*,AActor*,bool)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGameData.GetAbilityForInputAction(FName&,FName&,FDinoAbilityInfo&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAbilityForInputAction(const FName& a0, const FName& a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UPrimalGameData.GetAbilityForInputAction(FName&,FName&,FDinoAbilityInfo&)", const_cast<FName*>(&a0), const_cast<FName*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GetAbilityForInputAction(FName* a0, FName* a1, void* a2) const
    { return GetAbilityForInputAction(*a0, *a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGameData.GetAllAbilitiesForDino(FName&,TArray<FDinoAbilityInfo,TSizedDefaultAllocator<32>
    // endereco: casamento de bytes com a build de referencia
    bool GetAllAbilitiesForDino(const FName& a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "UPrimalGameData.GetAllAbilitiesForDino(FName&,TArray<FDinoAbilityInfo,TSizedDefaultAllocator<32>>&)", const_cast<FName*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool GetAllAbilitiesForDino(FName* a0, void* a1) const
    { return GetAllAbilitiesForDino(*a0, a1); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalGameData.GetAllSelectableFacialHairDefinitions()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAllSelectableFacialHairDefinitions() const
    {
        return NativeCall<void*>(this, "UPrimalGameData.GetAllSelectableFacialHairDefinitions()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalGameData.GetAllSelectableHeadHairDefinitions()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAllSelectableHeadHairDefinitions() const
    {
        return NativeCall<void*>(this, "UPrimalGameData.GetAllSelectableHeadHairDefinitions()");
    }

    // jogo_confirmou_dump
    //   UPrimalGameData.GetBPDinoAncestorsFromNonBP(TArray<FDinoAncestorsEntry,TSizedDefaultAllocator<32
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetBPDinoAncestorsFromNonBP(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "UPrimalGameData.GetBPDinoAncestorsFromNonBP(TArray<FDinoAncestorsEntry,TSizedDefaultAllocator<32>>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGameData.GetBitmaskForBuffs(TArray<APrimalBuff*,TSizedDefaultAllocator<32>>)
    // endereco: casamento de bytes com a build de referencia
    int GetBitmaskForBuffs(void* a0) const
    {
        return NativeCall<int, void*>(this, "UPrimalGameData.GetBitmaskForBuffs(TArray<APrimalBuff*,TSizedDefaultAllocator<32>>)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalGameData.GetBuffsForBitmask(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetBuffsForBitmask(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalGameData.GetBuffsForBitmask(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGameData.GetClassAdditions(TArray<TSubclassOf<UObject>,TSizedDefaultAllocator<32>>&,TArra
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetClassAdditions(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UPrimalGameData.GetClassAdditions(TArray<TSubclassOf<UObject>,TSizedDefaultAllocator<32>>&,TArray<FClassAddition,TSizedDefaultAllocator<32>>&,TSubclassOf<UObject>)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGameData.GetColorForDefinition(int)
    // endereco: casamento de bytes com a build de referencia
    void GetColorForDefinition(void* retorno, int a0) const
    {
        NativeCall<void, void*, int>(this, "UPrimalGameData.GetColorForDefinition(int)", retorno, a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalGameData.GetCosmeticEyebrowDefinition(__int64,int,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro GetCosmeticEyebrowDefinition(long long a0, int a1, bool a2) const
    {
        return NativeCall<void*, long long, int, bool>(this, "UPrimalGameData.GetCosmeticEyebrowDefinition(__int64,int,bool)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalGameData.GetCosmeticFacialHairDefinition(__int64,int,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro GetCosmeticFacialHairDefinition(long long a0, int a1, bool a2) const
    {
        return NativeCall<void*, long long, int, bool>(this, "UPrimalGameData.GetCosmeticFacialHairDefinition(__int64,int,bool)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalGameData.GetCosmeticHeadHairDefinition(__int64,int,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro GetCosmeticHeadHairDefinition(long long a0, int a1, bool a2) const
    {
        return NativeCall<void*, long long, int, bool>(this, "UPrimalGameData.GetCosmeticHeadHairDefinition(__int64,int,bool)", a0, a1, a2);
    }

    // dump_sobre_sdk_287a0
    //   UPrimalGameData.GetDataListEntries(TArray<IDataListEntryInterface*,TSizedDefaultAllocator<32>>&,
    // endereco: casamento de bytes com a build de referencia
    void GetDataListEntries(void* a0, int a1, bool a2, signed char a3, void* a4, void* a5, void* a6, signed char a7, void* a8, bool a9, bool a10, bool a11, signed char a12) const
    {
        NativeCall<void, void*, int, bool, signed char, void*, void*, void*, signed char, void*, bool, bool, bool, signed char>(this, "UPrimalGameData.GetDataListEntries(TArray<IDataListEntryInterface*,TSizedDefaultAllocator<32>>&,int,bool,signedchar,TArray<FString,TSizedDefaultAllocator<32>>*,UObject*,wchar_t*,signedchar,wchar_t*,bool,bool,bool,signedchar)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGameData.GetDefinitionIndexForColorName(FName)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=58]]
    BrzPonteiro GetDefinitionIndexForColorName(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "UPrimalGameData.GetDefinitionIndexForColorName(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGameData.GetDinoBabySetup(FName)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro GetDinoBabySetup(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "UPrimalGameData.GetDinoBabySetup(FName)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalGameData.GetDinoEntry(TSubclassOf<APrimalDinoCharacter>)
    // endereco: casamento de bytes com a build de referencia
    UClass* GetDinoEntry(void* a0) const
    {
        return NativeCall<UClass*, void*>(this, "UPrimalGameData.GetDinoEntry(TSubclassOf<APrimalDinoCharacter>)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalGameData.GetDinoEntryByTag(FName)
    // endereco: casamento de bytes com a build de referencia
    UClass* GetDinoEntryByTag(unsigned long long a0) const
    {
        return NativeCall<UClass*, unsigned long long>(this, "UPrimalGameData.GetDinoEntryByTag(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGameData.GetDinoEntrySoft(TSoftClassPtr<APrimalDinoCharacter>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDinoEntrySoft(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalGameData.GetDinoEntrySoft(TSoftClassPtr<APrimalDinoCharacter>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGameData.GetDinoGestationSetup(FName)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro GetDinoGestationSetup(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "UPrimalGameData.GetDinoGestationSetup(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGameData.GetEngramEntryMapIcon(IDataListEntryInterface*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetEngramEntryMapIcon(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalGameData.GetEngramEntryMapIcon(IDataListEntryInterface*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGameData.GetEngramRequirementLevel(UClass*)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetEngramRequirementLevel(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalGameData.GetEngramRequirementLevel(UClass*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGameData.GetEntryCustomColor(IDataListEntryInterface*,FLinearColor&,FLinearColor*)
    // endereco: casamento de bytes com a build de referencia
    void GetEntryCustomColor(void* a0, void* a1, void* a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "UPrimalGameData.GetEntryCustomColor(IDataListEntryInterface*,FLinearColor&,FLinearColor*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGameData.GetEntryDefaultEnabled(IDataListEntryInterface*)
    // endereco: casamento de bytes com a build de referencia
    bool GetEntryDefaultEnabled(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalGameData.GetEntryDefaultEnabled(IDataListEntryInterface*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGameData.GetEntryDefaultTextOverride(IDataListEntryInterface*)
    // endereco: casamento de bytes com a build de referencia
    void GetEntryDefaultTextOverride(void* retorno, void* a0) const
    {
        NativeCall<void, void*, void*>(this, "UPrimalGameData.GetEntryDefaultTextOverride(IDataListEntryInterface*)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGameData.GetEntryExtraIcons(IDataListEntryInterface*,TArray<UTexture2D*,TSizedDefaultAllo
    // endereco: casamento de bytes com a build de referencia
    void GetEntryExtraIcons(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "UPrimalGameData.GetEntryExtraIcons(IDataListEntryInterface*,TArray<UTexture2D*,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalGameData.GetExplorerNoteDescription(int)
    // endereco: casamento de bytes com a build de referencia
    void GetExplorerNoteDescription(void* retorno, int a0) const
    {
        NativeCall<void, void*, int>(this, "UPrimalGameData.GetExplorerNoteDescription(int)", retorno, a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalGameData.GetExplorerNoteName(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    unsigned long long GetExplorerNoteName(int a0) const
    {
        return NativeCall<unsigned long long, int>(this, "UPrimalGameData.GetExplorerNoteName(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalGameData.GetEyebrowDataFromUIIndex(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetEyebrowDataFromUIIndex(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalGameData.GetEyebrowDataFromUIIndex(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalGameData.GetFacialHairDataFromUIIndex(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetFacialHairDataFromUIIndex(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalGameData.GetFacialHairDataFromUIIndex(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGameData.GetGenericCombatMusic(APrimalCharacter*,APrimalCharacter*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    USoundBase* GetGenericCombatMusic(void* a0, void* a1) const
    {
        return NativeCall<USoundBase*, void*, void*>(this, "UPrimalGameData.GetGenericCombatMusic(APrimalCharacter*,APrimalCharacter*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGameData.GetGenericCombatMusic_Implementation(APrimalCharacter*,APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    USoundBase* GetGenericCombatMusic_Implementation(void* a0, void* a1) const
    {
        return NativeCall<USoundBase*, void*, void*>(this, "UPrimalGameData.GetGenericCombatMusic_Implementation(APrimalCharacter*,APrimalCharacter*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGameData.GetGlobalColorTable()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetGlobalColorTable() const
    {
        return NativeCall<void*>(this, "UPrimalGameData.GetGlobalColorTable()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalGameData.GetHeadHairDataFromUIIndex(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetHeadHairDataFromUIIndex(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalGameData.GetHeadHairDataFromUIIndex(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGameData.GetIndexDynamicMatBytesByName(FName)
    // endereco: casamento de bytes com a build de referencia
    int GetIndexDynamicMatBytesByName(unsigned long long a0) const
    {
        return NativeCall<int, unsigned long long>(this, "UPrimalGameData.GetIndexDynamicMatBytesByName(FName)", a0);
    }

    // dump_sobre_sdk_287a0
    //   UPrimalGameData.GetIsItemBlacklisted(TSoftClassPtr<UPrimalItem>)
    // endereco: casamento de bytes com a build de referencia
    static char GetIsItemBlacklisted(void* a0)
    {
        return NativeCall<char, void*>(nullptr, "UPrimalGameData.GetIsItemBlacklisted(TSoftClassPtr<UPrimalItem>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGameData.GetItemQualityIndex(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro GetItemQualityIndex(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalGameData.GetItemQualityIndex(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGameData.GetLevelExperienceRamp(ELevelExperienceRampType::Type)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetLevelExperienceRamp(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalGameData.GetLevelExperienceRamp(ELevelExperienceRampType::Type)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGameData.GetLevelMax(ELevelExperienceRampType::Type)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetLevelMax(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalGameData.GetLevelMax(ELevelExperienceRampType::Type)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGameData.GetLevelXP(ELevelExperienceRampType::Type,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetLevelXP(int a0, int a1) const
    {
        return NativeCall<void*, int, int>(this, "UPrimalGameData.GetLevelXP(ELevelExperienceRampType::Type,int)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalGameData.GetNamedExplorerNoteIndex(FName)
    // endereco: casamento de bytes com a build de referencia
    int GetNamedExplorerNoteIndex(unsigned long long a0) const
    {
        return NativeCall<int, unsigned long long>(this, "UPrimalGameData.GetNamedExplorerNoteIndex(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGameData.GetNamedTargetingTeamIndex(FName)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    int GetNamedTargetingTeamIndex(unsigned long long a0) const
    {
        return NativeCall<int, unsigned long long>(this, "UPrimalGameData.GetNamedTargetingTeamIndex(FName)", a0);
    }

    // jogo_confirmou_dump
    //   UPrimalGameData.GetNonBPDinoAncestorsFromBP(TArray<FDinoAncestorsEntryBlueprint,TSizedDefaultAll
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetNonBPDinoAncestorsFromBP(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "UPrimalGameData.GetNonBPDinoAncestorsFromBP(TArray<FDinoAncestorsEntryBlueprint,TSizedDefaultAllocator<32>>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGameData.GetPlayerLevelEngramPoints()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPlayerLevelEngramPoints() const
    {
        return NativeCall<void*>(this, "UPrimalGameData.GetPlayerLevelEngramPoints()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGameData.GetPlayerSpawnRegions(UWorld*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPlayerSpawnRegions(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalGameData.GetPlayerSpawnRegions(UWorld*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGameData.GetRedirectedClass(FString&,UObject*)
    // endereco: casamento de bytes com a build de referencia
    static void GetRedirectedClass(void* retorno, const FString& a0, void* a1)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "UPrimalGameData.GetRedirectedClass(FString&,UObject*)", retorno, const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void GetRedirectedClass(void* retorno, FString* a0, void* a1)
    { GetRedirectedClass(retorno, *a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGameData.GetRedirectedClassFromRedirector(FInvalidReferenceRedirector&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetRedirectedClassFromRedirector(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalGameData.GetRedirectedClassFromRedirector(FInvalidReferenceRedirector&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGameData.GetRemappedClass_HardHard(TArray<FClassRemapping,TSizedDefaultAllocator<32>>&,TS
    // endereco: casamento de bytes com a build de referencia
    static void GetRemappedClass_HardHard(void* retorno, void* a0, void* a1)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "UPrimalGameData.GetRemappedClass_HardHard(TArray<FClassRemapping,TSizedDefaultAllocator<32>>&,TSubclassOf<UObject>)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGameData.GetRemappedClass_HardSoft(TArray<FClassRemapping,TSizedDefaultAllocator<32>>&,FS
    // endereco: casamento de bytes com a build de referencia
    static void GetRemappedClass_HardSoft(void* retorno, void* a0, void* a1)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "UPrimalGameData.GetRemappedClass_HardSoft(TArray<FClassRemapping,TSizedDefaultAllocator<32>>&,FSoftObjectPath&)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGameData.GetRemappedClass_SoftSoft(TArray<FClassRemapping,TSizedDefaultAllocator<32>>&,FS
    // endereco: casamento de bytes com a build de referencia
    static void GetRemappedClass_SoftSoft(void* retorno, void* a0, void* a1)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "UPrimalGameData.GetRemappedClass_SoftSoft(TArray<FClassRemapping,TSizedDefaultAllocator<32>>&,FSoftObjectPath&)", retorno, a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalGameData.GetStatusStateDefinitions(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetStatusStateDefinitions(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalGameData.GetStatusStateDefinitions(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGameData.GetTeamTargetingDesirabilityMultiplier(int,int)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetTeamTargetingDesirabilityMultiplier(int a0, int a1) const
    {
        return NativeCall<void*, int, int>(this, "UPrimalGameData.GetTeamTargetingDesirabilityMultiplier(int,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGameData.GetUIDataFast()
    // endereco: casamento de bytes com a build de referencia
    UPrimalGlobalUIData* GetUIDataFast() const
    {
        return NativeCall<UPrimalGlobalUIData*>(this, "UPrimalGameData.GetUIDataFast()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGameData.GetUIIndexForEyebrowData(FCustomCosmeticHairstyleDataPair)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro GetUIIndexForEyebrowData(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalGameData.GetUIIndexForEyebrowData(FCustomCosmeticHairstyleDataPair)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGameData.GetUIIndexForFacialHairData(FCustomCosmeticHairstyleDataPair)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro GetUIIndexForFacialHairData(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalGameData.GetUIIndexForFacialHairData(FCustomCosmeticHairstyleDataPair)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGameData.GetUIIndexForHeadHairData(FCustomCosmeticHairstyleDataPair)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro GetUIIndexForHeadHairData(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalGameData.GetUIIndexForHeadHairData(FCustomCosmeticHairstyleDataPair)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGameData.GetXPMax(ELevelExperienceRampType::Type)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetXPMax(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalGameData.GetXPMax(ELevelExperienceRampType::Type)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalGameData.HasCosmeticEyebrowDefinition(__int64,int,bool)
    // endereco: casamento de bytes com a build de referencia
    bool HasCosmeticEyebrowDefinition(long long a0, int a1, bool a2) const
    {
        return NativeCall<bool, long long, int, bool>(this, "UPrimalGameData.HasCosmeticEyebrowDefinition(__int64,int,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGameData.Initialize(TArray<UModDataAsset*,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    void Initialize(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalGameData.Initialize(TArray<UModDataAsset*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGameData.IsCosmeticSkinWhitelisted(__int64,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro IsCosmeticSkinWhitelisted(long long a0, bool a1) const
    {
        return NativeCall<void*, long long, bool>(this, "UPrimalGameData.IsCosmeticSkinWhitelisted(__int64,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalGameData.IsCosmeticSkinWhitelistedBP(__int64,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=55]]
    bool IsCosmeticSkinWhitelistedBP(long long a0, bool a1) const
    {
        return NativeCall<bool, long long, bool>(this, "UPrimalGameData.IsCosmeticSkinWhitelistedBP(__int64,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalGameData.IsCustomCosmeticEmote(FName)
    // endereco: casamento de bytes com a build de referencia
    bool IsCustomCosmeticEmote(unsigned long long a0) const
    {
        return NativeCall<bool, unsigned long long>(this, "UPrimalGameData.IsCustomCosmeticEmote(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGameData.LoadSavedGameData()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LoadSavedGameData() const
    {
        return NativeCall<void*>(this, "UPrimalGameData.LoadSavedGameData()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGameData.LoadedWorld(UWorld*)
    // endereco: cache_pdb_25090264
    void LoadedWorld(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalGameData.LoadedWorld(UWorld*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGameData.LocalIsGlobalExplorerNoteUnlocked(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static bool LocalIsGlobalExplorerNoteUnlocked(int a0)
    {
        return NativeCall<bool, int>(nullptr, "UPrimalGameData.LocalIsGlobalExplorerNoteUnlocked(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalGameData.LocalIsPerMapExplorerNoteUnlocked(int)
    // endereco: casamento de bytes com a build de referencia
    bool LocalIsPerMapExplorerNoteUnlocked(int a0) const
    {
        return NativeCall<bool, int>(this, "UPrimalGameData.LocalIsPerMapExplorerNoteUnlocked(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGameData.MergeModData(UPrimalGameData*)
    // endereco: casamento de bytes com a build de referencia
    bool MergeModData(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalGameData.MergeModData(UPrimalGameData*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGameData.PostLoad()
    // endereco: casamento de bytes com a build de referencia
    void PostLoad() const
    {
        NativeCall<void>(this, "UPrimalGameData.PostLoad()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   UPrimalGameData.SaveGameData()
    // endereco: casamento de bytes com a build de referencia
    void SaveGameData() const
    {
        NativeCall<void>(this, "UPrimalGameData.SaveGameData()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGameData.SetCoreDefaults()
    // endereco: casamento de bytes com a build de referencia
    void SetCoreDefaults() const
    {
        NativeCall<void>(this, "UPrimalGameData.SetCoreDefaults()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGameData.ShouldHideSpawnRegionFromSpawnUI(UWorld*,unsignedchar)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShouldHideSpawnRegionFromSpawnUI(void* a0, unsigned char a1) const
    {
        return NativeCall<void*, void*, unsigned char>(this, "UPrimalGameData.ShouldHideSpawnRegionFromSpawnUI(UWorld*,unsignedchar)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalGameData.TickedWorld(UWorld*,float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void TickedWorld(void* a0, float a1) const
    {
        NativeCall<void, void*, float>(this, "UPrimalGameData.TickedWorld(UWorld*,float)", a0, a1);
    }

    TArray<void*>& AbilityDescriptionsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.AbilityDescriptions"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AbilityDescriptions` +16, medido na build 25090264
    //  (offset absoluto medido: 0x3428; confianca alta)
    void*& AbilityDescriptionsMapField() const
    { return BrzCampoAncorado<void*>(this, "AbilityDescriptions", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AchievementIDs` +16, medido na build 25090264
    //  (offset absoluto medido: 0x2A80; confianca alta)
    void*& AchievementIDSetField() const
    { return BrzCampoAncorado<void*>(this, "AchievementIDs", 16); }
    TArray<void*>& AchievementIDsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.AchievementIDs"); }
    USoundBase*& ActionWheelClickSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.ActionWheelClickSound"); }
    USoundBase*& ActionWheelProgressCompleteSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.ActionWheelProgressCompleteSound"); }
    USoundBase*& ActionWheelProgressSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.ActionWheelProgressSound"); }
    USoundBase*& ActionWheelSelectSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.ActionWheelSelectSound"); }
    BrzCampoPonteiro ActiveSkillTriggered_SoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.ActiveSkillTriggered_Sound")); }
    BrzCampoPonteiro ActorToSpawnUponEnemyCoreStructureDeathField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.ActorToSpawnUponEnemyCoreStructureDeath")); }
    BrzCampoPonteiro AdditionalAllowDownloadDinoClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.AdditionalAllowDownloadDinoClasses")); }
    BrzCampoPonteiro AdditionalAnimationsPreventInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.AdditionalAnimationsPreventInput")); }
    BrzCampoPonteiro AdditionalBuffPostProcessEffectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.AdditionalBuffPostProcessEffects")); }
    UMaterialInterface*& AdditionalDeathPostProcessEffectField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalGameData.AdditionalDeathPostProcessEffect"); }
    TArray<void*>& AdditionalDefaultBuffsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.AdditionalDefaultBuffs"); }
    TArray<void*>& AdditionalDefaultMapItemSetsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.AdditionalDefaultMapItemSets"); }
    BrzCampoPonteiro AdditionalDinoEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.AdditionalDinoEntries")); }
    BrzCampoPonteiro AdditionalEggItemsToSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.AdditionalEggItemsToSpawn")); }
    TArray<void*>& AdditionalEggWeightsToSpawnField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.AdditionalEggWeightsToSpawn"); }
    BrzCampoPonteiro AdditionalEngramBlueprintClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.AdditionalEngramBlueprintClasses")); }
    BrzCampoPonteiro AdditionalExplorerNoteSpawnsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.AdditionalExplorerNoteSpawns")); }
    TArray<void*>& AdditionalExtraEggItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.AdditionalExtraEggItems"); }
    TArray<void*>& AdditionalFacialHairStyleDefinitionsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.AdditionalFacialHairStyleDefinitions"); }
    TArray<void*>& AdditionalHeadHairStyleDefinitionsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.AdditionalHeadHairStyleDefinitions"); }
    TArray<void*>& AdditionalHumanFemaleAnimMontagesOverridesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.AdditionalHumanFemaleAnimMontagesOverrides"); }
    TArray<void*>& AdditionalHumanFemaleAnimSequenceOverridesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.AdditionalHumanFemaleAnimSequenceOverrides"); }
    TArray<void*>& AdditionalHumanFemaleOverrideAnimBlueprintsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.AdditionalHumanFemaleOverrideAnimBlueprints"); }
    TArray<void*>& AdditionalHumanMaleAnimMontagesOverridesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.AdditionalHumanMaleAnimMontagesOverrides"); }
    TArray<void*>& AdditionalHumanMaleAnimSequenceOverridesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.AdditionalHumanMaleAnimSequenceOverrides"); }
    TArray<void*>& AdditionalHumanMaleOverrideAnimBlueprintsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.AdditionalHumanMaleOverrideAnimBlueprints"); }
    TArray<void*>& AdditionalInvalidReferenceRedirectsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.AdditionalInvalidReferenceRedirects"); }
    UModDataAsset*& AdditionalModDataAssetField() const
    { return *GetNativePointerField<UModDataAsset**>(this, "UPrimalGameData.AdditionalModDataAsset"); }
    BrzCampoPonteiro AdditionalNamedExplorerNoteEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.AdditionalNamedExplorerNoteEntries")); }
    TArray<void*>& AdditionalStructureEngramsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.AdditionalStructureEngrams"); }
    TArray<void*>& AdditionalStructureVariantsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.AdditionalStructureVariants"); }
    TArray<void*>& AdditionalStructuresToBuildField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.AdditionalStructuresToBuild"); }
    BrzCampoPonteiro AdditionalStructuresToPlaceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.AdditionalStructuresToPlace")); }
    BrzCampoPonteiro AdditionalTradableOptionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.AdditionalTradableOptions")); }
    BrzCampoPonteiro AdditionalWorldBuffDefinitionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.AdditionalWorldBuffDefinitions")); }
    UTexture2D*& AimMagnetismIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.AimMagnetismIcon"); }
    TArray<void*>& AllDinosAchievementNameTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.AllDinosAchievementNameTags"); }
    BrzCampoPonteiro AllowLinkingContainerToStorageInterfaceIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.AllowLinkingContainerToStorageInterfaceIcon")); }
    BrzCampoPonteiro AlternateImprintedRiderIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.AlternateImprintedRiderIcon")); }
    BrzCampoPonteiro AlwaysAllowBuffClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.AlwaysAllowBuffClasses")); }
    TArray<void*>& AppIDItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.AppIDItems"); }
    BrzCampoPonteiro AvailableMilestoneTreesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.AvailableMilestoneTrees")); }
    TArray<void*>& AvailableMissionsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.AvailableMissions"); }
    BrzCampoPonteiro AvailableSkillTreesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.AvailableSkillTrees")); }
    UTexture2D*& BabyCuddleIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.BabyCuddleIcon"); }
    TArray<UTexture2D*>& BadgeGroupsNameTagField() const
    { return *GetNativePointerField<TArray<UTexture2D*>*>(this, "UPrimalGameData.BadgeGroupsNameTag"); }
    TArray<UObject*>& BaseExtraResourcesField() const
    { return *GetNativePointerField<TArray<UObject*>*>(this, "UPrimalGameData.BaseExtraResources"); }
    BrzCampoPonteiro BaseExtraResourcesContainersSoftField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.BaseExtraResourcesContainersSoft")); }
    BrzCampoPonteiro BaseExtraResourcesSoftField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.BaseExtraResourcesSoft")); }
    UTexture2D*& BlueprintBackgroundField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.BlueprintBackground"); }
    TArray<void*>& BodyBonePresetOptionsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.BodyBonePresetOptions"); }
    TArray<void*>& BookendSubtitlesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.BookendSubtitles"); }
    BrzCampoPonteiro BuffPostProcessEffectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.BuffPostProcessEffects")); }
    BrzCampoPonteiro BuffTypeBackgroundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.BuffTypeBackgrounds")); }
    BrzCampoPonteiro BuffTypeForegroundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.BuffTypeForegrounds")); }
    UTexture2D*& BuffedIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.BuffedIcon"); }
    BrzCampoPonteiro CDOLiveUpdatesDataClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.CDOLiveUpdatesDataClass")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LoadedCustomCosmeticSkins` +264, medido na build 25090264
    //  (offset absoluto medido: 0x3748; confianca baixa)
    void*& CacheOwnedCustomCosmeticsField() const
    { return BrzCampoAncorado<void*>(this, "LoadedCustomCosmeticSkins", 264); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LoadedCustomCosmeticSkins` +184, medido na build 25090264
    //  (offset absoluto medido: 0x36F8; confianca baixa)
    void*& CachedBlacklistedCustomCosmeticsField() const
    { return BrzCampoAncorado<void*>(this, "LoadedCustomCosmeticSkins", 184); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LoadedCustomCosmeticSkins` +104, medido na build 25090264
    //  (offset absoluto medido: 0x36A8; confianca media)
    void*& CachedValidatedWhitelistCustomCosmeticsField() const
    { return BrzCampoAncorado<void*>(this, "LoadedCustomCosmeticSkins", 104); }
    BrzCampoPonteiro CarriedNotifyBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.CarriedNotifyBuff")); }
    BrzCampoPonteiro CheatDestroyFoliageDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.CheatDestroyFoliageDamageType")); }
    TArray<void*>& ColorDefinitionsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.ColorDefinitions"); }
    USoundBase*& CombatMusicDayField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.CombatMusicDay"); }
    USoundBase*& CombatMusicDay_HeavyField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.CombatMusicDay_Heavy"); }
    USoundBase*& CombatMusicNightField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.CombatMusicNight"); }
    USoundBase*& CombatMusicNight_HeavyField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.CombatMusicNight_Heavy"); }
    BrzCampoPonteiro ConstructedSparseDataOverrideManagersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.ConstructedSparseDataOverrideManagers")); }
    UMaterialInterface*& CopySettingsVisualIndicatorMaterialField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalGameData.CopySettingsVisualIndicatorMaterial"); }
    UStaticMesh*& CopySettingsVisualIndicatorMeshField() const
    { return *GetNativePointerField<UStaticMesh**>(this, "UPrimalGameData.CopySettingsVisualIndicatorMesh"); }
    TArray<void*>& CoreAppIDItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.CoreAppIDItems"); }
    BrzCampoPonteiro CoreGlobalNPCRandomSpawnClassWeightsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.CoreGlobalNPCRandomSpawnClassWeights")); }
    TArray<void*>& CoreNPCSpawnEntriesContainerAdditionsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.CoreNPCSpawnEntriesContainerAdditions"); }
    TArray<void*>& CoreOverrideSupplyCrateItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.CoreOverrideSupplyCrateItems"); }
    BrzCampoPonteiro CoreTradableOptionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.CoreTradableOptions")); }
    BrzCampoPonteiro CoreWorldBuffDefinitionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.CoreWorldBuffDefinitions")); }
    UParticleSystem*& CorpseLocatorEffectField() const
    { return *GetNativePointerField<UParticleSystem**>(this, "UPrimalGameData.CorpseLocatorEffect"); }
    UTexture2D*& CrossPlayGenericField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.CrossPlayGeneric"); }
    UTexture2D*& CrossPlayPS5Field() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.CrossPlayPS5"); }
    UTexture2D*& CrossPlaySteamField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.CrossPlaySteam"); }
    UTexture2D*& CrossPlayXSXField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.CrossPlayXSX"); }
    TArray<void*>& CryopodPersistantBuffsMapField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.CryopodPersistantBuffsMap"); }
    TArray<void*>& CustomBodyBonePresetOptionsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.CustomBodyBonePresetOptions"); }
    BrzCampoPonteiro CustomBotConfigVoiceCollectionOptionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.CustomBotConfigVoiceCollectionOptions")); }
    BrzCampoPonteiro CustomCosmeticEyebrowsCollectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.CustomCosmeticEyebrowsCollection")); }
    BrzCampoPonteiro CustomCosmeticEyebrowsDefinitionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.CustomCosmeticEyebrowsDefinitions")); }
    BrzCampoPonteiro CustomCosmeticFacialHairStyleCollectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.CustomCosmeticFacialHairStyleCollection")); }
    BrzCampoPonteiro CustomCosmeticFacialHairStyleDefinitionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.CustomCosmeticFacialHairStyleDefinitions")); }
    BrzCampoPonteiro CustomCosmeticHeadHairStyleCollectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.CustomCosmeticHeadHairStyleCollection")); }
    BrzCampoPonteiro CustomCosmeticHeadHairStyleDefinitionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.CustomCosmeticHeadHairStyleDefinitions")); }
    BrzCampoPonteiro CustomDinoTrackFilterOptionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.CustomDinoTrackFilterOptions")); }
    BrzCampoPonteiro CustomGeneTraits_DefinitionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.CustomGeneTraits_Definitions")); }
    TArray<void*>& CustomPlayerConfigVoiceCollectionOptionsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.CustomPlayerConfigVoiceCollectionOptions"); }
    BrzCampoPonteiro DLCStructsAndEnumsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.DLCStructsAndEnums")); }
    BrzCampoPonteiro DLCsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.DLCs")); }
    BrzCampoPonteiro DeathDestructionDepositInventoryClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.DeathDestructionDepositInventoryClass")); }
    BrzCampoPonteiro DefaultDestructionInstanceActorWithGeoCollectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.DefaultDestructionInstanceActorWithGeoCollection")); }
    BrzCampoPonteiro DefaultDinoMinimalTooltipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.DefaultDinoMinimalTooltipWidget")); }
    TArray<void*>& DefaultDynamicMaterialByteColorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.DefaultDynamicMaterialByteColors"); }
    TArray<void*>& DefaultDynamicMaterialByteFloatsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.DefaultDynamicMaterialByteFloats"); }
    TArray<void*>& DefaultDynamicMaterialByteVectorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.DefaultDynamicMaterialByteVectors"); }
    BrzCampoPonteiro DefaultFieldSystemActorClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.DefaultFieldSystemActorClass")); }
    BrzCampoPonteiro DefaultGameModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.DefaultGameMode")); }
    BrzCampoPonteiro DefaultGlobalProfileItemUnlocksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.DefaultGlobalProfileItemUnlocks")); }
    BrzCampoPonteiro DefaultItemToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.DefaultItemToolTipWidget")); }
    TArray<void*>& DefaultMapItemSetsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.DefaultMapItemSets"); }
    BrzCampoPonteiro DefaultMultiUseToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.DefaultMultiUseToolTipWidget")); }
    BrzCampoPonteiro DefaultPlayerPawnAnimInstancesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.DefaultPlayerPawnAnimInstances")); }
    BrzCampoPonteiro DefaultStructureDestroyedMeshActorClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.DefaultStructureDestroyedMeshActorClass")); }
    BrzCampoPonteiro DefaultStructureNavAreaField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.DefaultStructureNavArea")); }
    BrzCampoPonteiro DefaultStructureSettingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.DefaultStructureSettings")); }
    float& DefaultThrallAttackDecisionDurationField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameData.DefaultThrallAttackDecisionDuration"); }
    BrzCampoPonteiro DefaultToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.DefaultToolTipWidget")); }
    BrzCampoPonteiro DefaultTradableOptionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.DefaultTradableOptions")); }
    BrzCampoPonteiro DefaultWaterNavAreaField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.DefaultWaterNavArea")); }
    TArray<void*>& DinoBabySetupsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.DinoBabySetups"); }
    float& DinoCountGameModeMultiplyField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameData.DinoCountGameModeMultiply"); }
    BrzCampoPonteiro DinoEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.DinoEntries")); }
    TArray<UPrimalDinoEntry*>& DinoEntriesObjectsField() const
    { return *GetNativePointerField<TArray<UPrimalDinoEntry*>*>(this, "UPrimalGameData.DinoEntriesObjects"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DefaultDynamicMaterialByteColors` +16, medido na build 25090264
    //  (offset absoluto medido: 0x2928; confianca alta)
    void*& DinoEntryMapField() const
    { return BrzCampoAncorado<void*>(this, "DefaultDynamicMaterialByteColors", 16); }
    TArray<void*>& DinoGestationSetupsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.DinoGestationSetups"); }
    USoundBase*& DinoIncrementedImprintingSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.DinoIncrementedImprintingSound"); }
    UTexture2D*& DinoMinimalIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.DinoMinimalIcon"); }
    BrzCampoPonteiro DinoOrderEffect_AttackTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.DinoOrderEffect_AttackTarget")); }
    BrzCampoPonteiro DinoOrderEffect_MoveToField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.DinoOrderEffect_MoveTo")); }
    UTexture2D*& DinoOrderIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.DinoOrderIcon"); }
    BrzCampoPonteiro DinoTrackFilterOptionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.DinoTrackFilterOptions")); }
    float& DistanceRenderFloatingTextEnemyClubARKField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameData.DistanceRenderFloatingTextEnemyClubARK"); }
    BrzCampoPonteiro DynamicExplorerNoteSpawnsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.DynamicExplorerNoteSpawns")); }
    UTexture2D*& EggBoostIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.EggBoostIcon"); }
    BrzCampoPonteiro ElementResourceItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.ElementResourceItem")); }
    TArray<void*>& EmoteGroupsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.EmoteGroups"); }
    float& EnemyCoreStructureDeathActorRadiusBuildCheckField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameData.EnemyCoreStructureDeathActorRadiusBuildCheck"); }
    float& EnemyFoundationPreventionRadiusField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameData.EnemyFoundationPreventionRadius"); }
    UTexture2D*& EngramBackgroundField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.EngramBackground"); }
    BrzCampoPonteiro EngramBlueprintClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.EngramBlueprintClasses")); }
    TArray<UPrimalEngramEntry*>& EngramBlueprintEntriesField() const
    { return *GetNativePointerField<TArray<UPrimalEngramEntry*>*>(this, "UPrimalGameData.EngramBlueprintEntries"); }
    BrzCampoPonteiro EngramGroupIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.EngramGroupIcon")); }
    TArray<void*>& EngramPointPurchaseRangesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.EngramPointPurchaseRanges"); }
    BrzCampoPonteiro EquipmentTypeDefinitionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.EquipmentTypeDefinitions")); }
    UTexture2D*& ExperienceIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.ExperienceIcon"); }
    TArray<void*>& ExplorerNoteAchievementsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.ExplorerNoteAchievements"); }
    USoundClass*& ExplorerNoteAudioSoundClassField() const
    { return *GetNativePointerField<USoundClass**>(this, "UPrimalGameData.ExplorerNoteAudioSoundClass"); }
    TArray<void*>& ExplorerNoteEntriesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.ExplorerNoteEntries"); }
    TArray<UGenericDataListEntry*>& ExplorerNoteEntriesObjectsField() const
    { return *GetNativePointerField<TArray<UGenericDataListEntry*>*>(this, "UPrimalGameData.ExplorerNoteEntriesObjects"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AdditionalExplorerNoteSpawns` +96, medido na build 25090264
    //  (offset absoluto medido: 0x2CE0; confianca media)
    void*& ExplorerNoteIndexToNameMapField() const
    { return BrzCampoAncorado<void*>(this, "AdditionalExplorerNoteSpawns", 96); }
    TArray<void*>& ExplorerNoteIntroIDsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.ExplorerNoteIntroIDs"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AdditionalExplorerNoteSpawns` +16, medido na build 25090264
    //  (offset absoluto medido: 0x2C90; confianca media)
    void*& ExplorerNoteNameToIndexMapField() const
    { return BrzCampoAncorado<void*>(this, "AdditionalExplorerNoteSpawns", 16); }
    BrzCampoPonteiro ExplorerNoteXPBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.ExplorerNoteXPBuff")); }
    float& ExplorerNoteXPGainField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameData.ExplorerNoteXPGain"); }
    TArray<void*>& ExtraEggItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.ExtraEggItems"); }
    TArray<UObject*>& ExtraResourcesField() const
    { return *GetNativePointerField<TArray<UObject*>*>(this, "UPrimalGameData.ExtraResources"); }
    BrzCampoPonteiro ExtraStackedGameDataClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.ExtraStackedGameDataClasses")); }
    FName& EyebrowMaskParamNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalGameData.EyebrowMaskParamName"); }
    TArray<void*>& EyebrowsDefinitionsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.EyebrowsDefinitions"); }
    BrzCampoPonteiro EyelashesDefinitionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.EyelashesDefinitions")); }
    UMaterialParameterCollection*& FOVScaleMaterialParamCollectionField() const
    { return *GetNativePointerField<UMaterialParameterCollection**>(this, "UPrimalGameData.FOVScaleMaterialParamCollection"); }
    FName& FacialHairMaskParamNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalGameData.FacialHairMaskParamName"); }
    TArray<void*>& FacialHairStyleDefinitionsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.FacialHairStyleDefinitions"); }
    TArray<UGenericDataListEntry*>& FacialHairStylesEntriesObjectsField() const
    { return *GetNativePointerField<TArray<UGenericDataListEntry*>*>(this, "UPrimalGameData.FacialHairStylesEntriesObjects"); }
    BrzCampoPonteiro FertilizedAdditionalEggItemsToSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.FertilizedAdditionalEggItemsToSpawn")); }
    TArray<void*>& FertilizedAdditionalEggWeightsToSpawnField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.FertilizedAdditionalEggWeightsToSpawn"); }
    BrzCampoPonteiro FooterTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.FooterTemplate")); }
    BrzCampoPonteiro GeneTraits_DefinitionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.GeneTraits_Definitions")); }
    USoundBase*& GenericArrowPickedUpSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.GenericArrowPickedUpSound"); }
    BrzCampoPonteiro GenericBatteryItemClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.GenericBatteryItemClass")); }
    BrzCampoPonteiro GenericDroppedItemTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.GenericDroppedItemTemplate")); }
    BrzCampoPonteiro GenericDroppedItemTemplateLowQualityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.GenericDroppedItemTemplateLowQuality")); }
    USoundBase*& GenericWaterPostprocessAmbientSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.GenericWaterPostprocessAmbientSound"); }
    BrzCampoPonteiro GenesisSeasonPassItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.GenesisSeasonPassItems")); }
    BrzCampoPonteiro GhostItemSkinPerEquipmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.GhostItemSkinPerEquipment")); }
    BrzCampoPonteiro GhostItemSkinStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.GhostItemSkinStructure")); }
    TArray<void*>& GlobalCuddleFoodListField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.GlobalCuddleFoodList"); }
    float& GlobalGeneralArmorDegradationMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameData.GlobalGeneralArmorDegradationMultiplier"); }
    float& GlobalGeneralArmorRatingMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameData.GlobalGeneralArmorRatingMultiplier"); }
    float& GlobalHarvestHealthMultiplierOverrideField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameData.GlobalHarvestHealthMultiplierOverride"); }
    TArray<void*>& GlobalNPCRandomSpawnClassWeightsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.GlobalNPCRandomSpawnClassWeights"); }
    float& GlobalSpecificArmorDegradationMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameData.GlobalSpecificArmorDegradationMultiplier"); }
    float& GlobalSpecificArmorRatingMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameData.GlobalSpecificArmorRatingMultiplier"); }
    BrzCampoPonteiro GlobalUIDataClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.GlobalUIDataClass")); }
    BrzCampoPonteiro GlobalUIDataClass_PS5Field() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.GlobalUIDataClass_PS5")); }
    BrzCampoPonteiro GlobalUIDataClass_XSXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.GlobalUIDataClass_XSX")); }
    TArray<void*>& GrinderReplacementsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.GrinderReplacements"); }
    BrzCampoPonteiro HUDOverlayGestationTooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.HUDOverlayGestationTooltip")); }
    FName& HairMaskParamNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalGameData.HairMaskParamName"); }
    UShooterHaptics*& HapticsField() const
    { return *GetNativePointerField<UShooterHaptics**>(this, "UPrimalGameData.Haptics"); }
    TArray<void*>& HeadHairStyleDefinitionsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.HeadHairStyleDefinitions"); }
    TArray<UGenericDataListEntry*>& HeadHairStylesEntriesObjectsField() const
    { return *GetNativePointerField<TArray<UGenericDataListEntry*>*>(this, "UPrimalGameData.HeadHairStylesEntriesObjects"); }
    USoundBase*& HitMarkerCharacterSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.HitMarkerCharacterSound"); }
    USoundBase*& HitMarkerStructureSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.HitMarkerStructureSound"); }
    BrzCampoPonteiro HostilePlayerBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.HostilePlayerBuff")); }
    BrzCampoPonteiro HotbarSkillItemClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.HotbarSkillItemClass")); }
    UTexture2D*& ImprintedRiderIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.ImprintedRiderIcon"); }
    TArray<void*>& InvalidReferenceRedirectsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.InvalidReferenceRedirects"); }
    BrzCampoPonteiro ItemAchievementsListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.ItemAchievementsList")); }
    FString& ItemAchievementsNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalGameData.ItemAchievementsName"); }
    UTexture2D*& ItemButtonRecentlySelectedBackgroundField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.ItemButtonRecentlySelectedBackground"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `GenericBatteryItemClass` +8, medido na build 25090264
    //  (offset absoluto medido: 0x3178; confianca alta)
    void*& ItemEngramMapField() const
    { return BrzCampoAncorado<void*>(this, "GenericBatteryItemClass", 8); }
    TArray<void*>& ItemQualityDefinitionsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.ItemQualityDefinitions"); }
    UTexture2D*& ItemSkinIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.ItemSkinIcon"); }
    UDataTable*& ItemSpawnBlacklistDataTableField() const
    { return *GetNativePointerField<UDataTable**>(this, "UPrimalGameData.ItemSpawnBlacklistDataTable"); }
    BrzCampoPonteiro ItemStatDefinitionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.ItemStatDefinitions")); }
    BrzCampoPonteiro ItemTraitIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.ItemTraitIcon")); }
    BrzCampoPonteiro ItemTypeDefinitionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.ItemTypeDefinitions")); }
    BrzCampoPonteiro LevelExperienceRampsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.LevelExperienceRamps")); }
    USoundBase*& LevelUpStingerSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.LevelUpStingerSound"); }
    BrzCampoPonteiro LoadedCustomCosmeticSkinsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.LoadedCustomCosmeticSkins")); }
    UParticleSystem*& LockedToSeatingStructureParticleField() const
    { return *GetNativePointerField<UParticleSystem**>(this, "UPrimalGameData.LockedToSeatingStructureParticle"); }
    FString& MainMenuMapOverrideField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalGameData.MainMenuMapOverride"); }
    BrzCampoPonteiro MainNameWordListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.MainNameWordList")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PostRespawnUISound` +8, medido na build 25090264
    //  (offset absoluto medido: 0x33E8; confianca alta)
    TArray<void*>& MapMovieOrderHelperField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "PostRespawnUISound", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MasterDyeList` +16, medido na build 25090264
    //  (offset absoluto medido: 0x2878; confianca alta)
    TArray<void*>& MasterColorTableField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "MasterDyeList", 16); }
    BrzCampoPonteiro MasterDyeListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.MasterDyeList")); }
    UTexture2D*& MasterDyeListLUTField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.MasterDyeListLUT"); }
    BrzCampoPonteiro MasterItemListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.MasterItemList")); }
    UTexture2D*& MateBoostIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.MateBoostIcon"); }
    UTexture2D*& MatingIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.MatingIcon"); }
    float& MaxDinoRadiusForPaintConsumptionField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameData.MaxDinoRadiusForPaintConsumption"); }
    UTexture2D*& MaxInventoryIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.MaxInventoryIcon"); }
    int& MaxLocalPlayersField() const
    { return *GetNativePointerField<int*>(this, "UPrimalGameData.MaxLocalPlayers"); }
    float& MaxPaintDurationConsumptionField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameData.MaxPaintDurationConsumption"); }
    int& MaxThreatField() const
    { return *GetNativePointerField<int*>(this, "UPrimalGameData.MaxThreat"); }
    BrzCampoPonteiro MeleeHitColorizeStructuresUIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.MeleeHitColorizeStructuresUI")); }
    BrzCampoPonteiro MilestoneCompleteEffectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.MilestoneCompleteEffects")); }
    BrzCampoPonteiro MilestoneComplete_SoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.MilestoneComplete_Sound")); }
    float& MinDinoRadiusForPaintConsumptionField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameData.MinDinoRadiusForPaintConsumption"); }
    float& MinPaintDurationConsumptionField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameData.MinPaintDurationConsumption"); }
    BrzCampoPonteiro ModCustomCosmeticEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.ModCustomCosmeticEntries")); }
    FString& ModDescriptionField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalGameData.ModDescription"); }
    BrzCampoPonteiro ModIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.ModIcon")); }
    FString& ModNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalGameData.ModName"); }
    BrzCampoPonteiro ModWheelIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.ModWheelIcon")); }
    TArray<void*>& MultiAchievementsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.MultiAchievements"); }
    UTexture2D*& NameTagServerAdminField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.NameTagServerAdmin"); }
    UTexture2D*& NameTagTribeAdminField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.NameTagTribeAdmin"); }
    UTexture2D*& NameTagWildcardAdminField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.NameTagWildcardAdmin"); }
    BrzCampoPonteiro NamedExplorerNoteEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.NamedExplorerNoteEntries")); }
    TArray<void*>& NamedTeamDefinitionsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.NamedTeamDefinitions"); }
    UTexture2D*& NearFeedIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.NearFeedIcon"); }
    BrzCampoPonteiro NotifClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.NotifClass")); }
    float& OverrideCorpseLifespanFixedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameData.OverrideCorpseLifespanFixed"); }
    BrzCampoPonteiro OverridePhotoModeClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.OverridePhotoModeClass")); }
    BrzCampoPonteiro OverridePlayerDataClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.OverridePlayerDataClass")); }
    int& OverrideServerPhysXSubstepsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalGameData.OverrideServerPhysXSubsteps"); }
    float& OverrideServerPhysXSubstepsDeltaTimeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameData.OverrideServerPhysXSubstepsDeltaTime"); }
    BrzCampoPonteiro OverrideUICustomOverlayClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.OverrideUICustomOverlayClass")); }
    UTexture2D*& ParentDinoIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.ParentDinoIcon"); }
    UTexture2D*& PerMapExplorerNoteLockedIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.PerMapExplorerNoteLockedIcon"); }
    BrzCampoPonteiro PhotoModeClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.PhotoModeClass")); }
    BrzCampoPonteiro PlayerCharacterGenderDefinitionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.PlayerCharacterGenderDefinitions")); }
    TArray<void*>& PlayerConfigVoiceCollectionOptionsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.PlayerConfigVoiceCollectionOptions"); }
    TArray<void*>& PlayerLevelEngramPointsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.PlayerLevelEngramPoints"); }
    TArray<void*>& PlayerLevelEngramPointsSPField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.PlayerLevelEngramPointsSP"); }
    unsigned int& PlayerMeshMaterialIndexField() const
    { return *GetNativePointerField<unsigned int*>(this, "UPrimalGameData.PlayerMeshMaterialIndex"); }
    UTexture2D*& PlayerMinimalIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.PlayerMinimalIcon"); }
    TArray<void*>& PlayerSpawnRegionsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.PlayerSpawnRegions"); }
    UTexture2D*& PointOfInterest_Icon_PlayerField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.PointOfInterest_Icon_Player"); }
    UTexture2D*& PointOfInterest_Icon_TamingCompleteField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.PointOfInterest_Icon_TamingComplete"); }
    UTexture2D*& PointOfInterest_Icon_TamingInProgressField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.PointOfInterest_Icon_TamingInProgress"); }
    BrzCampoPonteiro PointOfInterest_IndicatorColor_DefaultField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.PointOfInterest_IndicatorColor_Default")); }
    BrzCampoPonteiro PointOfInterest_IndicatorColor_ObjectiveCompleteField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.PointOfInterest_IndicatorColor_ObjectiveComplete")); }
    BrzCampoPonteiro PointOfInterest_ProgressBarColor_TamingAffinityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.PointOfInterest_ProgressBarColor_TamingAffinity")); }
    UMaterialInterface*& PostProcess_ColorLUTField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalGameData.PostProcess_ColorLUT"); }
    UMaterialInterface*& PostProcess_KnockoutBlurField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalGameData.PostProcess_KnockoutBlur"); }
    BrzCampoPonteiro PostProcess_LowHealthField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.PostProcess_LowHealth")); }
    USoundBase*& PostRespawnUISoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.PostRespawnUISound"); }
    USoundBase*& PreRespawnUISoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.PreRespawnUISound"); }
    TArray<void*>& PreventBuildStructureReasonStringsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.PreventBuildStructureReasonStrings"); }
    UTexture2D*& PreventGrindingIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.PreventGrindingIcon"); }
    BrzCampoPonteiro PreventLinkingContainerToStorageInterfaceIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.PreventLinkingContainerToStorageInterfaceIcon")); }
    BrzCampoPonteiro PrimaryResourcesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.PrimaryResources")); }
    BrzCampoPonteiro ProfilingDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.ProfilingDinos")); }
    BrzCampoPonteiro ProfilingStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.ProfilingStructures")); }
    int& RadialSelecterNumDivisionsOverrideField() const
    { return *GetNativePointerField<int*>(this, "UPrimalGameData.RadialSelecterNumDivisionsOverride"); }
    TArray<void*>& Remap_ActiveEventSupplyCratesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.Remap_ActiveEventSupplyCrates"); }
    TArray<void*>& Remap_EngramsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.Remap_Engrams"); }
    TArray<void*>& Remap_ItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.Remap_Items"); }
    TArray<void*>& Remap_NPCField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.Remap_NPC"); }
    TArray<void*>& Remap_NPCSpawnEntriesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.Remap_NPCSpawnEntries"); }
    TArray<void*>& Remap_ResourceComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.Remap_ResourceComponents"); }
    TArray<void*>& Remap_SupplyCratesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.Remap_SupplyCrates"); }
    BrzCampoPonteiro RemoveEngramBlueprintClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.RemoveEngramBlueprintClasses")); }
    BrzCampoPonteiro RepeatableMilestoneFlatXPTableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.RepeatableMilestoneFlatXPTable")); }
    BrzCampoPonteiro RepeatableXPThresholdsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.RepeatableXPThresholds")); }
    BrzCampoPonteiro SeamlessTransitionMapOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.SeamlessTransitionMapOverride")); }
    BrzCampoPonteiro ServerExtraWorldSingletonActorClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.ServerExtraWorldSingletonActorClasses")); }
    BrzCampoPonteiro SinglePlayerLevelExperienceRampsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.SinglePlayerLevelExperienceRamps")); }
    BrzCampoPonteiro SkeletalPhysCustomBodyAdditionalIgnoresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.SkeletalPhysCustomBodyAdditionalIgnores")); }
    BrzCampoPonteiro SkillTreeUIDataContainerClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.SkillTreeUIDataContainerClasses")); }
    BrzCampoPonteiro SoapItemTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.SoapItemTemplate")); }
    BrzCampoPonteiro SoftTameLimitCryoIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.SoftTameLimitCryoIcon")); }
    USoundBase*& Sound_AddItemToSlotField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_AddItemToSlot"); }
    USoundBase*& Sound_AddPinToMapField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_AddPinToMap"); }
    USoundBase*& Sound_AddToCraftQueueField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_AddToCraftQueue"); }
    USoundBase*& Sound_AddToCraftQueueAltField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_AddToCraftQueueAlt"); }
    USoundBase*& Sound_ApplyDyeField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ApplyDye"); }
    USoundBase*& Sound_ApplyLevelPointField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ApplyLevelPoint"); }
    USoundBase*& Sound_ApplyLevelUpField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ApplyLevelUp"); }
    USoundBase*& Sound_ApplyPaintField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ApplyPaint"); }
    USoundBase*& Sound_CancelPlacingStructureField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_CancelPlacingStructure"); }
    USoundBase*& Sound_ChooseStructureRotationField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ChooseStructureRotation"); }
    USoundBase*& Sound_ClearCraftQueueField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ClearCraftQueue"); }
    USoundBase*& Sound_ConfirmPlacingStructureField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ConfirmPlacingStructure"); }
    USoundBase*& Sound_CorpseDecomposeField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_CorpseDecompose"); }
    USoundBase*& Sound_CraftingTabToggleField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_CraftingTabToggle"); }
    USoundBase*& Sound_DossierUnlockedField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_DossierUnlocked"); }
    USoundBase*& Sound_DropAllItemsField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_DropAllItems"); }
    USoundBase*& Sound_DropInventoryItemField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_DropInventoryItem"); }
    USoundBase*& Sound_FailPlacingStructureField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_FailPlacingStructure"); }
    USoundBase*& Sound_GenericBoardPassengerField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_GenericBoardPassenger"); }
    USoundBase*& Sound_GenericUnboardPassengerField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_GenericUnboardPassenger"); }
    USoundBase*& Sound_InputPinDigitField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_InputPinDigit"); }
    USoundBase*& Sound_ItemFinishCraftingField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ItemFinishCrafting"); }
    USoundBase*& Sound_ItemFinishRepairingField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ItemFinishRepairing"); }
    USoundBase*& Sound_ItemStartCraftingField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ItemStartCrafting"); }
    USoundBase*& Sound_ItemStartRepairingField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ItemStartRepairing"); }
    USoundBase*& Sound_ItemUseOnItemField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ItemUseOnItem"); }
    USoundBase*& Sound_LearnedEngramField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_LearnedEngram"); }
    USoundBase*& Sound_MergeItemStackField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_MergeItemStack"); }
    USoundBase*& Sound_PinRejectedField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_PinRejected"); }
    USoundBase*& Sound_PinValidatedField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_PinValidated"); }
    USoundBase*& Sound_ReconnectToCharacterField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_ReconnectToCharacter"); }
    USoundBase*& Sound_RefillWaterContainerField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_RefillWaterContainer"); }
    USoundBase*& Sound_RemoveClipAmmoField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_RemoveClipAmmo"); }
    USoundBase*& Sound_RemoveItemFromSlotField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_RemoveItemFromSlot"); }
    USoundBase*& Sound_RemoveItemSkinField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_RemoveItemSkin"); }
    USoundBase*& Sound_RemovePinFromMapField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_RemovePinFromMap"); }
    USoundBase*& Sound_SetRadioFrequencyField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_SetRadioFrequency"); }
    USoundBase*& Sound_SetTextGenericField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_SetTextGeneric"); }
    USoundBase*& Sound_SplitItemStackField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_SplitItemStack"); }
    USoundBase*& Sound_StartItemDragField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_StartItemDrag"); }
    USoundBase*& Sound_StartPlacingStructureField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_StartPlacingStructure"); }
    USoundBase*& Sound_StopItemDragField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_StopItemDrag"); }
    BrzCampoPonteiro Sound_TamedDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.Sound_TamedDinos")); }
    USoundBase*& Sound_TransferAllItemsFromRemoteField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_TransferAllItemsFromRemote"); }
    USoundBase*& Sound_TransferAllItemsToRemoteField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_TransferAllItemsToRemote"); }
    USoundBase*& Sound_TransferItemFromRemoteField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_TransferItemFromRemote"); }
    USoundBase*& Sound_TransferItemToRemoteField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_TransferItemToRemote"); }
    USoundBase*& Sound_TribeWarBeginField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_TribeWarBegin"); }
    USoundBase*& Sound_TribeWarEndField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.Sound_TribeWarEnd"); }
    BrzCampoPonteiro SparseDataOverrideManagerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.SparseDataOverrideManager")); }
    BrzCampoPonteiro SpecialExplorerNoteXPBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.SpecialExplorerNoteXPBuff")); }
    BrzCampoPonteiro StarterNoteItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.StarterNoteItem")); }
    BrzCampoPonteiro StatusStateDefinitionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.StatusStateDefinitions")); }
    BrzCampoPonteiro StatusValueDefinitionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.StatusValueDefinitions")); }
    TArray<void*>& StatusValueModifierDescriptionsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.StatusValueModifierDescriptions"); }
    BrzCampoPonteiro StructureDefaultOverlayToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.StructureDefaultOverlayToolTipWidget")); }
    BrzCampoPonteiro StructureEffectsDataTableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.StructureEffectsDataTable")); }
    TArray<void*>& SubtitleColorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.SubtitleColors"); }
    UTexture2D*& TamedDinoLockedIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.TamedDinoLockedIcon"); }
    UTexture2D*& TamedDinoUnlockedIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.TamedDinoUnlockedIcon"); }
    UTexture2D*& TethererdIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.TethererdIcon"); }
    TArray<void*>& TheNPCSpawnEntriesContainerAdditionsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.TheNPCSpawnEntriesContainerAdditions"); }
    BrzCampoPonteiro ThreateningPlayerBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.ThreateningPlayerBuff")); }
    USoundBase*& TrackMissionSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.TrackMissionSound"); }
    float& TribeXPSharePercentField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGameData.TribeXPSharePercent"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `GenericDroppedItemTemplateLowQuality` +8, medido na build 25090264
    //  (offset absoluto medido: 0x10F0; confianca alta)
    TArray<void*>& TutorialDefinitionsField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "GenericDroppedItemTemplateLowQuality", 8); }
    USoundBase*& TutorialDisplaySoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.TutorialDisplaySound"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CustomCosmeticEyebrowsCollection` +48, medido na build 25090264
    //  (offset absoluto medido: 0x2FD0; confianca media)
    void*& UISelectionIndexEyebrowMapField() const
    { return BrzCampoAncorado<void*>(this, "CustomCosmeticEyebrowsCollection", 48); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CustomCosmeticEyebrowsCollection` +32, medido na build 25090264
    //  (offset absoluto medido: 0x2FC0; confianca alta)
    void*& UISelectionIndexFacialHairMapField() const
    { return BrzCampoAncorado<void*>(this, "CustomCosmeticEyebrowsCollection", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CustomCosmeticEyebrowsCollection` +16, medido na build 25090264
    //  (offset absoluto medido: 0x2FB0; confianca alta)
    void*& UISelectionIndexHeadHairMapField() const
    { return BrzCampoAncorado<void*>(this, "CustomCosmeticEyebrowsCollection", 16); }
    UTexture2D*& UnknownIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.UnknownIcon"); }
    UMaterialInterface*& UnknownMaterialField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalGameData.UnknownMaterial"); }
    UTexture2D*& UnlockIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.UnlockIcon"); }
    TArray<void*>& UnlockableEmotesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalGameData.UnlockableEmotes"); }
    USoundBase*& UntrackMissionSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "UPrimalGameData.UntrackMissionSound"); }
    UTexture2D*& VoiceChatIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.VoiceChatIcon"); }
    UTexture2D*& VoiceChatMutedIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.VoiceChatMutedIcon"); }
    BrzCampoPonteiro VolumetricDispatcherClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.VolumetricDispatcherClass")); }
    UTexture2D*& WeaponAccessoryActivatedIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.WeaponAccessoryActivatedIcon"); }
    BrzCampoPonteiro WellKnownItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.WellKnownItems")); }
    BrzCampoPonteiro WheelBackColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.WheelBackColor")); }
    BrzCampoPonteiro WheelFolderColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGameData.WheelFolderColor")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LoadedCustomCosmeticSkins` +80, medido na build 25090264
    //  (offset absoluto medido: 0x3690; confianca media)
    void*& WhiteListedCustomCosmeticModSkinsField() const
    { return BrzCampoAncorado<void*>(this, "LoadedCustomCosmeticSkins", 80); }
    UTexture2D*& WhiteTextureField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalGameData.WhiteTexture"); }
    UPrimalWorldBuffData*& WorldBuffDataField() const
    { return *GetNativePointerField<UPrimalWorldBuffData**>(this, "UPrimalGameData.WorldBuffData"); }
    bool& bForceEnablePhysicsSimulationField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalGameData.bForceEnablePhysicsSimulation"); }
    //  no cache antigo este campo se chamava bForceEnablePhysicsSimulation_DEPRECATED.
    //  nesta build ele e' `bForceEnablePhysicsSimulation` — resolve por NOME.
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LoadedCustomCosmeticSkins` +96, medido na build 25090264
    //  (offset absoluto medido: 0x36A0; confianca media)
    void*& bHasInitializedCosmeticsField() const
    { return BrzCampoAncorado<void*>(this, "LoadedCustomCosmeticSkins", 96); }
    BitFieldValue<bool, unsigned __int32> bAllowAdditionalLocalPlayersWithoutFirstPlayerPawn()
    { return { (void*)this, "bAllowAdditionalLocalPlayersWithoutFirstPlayerPawn" }; }
    BitFieldValue<bool, unsigned __int32> bAllowForceAttackUnconsciousTarget()
    { return { (void*)this, "bAllowForceAttackUnconsciousTarget" }; }
    BitFieldValue<bool, unsigned __int32> bAllowJumpingWhileCrafting()
    { return { (void*)this, "bAllowJumpingWhileCrafting" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRunningWhileCrafting()
    { return { (void*)this, "bAllowRunningWhileCrafting" }; }
    BitFieldValue<bool, unsigned __int32> bCameraPPAllowNonShooterChar()
    { return { (void*)this, "bCameraPPAllowNonShooterChar" }; }
    BitFieldValue<bool, unsigned __int32> bDinoCheckControlledByPlayerBuff()
    { return { (void*)this, "bDinoCheckControlledByPlayerBuff" }; }
    BitFieldValue<bool, unsigned __int32> bDinoConsumeRunningStaminaWithPC()
    { return { (void*)this, "bDinoConsumeRunningStaminaWithPC" }; }
    BitFieldValue<bool, unsigned __int32> bDisableDeathMarkers()
    { return { (void*)this, "bDisableDeathMarkers" }; }
    BitFieldValue<bool, unsigned __int32> bDisableDefaultWeaponEquipOnEmptySlot()
    { return { (void*)this, "bDisableDefaultWeaponEquipOnEmptySlot" }; }
    BitFieldValue<bool, unsigned __int32> bDisableFogOfWar()
    { return { (void*)this, "bDisableFogOfWar" }; }
    BitFieldValue<bool, unsigned __int32> bDisableFoodConsumption()
    { return { (void*)this, "bDisableFoodConsumption" }; }
    BitFieldValue<bool, unsigned __int32> bDisableHarvesting()
    { return { (void*)this, "bDisableHarvesting" }; }
    BitFieldValue<bool, unsigned __int32> bDisableItemAddedRemovedNotifications()
    { return { (void*)this, "bDisableItemAddedRemovedNotifications" }; }
    BitFieldValue<bool, unsigned __int32> bDisableMUEntriesForSOTF()
    { return { (void*)this, "bDisableMUEntriesForSOTF" }; }
    BitFieldValue<bool, unsigned __int32> bDisableSplitscreen()
    { return { (void*)this, "bDisableSplitscreen" }; }
    BitFieldValue<bool, unsigned __int32> bDisableTamedDinoStasis()
    { return { (void*)this, "bDisableTamedDinoStasis" }; }
    BitFieldValue<bool, unsigned __int32> bDisableTribeManager()
    { return { (void*)this, "bDisableTribeManager" }; }
    BitFieldValue<bool, unsigned __int32> bDisableUnderMeshChecks()
    { return { (void*)this, "bDisableUnderMeshChecks" }; }
    BitFieldValue<bool, unsigned __int32> bDisableWakingTame()
    { return { (void*)this, "bDisableWakingTame" }; }
    BitFieldValue<bool, unsigned __int32> bDisableWildBabySpawns()
    { return { (void*)this, "bDisableWildBabySpawns" }; }
    BitFieldValue<bool, unsigned __int32> bDisableWildDinoInventoryDrop()
    { return { (void*)this, "bDisableWildDinoInventoryDrop" }; }
    BitFieldValue<bool, unsigned __int32> bDoNotConsumeDefaultARKInputs()
    { return { (void*)this, "bDoNotConsumeDefaultARKInputs" }; }
    BitFieldValue<bool, unsigned __int32> bDontForceFPVForPCViewTarget()
    { return { (void*)this, "bDontForceFPVForPCViewTarget" }; }
    BitFieldValue<bool, unsigned __int32> bEnableCanMoveThroughActor()
    { return { (void*)this, "bEnableCanMoveThroughActor" }; }
    BitFieldValue<bool, unsigned __int32> bEnableCharacterGetCustomTooltip()
    { return { (void*)this, "bEnableCharacterGetCustomTooltip" }; }
    BitFieldValue<bool, unsigned __int32> bForceEnablePhysicsSimulation()
    { return { (void*)this, "bForceEnablePhysicsSimulation" }; }
    BitFieldValue<bool, unsigned __int32> bForceInfiniteWeight()
    { return { (void*)this, "bForceInfiniteWeight" }; }
    BitFieldValue<bool, unsigned __int32> bForceServerUseDinoList()
    { return { (void*)this, "bForceServerUseDinoList" }; }
    BitFieldValue<bool, unsigned __int32> bForceStepDamageOnlyFoliage()
    { return { (void*)this, "bForceStepDamageOnlyFoliage" }; }
    BitFieldValue<bool, unsigned __int32> bHideRepairOnDinoToolTip()
    { return { (void*)this, "bHideRepairOnDinoToolTip" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreSwimmingStaminaRecoveryRate()
    { return { (void*)this, "bIgnoreSwimmingStaminaRecoveryRate" }; }
    BitFieldValue<bool, unsigned __int32> bInitialized()
    { return { (void*)this, "bInitialized" }; }
    BitFieldValue<bool, unsigned __int32> bIsSOTFGameMode()
    { return { (void*)this, "bIsSOTFGameMode" }; }
    BitFieldValue<bool, unsigned __int32> bOfficialServerAllowDinoPossesion()
    { return { (void*)this, "bOfficialServerAllowDinoPossesion" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyAllowGlobalChatInLobby()
    { return { (void*)this, "bOnlyAllowGlobalChatInLobby" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCharacterCreationHeightSlider()
    { return { (void*)this, "bPreventCharacterCreationHeightSlider" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCharacterCreationSpawnMap()
    { return { (void*)this, "bPreventCharacterCreationSpawnMap" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDinoKillVictimItemCollection()
    { return { (void*)this, "bPreventDinoKillVictimItemCollection" }; }
    BitFieldValue<bool, unsigned __int32> bPreventPhotoMode()
    { return { (void*)this, "bPreventPhotoMode" }; }
    BitFieldValue<bool, unsigned __int32> bRidingEquipsDefaultWeapon()
    { return { (void*)this, "bRidingEquipsDefaultWeapon" }; }
    BitFieldValue<bool, unsigned __int32> bSameTeamAlwaysRelevant()
    { return { (void*)this, "bSameTeamAlwaysRelevant" }; }
    BitFieldValue<bool, unsigned __int32> bStopAttackingUnconsciousTarget()
    { return { (void*)this, "bStopAttackingUnconsciousTarget" }; }
    BitFieldValue<bool, unsigned __int32> bUseAbilityDescriptions()
    { return { (void*)this, "bUseAbilityDescriptions" }; }
    BitFieldValue<bool, unsigned __int32> bUseDisablePaintingsUserSetting()
    { return { (void*)this, "bUseDisablePaintingsUserSetting" }; }
    BitFieldValue<bool, unsigned __int32> bUseSOTFFloatingDamage()
    { return { (void*)this, "bUseSOTFFloatingDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseSOTFHUDHandling()
    { return { (void*)this, "bUseSOTFHUDHandling" }; }
    BitFieldValue<bool, unsigned __int32> bUseSOTFInputHandling()
    { return { (void*)this, "bUseSOTFInputHandling" }; }
    BitFieldValue<bool, unsigned __int32> bUsesCustomPlayerData()
    { return { (void*)this, "bUsesCustomPlayerData" }; }
    BitFieldValue<bool, unsigned __int32> bWantsToRunMissions()
    { return { (void*)this, "bWantsToRunMissions" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALGAMEDATA_H

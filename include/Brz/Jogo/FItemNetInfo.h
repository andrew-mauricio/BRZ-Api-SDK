// ==========================================================================
//  FItemNetInfo — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FITEMNETINFO_H
#define BRZ_SDK_JOGO_FITEMNETINFO_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FItemNetID;
struct UScriptStruct;


struct FItemNetInfo
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FItemNetInfo"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   FItemNetInfo.NetSerialize(FArchive&,UPackageMap*,bool&)
    // endereco: casamento de bytes com a build de referencia
    bool NetSerialize(void* a0, void* a1, void* a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "FItemNetInfo.NetSerialize(FArchive&,UPackageMap*,bool&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FItemNetInfo.StaticStruct()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo+string_aprovado]
    static UScriptStruct* StaticStruct()
    {
        return NativeCall<UScriptStruct*>(nullptr, "FItemNetInfo.StaticStruct()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FItemNetInfo.operator=(FItemNetInfo&&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro operator_(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FItemNetInfo.operator=(FItemNetInfo&&)", a0);
    }

    // ── SOBRECARGAS QUE NAO CABEM EM C++ ─────────────────────────────
    //
    //  Estas existem no jogo, e a chave delas resolve normalmente por
    //  `GetAddress` / `NativeCall`. O que nao cabe e' a DECLARACAO: em C
    //  os parametros viram os mesmos da que ficou, ou a diferenca esta'
    //  so' no retorno — e C++ nao sobrecarrega por retorno.
    //
    //  Para chamar uma destas, use `NativeCall` direto com a chave:
    //    FItemNetInfo.operator=(FItemNetInfo&)
    //      (colide com FItemNetInfo.operator=(FItemNetInfo&&))

    BrzCampoPonteiro AssociatedDinoID1Field() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FItemNetInfo.AssociatedDinoID1")); }
    BrzCampoPonteiro AssociatedDinoID2Field() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FItemNetInfo.AssociatedDinoID2")); }
    double& ClusterSpoilingTimeUTCField() const
    { return *GetNativePointerField<double*>(this, "FItemNetInfo.ClusterSpoilingTimeUTC"); }
    unsigned short& CraftQueueField() const
    { return *GetNativePointerField<unsigned short*>(this, "FItemNetInfo.CraftQueue"); }
    float& CraftedSkillBonusField() const
    { return *GetNativePointerField<float*>(this, "FItemNetInfo.CraftedSkillBonus"); }
    FString& CrafterCharacterNameField() const
    { return *GetNativePointerField<FString*>(this, "FItemNetInfo.CrafterCharacterName"); }
    FString& CrafterTribeNameField() const
    { return *GetNativePointerField<FString*>(this, "FItemNetInfo.CrafterTribeName"); }
    float& CraftingSkillField() const
    { return *GetNativePointerField<float*>(this, "FItemNetInfo.CraftingSkill"); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "FItemNetInfo.CreationTime"); }
    BrzCampoPonteiro CustomCosmeticAuthVarsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FItemNetInfo.CustomCosmeticAuthVars")); }
    BrzCampoPonteiro CustomCosmeticModSkinReplacementIDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FItemNetInfo.CustomCosmeticModSkinReplacementID")); }
    BrzCampoPonteiro CustomCosmeticModSkinReplacementOriginalClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FItemNetInfo.CustomCosmeticModSkinReplacementOriginalClass")); }
    BrzCampoPonteiro CustomCosmeticModSkinVariantIDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FItemNetInfo.CustomCosmeticModSkinVariantID")); }
    TArray<void*>& CustomItemColorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FItemNetInfo.CustomItemColors"); }
    TArray<void*>& CustomItemDatasField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FItemNetInfo.CustomItemDatas"); }
    FString& CustomItemDescriptionField() const
    { return *GetNativePointerField<FString*>(this, "FItemNetInfo.CustomItemDescription"); }
    int& CustomItemIDField() const
    { return *GetNativePointerField<int*>(this, "FItemNetInfo.CustomItemID"); }
    FString& CustomItemNameField() const
    { return *GetNativePointerField<FString*>(this, "FItemNetInfo.CustomItemName"); }
    TArray<void*>& CustomResourceRequirementsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FItemNetInfo.CustomResourceRequirements"); }
    FieldArray<unsigned char> EggColorSetIndicesField() const
    { return { (void*)this, "FItemNetInfo.EggColorSetIndices" }; }
    TArray<void*>& EggDinoAncestorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FItemNetInfo.EggDinoAncestors"); }
    TArray<void*>& EggDinoAncestorsMaleField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FItemNetInfo.EggDinoAncestorsMale"); }
    BrzCampoPonteiro EggDinoGeneTraitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FItemNetInfo.EggDinoGeneTraits")); }
    int& EggGenderOverrideField() const
    { return *GetNativePointerField<int*>(this, "FItemNetInfo.EggGenderOverride"); }
    BrzCampoPonteiro EggNewMutationCountField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FItemNetInfo.EggNewMutationCount")); }
    FieldArray<unsigned char> EggNumberMutationsAppliedField() const
    { return { (void*)this, "FItemNetInfo.EggNumberMutationsApplied" }; }
    FieldArray<unsigned char> EggNumberOfLevelUpPointsAppliedField() const
    { return { (void*)this, "FItemNetInfo.EggNumberOfLevelUpPointsApplied" }; }
    int& EggRandomMutationsFemaleField() const
    { return *GetNativePointerField<int*>(this, "FItemNetInfo.EggRandomMutationsFemale"); }
    int& EggRandomMutationsMaleField() const
    { return *GetNativePointerField<int*>(this, "FItemNetInfo.EggRandomMutationsMale"); }
    float& EggTamedIneffectivenessModifierField() const
    { return *GetNativePointerField<float*>(this, "FItemNetInfo.EggTamedIneffectivenessModifier"); }
    BrzCampoPonteiro ExpirationTimeUTCField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FItemNetInfo.ExpirationTimeUTC")); }
    BrzCampoPonteiro ItemArchetypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FItemNetInfo.ItemArchetype")); }
    FieldArray<short> ItemColorIDField() const
    { return { (void*)this, "FItemNetInfo.ItemColorID" }; }
    BrzCampoPonteiro ItemCustomClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FItemNetInfo.ItemCustomClass")); }
    float& ItemDurabilityField() const
    { return *GetNativePointerField<float*>(this, "FItemNetInfo.ItemDurability"); }
    FItemNetID& ItemIDField() const
    { return *GetNativePointerField<FItemNetID*>(this, "FItemNetInfo.ItemID"); }
    BrzCampoPonteiro ItemProfileVersionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FItemNetInfo.ItemProfileVersion")); }
    BrzCampoPonteiro ItemQualityIndexField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FItemNetInfo.ItemQualityIndex")); }
    BrzCampoPonteiro ItemQuantityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FItemNetInfo.ItemQuantity")); }
    float& ItemRatingField() const
    { return *GetNativePointerField<float*>(this, "FItemNetInfo.ItemRating"); }
    BrzCampoPonteiro ItemSkinTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FItemNetInfo.ItemSkinTemplate")); }
    float& ItemStatClampsMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FItemNetInfo.ItemStatClampsMultiplier"); }
    FieldArray<unsigned short> ItemStatValuesField() const
    { return { (void*)this, "FItemNetInfo.ItemStatValues" }; }
    BrzCampoPonteiro ItemVersionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FItemNetInfo.ItemVersion")); }
    double& LastAutoDurabilityDecreaseTimeField() const
    { return *GetNativePointerField<double*>(this, "FItemNetInfo.LastAutoDurabilityDecreaseTime"); }
    TWeakObjectPtr<void>& LastOwnerPlayerField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "FItemNetInfo.LastOwnerPlayer"); }
    double& LastSpoilingTimeField() const
    { return *GetNativePointerField<double*>(this, "FItemNetInfo.LastSpoilingTime"); }
    double& NextCraftCompletionTimeField() const
    { return *GetNativePointerField<double*>(this, "FItemNetInfo.NextCraftCompletionTime"); }
    double& NextSpoilingTimeField() const
    { return *GetNativePointerField<double*>(this, "FItemNetInfo.NextSpoilingTime"); }
    BrzCampoPonteiro OriginalItemDropLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FItemNetInfo.OriginalItemDropLocation")); }
    unsigned long long& OwnerPlayerDataIdField() const
    { return *GetNativePointerField<unsigned long long*>(this, "FItemNetInfo.OwnerPlayerDataId"); }
    FieldArray<short> PreSkinItemColorIDField() const
    { return { (void*)this, "FItemNetInfo.PreSkinItemColorID" }; }
    int& SlotIndexField() const
    { return *GetNativePointerField<int*>(this, "FItemNetInfo.SlotIndex"); }
    TArray<void*>& SteamUserItemIDField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FItemNetInfo.SteamUserItemID"); }
    double& UploadEarliestValidTimeField() const
    { return *GetNativePointerField<double*>(this, "FItemNetInfo.UploadEarliestValidTime"); }
    BrzCampoPonteiro WeaponClipAmmoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FItemNetInfo.WeaponClipAmmo")); }
    BitFieldValue<bool, unsigned __int32> bIsBlueprint()
    { return { (void*)this, "bIsBlueprint" }; }
    BitFieldValue<bool, unsigned __int32> bIsEngram()
    { return { (void*)this, "bIsEngram" }; }
    BitFieldValue<bool, unsigned __int32> bIsCustomRecipe()
    { return { (void*)this, "bIsCustomRecipe" }; }
    BitFieldValue<bool, unsigned __int32> bIsFoodRecipe()
    { return { (void*)this, "bIsFoodRecipe" }; }
    BitFieldValue<bool, unsigned __int32> bIsRepairing()
    { return { (void*)this, "bIsRepairing" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRemovalFromInventory()
    { return { (void*)this, "bAllowRemovalFromInventory" }; }
    BitFieldValue<bool, unsigned __int32> bHideFromInventoryDisplay()
    { return { (void*)this, "bHideFromInventoryDisplay" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRemovalFromSteamInventory()
    { return { (void*)this, "bAllowRemovalFromSteamInventory" }; }
    BitFieldValue<bool, unsigned __int32> bFromSteamInventory()
    { return { (void*)this, "bFromSteamInventory" }; }
    BitFieldValue<bool, unsigned __int32> bIsFromAllClustersInventory()
    { return { (void*)this, "bIsFromAllClustersInventory" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventGrinding()
    { return { (void*)this, "bForcePreventGrinding" }; }
    BitFieldValue<bool, unsigned __int32> bIsEquipped()
    { return { (void*)this, "bIsEquipped" }; }
    BitFieldValue<bool, unsigned __int32> bIsSlot()
    { return { (void*)this, "bIsSlot" }; }
    BitFieldValue<bool, unsigned __int32> bIsInitialItem()
    { return { (void*)this, "bIsInitialItem" }; }
    BitFieldValue<bool, unsigned __int32> bDoApplyOriginalColorsWhenUnskinned()
    { return { (void*)this, "bDoApplyOriginalColorsWhenUnskinned" }; }
    BitFieldValue<bool, unsigned __int32> bIsFromClubArk()
    { return { (void*)this, "bIsFromClubArk" }; }
    BitFieldValue<bool, unsigned __int32> bNetInfoFromClient()
    { return { (void*)this, "bNetInfoFromClient" }; }

};

#endif  // BRZ_SDK_JOGO_FITEMNETINFO_H

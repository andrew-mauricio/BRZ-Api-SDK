// ==========================================================================
//  FPrimalPersistentCharacterStatsStruct — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FPRIMALPERSISTENTCHARACTERSTATSSTRUCT_H
#define BRZ_SDK_JOGO_FPRIMALPERSISTENTCHARACTERSTATSSTRUCT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FDinoOrderGroup;


struct FPrimalPersistentCharacterStatsStruct
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FPrimalPersistentCharacterStatsStruct"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   FPrimalPersistentCharacterStatsStruct.ApplyToPrimalCharacter(APrimalCharacter*,AShooterPlayerCon
    // endereco: casamento de bytes com a build de referencia
    void ApplyToPrimalCharacter(void* a0, void* a1, bool a2) const
    {
        NativeCall<void, void*, void*, bool>(this, "FPrimalPersistentCharacterStatsStruct.ApplyToPrimalCharacter(APrimalCharacter*,AShooterPlayerController*,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   FPrimalPersistentCharacterStatsStruct.GiveEngramsToPlayerState(APrimalCharacter*,AShooterPlayerC
    // endereco: casamento de bytes com a build de referencia
    void GiveEngramsToPlayerState(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "FPrimalPersistentCharacterStatsStruct.GiveEngramsToPlayerState(APrimalCharacter*,AShooterPlayerController*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   FPrimalPersistentCharacterStatsStruct.IsEmoteUnlocked(FName)
    // endereco: cache_pdb_25090264
    bool IsEmoteUnlocked(unsigned long long a0) const
    {
        return NativeCall<bool, unsigned long long>(this, "FPrimalPersistentCharacterStatsStruct.IsEmoteUnlocked(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   FPrimalPersistentCharacterStatsStruct.IsPerMapExplorerNoteUnlocked(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=60]]
    bool IsPerMapExplorerNoteUnlocked(int a0) const
    {
        return NativeCall<bool, int>(this, "FPrimalPersistentCharacterStatsStruct.IsPerMapExplorerNoteUnlocked(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FPrimalPersistentCharacterStatsStruct.ProgressMilestone(FName,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ProgressMilestone(unsigned long long a0, float a1) const
    {
        return NativeCall<void*, unsigned long long, float>(this, "FPrimalPersistentCharacterStatsStruct.ProgressMilestone(FName,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FPrimalPersistentCharacterStatsStruct.UnlockSkill(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UnlockSkill(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "FPrimalPersistentCharacterStatsStruct.UnlockSkill(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   FPrimalPersistentCharacterStatsStruct.operator=(FPrimalPersistentCharacterStatsStruct&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro operator_(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FPrimalPersistentCharacterStatsStruct.operator=(FPrimalPersistentCharacterStatsStruct&)", a0);
    }

    float& CharacterStatusComponent_ExperiencePointsField() const
    { return *GetNativePointerField<float*>(this, "FPrimalPersistentCharacterStatsStruct.CharacterStatusComponent_ExperiencePoints"); }
    unsigned short& CharacterStatusComponent_ExtraCharacterLevelField() const
    { return *GetNativePointerField<unsigned short*>(this, "FPrimalPersistentCharacterStatsStruct.CharacterStatusComponent_ExtraCharacterLevel"); }
    int& CharacterStatusComponent_HighestExtraCharacterLevelField() const
    { return *GetNativePointerField<int*>(this, "FPrimalPersistentCharacterStatsStruct.CharacterStatusComponent_HighestExtraCharacterLevel"); }
    int& CharacterStatusComponent_LastRespecAtExtraCharacterLevelField() const
    { return *GetNativePointerField<int*>(this, "FPrimalPersistentCharacterStatsStruct.CharacterStatusComponent_LastRespecAtExtraCharacterLevel"); }
    double& CharacterStatusComponent_LastRespecUtcTimeSecondsField() const
    { return *GetNativePointerField<double*>(this, "FPrimalPersistentCharacterStatsStruct.CharacterStatusComponent_LastRespecUtcTimeSeconds"); }
    FieldArray<unsigned char> CharacterStatusComponent_NumberOfLevelUpPointsAppliedField() const
    { return { (void*)this, "FPrimalPersistentCharacterStatsStruct.CharacterStatusComponent_NumberOfLevelUpPointsApplied" }; }
    BrzCampoPonteiro CompletedMilestonesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalPersistentCharacterStatsStruct.CompletedMilestones")); }
    BrzCampoPonteiro CurrentMilestonesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalPersistentCharacterStatsStruct.CurrentMilestones")); }
    int& CurrentlySelectedDinoOrderGroupField() const
    { return *GetNativePointerField<int*>(this, "FPrimalPersistentCharacterStatsStruct.CurrentlySelectedDinoOrderGroup"); }
    FieldArray<FDinoOrderGroup> DinoOrderGroupsField() const
    { return { (void*)this, "FPrimalPersistentCharacterStatsStruct.DinoOrderGroups" }; }
    TArray<void*>& EmoteUnlocksField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalPersistentCharacterStatsStruct.EmoteUnlocks"); }
    long& EyebrowCustomCosmeticModIDField() const
    { return *GetNativePointerField<long*>(this, "FPrimalPersistentCharacterStatsStruct.EyebrowCustomCosmeticModID"); }
    BrzCampoPonteiro EyebrowIndexField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalPersistentCharacterStatsStruct.EyebrowIndex")); }
    long& FacialHairCustomCosmeticModIDField() const
    { return *GetNativePointerField<long*>(this, "FPrimalPersistentCharacterStatsStruct.FacialHairCustomCosmeticModID"); }
    BrzCampoPonteiro FacialHairIndexField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalPersistentCharacterStatsStruct.FacialHairIndex")); }
    TArray<void*>& ForcedUnlockDefaultCosmeticsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalPersistentCharacterStatsStruct.ForcedUnlockDefaultCosmetics"); }
    long& HeadHairCustomCosmeticModIDField() const
    { return *GetNativePointerField<long*>(this, "FPrimalPersistentCharacterStatsStruct.HeadHairCustomCosmeticModID"); }
    unsigned char& HeadHairIndexField() const
    { return *GetNativePointerField<unsigned char*>(this, "FPrimalPersistentCharacterStatsStruct.HeadHairIndex"); }
    BrzCampoPonteiro MilestoneLevelAndIndexField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalPersistentCharacterStatsStruct.MilestoneLevelAndIndex")); }
    BrzCampoPonteiro MilestoneLevelsAndIndexesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalPersistentCharacterStatsStruct.MilestoneLevelsAndIndexes")); }
    BrzCampoPonteiro MilestoneProgressField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalPersistentCharacterStatsStruct.MilestoneProgress")); }
    BrzCampoPonteiro ObtainedSigilCount_AbbField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalPersistentCharacterStatsStruct.ObtainedSigilCount_Abb")); }
    BrzCampoPonteiro ObtainedSigilCount_CrimsonField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalPersistentCharacterStatsStruct.ObtainedSigilCount_Crimson")); }
    TArray<void*>& PerMapExplorerNoteUnlocksField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalPersistentCharacterStatsStruct.PerMapExplorerNoteUnlocks"); }
    BrzCampoPonteiro PerMapNamedExplorerNoteUnlocksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalPersistentCharacterStatsStruct.PerMapNamedExplorerNoteUnlocks")); }
    float& PercentageOfFacialHairGrowthField() const
    { return *GetNativePointerField<float*>(this, "FPrimalPersistentCharacterStatsStruct.PercentageOfFacialHairGrowth"); }
    float& PercentageOfHeadHairGrowthField() const
    { return *GetNativePointerField<float*>(this, "FPrimalPersistentCharacterStatsStruct.PercentageOfHeadHairGrowth"); }
    BrzCampoPonteiro PlayerState_DefaultItemSlotClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalPersistentCharacterStatsStruct.PlayerState_DefaultItemSlotClasses")); }
    FieldArray<unsigned char> PlayerState_DefaultItemSlotEngramsField() const
    { return { (void*)this, "FPrimalPersistentCharacterStatsStruct.PlayerState_DefaultItemSlotEngrams" }; }
    BrzCampoPonteiro PlayerState_DefaultItemSlotSkillsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalPersistentCharacterStatsStruct.PlayerState_DefaultItemSlotSkills")); }
    TArray<void*>& PlayerState_EngramBlueprintsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalPersistentCharacterStatsStruct.PlayerState_EngramBlueprints"); }
    BrzCampoPonteiro PlayerState_FreeSkillPointsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalPersistentCharacterStatsStruct.PlayerState_FreeSkillPoints")); }
    int& PlayerState_PurchasedEngramPointsField() const
    { return *GetNativePointerField<int*>(this, "FPrimalPersistentCharacterStatsStruct.PlayerState_PurchasedEngramPoints"); }
    int& PlayerState_TotalEngramPointsField() const
    { return *GetNativePointerField<int*>(this, "FPrimalPersistentCharacterStatsStruct.PlayerState_TotalEngramPoints"); }
    BrzCampoPonteiro PlayerState_TotalSkillPointsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalPersistentCharacterStatsStruct.PlayerState_TotalSkillPoints")); }
    BrzCampoPonteiro PlayerState_TreeSkillPointsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalPersistentCharacterStatsStruct.PlayerState_TreeSkillPoints")); }
    BrzCampoPonteiro ServerPersistentItemUnlocksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalPersistentCharacterStatsStruct.ServerPersistentItemUnlocks")); }
    BrzCampoPonteiro SkillRanksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalPersistentCharacterStatsStruct.SkillRanks")); }
    BrzCampoPonteiro SkillUnlocksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalPersistentCharacterStatsStruct.SkillUnlocks")); }
    BitFieldValue<bool, unsigned __int32> bHasUnlockedAllBBTExplorerNotes()
    { return { (void*)this, "bHasUnlockedAllBBTExplorerNotes" }; }
    BitFieldValue<bool, unsigned __int32> bHasUnlockedAllBTT2ExplorerNotes()
    { return { (void*)this, "bHasUnlockedAllBTT2ExplorerNotes" }; }
    BitFieldValue<bool, unsigned __int32> bHasUnlockedAllBTT3ExplorerNotes()
    { return { (void*)this, "bHasUnlockedAllBTT3ExplorerNotes" }; }
    BitFieldValue<bool, unsigned __int32> bHasUnlockedAllBTT4ExplorerNotes()
    { return { (void*)this, "bHasUnlockedAllBTT4ExplorerNotes" }; }
    BitFieldValue<bool, unsigned __int32> bHasUnlockedAllExplorerNotes()
    { return { (void*)this, "bHasUnlockedAllExplorerNotes" }; }

};

#endif  // BRZ_SDK_JOGO_FPRIMALPERSISTENTCHARACTERSTATSSTRUCT_H

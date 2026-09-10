// ==========================================================================
//  FPrimalStructureSparseClassData — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FPRIMALSTRUCTURESPARSECLASSDATA_H
#define BRZ_SDK_JOGO_FPRIMALSTRUCTURESPARSECLASSDATA_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FName;
struct UMaterialInterface;
struct UTexture2D;

#include "FPrimalTargetableActorSparseClassData.h"

struct FPrimalStructureSparseClassData : public FPrimalTargetableActorSparseClassData
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FPrimalStructureSparseClassData"); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   FPrimalStructureSparseClassData.operator=(FPrimalStructureSparseClassData&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro operator_(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FPrimalStructureSparseClassData.operator=(FPrimalStructureSparseClassData&)", a0);
    }

    float& AdditionalFoundationSupportDistanceForLinkedStructuresField() const
    { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.AdditionalFoundationSupportDistanceForLinkedStructures"); }
    BrzCampoPonteiro AdvancedRotationPlacementOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSparseClassData.AdvancedRotationPlacementOffset")); }
    BrzCampoPonteiro AllowEnemyDemolishActivationTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSparseClassData.AllowEnemyDemolishActivationTime")); }
    TArray<void*>& AllowPlacingOnFloorClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalStructureSparseClassData.AllowPlacingOnFloorClasses"); }
    BrzCampoPonteiro AllowReplacementByStructureClassTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSparseClassData.AllowReplacementByStructureClassType")); }
    TArray<void*>& AllowSaddleDinoClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalStructureSparseClassData.AllowSaddleDinoClasses"); }
    TArray<void*>& AllowSnapRotationForTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalStructureSparseClassData.AllowSnapRotationForTags"); }
    TArray<void*>& AttachToDinoMeshDinoClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalStructureSparseClassData.AttachToDinoMeshDinoClasses"); }
    TArray<void*>& AttachToDinoMeshSocketNameBasesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalStructureSparseClassData.AttachToDinoMeshSocketNameBases"); }
    BrzCampoPonteiro AttachToStaticMeshSocketMinScaleDefaultField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSparseClassData.AttachToStaticMeshSocketMinScaleDefault")); }
    FName& AttachToStaticMeshSocketNameBaseField() const
    { return *GetNativePointerField<FName*>(this, "FPrimalStructureSparseClassData.AttachToStaticMeshSocketNameBase"); }
    float& AttackRangeOffsetField() const
    { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.AttackRangeOffset"); }
    BrzCampoPonteiro BasedUIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSparseClassData.BasedUI")); }
    TObjectPtr<UTexture2D>& BuildingIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.BuildingIcon"); }
    BrzCampoPonteiro BuildingUITemplateOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSparseClassData.BuildingUITemplateOverride")); }
    TObjectPtr<UTexture2D>& CantRepairIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.CantRepairIcon"); }
    TObjectPtr<UTexture2D>& ClaimIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.ClaimIcon"); }
    TObjectPtr<UTexture2D>& ClearPinCodeIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.ClearPinCodeIcon"); }
    BrzCampoPonteiro CollisionComponentsToDestroyOnStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSparseClassData.CollisionComponentsToDestroyOnStasis")); }
    TObjectPtr<UTexture2D>& ColorizeIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.ColorizeIcon"); }
    BrzCampoPonteiro ConsumesPrimalItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSparseClassData.ConsumesPrimalItem")); }
    TArray<void*>& CustomDataModifiedOnStructurePickupField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalStructureSparseClassData.CustomDataModifiedOnStructurePickup"); }
    TObjectPtr<UTexture2D>& DefaultVariantIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.DefaultVariantIcon"); }
    float& DemolishActivationTimeField() const
    { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.DemolishActivationTime"); }
    TObjectPtr<UTexture2D>& DemolishIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.DemolishIcon"); }
    TObjectPtr<UTexture2D>& DisableAdminOnlyAccessField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.DisableAdminOnlyAccess"); }
    TObjectPtr<UTexture2D>& EnableAdminOnlyAccessField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.EnableAdminOnlyAccess"); }
    TArray<void*>& EncroachmentCheckIgnoreStructureTypeTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalStructureSparseClassData.EncroachmentCheckIgnoreStructureTypeTags"); }
    TObjectPtr<UTexture2D>& EnterPinCodeIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.EnterPinCodeIcon"); }
    float& ExcludeInStructuresRadiusField() const
    { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.ExcludeInStructuresRadius"); }
    TArray<void*>& ExcludeInStructuresRadiusClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalStructureSparseClassData.ExcludeInStructuresRadiusClasses"); }
    TArray<void*>& ExcludeInStructuresRadiusTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalStructureSparseClassData.ExcludeInStructuresRadiusTags"); }
    float& ExpandEnemyFoundationPreventionRadiusField() const
    { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.ExpandEnemyFoundationPreventionRadius"); }
    TArray<void*>& FastDecayLinkedStructureClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalStructureSparseClassData.FastDecayLinkedStructureClasses"); }
    BrzCampoPonteiro FlipByScaleDirectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSparseClassData.FlipByScaleDirection")); }
    float& FloorHideGrassTraceToGroundDistanceNonFoundationField() const
    { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.FloorHideGrassTraceToGroundDistanceNonFoundation"); }
    TArray<void*>& ForceAllowSnapRotationForTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalStructureSparseClassData.ForceAllowSnapRotationForTags"); }
    TArray<void*>& ForceAllowWallAttachmentClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalStructureSparseClassData.ForceAllowWallAttachmentClasses"); }
    int& ForceLimitStructuresInRangeField() const
    { return *GetNativePointerField<int*>(this, "FPrimalStructureSparseClassData.ForceLimitStructuresInRange"); }
    float& ForcePreventPlacingInOfflineRaidStructuresRadiusField() const
    { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.ForcePreventPlacingInOfflineRaidStructuresRadius"); }
    float& HealthPercentOverlayForTrapField() const
    { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.HealthPercentOverlayForTrap"); }
    BrzCampoPonteiro HideGrassExtentsOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSparseClassData.HideGrassExtentsOffset")); }
    BrzCampoPonteiro HideGrassExtentsOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSparseClassData.HideGrassExtentsOverride")); }
    TObjectPtr<UTexture2D>& HideRangeIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.HideRangeIcon"); }
    BrzCampoPonteiro ItemClassToTrapContainerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSparseClassData.ItemClassToTrapContainer")); }
    int& ItemTrapQuantityRequiredField() const
    { return *GetNativePointerField<int*>(this, "FPrimalStructureSparseClassData.ItemTrapQuantityRequired"); }
    float& LimitMaxStructuresInRangeRadiusField() const
    { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.LimitMaxStructuresInRangeRadius"); }
    int& LimitMaxStructuresInRangeTypeFlagField() const
    { return *GetNativePointerField<int*>(this, "FPrimalStructureSparseClassData.LimitMaxStructuresInRangeTypeFlag"); }
    TObjectPtr<UTexture2D>& LockIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.LockIcon"); }
    float& MaxSnapLocRangeField() const
    { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.MaxSnapLocRange"); }
    float& MaxTooltipPawnSpeedField() const
    { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.MaxTooltipPawnSpeed"); }
    float& MaximumFoundationSupport2DBuildDistanceField() const
    { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.MaximumFoundationSupport2DBuildDistance"); }
    float& MaximumHeightAboveWorldGroundField() const
    { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.MaximumHeightAboveWorldGround"); }
    float& MaximumHeightUnderWorldMaxKillZField() const
    { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.MaximumHeightUnderWorldMaxKillZ"); }
    TArray<void*>& OnlyAllowStructureClassesFromAttachField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalStructureSparseClassData.OnlyAllowStructureClassesFromAttach"); }
    TArray<void*>& OnlyAllowStructureClassesToAttachField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalStructureSparseClassData.OnlyAllowStructureClassesToAttach"); }
    TObjectPtr<UTexture2D>& OpenContainerIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.OpenContainerIcon"); }
    BrzCampoPonteiro OverlayTooltipPaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSparseClassData.OverlayTooltipPadding")); }
    BrzCampoPonteiro OverlayTooltipScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSparseClassData.OverlayTooltipScale")); }
    float& OverrideEnemyFoundationPreventionRadiusField() const
    { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.OverrideEnemyFoundationPreventionRadius"); }
    float& OverridePVPEnemyFoundationPreventionRadiusField() const
    { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.OverridePVPEnemyFoundationPreventionRadius"); }
    TObjectPtr<UTexture2D>& PickUpIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.PickUpIcon"); }
    FName& PlaceOnWallUseStaticMeshTagField() const
    { return *GetNativePointerField<FName*>(this, "FPrimalStructureSparseClassData.PlaceOnWallUseStaticMeshTag"); }
    float& PlacementAdjustHeightLimitDownField() const
    { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.PlacementAdjustHeightLimitDown"); }
    float& PlacementAdjustHeightLimitUpField() const
    { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.PlacementAdjustHeightLimitUp"); }
    float& PlacementChooseRotationMaxRangeOverrideField() const
    { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.PlacementChooseRotationMaxRangeOverride"); }
    BrzCampoPonteiro PlacementCollisionAdjustmentBufferField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSparseClassData.PlacementCollisionAdjustmentBuffer")); }
    float& PlacementInitialTracePointOffsetForVerticalGroundField() const
    { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.PlacementInitialTracePointOffsetForVerticalGround"); }
    int& PlacementMaterialForwardDirIndexField() const
    { return *GetNativePointerField<int*>(this, "FPrimalStructureSparseClassData.PlacementMaterialForwardDirIndex"); }
    float& PlacementMaxZAbovePlayerHeightField() const
    { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.PlacementMaxZAbovePlayerHeight"); }
    float& PlacementMaxZDeltaField() const
    { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.PlacementMaxZDelta"); }
    float& PlacementOffsetForVerticalGroundField() const
    { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.PlacementOffsetForVerticalGround"); }
    BrzCampoPonteiro PlacementRotOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSparseClassData.PlacementRotOffset")); }
    BrzCampoPonteiro PlacementTraceRotOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSparseClassData.PlacementTraceRotOffset")); }
    TArray<void*>& PreventBuildStructureReasonStringOverridesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalStructureSparseClassData.PreventBuildStructureReasonStringOverrides"); }
    TArray<void*>& PreventPlacingOnFloorClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalStructureSparseClassData.PreventPlacingOnFloorClasses"); }
    BrzCampoPonteiro PreventReplacementOfStructureClassTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSparseClassData.PreventReplacementOfStructureClassType")); }
    TArray<void*>& PreventReplacementOfStructureClassTypesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalStructureSparseClassData.PreventReplacementOfStructureClassTypes"); }
    TArray<void*>& PreventSaddleDinoClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalStructureSparseClassData.PreventSaddleDinoClasses"); }
    BrzCampoPonteiro PreviewCameraBoundsOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSparseClassData.PreviewCameraBoundsOverride")); }
    float& PreviewCameraDefaultZoomMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.PreviewCameraDefaultZoomMultiplier"); }
    float& PreviewCameraDistanceScaleFactorField() const
    { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.PreviewCameraDistanceScaleFactor"); }
    float& PreviewCameraMaxZoomMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.PreviewCameraMaxZoomMultiplier"); }
    BrzCampoPonteiro PreviewCameraPivotOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSparseClassData.PreviewCameraPivotOffset")); }
    BrzCampoPonteiro PrimalCameraModesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSparseClassData.PrimalCameraModes")); }
    TObjectPtr<UTexture2D>& RemoveSkinIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.RemoveSkinIcon"); }
    TObjectPtr<UTexture2D>& RenameIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.RenameIcon"); }
    float& RepairCheckIntervalField() const
    { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.RepairCheckInterval"); }
    TObjectPtr<UTexture2D>& RepairIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.RepairIcon"); }
    float& RepairPercentPerIntervalField() const
    { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.RepairPercentPerInterval"); }
    BrzCampoPonteiro ReplacementCheckOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSparseClassData.ReplacementCheckOffset")); }
    BrzCampoPonteiro RequiresDLC_ClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSparseClassData.RequiresDLC_Class")); }
    TArray<void*>& ReturnDamageExcludeIncomingTypesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalStructureSparseClassData.ReturnDamageExcludeIncomingTypes"); }
    TArray<void*>& ReturnDamageOnlyForIncomingTypesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalStructureSparseClassData.ReturnDamageOnlyForIncomingTypes"); }
    BrzCampoPonteiro ReturnDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSparseClassData.ReturnDamageType")); }
    float& ScaleFactorField() const
    { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.ScaleFactor"); }
    TArray<void*>& SecondaryStructureTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalStructureSparseClassData.SecondaryStructureTags"); }
    TObjectPtr<UTexture2D>& SetPinCodeIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.SetPinCodeIcon"); }
    TObjectPtr<UTexture2D>& SetPinCodeInRangeIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.SetPinCodeInRangeIcon"); }
    TObjectPtr<UTexture2D>& ShowRangeIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.ShowRangeIcon"); }
    TArray<void*>& SnapFromStructureTagsToExcludeField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalStructureSparseClassData.SnapFromStructureTagsToExclude"); }
    TArray<void*>& SnapFromStructureTypesToExcludeField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalStructureSparseClassData.SnapFromStructureTypesToExclude"); }
    BrzCampoPonteiro SnapStructureClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSparseClassData.SnapStructureClass")); }
    TArray<void*>& SnapToStructureTagsToExcludeField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalStructureSparseClassData.SnapToStructureTagsToExclude"); }
    TArray<void*>& SnapToStructureTypesToExcludeField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalStructureSparseClassData.SnapToStructureTypesToExclude"); }
    BrzCampoPonteiro SnappingRotationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSparseClassData.SnappingRotationOffset")); }
    BitFieldValue<bool, unsigned __int32> SpawnEmitter()
    { return { (void*)this, "SpawnEmitter" }; }
    BrzCampoPonteiro SpawnEmitterLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSparseClassData.SpawnEmitterLocationOffset")); }
    BrzCampoPonteiro SpawnEmitterRotationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSparseClassData.SpawnEmitterRotationOffset")); }
    BrzCampoPonteiro StructureExplosionTrapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSparseClassData.StructureExplosionTrap")); }
    BrzCampoPonteiro StructureHarvestingComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSparseClassData.StructureHarvestingComponent")); }
    TObjectPtr<UMaterialInterface>& StructureIconMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UMaterialInterface>*>(this, "FPrimalStructureSparseClassData.StructureIconMaterial"); }
    int& StructureMinAllowedVersionField() const
    { return *GetNativePointerField<int*>(this, "FPrimalStructureSparseClassData.StructureMinAllowedVersion"); }
    TArray<void*>& StructureRangeTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalStructureSparseClassData.StructureRangeTags"); }
    int& StructureRangeTypeFlagField() const
    { return *GetNativePointerField<int*>(this, "FPrimalStructureSparseClassData.StructureRangeTypeFlag"); }
    TArray<void*>& StructureSkinSupportedStructuresField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalStructureSparseClassData.StructureSkinSupportedStructures"); }
    BrzCampoPonteiro StructureStatsPanelUITemplateOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSparseClassData.StructureStatsPanelUITemplateOverride")); }
    FName& StructureTagField() const
    { return *GetNativePointerField<FName*>(this, "FPrimalStructureSparseClassData.StructureTag"); }
    TArray<void*>& StructuresAllowedToBeVerticalGroundField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalStructureSparseClassData.StructuresAllowedToBeVerticalGround"); }
    BrzCampoPonteiro TakeGroundNormalRotationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSparseClassData.TakeGroundNormalRotationOffset")); }
    float& TraceDistanceFromActorToWallVerticalGroundField() const
    { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.TraceDistanceFromActorToWallVerticalGround"); }
    int& TraceIgnoreStructuresWithTypeFlagsField() const
    { return *GetNativePointerField<int*>(this, "FPrimalStructureSparseClassData.TraceIgnoreStructuresWithTypeFlags"); }
    TArray<void*>& TribeActivationRankSelectionIconsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalStructureSparseClassData.TribeActivationRankSelectionIcons"); }
    TObjectPtr<UTexture2D>& TribeRankSettingsIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.TribeRankSettingsIcon"); }
    TObjectPtr<UTexture2D>& UnlockIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.UnlockIcon"); }
    float& UnstasisAutoDestroyAfterTimeField() const
    { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.UnstasisAutoDestroyAfterTime"); }
    float& UsablePriorityField() const
    { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.UsablePriority"); }
    TObjectPtr<UTexture2D>& UseSoapIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.UseSoapIcon"); }
    TObjectPtr<UTexture2D>& VariantsFolderIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalStructureSparseClassData.VariantsFolderIcon"); }
    float& WaterPlacementMinimumWaterHeightField() const
    { return *GetNativePointerField<float*>(this, "FPrimalStructureSparseClassData.WaterPlacementMinimumWaterHeight"); }
    BrzCampoPonteiro WaterVolumeCheckPointOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSparseClassData.WaterVolumeCheckPointOffset")); }
    BrzCampoPonteiro WorldGeoCheckExtraBoxExtentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSparseClassData.WorldGeoCheckExtraBoxExtent")); }
    int& bTraceCheckOnlyUseStructuresWithTypeFlagsField() const
    { return *GetNativePointerField<int*>(this, "FPrimalStructureSparseClassData.bTraceCheckOnlyUseStructuresWithTypeFlags"); }
    BitFieldValue<bool, unsigned __int32> bIsFlippable()
    { return { (void*)this, "bIsFlippable" }; }
    BitFieldValue<bool, unsigned __int32> bFlipByScale()
    { return { (void*)this, "bFlipByScale" }; }
    BitFieldValue<bool, unsigned __int32> bFlipInvertLocOffset()
    { return { (void*)this, "bFlipInvertLocOffset" }; }
    BitFieldValue<bool, unsigned __int32> bShowInPlaceableList()
    { return { (void*)this, "bShowInPlaceableList" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowWallAttachments()
    { return { (void*)this, "bForceAllowWallAttachments" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPRefreshedStructureColors()
    { return { (void*)this, "bUseBPRefreshedStructureColors" }; }
    BitFieldValue<bool, unsigned __int32> bClientAddPlacedOnFloorStructures()
    { return { (void*)this, "bClientAddPlacedOnFloorStructures" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyOnStasis()
    { return { (void*)this, "bDestroyOnStasis" }; }
    BitFieldValue<bool, unsigned __int32> bTriggerBPStasis()
    { return { (void*)this, "bTriggerBPStasis" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPostLoadedFromSaveGame()
    { return { (void*)this, "bUseBPPostLoadedFromSaveGame" }; }
    BitFieldValue<bool, unsigned __int32> bPlacementUsesWeaponClipAmmo()
    { return { (void*)this, "bPlacementUsesWeaponClipAmmo" }; }
    BitFieldValue<bool, unsigned __int32> bAbsoluteTakeAnythingAsGround()
    { return { (void*)this, "bAbsoluteTakeAnythingAsGround" }; }
    BitFieldValue<bool, unsigned __int32> bDisablePlacementOnDynamicsFoliageAndDoors()
    { return { (void*)this, "bDisablePlacementOnDynamicsFoliageAndDoors" }; }
    BitFieldValue<bool, unsigned __int32> bSeatedDisableCollisionCheck()
    { return { (void*)this, "bSeatedDisableCollisionCheck" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPIsAllowedToBuildEx()
    { return { (void*)this, "bUseBPIsAllowedToBuildEx" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPHandleStructureEnabled()
    { return { (void*)this, "bUseBPHandleStructureEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bForcePlacingOnVerticalGround()
    { return { (void*)this, "bForcePlacingOnVerticalGround" }; }
    BitFieldValue<bool, unsigned __int32> bPlacementShouldNotBeHorizontal()
    { return { (void*)this, "bPlacementShouldNotBeHorizontal" }; }
    BitFieldValue<bool, unsigned __int32> bRequiresGroundedPlacement()
    { return { (void*)this, "bRequiresGroundedPlacement" }; }
    BitFieldValue<bool, unsigned __int32> bAllowPlacingOnOtherTeamStructuresPvPOnly()
    { return { (void*)this, "bAllowPlacingOnOtherTeamStructuresPvPOnly" }; }
    BitFieldValue<bool, unsigned __int32> bForceUseSkeletalMeshComponent()
    { return { (void*)this, "bForceUseSkeletalMeshComponent" }; }
    BitFieldValue<bool, unsigned __int32> bForceDisableFootSound()
    { return { (void*)this, "bForceDisableFootSound" }; }
    BitFieldValue<bool, unsigned __int32> bTraceThruEncroachmentPoints()
    { return { (void*)this, "bTraceThruEncroachmentPoints" }; }
    BitFieldValue<bool, unsigned __int32> bUseMeshOverlapInsteadOfEncroachmentPoints()
    { return { (void*)this, "bUseMeshOverlapInsteadOfEncroachmentPoints" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDinoPlacementDistanceIncrease()
    { return { (void*)this, "bPreventDinoPlacementDistanceIncrease" }; }
    BitFieldValue<bool, unsigned __int32> bDontOverrideCollisionProfile()
    { return { (void*)this, "bDontOverrideCollisionProfile" }; }
    BitFieldValue<bool, unsigned __int32> bUseAdvancedRotationPlacement()
    { return { (void*)this, "bUseAdvancedRotationPlacement" }; }
    BitFieldValue<bool, unsigned __int32> bRootFoundationLimitBuildArea()
    { return { (void*)this, "bRootFoundationLimitBuildArea" }; }
    BitFieldValue<bool, unsigned __int32> bAllowAttachToPawn()
    { return { (void*)this, "bAllowAttachToPawn" }; }
    BitFieldValue<bool, unsigned __int32> bAllowAttachToSaddleAnywhere()
    { return { (void*)this, "bAllowAttachToSaddleAnywhere" }; }
    BitFieldValue<bool, unsigned __int32> bAllowAttachToAttachmentBase()
    { return { (void*)this, "bAllowAttachToAttachmentBase" }; }
    BitFieldValue<bool, unsigned __int32> bPlacementTraceIgnorePawns()
    { return { (void*)this, "bPlacementTraceIgnorePawns" }; }
    BitFieldValue<bool, unsigned __int32> bRequireFreePrimarySnappedStructure()
    { return { (void*)this, "bRequireFreePrimarySnappedStructure" }; }
    BitFieldValue<bool, unsigned __int32> bAllowMultiplePrimarySnappedStructures()
    { return { (void*)this, "bAllowMultiplePrimarySnappedStructures" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyAllowPlacementInWater()
    { return { (void*)this, "bOnlyAllowPlacementInWater" }; }
    BitFieldValue<bool, unsigned __int32> bForcePlacingOnGround()
    { return { (void*)this, "bForcePlacingOnGround" }; }
    BitFieldValue<bool, unsigned __int32> bTakeAnythingAsGround()
    { return { (void*)this, "bTakeAnythingAsGround" }; }
    BitFieldValue<bool, unsigned __int32> bForceCheckNearbyEnemyFoundation()
    { return { (void*)this, "bForceCheckNearbyEnemyFoundation" }; }
    BitFieldValue<bool, unsigned __int32> bIsWall()
    { return { (void*)this, "bIsWall" }; }
    BitFieldValue<bool, unsigned __int32> bDisallowPreventCropsBiomes()
    { return { (void*)this, "bDisallowPreventCropsBiomes" }; }
    BitFieldValue<bool, unsigned __int32> bReturnDamageOnHitFromPawn()
    { return { (void*)this, "bReturnDamageOnHitFromPawn" }; }
    BitFieldValue<bool, unsigned __int32> bAllowUseFromRidingDino()
    { return { (void*)this, "bAllowUseFromRidingDino" }; }
    BitFieldValue<bool, unsigned __int32> bIsFenceFoundation()
    { return { (void*)this, "bIsFenceFoundation" }; }
    BitFieldValue<bool, unsigned __int32> bUseFenceFoundation()
    { return { (void*)this, "bUseFenceFoundation" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnlyBlockSelfTraceChannel()
    { return { (void*)this, "bUseOnlyBlockSelfTraceChannel" }; }
    BitFieldValue<bool, unsigned __int32> bIsCoreStructure()
    { return { (void*)this, "bIsCoreStructure" }; }
    BitFieldValue<bool, unsigned __int32> bDeprecateStructure()
    { return { (void*)this, "bDeprecateStructure" }; }
    BitFieldValue<bool, unsigned __int32> bRequiresToBeInsideZoneVolume()
    { return { (void*)this, "bRequiresToBeInsideZoneVolume" }; }
    BitFieldValue<bool, unsigned __int32> bAllowLoadBearing()
    { return { (void*)this, "bAllowLoadBearing" }; }
    BitFieldValue<bool, unsigned __int32> bIsEnvironmentStructure()
    { return { (void*)this, "bIsEnvironmentStructure" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnVariantSwitch()
    { return { (void*)this, "bUseBPOnVariantSwitch" }; }
    BitFieldValue<bool, unsigned __int32> bPreventTrap()
    { return { (void*)this, "bPreventTrap" }; }
    BitFieldValue<bool, unsigned __int32> bGroundRequiresPlacementOnStructures()
    { return { (void*)this, "bGroundRequiresPlacementOnStructures" }; }
    BitFieldValue<bool, unsigned __int32> bRequiresPlacementOnStructureFloors()
    { return { (void*)this, "bRequiresPlacementOnStructureFloors" }; }
    BitFieldValue<bool, unsigned __int32> bDisablePlacementOnStructureFloors()
    { return { (void*)this, "bDisablePlacementOnStructureFloors" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyStructureIfFloorDestroyed()
    { return { (void*)this, "bDestroyStructureIfFloorDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bUsePlacementCollisionCheck()
    { return { (void*)this, "bUsePlacementCollisionCheck" }; }
    BitFieldValue<bool, unsigned __int32> bUseLenientWorldGeoObstructionCheck()
    { return { (void*)this, "bUseLenientWorldGeoObstructionCheck" }; }
    BitFieldValue<bool, unsigned __int32> bRequiresSnapping()
    { return { (void*)this, "bRequiresSnapping" }; }
    BitFieldValue<bool, unsigned __int32> bSnappingRequiresNearbyFoundation()
    { return { (void*)this, "bSnappingRequiresNearbyFoundation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowSnapRotationForStructure()
    { return { (void*)this, "bUseBPAllowSnapRotationForStructure" }; }
    BitFieldValue<bool, unsigned __int32> bForceHideObstructedSnaps()
    { return { (void*)this, "bForceHideObstructedSnaps" }; }
    BitFieldValue<bool, unsigned __int32> bDontCheckSnapsForObstruction()
    { return { (void*)this, "bDontCheckSnapsForObstruction" }; }
    BitFieldValue<bool, unsigned __int32> bForceOptionalSnapping()
    { return { (void*)this, "bForceOptionalSnapping" }; }
    BitFieldValue<bool, unsigned __int32> bUseSnapFromPlacementOverrideEvenWhenNotSnapped()
    { return { (void*)this, "bUseSnapFromPlacementOverrideEvenWhenNotSnapped" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideSnapTargetAllowSnapPoint()
    { return { (void*)this, "bUseBPOverrideSnapTargetAllowSnapPoint" }; }
    BitFieldValue<bool, unsigned __int32> bRequiresPlacingOnWall()
    { return { (void*)this, "bRequiresPlacingOnWall" }; }
    BitFieldValue<bool, unsigned __int32> bRequiresPlacingUnderStructures()
    { return { (void*)this, "bRequiresPlacingUnderStructures" }; }
    BitFieldValue<bool, unsigned __int32> bSnapRequiresPlacementOnGround()
    { return { (void*)this, "bSnapRequiresPlacementOnGround" }; }
    BitFieldValue<bool, unsigned __int32> bAllowSnapOntoSameLocation()
    { return { (void*)this, "bAllowSnapOntoSameLocation" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyFoundationIfSnappedToFoundation()
    { return { (void*)this, "bOnlyFoundationIfSnappedToFoundation" }; }
    BitFieldValue<bool, unsigned __int32> bFoundationRequiresGroundTrace()
    { return { (void*)this, "bFoundationRequiresGroundTrace" }; }
    BitFieldValue<bool, unsigned __int32> bPlacingOnGroundRequiresNoStructure()
    { return { (void*)this, "bPlacingOnGroundRequiresNoStructure" }; }
    BitFieldValue<bool, unsigned __int32> bTakeGroundNormal()
    { return { (void*)this, "bTakeGroundNormal" }; }
    BitFieldValue<bool, unsigned __int32> bTakeGroundNormalDirectly()
    { return { (void*)this, "bTakeGroundNormalDirectly" }; }
    BitFieldValue<bool, unsigned __int32> bFinalPlacementDontAdjustForMaxRange()
    { return { (void*)this, "bFinalPlacementDontAdjustForMaxRange" }; }
    BitFieldValue<bool, unsigned __int32> bAllowStructureColors()
    { return { (void*)this, "bAllowStructureColors" }; }
    BitFieldValue<bool, unsigned __int32> bUseFadeInEffect()
    { return { (void*)this, "bUseFadeInEffect" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDefaultVariant()
    { return { (void*)this, "bPreventDefaultVariant" }; }
    BitFieldValue<bool, unsigned __int32> bDisablePickingUpStructureAfterPlacementOnTryMultiUse()
    { return { (void*)this, "bDisablePickingUpStructureAfterPlacementOnTryMultiUse" }; }
    BitFieldValue<bool, unsigned __int32> bUseBlueprintAnimNotifyCustomEvent()
    { return { (void*)this, "bUseBlueprintAnimNotifyCustomEvent" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreSnappedToOtherFloorStructures()
    { return { (void*)this, "bIgnoreSnappedToOtherFloorStructures" }; }
    BitFieldValue<bool, unsigned __int32> bEnforceStructureLinkExactRotation()
    { return { (void*)this, "bEnforceStructureLinkExactRotation" }; }
    BitFieldValue<bool, unsigned __int32> bForceBlockIK()
    { return { (void*)this, "bForceBlockIK" }; }
    BitFieldValue<bool, unsigned __int32> bIgnorePawns()
    { return { (void*)this, "bIgnorePawns" }; }
    BitFieldValue<bool, unsigned __int32> bForcePushTroughWallCheck()
    { return { (void*)this, "bForcePushTroughWallCheck" }; }
    BitFieldValue<bool, unsigned __int32> bCanDemolish()
    { return { (void*)this, "bCanDemolish" }; }
    BitFieldValue<bool, unsigned __int32> bAllowPlacingOnOtherTeamStructures()
    { return { (void*)this, "bAllowPlacingOnOtherTeamStructures" }; }
    BitFieldValue<bool, unsigned __int32> bPreventPlacementInWater()
    { return { (void*)this, "bPreventPlacementInWater" }; }
    BitFieldValue<bool, unsigned __int32> bAllowInRegularStructurePreventionZones()
    { return { (void*)this, "bAllowInRegularStructurePreventionZones" }; }
    BitFieldValue<bool, unsigned __int32> bDontSetStructureCollisionChannels()
    { return { (void*)this, "bDontSetStructureCollisionChannels" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventEnemyStructuresNearby()
    { return { (void*)this, "bForcePreventEnemyStructuresNearby" }; }
    BitFieldValue<bool, unsigned __int32> bAllowEnemyDemolish()
    { return { (void*)this, "bAllowEnemyDemolish" }; }
    BitFieldValue<bool, unsigned __int32> bDontActuallySnapJustPlacement()
    { return { (void*)this, "bDontActuallySnapJustPlacement" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreMaxStructuresInRange()
    { return { (void*)this, "bIgnoreMaxStructuresInRange" }; }
    BitFieldValue<bool, unsigned __int32> bPaintingUseSkeletalMesh()
    { return { (void*)this, "bPaintingUseSkeletalMesh" }; }
    BitFieldValue<bool, unsigned __int32> bUsesPaintingComponent()
    { return { (void*)this, "bUsesPaintingComponent" }; }
    BitFieldValue<bool, unsigned __int32> bCanBuildUpon()
    { return { (void*)this, "bCanBuildUpon" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowInPreventionVolumes()
    { return { (void*)this, "bForceAllowInPreventionVolumes" }; }
    BitFieldValue<bool, unsigned __int32> bDoForceCreateDynamicMaterials()
    { return { (void*)this, "bDoForceCreateDynamicMaterials" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetInfoFromConsumedItemForPlacedStructure()
    { return { (void*)this, "bUseBPGetInfoFromConsumedItemForPlacedStructure" }; }
    BitFieldValue<bool, unsigned __int32> bWhileCheatSpawning_UseBPGetInfoFromConsumedItemForPlacedStructure()
    { return { (void*)this, "bWhileCheatSpawning_UseBPGetInfoFromConsumedItemForPlacedStructure" }; }
    BitFieldValue<bool, unsigned __int32> bImmuneToAutoDemolish()
    { return { (void*)this, "bImmuneToAutoDemolish" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreMaxStructuresInSmallRadius()
    { return { (void*)this, "bIgnoreMaxStructuresInSmallRadius" }; }
    BitFieldValue<bool, unsigned __int32> bAdjustPlacementIfCollide()
    { return { (void*)this, "bAdjustPlacementIfCollide" }; }
    BitFieldValue<bool, unsigned __int32> bAlignToSaddleWhenPlacing()
    { return { (void*)this, "bAlignToSaddleWhenPlacing" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTargetingByCorruptDinos()
    { return { (void*)this, "bAllowTargetingByCorruptDinos" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPTreatAsFoundationForSnappedStructure()
    { return { (void*)this, "bUseBPTreatAsFoundationForSnappedStructure" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnStructurePickup()
    { return { (void*)this, "bUseBPOnStructurePickup" }; }
    BitFieldValue<bool, unsigned __int32> bPerInstanceSnapPoints()
    { return { (void*)this, "bPerInstanceSnapPoints" }; }
    BitFieldValue<bool, unsigned __int32> bSnapToWaterSurface()
    { return { (void*)this, "bSnapToWaterSurface" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPUpdatedHealth()
    { return { (void*)this, "bUseBPUpdatedHealth" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideDescriptiveName()
    { return { (void*)this, "bUseBPOverrideDescriptiveName" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideDescriptiveNameForPreview()
    { return { (void*)this, "bUseBPOverrideDescriptiveNameForPreview" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCreationOfDynamicMaterials()
    { return { (void*)this, "bPreventCreationOfDynamicMaterials" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyOnStasisUnlessPrevented()
    { return { (void*)this, "bDestroyOnStasisUnlessPrevented" }; }
    BitFieldValue<bool, unsigned __int32> bPreventAttachToSaddle()
    { return { (void*)this, "bPreventAttachToSaddle" }; }
    BitFieldValue<bool, unsigned __int32> bForcePersonalStructureOwnership()
    { return { (void*)this, "bForcePersonalStructureOwnership" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideAllowStructureAccess()
    { return { (void*)this, "bBPOverrideAllowStructureAccess" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverideDemolish()
    { return { (void*)this, "bBPOverideDemolish" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnDemolish()
    { return { (void*)this, "bUseBPOnDemolish" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideAllowSnappingWith()
    { return { (void*)this, "bBPOverrideAllowSnappingWith" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideAllowSnappingWithButAlsoCallSuper()
    { return { (void*)this, "bBPOverrideAllowSnappingWithButAlsoCallSuper" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnLinkedStructureDestroyed()
    { return { (void*)this, "bUseBPOnLinkedStructureDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bUseTribeGroupStructureRank()
    { return { (void*)this, "bUseTribeGroupStructureRank" }; }
    BitFieldValue<bool, unsigned __int32> bForceBlockStationaryTraces()
    { return { (void*)this, "bForceBlockStationaryTraces" }; }
    BitFieldValue<bool, unsigned __int32> bAttachToStaticMeshSocket()
    { return { (void*)this, "bAttachToStaticMeshSocket" }; }
    BitFieldValue<bool, unsigned __int32> bAttachToStaticMeshSocketRotation()
    { return { (void*)this, "bAttachToStaticMeshSocketRotation" }; }
    BitFieldValue<bool, unsigned __int32> bAttachToDinoMeshSocket()
    { return { (void*)this, "bAttachToDinoMeshSocket" }; }
    BitFieldValue<bool, unsigned __int32> bForceGroundForFoundation()
    { return { (void*)this, "bForceGroundForFoundation" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideSnappedToTransform()
    { return { (void*)this, "bBPOverrideSnappedToTransform" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideSnappedFromTransform()
    { return { (void*)this, "bBPOverrideSnappedFromTransform" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverridePlacementRotation()
    { return { (void*)this, "bBPOverridePlacementRotation" }; }
    BitFieldValue<bool, unsigned __int32> bStructureUseAltCollisionChannel()
    { return { (void*)this, "bStructureUseAltCollisionChannel" }; }
    BitFieldValue<bool, unsigned __int32> bHighPriorityDemolish()
    { return { (void*)this, "bHighPriorityDemolish" }; }
    BitFieldValue<bool, unsigned __int32> bDisableSnapStructure()
    { return { (void*)this, "bDisableSnapStructure" }; }
    BitFieldValue<bool, unsigned __int32> bTriggerBPUnstasis()
    { return { (void*)this, "bTriggerBPUnstasis" }; }
    BitFieldValue<bool, unsigned __int32> bBlueprintDrawHUD()
    { return { (void*)this, "bBlueprintDrawHUD" }; }
    BitFieldValue<bool, unsigned __int32> bBlueprintDrawPreviewHUD()
    { return { (void*)this, "bBlueprintDrawPreviewHUD" }; }
    BitFieldValue<bool, unsigned __int32> bUsesWorldSpaceMaterial()
    { return { (void*)this, "bUsesWorldSpaceMaterial" }; }
    BitFieldValue<bool, unsigned __int32> bForceIgnoreStationaryObjectTrace()
    { return { (void*)this, "bForceIgnoreStationaryObjectTrace" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowNearSupplyCrateSpawns()
    { return { (void*)this, "bForceAllowNearSupplyCrateSpawns" }; }
    BitFieldValue<bool, unsigned __int32> bBPPostSetStructureCollisionChannels()
    { return { (void*)this, "bBPPostSetStructureCollisionChannels" }; }
    BitFieldValue<bool, unsigned __int32> bPickupGiveItemRequiresAccess()
    { return { (void*)this, "bPickupGiveItemRequiresAccess" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowPickupGiveItem()
    { return { (void*)this, "bUseBPAllowPickupGiveItem" }; }
    BitFieldValue<bool, unsigned __int32> bPreventAttachedChildStructures()
    { return { (void*)this, "bPreventAttachedChildStructures" }; }
    BitFieldValue<bool, unsigned __int32> bPreventPreviewIfWeaponPlaced()
    { return { (void*)this, "bPreventPreviewIfWeaponPlaced" }; }
    BitFieldValue<bool, unsigned __int32> bStructuresInRangeTypeFlagUseAltCollisionChannel()
    { return { (void*)this, "bStructuresInRangeTypeFlagUseAltCollisionChannel" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPConsumeProjectileImpact()
    { return { (void*)this, "bUseBPConsumeProjectileImpact" }; }
    BitFieldValue<bool, unsigned __int32> bBPCheckItemRequiementsToBuild()
    { return { (void*)this, "bBPCheckItemRequiementsToBuild" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetAggroDinoOnDamageSettings()
    { return { (void*)this, "bUseBPGetAggroDinoOnDamageSettings" }; }
    BitFieldValue<bool, unsigned __int32> bDontSetDynamicObstacle()
    { return { (void*)this, "bDontSetDynamicObstacle" }; }
    BitFieldValue<bool, unsigned __int32> bBedUsesDefaultDestination()
    { return { (void*)this, "bBedUsesDefaultDestination" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRegisterSkeletalMeshesOnDedicatedServer()
    { return { (void*)this, "bAllowRegisterSkeletalMeshesOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bUseInfiniteStaticMeshDrawDistance()
    { return { (void*)this, "bUseInfiniteStaticMeshDrawDistance" }; }
    BitFieldValue<bool, unsigned __int32> bIsStructureSkin()
    { return { (void*)this, "bIsStructureSkin" }; }
    BitFieldValue<bool, unsigned __int32> bStructureSkinChangesCollision()
    { return { (void*)this, "bStructureSkinChangesCollision" }; }
    BitFieldValue<bool, unsigned __int32> bNotifySkinWhenInventoryChanges()
    { return { (void*)this, "bNotifySkinWhenInventoryChanges" }; }
    BitFieldValue<bool, unsigned __int32> bFloorDontHideGrass()
    { return { (void*)this, "bFloorDontHideGrass" }; }
    BitFieldValue<bool, unsigned __int32> bForceHideGrass()
    { return { (void*)this, "bForceHideGrass" }; }
    BitFieldValue<bool, unsigned __int32> bUsesServerSideSkinData()
    { return { (void*)this, "bUsesServerSideSkinData" }; }
    BitFieldValue<bool, unsigned __int32> bNotifyOnBlockListUpdate()
    { return { (void*)this, "bNotifyOnBlockListUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bHasWindSourceComponentsToInteractWithVolumetricDispatcher()
    { return { (void*)this, "bHasWindSourceComponentsToInteractWithVolumetricDispatcher" }; }
    BitFieldValue<bool, unsigned __int32> bBypassMeleeSwingDamageBlockedByTrace()
    { return { (void*)this, "bBypassMeleeSwingDamageBlockedByTrace" }; }
    BitFieldValue<bool, unsigned __int32> bAllowPlanningStructure()
    { return { (void*)this, "bAllowPlanningStructure" }; }
    BitFieldValue<bool, unsigned __int32> bCallSetupOnSpawnAndDestructionEmitters()
    { return { (void*)this, "bCallSetupOnSpawnAndDestructionEmitters" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyMyStaticMeshComponentOnStasis()
    { return { (void*)this, "bDestroyMyStaticMeshComponentOnStasis" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyNoCollisionComponentsOnStasis()
    { return { (void*)this, "bDestroyNoCollisionComponentsOnStasis" }; }
    BitFieldValue<bool, unsigned __int32> bForceDormancyInsteadOfClosingDueToRelevancy()
    { return { (void*)this, "bForceDormancyInsteadOfClosingDueToRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bGetCameraModesFromSaddleDino()
    { return { (void*)this, "bGetCameraModesFromSaddleDino" }; }
    BitFieldValue<bool, unsigned __int32> bHideBuildingUI()
    { return { (void*)this, "bHideBuildingUI" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreEncroachingDissimilarStructureTypes()
    { return { (void*)this, "bIgnoreEncroachingDissimilarStructureTypes" }; }
    BitFieldValue<bool, unsigned __int32> bPreventTribeLogDestroyedMessages()
    { return { (void*)this, "bPreventTribeLogDestroyedMessages" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCountStructureInRange()
    { return { (void*)this, "bUseBPCountStructureInRange" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetCustomItemRepairPercentage()
    { return { (void*)this, "bUseBPGetCustomItemRepairPercentage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetCustomItemRepairSpeedMultiplier()
    { return { (void*)this, "bUseBPGetCustomItemRepairSpeedMultiplier" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideMeleeSwingDamageBlockLocation()
    { return { (void*)this, "bUseBPOverrideMeleeSwingDamageBlockLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideStructureHarvestingDepleted()
    { return { (void*)this, "bUseBPOverrideStructureHarvestingDepleted" }; }

};

#endif  // BRZ_SDK_JOGO_FPRIMALSTRUCTURESPARSECLASSDATA_H

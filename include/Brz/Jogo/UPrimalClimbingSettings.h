// ==========================================================================
//  UPrimalClimbingSettings — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALCLIMBINGSETTINGS_H
#define BRZ_SDK_JOGO_UPRIMALCLIMBINGSETTINGS_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UPrimalClimbingSettings
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalClimbingSettings"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    float& AimDirectionBiasField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.AimDirectionBias"); }
    float& ArmSwitchAngleField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.ArmSwitchAngle"); }
    float& AttachAnchoredTraceRadiusField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.AttachAnchoredTraceRadius"); }
    float& AttachEffectTraceDistanceBackwardField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.AttachEffectTraceDistanceBackward"); }
    float& AttachEffectTraceDistanceForwardField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.AttachEffectTraceDistanceForward"); }
    BrzCampoPonteiro CameraOffsetScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalClimbingSettings.CameraOffsetScale")); }
    float& CameraPitchDownField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.CameraPitchDown"); }
    float& CameraPitchUpField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.CameraPitchUp"); }
    float& CameraYawMaxField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.CameraYawMax"); }
    float& CameraYawMinField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.CameraYawMin"); }
    float& CeilingDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.CeilingDistance"); }
    float& CeilingTraceDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.CeilingTraceDistance"); }
    float& CeilingTraceRadiusField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.CeilingTraceRadius"); }
    float& ClimbAnimPlayRateDistanceScaleField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.ClimbAnimPlayRateDistanceScale"); }
    float& ClimbingWaitAfterQuakeFallField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.ClimbingWaitAfterQuakeFall"); }
    float& ClimbingWaitForJumpField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.ClimbingWaitForJump"); }
    float& FallingConsumeDurabilityMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.FallingConsumeDurabilityMultiplier"); }
    float& FlipMaxNormalDotField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.FlipMaxNormalDot"); }
    float& FloorTraceRadiusField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.FloorTraceRadius"); }
    float& ForceReleaseOnImpulseForceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.ForceReleaseOnImpulseForce"); }
    float& GroundMaxDotUpField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.GroundMaxDotUp"); }
    BrzCampoPonteiro HangingCameraOffsetScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalClimbingSettings.HangingCameraOffsetScale")); }
    float& HangingCameraPitchDownField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.HangingCameraPitchDown"); }
    float& HangingCameraPitchUpField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.HangingCameraPitchUp"); }
    float& HangingFailMinDotUpField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.HangingFailMinDotUp"); }
    float& HangingFailOppositeDirectTraceLengthField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.HangingFailOppositeDirectTraceLength"); }
    float& HangingFailOppositeDirectTraceRadiusField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.HangingFailOppositeDirectTraceRadius"); }
    float& HangingFailTraceExtraLengthField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.HangingFailTraceExtraLength"); }
    float& HangingMinDotUpField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.HangingMinDotUp"); }
    float& HangingTracePlaneInterpolationField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.HangingTracePlaneInterpolation"); }
    float& ImpactNormalOffsetAllowanceDotField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.ImpactNormalOffsetAllowanceDot"); }
    float& InvisibleWallTooCloseRadiusField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.InvisibleWallTooCloseRadius"); }
    float& JumpCameraTransitionDurationField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.JumpCameraTransitionDuration"); }
    float& JumpDirectionVelocityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.JumpDirectionVelocity"); }
    float& JumpForwardVelocityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.JumpForwardVelocity"); }
    float& JumpUpVelocityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.JumpUpVelocity"); }
    float& LandFloorSpaceTraceRadiusField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.LandFloorSpaceTraceRadius"); }
    float& LandMinFloorSpaceDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.LandMinFloorSpaceDistance"); }
    float& MaxClimbAnimPlayRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.MaxClimbAnimPlayRate"); }
    float& MinAimDirectionDotField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.MinAimDirectionDot"); }
    float& MinCeilingTraceTimeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.MinCeilingTraceTime"); }
    float& MinClimbAnimPlayRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.MinClimbAnimPlayRate"); }
    float& MinFloorDirectionDotField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.MinFloorDirectionDot"); }
    float& MinFloorDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.MinFloorDistance"); }
    float& MinWallTraceTimeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.MinWallTraceTime"); }
    float& MoveTraceDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.MoveTraceDistance"); }
    float& MoveTraceRadiusField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.MoveTraceRadius"); }
    float& PostFlinchUnclimbableIntervalField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.PostFlinchUnclimbableInterval"); }
    float& PreFlinchUnclimbableIntervalField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.PreFlinchUnclimbableInterval"); }
    float& RootLocationInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.RootLocationInterpSpeed"); }
    float& SwitchFromFPVTransitionDurationField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.SwitchFromFPVTransitionDuration"); }
    float& SwitchToFPVDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.SwitchToFPVDistance"); }
    float& SwitchToFPVDownDotField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.SwitchToFPVDownDot"); }
    float& SwitchToFPVTransitionDurationField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.SwitchToFPVTransitionDuration"); }
    float& TracePlaneInterpolationField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.TracePlaneInterpolation"); }
    BrzCampoPonteiro TransitionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalClimbingSettings.Transitions")); }
    float& TurnMaxNormalDotField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.TurnMaxNormalDot"); }
    BrzCampoPonteiro TypeSettingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalClimbingSettings.TypeSettings")); }
    float& UpAndOverExtendedForwardField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.UpAndOverExtendedForward"); }
    float& UpAndOverExtendedUpField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.UpAndOverExtendedUp"); }
    float& WallDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.WallDistance"); }
    float& WallTraceDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.WallTraceDistance"); }
    float& WallTraceRadiusField() const
    { return *GetNativePointerField<float*>(this, "UPrimalClimbingSettings.WallTraceRadius"); }
    BitFieldValue<bool, unsigned __int32> bAllowInputClimbing()
    { return { (void*)this, "bAllowInputClimbing" }; }
    BitFieldValue<bool, unsigned __int32> bAllowSliding()
    { return { (void*)this, "bAllowSliding" }; }
    BitFieldValue<bool, unsigned __int32> bDebug()
    { return { (void*)this, "bDebug" }; }
    BitFieldValue<bool, unsigned __int32> bUseExtendedLandTrace()
    { return { (void*)this, "bUseExtendedLandTrace" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALCLIMBINGSETTINGS_H

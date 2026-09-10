// ==========================================================================
//  UPrimalWindSourceComponent — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALWINDSOURCECOMPONENT_H
#define BRZ_SDK_JOGO_UPRIMALWINDSOURCECOMPONENT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FActorComponentTickFunction;
struct FName;


struct UPrimalWindSourceComponent
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalWindSourceComponent"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWindSourceComponent.AttachWindSourceToMeshComponent(UMeshComponent*,FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AttachWindSourceToMeshComponent(void* a0, unsigned long long a1) const
    {
        return NativeCall<void*, void*, unsigned long long>(this, "UPrimalWindSourceComponent.AttachWindSourceToMeshComponent(UMeshComponent*,FName)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWindSourceComponent.BPDeactivateBubbleComponent()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPDeactivateBubbleComponent() const
    {
        return NativeCall<void*>(this, "UPrimalWindSourceComponent.BPDeactivateBubbleComponent()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWindSourceComponent.BPExitedFluidSurface(UE::Math::TVector<double>&,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPExitedFluidSurface(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "UPrimalWindSourceComponent.BPExitedFluidSurface(UE::Math::TVector<double>&,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWindSourceComponent.BPImpactedFluidSurface(UE::Math::TVector<double>&,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPImpactedFluidSurface(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "UPrimalWindSourceComponent.BPImpactedFluidSurface(UE::Math::TVector<double>&,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWindSourceComponent.BPImpactingFluidSurfaceTick(UE::Math::TVector<double>&,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPImpactingFluidSurfaceTick(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "UPrimalWindSourceComponent.BPImpactingFluidSurfaceTick(UE::Math::TVector<double>&,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWindSourceComponent.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BeginPlay() const
    {
        return NativeCall<void*>(this, "UPrimalWindSourceComponent.BeginPlay()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWindSourceComponent.EndPlay(EEndPlayReason::Type)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EndPlay(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalWindSourceComponent.EndPlay(EEndPlayReason::Type)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWindSourceComponent.GetCurrentExtraCapsuleWindSourceLocation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCurrentExtraCapsuleWindSourceLocation() const
    {
        return NativeCall<void*>(this, "UPrimalWindSourceComponent.GetCurrentExtraCapsuleWindSourceLocation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWindSourceComponent.GetCurrentWindSourceLocation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCurrentWindSourceLocation() const
    {
        return NativeCall<void*>(this, "UPrimalWindSourceComponent.GetCurrentWindSourceLocation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWindSourceComponent.GetPlasticity()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPlasticity() const
    {
        return NativeCall<void*>(this, "UPrimalWindSourceComponent.GetPlasticity()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWindSourceComponent.GetScaledRadiiForFoliageInteraction(UPrimalWindSourceComponent*,float
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetScaledRadiiForFoliageInteraction(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UPrimalWindSourceComponent.GetScaledRadiiForFoliageInteraction(UPrimalWindSourceComponent*,float&,float&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWindSourceComponent.IsAttachedToPrimalCharacter()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsAttachedToPrimalCharacter() const
    {
        return NativeCall<void*>(this, "UPrimalWindSourceComponent.IsAttachedToPrimalCharacter()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWindSourceComponent.IsAttachedToPrimalStructure()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro IsAttachedToPrimalStructure() const
    {
        return NativeCall<void*>(this, "UPrimalWindSourceComponent.IsAttachedToPrimalStructure()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWindSourceComponent.IsInteractionEnabled()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsInteractionEnabled() const
    {
        return NativeCall<void*>(this, "UPrimalWindSourceComponent.IsInteractionEnabled()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWindSourceComponent.SetAttachment(UPrimitiveComponent*,int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro SetAttachment(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "UPrimalWindSourceComponent.SetAttachment(UPrimitiveComponent*,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWindSourceComponent.SetupAttachment()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetupAttachment() const
    {
        return NativeCall<void*>(this, "UPrimalWindSourceComponent.SetupAttachment()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWindSourceComponent.ShouldDestroy()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShouldDestroy() const
    {
        return NativeCall<void*>(this, "UPrimalWindSourceComponent.ShouldDestroy()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWindSourceComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TickComponent(float a0, int a1, void* a2) const
    {
        return NativeCall<void*, float, int, void*>(this, "UPrimalWindSourceComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWindSourceComponent.UpdateSourceVelocityAndAcceleration(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateSourceVelocityAndAcceleration(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalWindSourceComponent.UpdateSourceVelocityAndAcceleration(float)", a0);
    }

    TArray<void*>& AssetUserDataField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalWindSourceComponent.AssetUserData"); }
    BrzCampoPonteiro AttachmentComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWindSourceComponent.AttachmentComponent")); }
    FName& AttachmentSocketField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalWindSourceComponent.AttachmentSocket"); }
    double& BeginPlayTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalWindSourceComponent.BeginPlayTime"); }
    float& BendAmountField() const
    { return *GetNativePointerField<float*>(this, "UPrimalWindSourceComponent.BendAmount"); }
    FName& CharacterAttachmentSocketField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalWindSourceComponent.CharacterAttachmentSocket"); }
    int& CollectionIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalWindSourceComponent.CollectionIndex"); }
    TArray<void*>& ComponentTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalWindSourceComponent.ComponentTags"); }
    int& CreationMethodField() const
    { return *GetNativePointerField<int*>(this, "UPrimalWindSourceComponent.CreationMethod"); }
    BrzCampoPonteiro CurrentAccelerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWindSourceComponent.CurrentAcceleration")); }
    BrzCampoPonteiro CurrentVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWindSourceComponent.CurrentVelocity")); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UPrimalWindSourceComponent.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalWindSourceComponent.CustomTag"); }
    BrzCampoPonteiro DirectionalRadialField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWindSourceComponent.DirectionalRadial")); }
    BrzCampoPonteiro EffectScopeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWindSourceComponent.EffectScope")); }
    FName& ExtraCapsuleAttachmentSocketField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalWindSourceComponent.ExtraCapsuleAttachmentSocket"); }
    BrzCampoPonteiro ExtraCapsuleCurrentAccelerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWindSourceComponent.ExtraCapsuleCurrentAcceleration")); }
    BrzCampoPonteiro ExtraCapsuleCurrentVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWindSourceComponent.ExtraCapsuleCurrentVelocity")); }
    BrzCampoPonteiro ExtraCapsulePreviousLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWindSourceComponent.ExtraCapsulePreviousLocation")); }
    BrzCampoPonteiro ExtraCapsulePreviousVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWindSourceComponent.ExtraCapsulePreviousVelocity")); }
    BrzCampoPonteiro ExtraCapsuleWindSourceRelativeOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWindSourceComponent.ExtraCapsuleWindSourceRelativeOffset")); }
    unsigned long long& LastFrameAboveFluidSurfaceField() const
    { return *GetNativePointerField<unsigned long long*>(this, "UPrimalWindSourceComponent.LastFrameAboveFluidSurface"); }
    unsigned long long& LastFrameAppliedBySolverField() const
    { return *GetNativePointerField<unsigned long long*>(this, "UPrimalWindSourceComponent.LastFrameAppliedBySolver"); }
    unsigned long long& LastFrameBelowFluidSurfaceField() const
    { return *GetNativePointerField<unsigned long long*>(this, "UPrimalWindSourceComponent.LastFrameBelowFluidSurface"); }
    double& LastTriggeredPeriodicTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalWindSourceComponent.LastTriggeredPeriodicTime"); }
    float& MinVelocityThresholdSquaredField() const
    { return *GetNativePointerField<float*>(this, "UPrimalWindSourceComponent.MinVelocityThresholdSquared"); }
    float& MinimumFoliageInteractionRadiusForBabiesField() const
    { return *GetNativePointerField<float*>(this, "UPrimalWindSourceComponent.MinimumFoliageInteractionRadiusForBabies"); }
    BrzCampoPonteiro MyDispatcherField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWindSourceComponent.MyDispatcher")); }
    BrzCampoPonteiro MyFoliageSolverField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWindSourceComponent.MyFoliageSolver")); }
    BrzCampoPonteiro OnComponentActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWindSourceComponent.OnComponentActivated")); }
    BrzCampoPonteiro OnComponentDeactivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWindSourceComponent.OnComponentDeactivated")); }
    float& OscillationSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalWindSourceComponent.OscillationSpeed"); }
    float& PlasticityAmountField() const
    { return *GetNativePointerField<float*>(this, "UPrimalWindSourceComponent.PlasticityAmount"); }
    float& PlasticityAmountAbsoluteField() const
    { return *GetNativePointerField<float*>(this, "UPrimalWindSourceComponent.PlasticityAmountAbsolute"); }
    BrzCampoPonteiro PlasticityCurveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWindSourceComponent.PlasticityCurve")); }
    BrzCampoPonteiro PreviousLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWindSourceComponent.PreviousLocation")); }
    BrzCampoPonteiro PreviousVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWindSourceComponent.PreviousVelocity")); }
    FActorComponentTickFunction& PrimaryComponentTickField() const
    { return *GetNativePointerField<FActorComponentTickFunction*>(this, "UPrimalWindSourceComponent.PrimaryComponentTick"); }
    int& PriorityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalWindSourceComponent.Priority"); }
    float& RadiusInnerField() const
    { return *GetNativePointerField<float*>(this, "UPrimalWindSourceComponent.RadiusInner"); }
    float& RadiusOuterField() const
    { return *GetNativePointerField<float*>(this, "UPrimalWindSourceComponent.RadiusOuter"); }
    BrzCampoPonteiro SourceScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWindSourceComponent.SourceScale")); }
    float& StrengthField() const
    { return *GetNativePointerField<float*>(this, "UPrimalWindSourceComponent.Strength"); }
    float& TriggerPeriodicIntervalField() const
    { return *GetNativePointerField<float*>(this, "UPrimalWindSourceComponent.TriggerPeriodicInterval"); }
    int& UCSSerializationIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalWindSourceComponent.UCSSerializationIndex"); }
    float& VelStrengthMultiplierXYField() const
    { return *GetNativePointerField<float*>(this, "UPrimalWindSourceComponent.VelStrengthMultiplierXY"); }
    float& VelStrengthMultiplierZField() const
    { return *GetNativePointerField<float*>(this, "UPrimalWindSourceComponent.VelStrengthMultiplierZ"); }
    float& WindFrequencyField() const
    { return *GetNativePointerField<float*>(this, "UPrimalWindSourceComponent.WindFrequency"); }
    float& WindHeadingField() const
    { return *GetNativePointerField<float*>(this, "UPrimalWindSourceComponent.WindHeading"); }
    BrzCampoPonteiro WindSourceModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWindSourceComponent.WindSourceMode")); }
    BrzCampoPonteiro WindSourceRelativeOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWindSourceComponent.WindSourceRelativeOffset")); }
    float& WindSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalWindSourceComponent.WindSpeed"); }
    float& WindStrengthField() const
    { return *GetNativePointerField<float*>(this, "UPrimalWindSourceComponent.WindStrength"); }
    BitFieldValue<bool, unsigned __int32> bAlwaysReplicatePropertyConditional()
    { return { (void*)this, "bAlwaysReplicatePropertyConditional" }; }
    BitFieldValue<bool, unsigned __int32> bAutoActivate()
    { return { (void*)this, "bAutoActivate" }; }
    BitFieldValue<bool, unsigned __int32> bCanEverAffectNavigation()
    { return { (void*)this, "bCanEverAffectNavigation" }; }
    BitFieldValue<bool, unsigned __int32> bDedicatedForceTickingEveryFrame()
    { return { (void*)this, "bDedicatedForceTickingEveryFrame" }; }
    BitFieldValue<bool, unsigned __int32> bEditableWhenInherited()
    { return { (void*)this, "bEditableWhenInherited" }; }
    bool& bEnabledField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalWindSourceComponent.bEnabled"); }
    BitFieldValue<bool, unsigned __int32> bHasMultiUseEntries()
    { return { (void*)this, "bHasMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bIsActive()
    { return { (void*)this, "bIsActive" }; }
    BitFieldValue<bool, unsigned __int32> bIsEditorOnly()
    { return { (void*)this, "bIsEditorOnly" }; }
    BitFieldValue<bool, unsigned __int32> bNetAddressable()
    { return { (void*)this, "bNetAddressable" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyInitialReplication()
    { return { (void*)this, "bOnlyInitialReplication" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyRelevantToOwner()
    { return { (void*)this, "bOnlyRelevantToOwner" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnClient()
    { return { (void*)this, "bPreventOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnConsoles()
    { return { (void*)this, "bPreventOnConsoles" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnDedicatedServer()
    { return { (void*)this, "bPreventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnNonDedicatedHost()
    { return { (void*)this, "bPreventOnNonDedicatedHost" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateUsingRegisteredSubObjectList()
    { return { (void*)this, "bReplicateUsingRegisteredSubObjectList" }; }
    BitFieldValue<bool, unsigned __int32> bReplicates()
    { return { (void*)this, "bReplicates" }; }
    BitFieldValue<bool, unsigned __int32> bStasisPreventUnregister()
    { return { (void*)this, "bStasisPreventUnregister" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentCreated()
    { return { (void*)this, "bUseBPOnComponentCreated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentDestroyed()
    { return { (void*)this, "bUseBPOnComponentDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentTick()
    { return { (void*)this, "bUseBPOnComponentTick" }; }
    BitFieldValue<bool, unsigned __int32> BubbleComponentIsActive()
    { return { (void*)this, "BubbleComponentIsActive" }; }
    BitFieldValue<bool, unsigned __int32> SelectThisComponent()
    { return { (void*)this, "SelectThisComponent" }; }
    BitFieldValue<bool, unsigned __int32> SpecialCheck_DetermineInnerSphereImpactsFluid()
    { return { (void*)this, "SpecialCheck_DetermineInnerSphereImpactsFluid" }; }
    BitFieldValue<bool, unsigned __int32> SpecialCheck_IsInnerSphereAboveWater()
    { return { (void*)this, "SpecialCheck_IsInnerSphereAboveWater" }; }
    BitFieldValue<bool, unsigned __int32> bClearedParameters()
    { return { (void*)this, "bClearedParameters" }; }
    BitFieldValue<bool, unsigned __int32> bEnableBubbleSpawnWhenUnderwaterIfWaterInteractionIsEnabled()
    { return { (void*)this, "bEnableBubbleSpawnWhenUnderwaterIfWaterInteractionIsEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bEnableDebug()
    { return { (void*)this, "bEnableDebug" }; }
    BitFieldValue<bool, unsigned __int32> bEnableFluidEmissionTexture()
    { return { (void*)this, "bEnableFluidEmissionTexture" }; }
    BitFieldValue<bool, unsigned __int32> bEnableFluidInteraction()
    { return { (void*)this, "bEnableFluidInteraction" }; }
    BitFieldValue<bool, unsigned __int32> bEnableFoliageInteraction()
    { return { (void*)this, "bEnableFoliageInteraction" }; }
    BitFieldValue<bool, unsigned __int32> bEnableFoliageInteractionOnBabies()
    { return { (void*)this, "bEnableFoliageInteractionOnBabies" }; }
    BitFieldValue<bool, unsigned __int32> bEnableSnowInteraction()
    { return { (void*)this, "bEnableSnowInteraction" }; }
    BitFieldValue<bool, unsigned __int32> bEnabled()
    { return { (void*)this, "bEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bFluidInteractionWasThrottled()
    { return { (void*)this, "bFluidInteractionWasThrottled" }; }
    BitFieldValue<bool, unsigned __int32> bFoliageInteractionWasThrottled()
    { return { (void*)this, "bFoliageInteractionWasThrottled" }; }
    BitFieldValue<bool, unsigned __int32> bSnowInteractionWasThrottled()
    { return { (void*)this, "bSnowInteractionWasThrottled" }; }
    BitFieldValue<bool, unsigned __int32> bTriggerConstant()
    { return { (void*)this, "bTriggerConstant" }; }
    BitFieldValue<bool, unsigned __int32> bTriggerManual()
    { return { (void*)this, "bTriggerManual" }; }
    BitFieldValue<bool, unsigned __int32> bTriggerPeriodically()
    { return { (void*)this, "bTriggerPeriodically" }; }
    BitFieldValue<bool, unsigned __int32> bUseActorVelForDirection()
    { return { (void*)this, "bUseActorVelForDirection" }; }
    BitFieldValue<bool, unsigned __int32> bUseActorVelForStrength()
    { return { (void*)this, "bUseActorVelForStrength" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPExitedFluidSurface()
    { return { (void*)this, "bUseBPExitedFluidSurface" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPImpactedFluidSurface()
    { return { (void*)this, "bUseBPImpactedFluidSurface" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPImpactingFluidSurfaceTick()
    { return { (void*)this, "bUseBPImpactingFluidSurfaceTick" }; }
    BitFieldValue<bool, unsigned __int32> bUseVolumetricDispatcher()
    { return { (void*)this, "bUseVolumetricDispatcher" }; }
    BitFieldValue<bool, unsigned __int32> bUsedOnPlayerCamera()
    { return { (void*)this, "bUsedOnPlayerCamera" }; }
    BitFieldValue<bool, unsigned __int32> bWasEnabled()
    { return { (void*)this, "bWasEnabled" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALWINDSOURCECOMPONENT_H

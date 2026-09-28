// ==========================================================================
//  UPrimalDinoAnimInstance — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALDINOANIMINSTANCE_H
#define BRZ_SDK_JOGO_UPRIMALDINOANIMINSTANCE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UPrimalDinoAnimInstance
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalDinoAnimInstance"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalDinoAnimInstance.NativeInitializeAnimation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NativeInitializeAnimation() const
    {
        return NativeCall<void*>(this, "UPrimalDinoAnimInstance.NativeInitializeAnimation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalDinoAnimInstance.PreUpdateAnimation(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PreUpdateAnimation(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalDinoAnimInstance.PreUpdateAnimation(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalDinoAnimInstance.UpdateAimSpace(APrimalDinoCharacter*,float)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro UpdateAimSpace(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "UPrimalDinoAnimInstance.UpdateAimSpace(APrimalDinoCharacter*,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalDinoAnimInstance.UpdateDataForWorkerThread(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateDataForWorkerThread(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalDinoAnimInstance.UpdateDataForWorkerThread(float)", a0);
    }

    BrzCampoPonteiro ActiveAnimNotifyEventReferenceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoAnimInstance.ActiveAnimNotifyEventReference")); }
    BrzCampoPonteiro ActiveAnimNotifyStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoAnimInstance.ActiveAnimNotifyState")); }
    BrzCampoPonteiro AimOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoAnimInstance.AimOffset")); }
    TWeakObjectPtr<void>& BaseAnimSharingComponentField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalDinoAnimInstance.BaseAnimSharingComponent"); }
    float& CurrentDeltaTimeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoAnimInstance.CurrentDeltaTime"); }
    BrzCampoPonteiro CurrentMeshAccelerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoAnimInstance.CurrentMeshAcceleration")); }
    float& CurrentMeshSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoAnimInstance.CurrentMeshSpeed"); }
    BrzCampoPonteiro CurrentMeshVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoAnimInstance.CurrentMeshVelocity")); }
    BrzCampoPonteiro CurrentOwnerAccelerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoAnimInstance.CurrentOwnerAcceleration")); }
    BrzCampoPonteiro CurrentOwnerDirectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoAnimInstance.CurrentOwnerDirection")); }
    BrzCampoPonteiro CurrentOwnerVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoAnimInstance.CurrentOwnerVelocity")); }
    BrzCampoPonteiro CurrentSkeletonField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoAnimInstance.CurrentSkeleton")); }
    BrzCampoPonteiro DinoAimSpaceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoAnimInstance.DinoAimSpace")); }
    float& DinoCurrentMovementAnimRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoAnimInstance.DinoCurrentMovementAnimRate"); }
    BrzCampoPonteiro DisabledLinkAnimGraphsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoAnimInstance.DisabledLinkAnimGraphs")); }
    BrzCampoPonteiro MyPrimalCharOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoAnimInstance.MyPrimalCharOwner")); }
    BrzCampoPonteiro MyPrimalMovementCompField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoAnimInstance.MyPrimalMovementComp")); }
    BrzCampoPonteiro NotifyQueueField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoAnimInstance.NotifyQueue")); }
    BrzCampoPonteiro OnAllMontageInstancesEndedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoAnimInstance.OnAllMontageInstancesEnded")); }
    BrzCampoPonteiro OnMontageBlendedInField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoAnimInstance.OnMontageBlendedIn")); }
    BrzCampoPonteiro OnMontageBlendingOutField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoAnimInstance.OnMontageBlendingOut")); }
    BrzCampoPonteiro OnMontageEndedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoAnimInstance.OnMontageEnded")); }
    BrzCampoPonteiro OnMontageStartedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoAnimInstance.OnMontageStarted")); }
    BrzCampoPonteiro PreviousMeshLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoAnimInstance.PreviousMeshLocation")); }
    BrzCampoPonteiro PreviousMeshVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoAnimInstance.PreviousMeshVelocity")); }
    BrzCampoPonteiro QueuedLinkAnimGraphsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoAnimInstance.QueuedLinkAnimGraphs")); }
    BrzCampoPonteiro RootLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoAnimInstance.RootLocOffset")); }
    unsigned char& RootMotionModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalDinoAnimInstance.RootMotionMode"); }
    BrzCampoPonteiro RootOffsetTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoAnimInstance.RootOffsetTransform")); }
    BrzCampoPonteiro RootRotOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoAnimInstance.RootRotOffset")); }
    float& RootYawSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoAnimInstance.RootYawSpeed"); }
    BrzCampoPonteiro SlotGroupInertializationRequestDataMapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoAnimInstance.SlotGroupInertializationRequestDataMap")); }
    BrzCampoPonteiro bCanSkipAnimGraphField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoAnimInstance.bCanSkipAnimGraph")); }
    BrzCampoPonteiro bCheatDisableIKField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoAnimInstance.bCheatDisableIK")); }
    BrzCampoPonteiro bDinoAnimIsMovingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoAnimInstance.bDinoAnimIsMoving")); }
    BrzCampoPonteiro bEnableAnimationGroundConformingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoAnimInstance.bEnableAnimationGroundConforming")); }
    BrzCampoPonteiro bIsAnimSharingPausedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoAnimInstance.bIsAnimSharingPaused")); }
    BrzCampoPonteiro bPropagateNotifiesToLinkedInstancesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoAnimInstance.bPropagateNotifiesToLinkedInstances")); }
    BrzCampoPonteiro bQueueMontageEventsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoAnimInstance.bQueueMontageEvents")); }
    BrzCampoPonteiro bReceiveNotifiesFromLinkedInstancesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoAnimInstance.bReceiveNotifiesFromLinkedInstances")); }
    BrzCampoPonteiro bRequestAimSpaceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoAnimInstance.bRequestAimSpace")); }
    BrzCampoPonteiro bResolveAimSpaceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoAnimInstance.bResolveAimSpace")); }
    BrzCampoPonteiro bUseMainInstanceMontageEvaluationDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoAnimInstance.bUseMainInstanceMontageEvaluationData")); }
    BrzCampoPonteiro bUseMultiThreadedAnimationUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoAnimInstance.bUseMultiThreadedAnimationUpdate")); }
    BrzCampoPonteiro bUsingCopyPoseFromMeshField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoAnimInstance.bUsingCopyPoseFromMesh")); }
    BitFieldValue<bool, unsigned __int32> bCanSkipAnimGraph()
    { return { (void*)this, "bCanSkipAnimGraph" }; }
    BitFieldValue<bool, unsigned __int32> bDinoAnimIsMoving()
    { return { (void*)this, "bDinoAnimIsMoving" }; }
    BitFieldValue<bool, unsigned __int32> bRequestAimSpace()
    { return { (void*)this, "bRequestAimSpace" }; }
    BitFieldValue<bool, unsigned __int32> bResolveAimSpace()
    { return { (void*)this, "bResolveAimSpace" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALDINOANIMINSTANCE_H

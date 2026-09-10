// ==========================================================================
//  UPrimalAnimInstance — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALANIMINSTANCE_H
#define BRZ_SDK_JOGO_UPRIMALANIMINSTANCE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UPrimalAnimInstance
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalAnimInstance"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAnimInstance.BlendSpacePlayerBase_InitializeBlendFilter(FBlendFilter&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BlendSpacePlayerBase_InitializeBlendFilter(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalAnimInstance.BlendSpacePlayerBase_InitializeBlendFilter(FBlendFilter&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAnimInstance.BlendSpacePlayerBase_UpdateBlendFilter(FBlendFilter&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BlendSpacePlayerBase_UpdateBlendFilter(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalAnimInstance.BlendSpacePlayerBase_UpdateBlendFilter(FBlendFilter&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAnimInstance.CacheTraversalAnimationVars(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CacheTraversalAnimationVars(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalAnimInstance.CacheTraversalAnimationVars(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAnimInstance.ForceUpdateOnGameThread(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro ForceUpdateOnGameThread(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalAnimInstance.ForceUpdateOnGameThread(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAnimInstance.GetAimSpace()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAimSpace() const
    {
        return NativeCall<void*>(this, "UPrimalAnimInstance.GetAimSpace()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAnimInstance.LinkAnimGraphByTag(FName,TSubclassOf<UAnimInstance>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LinkAnimGraphByTag(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "UPrimalAnimInstance.LinkAnimGraphByTag(FName,TSubclassOf<UAnimInstance>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAnimInstance.NativeInitializeAnimation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NativeInitializeAnimation() const
    {
        return NativeCall<void*>(this, "UPrimalAnimInstance.NativeInitializeAnimation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAnimInstance.NativePostEvaluateAnimation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=135]]
    BrzPonteiro NativePostEvaluateAnimation() const
    {
        return NativeCall<void*>(this, "UPrimalAnimInstance.NativePostEvaluateAnimation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAnimInstance.NativeUpdateAnimation(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NativeUpdateAnimation(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalAnimInstance.NativeUpdateAnimation(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAnimInstance.QueueLinkAnimGraphByTag(FName,TSubclassOf<UAnimInstance>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro QueueLinkAnimGraphByTag(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "UPrimalAnimInstance.QueueLinkAnimGraphByTag(FName,TSubclassOf<UAnimInstance>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAnimInstance.RefreshCachedTraversalVars()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RefreshCachedTraversalVars() const
    {
        return NativeCall<void*>(this, "UPrimalAnimInstance.RefreshCachedTraversalVars()");
    }

    BrzCampoPonteiro ActiveAnimNotifyEventReferenceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAnimInstance.ActiveAnimNotifyEventReference")); }
    BrzCampoPonteiro ActiveAnimNotifyStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAnimInstance.ActiveAnimNotifyState")); }
    TWeakObjectPtr<void>& BaseAnimSharingComponentField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalAnimInstance.BaseAnimSharingComponent"); }
    float& CurrentDeltaTimeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalAnimInstance.CurrentDeltaTime"); }
    BrzCampoPonteiro CurrentMeshAccelerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAnimInstance.CurrentMeshAcceleration")); }
    float& CurrentMeshSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalAnimInstance.CurrentMeshSpeed"); }
    BrzCampoPonteiro CurrentMeshVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAnimInstance.CurrentMeshVelocity")); }
    BrzCampoPonteiro CurrentOwnerAccelerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAnimInstance.CurrentOwnerAcceleration")); }
    BrzCampoPonteiro CurrentOwnerDirectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAnimInstance.CurrentOwnerDirection")); }
    BrzCampoPonteiro CurrentOwnerVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAnimInstance.CurrentOwnerVelocity")); }
    BrzCampoPonteiro CurrentSkeletonField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAnimInstance.CurrentSkeleton")); }
    BrzCampoPonteiro DisabledLinkAnimGraphsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAnimInstance.DisabledLinkAnimGraphs")); }
    BrzCampoPonteiro MyPrimalCharOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAnimInstance.MyPrimalCharOwner")); }
    BrzCampoPonteiro MyPrimalMovementCompField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAnimInstance.MyPrimalMovementComp")); }
    BrzCampoPonteiro NotifyQueueField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAnimInstance.NotifyQueue")); }
    BrzCampoPonteiro OnAllMontageInstancesEndedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAnimInstance.OnAllMontageInstancesEnded")); }
    BrzCampoPonteiro OnMontageBlendedInField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAnimInstance.OnMontageBlendedIn")); }
    BrzCampoPonteiro OnMontageBlendingOutField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAnimInstance.OnMontageBlendingOut")); }
    BrzCampoPonteiro OnMontageEndedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAnimInstance.OnMontageEnded")); }
    BrzCampoPonteiro OnMontageStartedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAnimInstance.OnMontageStarted")); }
    BrzCampoPonteiro PreviousMeshLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAnimInstance.PreviousMeshLocation")); }
    BrzCampoPonteiro PreviousMeshVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAnimInstance.PreviousMeshVelocity")); }
    BrzCampoPonteiro QueuedLinkAnimGraphsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAnimInstance.QueuedLinkAnimGraphs")); }
    unsigned char& RootMotionModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalAnimInstance.RootMotionMode"); }
    BrzCampoPonteiro SlotGroupInertializationRequestDataMapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAnimInstance.SlotGroupInertializationRequestDataMap")); }
    BitFieldValue<bool, unsigned __int32> bIsAnimSharingPaused()
    { return { (void*)this, "bIsAnimSharingPaused" }; }
    BitFieldValue<bool, unsigned __int32> bPropagateNotifiesToLinkedInstances()
    { return { (void*)this, "bPropagateNotifiesToLinkedInstances" }; }
    BitFieldValue<bool, unsigned __int32> bQueueMontageEvents()
    { return { (void*)this, "bQueueMontageEvents" }; }
    BitFieldValue<bool, unsigned __int32> bReceiveNotifiesFromLinkedInstances()
    { return { (void*)this, "bReceiveNotifiesFromLinkedInstances" }; }
    BitFieldValue<bool, unsigned __int32> bUseMainInstanceMontageEvaluationData()
    { return { (void*)this, "bUseMainInstanceMontageEvaluationData" }; }
    BitFieldValue<bool, unsigned __int32> bUseMultiThreadedAnimationUpdate()
    { return { (void*)this, "bUseMultiThreadedAnimationUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bUsingCopyPoseFromMesh()
    { return { (void*)this, "bUsingCopyPoseFromMesh" }; }
    BitFieldValue<bool, unsigned __int32> bCheatDisableIK()
    { return { (void*)this, "bCheatDisableIK" }; }
    BitFieldValue<bool, unsigned __int32> bEnableAnimationGroundConforming()
    { return { (void*)this, "bEnableAnimationGroundConforming" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALANIMINSTANCE_H

// ==========================================================================
//  UPrimalShipAnimInstance — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALSHIPANIMINSTANCE_H
#define BRZ_SDK_JOGO_UPRIMALSHIPANIMINSTANCE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UPrimalShipAnimInstance
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalShipAnimInstance"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipAnimInstance.NativeInitializeAnimation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NativeInitializeAnimation() const
    {
        return NativeCall<void*>(this, "UPrimalShipAnimInstance.NativeInitializeAnimation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipAnimInstance.UpdateWind()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateWind() const
    {
        return NativeCall<void*>(this, "UPrimalShipAnimInstance.UpdateWind()");
    }

    BrzCampoPonteiro ActiveAnimNotifyEventReferenceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipAnimInstance.ActiveAnimNotifyEventReference")); }
    BrzCampoPonteiro ActiveAnimNotifyStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipAnimInstance.ActiveAnimNotifyState")); }
    TWeakObjectPtr<void>& BaseAnimSharingComponentField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalShipAnimInstance.BaseAnimSharingComponent"); }
    BrzCampoPonteiro CurrentSkeletonField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipAnimInstance.CurrentSkeleton")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PrimalShipOwner` +8, medido na build 25090264
    //  (offset absoluto medido: 0x3D0; confianca alta)
    void*& DayCycleManagerField() const
    { return BrzCampoAncorado<void*>(this, "PrimalShipOwner", 8); }
    BrzCampoPonteiro NotifyQueueField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipAnimInstance.NotifyQueue")); }
    BrzCampoPonteiro OnAllMontageInstancesEndedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipAnimInstance.OnAllMontageInstancesEnded")); }
    BrzCampoPonteiro OnMontageBlendedInField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipAnimInstance.OnMontageBlendedIn")); }
    BrzCampoPonteiro OnMontageBlendingOutField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipAnimInstance.OnMontageBlendingOut")); }
    BrzCampoPonteiro OnMontageEndedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipAnimInstance.OnMontageEnded")); }
    BrzCampoPonteiro OnMontageStartedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipAnimInstance.OnMontageStarted")); }
    BrzCampoPonteiro PrimalShipOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipAnimInstance.PrimalShipOwner")); }
    unsigned char& RootMotionModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalShipAnimInstance.RootMotionMode"); }
    BrzCampoPonteiro SlotGroupInertializationRequestDataMapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipAnimInstance.SlotGroupInertializationRequestDataMap")); }
    BrzCampoPonteiro WindFlowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipAnimInstance.WindFlow")); }
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
};

#endif  // BRZ_SDK_JOGO_UPRIMALSHIPANIMINSTANCE_H

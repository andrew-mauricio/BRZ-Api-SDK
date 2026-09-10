// ==========================================================================
//  APrimalStructurePortableLadder — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALSTRUCTUREPORTABLELADDER_H
#define BRZ_SDK_JOGO_APRIMALSTRUCTUREPORTABLELADDER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UAnimMontage;
struct UBoxComponent;
struct USkeletalMesh;
struct USkeletalMeshComponent;

#include "APrimalStructureLadder.h"

struct APrimalStructurePortableLadder : public APrimalStructureLadder
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalStructurePortableLadder"); }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalStructurePortableLadder.BPSetLaddersRetracted(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPSetLaddersRetracted(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalStructurePortableLadder.BPSetLaddersRetracted(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructurePortableLadder.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "APrimalStructurePortableLadder.BeginPlay()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructurePortableLadder.BuildLadder()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=45+chamadores=4]]
    void BuildLadder() const
    {
        NativeCall<void>(this, "APrimalStructurePortableLadder.BuildLadder()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructurePortableLadder.ClearSkeletalMeshes()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro ClearSkeletalMeshes() const
    {
        return NativeCall<void*>(this, "APrimalStructurePortableLadder.ClearSkeletalMeshes()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructurePortableLadder.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSize
    // endereco: casamento de bytes com a build de referencia
    void GetMultiUseEntries(void* a0, void* a1, int a2) const
    {
        NativeCall<void, void*, void*, int>(this, "APrimalStructurePortableLadder.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructurePortableLadder.GetNearestLadderPosition(UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetNearestLadderPosition(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructurePortableLadder.GetNearestLadderPosition(UE::Math::TVector<double>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructurePortableLadder.ModifyHudMultiUseLoc_Implementation(UE::Math::TVector2<double>&,A
    // endereco: casamento de bytes com a build de referencia
    void ModifyHudMultiUseLoc_Implementation(void* a0, void* a1, int a2) const
    {
        NativeCall<void, void*, void*, int>(this, "APrimalStructurePortableLadder.ModifyHudMultiUseLoc_Implementation(UE::Math::TVector2<double>&,APlayerController*,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructurePortableLadder.PlacedStructureLocation()
    // endereco: casamento de bytes com a build de referencia
    void PlacedStructureLocation() const
    {
        NativeCall<void>(this, "APrimalStructurePortableLadder.PlacedStructureLocation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructurePortableLadder.SetLaddersRetracted(bool,TArray<APrimalStructureLadder*,TSizedDef
    // endereco: casamento de bytes com a build de referencia
    void SetLaddersRetracted(bool a0, void* a1) const
    {
        NativeCall<void, bool, void*>(this, "APrimalStructurePortableLadder.SetLaddersRetracted(bool,TArray<APrimalStructureLadder*,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructurePortableLadder.TryMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    bool TryMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<bool, void*, int, int>(this, "APrimalStructurePortableLadder.TryMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructurePortableLadder.Unstasis()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Unstasis() const
    {
        return NativeCall<void*>(this, "APrimalStructurePortableLadder.Unstasis()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalStructurePortableLadder.UpdateBoxCollisionForRetraction(bool)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=52]]
    void UpdateBoxCollisionForRetraction(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalStructurePortableLadder.UpdateBoxCollisionForRetraction(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructurePortableLadder.UpdateLadder()
    // endereco: casamento de bytes com a build de referencia
    void UpdateLadder() const
    {
        NativeCall<void>(this, "APrimalStructurePortableLadder.UpdateLadder()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructurePortableLadder.UpdateRetraction()
    // endereco: casamento de bytes com a build de referencia
    void UpdateRetraction() const
    {
        NativeCall<void>(this, "APrimalStructurePortableLadder.UpdateRetraction()");
    }

    //  no cache antigo este campo se chamava AnimTimerHandle.
    //  nesta build ele e' `BottomRetractedAnimMontageBlueprint` — resolve por NOME.
    BrzCampoPonteiro AnimTimerHandleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructurePortableLadder.BottomRetractedAnimMontageBlueprint")); }
    BrzCampoPonteiro BottomAnimBlueprintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructurePortableLadder.BottomAnimBlueprint")); }
    UAnimMontage*& BottomAnimMontageBlueprintField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalStructurePortableLadder.BottomAnimMontageBlueprint"); }
    UAnimMontage*& BottomAnimMontageExtendedBlueprintField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalStructurePortableLadder.BottomAnimMontageExtendedBlueprint"); }
    USkeletalMeshComponent*& BottomLadderSkeletalMeshField() const
    { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalStructurePortableLadder.BottomLadderSkeletalMesh"); }
    UAnimMontage*& BottomRetractedAnimMontageBlueprintField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalStructurePortableLadder.BottomRetractedAnimMontageBlueprint"); }
    //  no cache antigo este campo se chamava CollisionBoxComponent.
    //  nesta build ele e' `MidAnimMontageBlueprint` — resolve por NOME.
    UBoxComponent*& CollisionBoxComponentField() const
    { return *GetNativePointerField<UBoxComponent**>(this, "APrimalStructurePortableLadder.MidAnimMontageBlueprint"); }
    float& MaximumHeightAllowedForLadderField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructurePortableLadder.MaximumHeightAllowedForLadder"); }
    BrzCampoPonteiro MidAnimBlueprintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructurePortableLadder.MidAnimBlueprint")); }
    UAnimMontage*& MidAnimMontageBlueprintField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalStructurePortableLadder.MidAnimMontageBlueprint"); }
    UAnimMontage*& MidAnimMontageExtendedBlueprintField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalStructurePortableLadder.MidAnimMontageExtendedBlueprint"); }
    TArray<USkeletalMeshComponent*>& MidLadderSkeletalMeshsField() const
    { return *GetNativePointerField<TArray<USkeletalMeshComponent*>*>(this, "APrimalStructurePortableLadder.MidLadderSkeletalMeshs"); }
    UAnimMontage*& MidRetractedAnimMontageBlueprintField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalStructurePortableLadder.MidRetractedAnimMontageBlueprint"); }
    USkeletalMesh*& MidSkeletalMeshField() const
    { return *GetNativePointerField<USkeletalMesh**>(this, "APrimalStructurePortableLadder.MidSkeletalMesh"); }
    USkeletalMesh*& MyBottomSkeletalMeshField() const
    { return *GetNativePointerField<USkeletalMesh**>(this, "APrimalStructurePortableLadder.MyBottomSkeletalMesh"); }
    //  no cache antigo este campo se chamava PlaySetupAnimationHandle.
    //  nesta build ele e' `MidAnimMontageExtendedBlueprint` — resolve por NOME.
    BrzCampoPonteiro PlaySetupAnimationHandleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructurePortableLadder.MidAnimMontageExtendedBlueprint")); }
    TArray<USkeletalMeshComponent*>& SkeletalMeshsForAnimationField() const
    { return *GetNativePointerField<TArray<USkeletalMeshComponent*>*>(this, "APrimalStructurePortableLadder.SkeletalMeshsForAnimation"); }
    BitFieldValue<bool, unsigned __int32> bisDonePlacing()
    { return { (void*)this, "bisDonePlacing" }; }
    BitFieldValue<bool, unsigned __int32> bIsPlayingAnimation()
    { return { (void*)this, "bIsPlayingAnimation" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALSTRUCTUREPORTABLELADDER_H

// ==========================================================================
//  AShooterSpectatorPawn — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ASHOOTERSPECTATORPAWN_H
#define BRZ_SDK_JOGO_ASHOOTERSPECTATORPAWN_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct AController;
struct APawn;
struct APlayerState;
struct FActorTickFunction;
struct FName;
struct UInputComponent;
struct UPawnMovementComponent;
struct UPrimitiveComponent;
struct USceneComponent;
struct USphereComponent;
struct UStaticMeshComponent;


struct AShooterSpectatorPawn
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AShooterSpectatorPawn"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterSpectatorPawn.AutoCycle(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AutoCycle(float a0) const
    {
        return NativeCall<void*, float>(this, "AShooterSpectatorPawn.AutoCycle(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterSpectatorPawn.BPOrbitCamOn(AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOrbitCamOn(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterSpectatorPawn.BPOrbitCamOn(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterSpectatorPawn.DoAutoCycle()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DoAutoCycle() const
    {
        return NativeCall<void*>(this, "AShooterSpectatorPawn.DoAutoCycle()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterSpectatorPawn.GetCurrentSpeed(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCurrentSpeed(float a0) const
    {
        return NativeCall<void*, float>(this, "AShooterSpectatorPawn.GetCurrentSpeed(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterSpectatorPawn.GetSavedSpectatorPositions(TArray<UE::Math::TVector<double>,TSizedDefaultA
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetSavedSpectatorPositions(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterSpectatorPawn.GetSavedSpectatorPositions(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&,TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterSpectatorPawn.LookInput(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro LookInput(float a0) const
    {
        return NativeCall<void*, float>(this, "AShooterSpectatorPawn.LookInput(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterSpectatorPawn.LookUpAtRate(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro LookUpAtRate(float a0) const
    {
        return NativeCall<void*, float>(this, "AShooterSpectatorPawn.LookUpAtRate(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterSpectatorPawn.MoveForward(float)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro MoveForward(float a0) const
    {
        return NativeCall<void*, float>(this, "AShooterSpectatorPawn.MoveForward(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterSpectatorPawn.MoveRight(float)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro MoveRight(float a0) const
    {
        return NativeCall<void*, float>(this, "AShooterSpectatorPawn.MoveRight(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterSpectatorPawn.MoveUp(float)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro MoveUp(float a0) const
    {
        return NativeCall<void*, float>(this, "AShooterSpectatorPawn.MoveUp(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterSpectatorPawn.OrbitCamOff()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OrbitCamOff() const
    {
        return NativeCall<void*>(this, "AShooterSpectatorPawn.OrbitCamOff()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterSpectatorPawn.PawnClientRestart()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PawnClientRestart() const
    {
        return NativeCall<void*>(this, "AShooterSpectatorPawn.PawnClientRestart()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterSpectatorPawn.SetSavedSpectatorPositionForIndex(int,UE::Math::TVector<double>,UE::Math::
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo]
    BrzPonteiro SetSavedSpectatorPositionForIndex(int a0, void* a1, void* a2) const
    {
        return NativeCall<void*, int, void*, void*>(this, "AShooterSpectatorPawn.SetSavedSpectatorPositionForIndex(int,UE::Math::TVector<double>,UE::Math::TRotator<double>)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterSpectatorPawn.SetUseRealGimbal(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetUseRealGimbal(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AShooterSpectatorPawn.SetUseRealGimbal(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterSpectatorPawn.SetupPlayerInputComponent(UInputComponent*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetupPlayerInputComponent(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterSpectatorPawn.SetupPlayerInputComponent(UInputComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterSpectatorPawn.SpectatorDecreaseBaseSpeed()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SpectatorDecreaseBaseSpeed() const
    {
        return NativeCall<void*>(this, "AShooterSpectatorPawn.SpectatorDecreaseBaseSpeed()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterSpectatorPawn.SpectatorDecreaseBaseSpeedEnd_Implementation()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SpectatorDecreaseBaseSpeedEnd_Implementation() const
    {
        return NativeCall<void*>(this, "AShooterSpectatorPawn.SpectatorDecreaseBaseSpeedEnd_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterSpectatorPawn.SpectatorIncreaseBaseSpeed()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SpectatorIncreaseBaseSpeed() const
    {
        return NativeCall<void*>(this, "AShooterSpectatorPawn.SpectatorIncreaseBaseSpeed()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterSpectatorPawn.SpectatorNextPlayer()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SpectatorNextPlayer() const
    {
        return NativeCall<void*>(this, "AShooterSpectatorPawn.SpectatorNextPlayer()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterSpectatorPawn.SpectatorResetBaseSpeed()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SpectatorResetBaseSpeed() const
    {
        return NativeCall<void*>(this, "AShooterSpectatorPawn.SpectatorResetBaseSpeed()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterSpectatorPawn.SpectatorTargeting(bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SpectatorTargeting(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AShooterSpectatorPawn.SpectatorTargeting(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterSpectatorPawn.TeleportSpectatorTo(UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TeleportSpectatorTo(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterSpectatorPawn.TeleportSpectatorTo(UE::Math::TVector<double>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterSpectatorPawn.Tick(float)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro Tick(float a0) const
    {
        return NativeCall<void*, float>(this, "AShooterSpectatorPawn.Tick(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterSpectatorPawn.TryOrbitCamOnMousePosition()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryOrbitCamOnMousePosition() const
    {
        return NativeCall<void*>(this, "AShooterSpectatorPawn.TryOrbitCamOnMousePosition()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterSpectatorPawn.TurnAtRate(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro TurnAtRate(float a0) const
    {
        return NativeCall<void*, float>(this, "AShooterSpectatorPawn.TurnAtRate(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterSpectatorPawn.TurnInput(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro TurnInput(float a0) const
    {
        return NativeCall<void*, float>(this, "AShooterSpectatorPawn.TurnInput(float)", a0);
    }

    BrzCampoPonteiro AIControllerClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.AIControllerClass")); }
    TObjectPtr<AActor>& ActorUsingQuickActionField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "AShooterSpectatorPawn.ActorUsingQuickAction"); }
    BrzCampoPonteiro AttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.AttachmentReplication")); }
    FieldArray<char> AutoPossessAIField() const
    { return { (void*)this, "AShooterSpectatorPawn.AutoPossessAI" }; }
    unsigned char& AutoPossessPlayerField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterSpectatorPawn.AutoPossessPlayer"); }
    unsigned char& AutoReceiveInputField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterSpectatorPawn.AutoReceiveInput"); }
    float& BaseEyeHeightField() const
    { return *GetNativePointerField<float*>(this, "AShooterSpectatorPawn.BaseEyeHeight"); }
    float& BaseLookUpRateField() const
    { return *GetNativePointerField<float*>(this, "AShooterSpectatorPawn.BaseLookUpRate"); }
    float& BaseTurnRateField() const
    { return *GetNativePointerField<float*>(this, "AShooterSpectatorPawn.BaseTurnRate"); }
    TArray<void*>& BlueprintCreatedComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterSpectatorPawn.BlueprintCreatedComponents"); }
    TArray<void*>& ChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterSpectatorPawn.Children"); }
    float& ClientReplicationSendNowThresholdField() const
    { return *GetNativePointerField<float*>(this, "AShooterSpectatorPawn.ClientReplicationSendNowThreshold"); }
    TObjectPtr<USphereComponent>& CollisionComponentField() const
    { return *GetNativePointerField<TObjectPtr<USphereComponent>*>(this, "AShooterSpectatorPawn.CollisionComponent"); }
    BrzCampoPonteiro ControlInputVectorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.ControlInputVector")); }
    TObjectPtr<AController>& ControllerField() const
    { return *GetNativePointerField<TObjectPtr<AController>*>(this, "AShooterSpectatorPawn.Controller"); }
    TArray<void*>& ControllingMatineeActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterSpectatorPawn.ControllingMatineeActors"); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterSpectatorPawn.CreationTime"); }
    TWeakObjectPtr<void>& CurrentOrbitCamTargetField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "AShooterSpectatorPawn.CurrentOrbitCamTarget"); }
    int& CustomActorFlagsField() const
    { return *GetNativePointerField<int*>(this, "AShooterSpectatorPawn.CustomActorFlags"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "AShooterSpectatorPawn.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "AShooterSpectatorPawn.CustomTag"); }
    float& CustomTimeDilationField() const
    { return *GetNativePointerField<float*>(this, "AShooterSpectatorPawn.CustomTimeDilation"); }
    int& DefaultStasisComponentOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "AShooterSpectatorPawn.DefaultStasisComponentOctreeFlags"); }
    int& DefaultStasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "AShooterSpectatorPawn.DefaultStasisedOctreeFlags"); }
    int& DefaultUnstasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "AShooterSpectatorPawn.DefaultUnstasisedOctreeFlags"); }
    BrzCampoPonteiro DefaultUpdateOverlapsMethodDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.DefaultUpdateOverlapsMethodDuringLevelStreaming")); }
    unsigned char& DesiredRepGraphBehaviorField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterSpectatorPawn.DesiredRepGraphBehavior"); }
    double& ForceMaximumReplicationRateUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterSpectatorPawn.ForceMaximumReplicationRateUntilTime"); }
    float& HarvestingDestructionMeshRangeMultiplerField() const
    { return *GetNativePointerField<float*>(this, "AShooterSpectatorPawn.HarvestingDestructionMeshRangeMultipler"); }
    float& InitialLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "AShooterSpectatorPawn.InitialLifeSpan"); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "AShooterSpectatorPawn.InputComponent"); }
    int& InputPriorityField() const
    { return *GetNativePointerField<int*>(this, "AShooterSpectatorPawn.InputPriority"); }
    TArray<void*>& InstanceComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterSpectatorPawn.InstanceComponents"); }
    TObjectPtr<APawn>& InstigatorField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "AShooterSpectatorPawn.Instigator"); }
    double& LastActorForceReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterSpectatorPawn.LastActorForceReplicationTime"); }
    BrzCampoPonteiro LastControlInputVectorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.LastControlInputVector")); }
    double& LastEnterStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterSpectatorPawn.LastEnterStasisTime"); }
    double& LastExitStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterSpectatorPawn.LastExitStasisTime"); }
    TObjectPtr<AController>& LastHitByField() const
    { return *GetNativePointerField<TObjectPtr<AController>*>(this, "AShooterSpectatorPawn.LastHitBy"); }
    BrzCampoPonteiro LastMovementDesiredRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.LastMovementDesiredRotation")); }
    TWeakObjectPtr<void>& LastPostProcessVolumeSoundField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "AShooterSpectatorPawn.LastPostProcessVolumeSound"); }
    double& LastPreReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterSpectatorPawn.LastPreReplicationTime"); }
    FString& LastSelectedWindSourceComponentNameField() const
    { return *GetNativePointerField<FString*>(this, "AShooterSpectatorPawn.LastSelectedWindSourceComponentName"); }
    double& LastThrottledTickTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterSpectatorPawn.LastThrottledTickTime"); }
    TArray<void*>& LayersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterSpectatorPawn.Layers"); }
    float& MaxOrbitRadiusField() const
    { return *GetNativePointerField<float*>(this, "AShooterSpectatorPawn.MaxOrbitRadius"); }
    TObjectPtr<UStaticMeshComponent>& MeshComponentField() const
    { return *GetNativePointerField<TObjectPtr<UStaticMeshComponent>*>(this, "AShooterSpectatorPawn.MeshComponent"); }
    float& MinNetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "AShooterSpectatorPawn.MinNetUpdateFrequency"); }
    float& MinOrbitRadiusField() const
    { return *GetNativePointerField<float*>(this, "AShooterSpectatorPawn.MinOrbitRadius"); }
    TObjectPtr<UPawnMovementComponent>& MovementComponentField() const
    { return *GetNativePointerField<TObjectPtr<UPawnMovementComponent>*>(this, "AShooterSpectatorPawn.MovementComponent"); }
    int& NetCriticalPriorityAdjustmentField() const
    { return *GetNativePointerField<int*>(this, "AShooterSpectatorPawn.NetCriticalPriorityAdjustment"); }
    float& NetCullDistanceSquaredField() const
    { return *GetNativePointerField<float*>(this, "AShooterSpectatorPawn.NetCullDistanceSquared"); }
    float& NetCullDistanceSquaredDormantField() const
    { return *GetNativePointerField<float*>(this, "AShooterSpectatorPawn.NetCullDistanceSquaredDormant"); }
    unsigned char& NetDormancyField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterSpectatorPawn.NetDormancy"); }
    FName& NetDriverNameField() const
    { return *GetNativePointerField<FName*>(this, "AShooterSpectatorPawn.NetDriverName"); }
    float& NetPriorityField() const
    { return *GetNativePointerField<float*>(this, "AShooterSpectatorPawn.NetPriority"); }
    int& NetTagField() const
    { return *GetNativePointerField<int*>(this, "AShooterSpectatorPawn.NetTag"); }
    float& NetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "AShooterSpectatorPawn.NetUpdateFrequency"); }
    float& NetworkAndStasisRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterSpectatorPawn.NetworkAndStasisRangeMultiplier"); }
    float& NetworkRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterSpectatorPawn.NetworkRangeMultiplier"); }
    TArray<void*>& NetworkSpatializationChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterSpectatorPawn.NetworkSpatializationChildren"); }
    TArray<void*>& NetworkSpatializationChildrenDormantField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterSpectatorPawn.NetworkSpatializationChildrenDormant"); }
    TObjectPtr<AActor>& NetworkSpatializationParentField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "AShooterSpectatorPawn.NetworkSpatializationParent"); }
    BrzCampoPonteiro OnActorBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.OnActorBeginOverlap")); }
    BrzCampoPonteiro OnActorCustomEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.OnActorCustomEvent")); }
    BrzCampoPonteiro OnActorEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.OnActorEndOverlap")); }
    BrzCampoPonteiro OnActorHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.OnActorHit")); }
    BrzCampoPonteiro OnDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.OnDestroyed")); }
    BrzCampoPonteiro OnEndPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.OnEndPlay")); }
    BrzCampoPonteiro OnMatineeUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.OnMatineeUpdated")); }
    BrzCampoPonteiro OnMovementTetherSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.OnMovementTetherSet")); }
    BrzCampoPonteiro OnSemaphoreTakenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.OnSemaphoreTaken")); }
    BrzCampoPonteiro OnTakeAnyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.OnTakeAnyDamage")); }
    BrzCampoPonteiro OnTakePointDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.OnTakePointDamage")); }
    BrzCampoPonteiro OnTakeRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.OnTakeRadialDamage")); }
    BrzCampoPonteiro OnTargetingTeamChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.OnTargetingTeamChanged")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MinOrbitRadius` +12 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x598; confianca alta)
    void*& OrbitCamRotField() const
    { return BrzCampoAncorado<void*>(this, "MinOrbitRadius", 12); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MinOrbitRadius` +36 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x5B0; confianca media)
    float& OrbitCamZoomField() const
    { return BrzCampoAncorado<float>(this, "MinOrbitRadius", 36); }
    double& OriginalCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterSpectatorPawn.OriginalCreationTime"); }
    BrzCampoPonteiro OverrideInputComponentClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.OverrideInputComponentClass")); }
    float& OverrideStasisComponentRadiusField() const
    { return *GetNativePointerField<float*>(this, "AShooterSpectatorPawn.OverrideStasisComponentRadius"); }
    TObjectPtr<AActor>& OwnerField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "AShooterSpectatorPawn.Owner"); }
    TWeakObjectPtr<void>& ParentComponentField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "AShooterSpectatorPawn.ParentComponent"); }
    BrzCampoPonteiro PhysicsReplicationModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.PhysicsReplicationMode")); }
    TObjectPtr<APlayerState>& PlayerStateField() const
    { return *GetNativePointerField<TObjectPtr<APlayerState>*>(this, "AShooterSpectatorPawn.PlayerState"); }
    TObjectPtr<AController>& PreviousControllerField() const
    { return *GetNativePointerField<TObjectPtr<AController>*>(this, "AShooterSpectatorPawn.PreviousController"); }
    FActorTickFunction& PrimaryActorTickField() const
    { return *GetNativePointerField<FActorTickFunction*>(this, "AShooterSpectatorPawn.PrimaryActorTick"); }
    int& RayTracingGroupIdField() const
    { return *GetNativePointerField<int*>(this, "AShooterSpectatorPawn.RayTracingGroupId"); }
    BrzCampoPonteiro ReceiveControllerChangedDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.ReceiveControllerChangedDelegate")); }
    BrzCampoPonteiro ReceiveRestartedDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.ReceiveRestartedDelegate")); }
    unsigned char& RemoteRoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterSpectatorPawn.RemoteRole"); }
    unsigned char& RemoteViewPitchField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterSpectatorPawn.RemoteViewPitch"); }
    BrzCampoPonteiro RepGraphBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.RepGraphBehavior")); }
    BrzCampoPonteiro ReplicatedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.ReplicatedMovement")); }
    float& ReplicationIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterSpectatorPawn.ReplicationIntervalMultiplier"); }
    unsigned char& RoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterSpectatorPawn.Role"); }
    TObjectPtr<USceneComponent>& RootComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "AShooterSpectatorPawn.RootComponent"); }
    BrzCampoPonteiro SpawnCollisionHandlingMethodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.SpawnCollisionHandlingMethod")); }
    TObjectPtr<UPrimitiveComponent>& StasisCheckComponentField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "AShooterSpectatorPawn.StasisCheckComponent"); }
    TArray<TWeakObjectPtr<void>>& StasisUnRegisteredComponentsField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "AShooterSpectatorPawn.StasisUnRegisteredComponents"); }
    TArray<void*>& TagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterSpectatorPawn.Tags"); }
    int& TargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "AShooterSpectatorPawn.TargetingTeam"); }
    double& UnstasisLastInRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterSpectatorPawn.UnstasisLastInRangeTime"); }
    int& UpdateOverlapsMethodDuringLevelStreamingField() const
    { return *GetNativePointerField<int*>(this, "AShooterSpectatorPawn.UpdateOverlapsMethodDuringLevelStreaming"); }
    BrzCampoPonteiro bActorEnableCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bActorEnableCollision")); }
    BrzCampoPonteiro bActorIsBeingDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bActorIsBeingDestroyed")); }
    BrzCampoPonteiro bActorPreventPhysicsSceneRegistrationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bActorPreventPhysicsSceneRegistration")); }
    BrzCampoPonteiro bAddDefaultMovementBindingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bAddDefaultMovementBindings")); }
    BrzCampoPonteiro bAllowReceiveTickEventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bAllowReceiveTickEventOnDedicatedServer")); }
    BrzCampoPonteiro bAllowTickBeforeBeginPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bAllowTickBeforeBeginPlay")); }
    BrzCampoPonteiro bAlwaysCreatePhysicsStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bAlwaysCreatePhysicsState")); }
    BrzCampoPonteiro bAlwaysRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bAlwaysRelevant")); }
    BrzCampoPonteiro bAlwaysRelevantPrimalStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bAlwaysRelevantPrimalStructure")); }
    BrzCampoPonteiro bAsyncPhysicsTickEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bAsyncPhysicsTickEnabled")); }
    BrzCampoPonteiro bAttachmentReplicationUseNetworkParentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bAttachmentReplicationUseNetworkParent")); }
    BrzCampoPonteiro bAutoDestroyWhenFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bAutoDestroyWhenFinished")); }
    BrzCampoPonteiro bAutoStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bAutoStasis")); }
    BrzCampoPonteiro bBPInventoryItemUsedHandlesDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bBPInventoryItemUsedHandlesDurability")); }
    BrzCampoPonteiro bBPPostInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bBPPostInitializeComponents")); }
    BrzCampoPonteiro bBPPreInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bBPPreInitializeComponents")); }
    BrzCampoPonteiro bBlockInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bBlockInput")); }
    BrzCampoPonteiro bBlueprintMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bBlueprintMultiUseEntries")); }
    BrzCampoPonteiro bCallPreReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bCallPreReplication")); }
    BrzCampoPonteiro bCallPreReplicationForReplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bCallPreReplicationForReplay")); }
    BrzCampoPonteiro bCanAffectNavigationGenerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bCanAffectNavigationGeneration")); }
    BrzCampoPonteiro bCanBeDamagedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bCanBeDamaged")); }
    BrzCampoPonteiro bCanBeInClusterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bCanBeInCluster")); }
    BrzCampoPonteiro bClearOnConsumeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bClearOnConsume")); }
    BrzCampoPonteiro bClimbableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bClimbable")); }
    BrzCampoPonteiro bCollideWhenPlacingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bCollideWhenPlacing")); }
    BrzCampoPonteiro bDesiredRepGraphBehaviorHasBeenSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bDesiredRepGraphBehaviorHasBeenSet")); }
    BrzCampoPonteiro bDestroyDontClearNetworkChildrenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bDestroyDontClearNetworkChildren")); }
    BrzCampoPonteiro bDisableControllerDesiredRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bDisableControllerDesiredRotation")); }
    BrzCampoPonteiro bDisableRigidBodyAnimNodesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bDisableRigidBodyAnimNodes")); }
    BrzCampoPonteiro bEditorOnlyActorShowInPIEField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bEditorOnlyActorShowInPIE")); }
    BrzCampoPonteiro bEnableAutoLODGenerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bEnableAutoLODGeneration")); }
    BrzCampoPonteiro bEnableMultiUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bEnableMultiUse")); }
    BrzCampoPonteiro bExchangedRolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bExchangedRoles")); }
    BrzCampoPonteiro bFindCameraComponentWhenViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bFindCameraComponentWhenViewTarget")); }
    BrzCampoPonteiro bForceAllowNetMulticastField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bForceAllowNetMulticast")); }
    BrzCampoPonteiro bForceHiddenReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bForceHiddenReplication")); }
    BrzCampoPonteiro bForceHighQualityViewerReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bForceHighQualityViewerReplication")); }
    BrzCampoPonteiro bForceInfiniteDrawDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bForceInfiniteDrawDistance")); }
    BrzCampoPonteiro bForceNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bForceNetAddressable")); }
    BrzCampoPonteiro bForceNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bForceNetworkSpatialization")); }
    BrzCampoPonteiro bForceNonBlockingHitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bForceNonBlockingHits")); }
    BrzCampoPonteiro bForcePreventSeamlessTravelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bForcePreventSeamlessTravel")); }
    BrzCampoPonteiro bForceReplicateDormantChildrenWithoutSpatialRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bForceReplicateDormantChildrenWithoutSpatialRelevancy")); }
    BrzCampoPonteiro bForceUseCustomCameraComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bForceUseCustomCameraComponent")); }
    BrzCampoPonteiro bForcedHudDrawingRequiresSameTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bForcedHudDrawingRequiresSameTeam")); }
    BrzCampoPonteiro bGenerateOverlapEventsDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bGenerateOverlapEventsDuringLevelStreaming")); }
    BrzCampoPonteiro bHasHighVolumeRPCsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bHasHighVolumeRPCs")); }
    BrzCampoPonteiro bHibernateChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bHibernateChange")); }
    BrzCampoPonteiro bHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bHidden")); }
    BrzCampoPonteiro bIgnoreNetworkRangeScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bIgnoreNetworkRangeScaling")); }
    BrzCampoPonteiro bIgnoredByCharacterEncroachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bIgnoredByCharacterEncroachment")); }
    BrzCampoPonteiro bIgnoresOriginShiftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bIgnoresOriginShifting")); }
    BrzCampoPonteiro bIsDestroyedFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bIsDestroyedFromChildActorComponent")); }
    BrzCampoPonteiro bIsEditorOnlyActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bIsEditorOnlyActor")); }
    BrzCampoPonteiro bIsFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bIsFromChildActorComponent")); }
    BrzCampoPonteiro bIsInvincibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bIsInvincible")); }
    BrzCampoPonteiro bIsLocalViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bIsLocalViewTarget")); }
    BrzCampoPonteiro bIsMapActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bIsMapActor")); }
    BrzCampoPonteiro bIsPlayingTurningAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bIsPlayingTurningAnim")); }
    BrzCampoPonteiro bIsValidUnstasisCasterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bIsValidUnstasisCaster")); }
    BrzCampoPonteiro bLoadedFromSaveGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bLoadedFromSaveGame")); }
    BrzCampoPonteiro bMultiUseCenterHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bMultiUseCenterHUD")); }
    BrzCampoPonteiro bNetCriticalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bNetCritical")); }
    BrzCampoPonteiro bNetLoadOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bNetLoadOnClient")); }
    BrzCampoPonteiro bNetTemporaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bNetTemporary")); }
    BrzCampoPonteiro bNetUseClientRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bNetUseClientRelevancy")); }
    BrzCampoPonteiro bNetUseOwnerRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bNetUseOwnerRelevancy")); }
    BrzCampoPonteiro bNetworkSpatializationForceRelevancyCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bNetworkSpatializationForceRelevancyCheck")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bOnlyReplicateOnNetForcedUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bOnlyReplicateOnNetForcedUpdate")); }
    BrzCampoPonteiro bPreventActorStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bPreventActorStasis")); }
    BrzCampoPonteiro bPreventCharacterBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bPreventCharacterBasing")); }
    BrzCampoPonteiro bPreventCharacterBasingAllowSteppingUpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bPreventCharacterBasingAllowSteppingUp")); }
    BrzCampoPonteiro bPreventCliffPlatformsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bPreventCliffPlatforms")); }
    BrzCampoPonteiro bPreventHUDInitializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bPreventHUDInitialization")); }
    BrzCampoPonteiro bPreventLevelBoundsRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bPreventLevelBoundsRelevant")); }
    BrzCampoPonteiro bPreventNPCSpawnFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bPreventNPCSpawnFloor")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventRegularForceNetUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bPreventRegularForceNetUpdate")); }
    BrzCampoPonteiro bPreventSavingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bPreventSaving")); }
    BrzCampoPonteiro bRealtimeThrottledTickUseNativeTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bRealtimeThrottledTickUseNativeTick")); }
    BrzCampoPonteiro bRelevantForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bRelevantForLevelBounds")); }
    BrzCampoPonteiro bRelevantForNetworkReplaysField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bRelevantForNetworkReplays")); }
    BrzCampoPonteiro bReplayRewindableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bReplayRewindable")); }
    BrzCampoPonteiro bReplicateDesiredRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bReplicateDesiredRotation")); }
    BrzCampoPonteiro bReplicateHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bReplicateHidden")); }
    BrzCampoPonteiro bReplicateMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bReplicateMovement")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bReplicates")); }
    BrzCampoPonteiro bSavedWhenStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bSavedWhenStasised")); }
    BrzCampoPonteiro bStasisComponentRadiusForceDistanceCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bStasisComponentRadiusForceDistanceCheck")); }
    BrzCampoPonteiro bStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bStasised")); }
    BrzCampoPonteiro bTearOffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bTearOff")); }
    BrzCampoPonteiro bUnstreamComponentsUseEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bUnstreamComponentsUseEndOverlap")); }
    BrzCampoPonteiro bUseActorNotifyCustomEventBPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bUseActorNotifyCustomEventBP")); }
    BrzCampoPonteiro bUseAttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bUseAttachmentReplication")); }
    BrzCampoPonteiro bUseBPAllowActorSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bUseBPAllowActorSpawn")); }
    BrzCampoPonteiro bUseBPCanCombineMovesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bUseBPCanCombineMoves")); }
    BrzCampoPonteiro bUseBPChangedActorTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bUseBPChangedActorTeam")); }
    BrzCampoPonteiro bUseBPCheckForErrorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bUseBPCheckForErrors")); }
    BrzCampoPonteiro bUseBPCustomIsRelevantForClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bUseBPCustomIsRelevantForClient")); }
    BrzCampoPonteiro bUseBPDrawEntryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bUseBPDrawEntry")); }
    BrzCampoPonteiro bUseBPFaceRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bUseBPFaceRotation")); }
    BrzCampoPonteiro bUseBPFilterMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bUseBPFilterMultiUseEntries")); }
    BrzCampoPonteiro bUseBPForceAllowsInventoryUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bUseBPForceAllowsInventoryUse")); }
    BrzCampoPonteiro bUseBPGetBonesToHideOnAllocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bUseBPGetBonesToHideOnAllocation")); }
    BrzCampoPonteiro bUseBPGetCameraCollisionIgnoreActorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bUseBPGetCameraCollisionIgnoreActors")); }
    BrzCampoPonteiro bUseBPGetHUDDrawLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bUseBPGetHUDDrawLocationOffset")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bUseBPGetMultiUseCenterText")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextWithNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bUseBPGetMultiUseCenterTextWithName")); }
    BrzCampoPonteiro bUseBPGetOrbitCamTargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bUseBPGetOrbitCamTargetLocation")); }
    BrzCampoPonteiro bUseBPGetShowDebugAnimationComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bUseBPGetShowDebugAnimationComponents")); }
    BrzCampoPonteiro bUseBPInventoryItemDroppedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bUseBPInventoryItemDropped")); }
    BrzCampoPonteiro bUseBPInventoryItemUsedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bUseBPInventoryItemUsed")); }
    BrzCampoPonteiro bUseBPOverrideTargetingLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bUseBPOverrideTargetingLocation")); }
    BrzCampoPonteiro bUseBPOverrideUILocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bUseBPOverrideUILocation")); }
    BrzCampoPonteiro bUseBPPreventAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bUseBPPreventAttachments")); }
    BrzCampoPonteiro bUseBPPreventMovementModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bUseBPPreventMovementMode")); }
    BrzCampoPonteiro bUseCanMoveThroughActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bUseCanMoveThroughActor")); }
    BrzCampoPonteiro bUseControllerRotationPitchField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bUseControllerRotationPitch")); }
    BrzCampoPonteiro bUseControllerRotationRollField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bUseControllerRotationRoll")); }
    BrzCampoPonteiro bUseControllerRotationYawField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bUseControllerRotationYaw")); }
    BrzCampoPonteiro bUseNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bUseNetworkSpatialization")); }
    BrzCampoPonteiro bUseOnlyPointForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bUseOnlyPointForLevelBounds")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MinOrbitRadius` +40 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x5B4; confianca media)
    void*& bUseRealGimbalField() const
    { return BrzCampoAncorado<void*>(this, "MinOrbitRadius", 40); }
    BrzCampoPonteiro bUseStasisGridField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bUseStasisGrid")); }
    BrzCampoPonteiro bUse_ModifySavedMoveAcceleration_PostRepField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bUse_ModifySavedMoveAcceleration_PostRep")); }
    BrzCampoPonteiro bUse_ModifySavedMoveAcceleration_PreRepField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bUse_ModifySavedMoveAcceleration_PreRep")); }
    BrzCampoPonteiro bWantsPerformanceThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bWantsPerformanceThrottledTick")); }
    BrzCampoPonteiro bWantsRealtimeThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bWantsRealtimeThrottledTick")); }
    BrzCampoPonteiro bWantsServerThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterSpectatorPawn.bWantsServerThrottledTick")); }
};

#endif  // BRZ_SDK_JOGO_ASHOOTERSPECTATORPAWN_H

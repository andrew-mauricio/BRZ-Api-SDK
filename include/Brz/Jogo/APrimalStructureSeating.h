// ==========================================================================
//  APrimalStructureSeating — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALSTRUCTURESEATING_H
#define BRZ_SDK_JOGO_APRIMALSTRUCTURESEATING_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UAnimSequence;
struct UObject;
struct USoundCue;
struct UTexture2D;

#include "APrimalStructureItemContainer.h"

struct APrimalStructureSeating : public APrimalStructureItemContainer
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalStructureSeating"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureSeating.AllowPickupForItem(AShooterPlayerController*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool AllowPickupForItem(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructureSeating.AllowPickupForItem(AShooterPlayerController*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureSeating.BPAllowSeating(AShooterPlayerController*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool BPAllowSeating(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructureSeating.BPAllowSeating(AShooterPlayerController*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureSeating.BPGetBestSeatNumberForBot(APrimalBotCharacter*,int)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    int BPGetBestSeatNumberForBot(void* a0, int a1) const
    {
        return NativeCall<int, void*, int>(this, "APrimalStructureSeating.BPGetBestSeatNumberForBot(APrimalBotCharacter*,int)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureSeating.BPOverrideUnboardLocation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOverrideUnboardLocation() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating.BPOverrideUnboardLocation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureSeating.BPPreventReleaseSeatingStructure(AShooterCharacter*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool BPPreventReleaseSeatingStructure(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructureSeating.BPPreventReleaseSeatingStructure(AShooterCharacter*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalStructureSeating.BPReleasedPlayer(AShooterCharacter*,int)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void BPReleasedPlayer(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "APrimalStructureSeating.BPReleasedPlayer(AShooterCharacter*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureSeating.BPSeatedPlayer(AShooterCharacter*,int)
    // endereco: casamento de bytes com a build de referencia
    void BPSeatedPlayer(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "APrimalStructureSeating.BPSeatedPlayer(AShooterCharacter*,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating.BotControl(APrimalBotCharacter*,int)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro BotControl(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "APrimalStructureSeating.BotControl(APrimalBotCharacter*,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating.BotRelease(APrimalBotCharacter*,int)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo]
    BrzPonteiro BotRelease(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "APrimalStructureSeating.BotRelease(APrimalBotCharacter*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureSeating.CanSeat(AShooterPlayerController*,AShooterCharacter*,bool)
    // endereco: casamento de bytes com a build de referencia
    bool CanSeat(void* a0, void* a1, bool a2) const
    {
        return NativeCall<bool, void*, void*, bool>(this, "APrimalStructureSeating.CanSeat(AShooterPlayerController*,AShooterCharacter*,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureSeating.CanUse(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool CanUse(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructureSeating.CanUse(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating.ChangeSeating(FSeatingSpot&,TArray<FSeatingSpot,TSizedDefaultAllocator<3
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ChangeSeating(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructureSeating.ChangeSeating(FSeatingSpot&,TArray<FSeatingSpot,TSizedDefaultAllocator<32>>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureSeating.ClearSeats()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ClearSeats() const
    {
        NativeCall<void>(this, "APrimalStructureSeating.ClearSeats()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureSeating.Control(AShooterCharacter*,int,bool)
    // endereco: casamento de bytes com a build de referencia
    void Control(void* a0, int a1, bool a2) const
    {
        NativeCall<void, void*, int, bool>(this, "APrimalStructureSeating.Control(AShooterCharacter*,int,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureSeating.Demolish(APlayerController*,AActor*)
    // classe: a funcao mora em APrimalStructure, e APrimalStructureSeating herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void Demolish(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalStructure.Demolish(APlayerController*,AActor*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureSeating.Destroyed()
    // classe: a funcao mora em APrimalStructure, e APrimalStructureSeating herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void Destroyed() const
    {
        NativeCall<void>(this, "APrimalStructure.Destroyed()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating.GetBotSeatingComponent()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetBotSeatingComponent() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating.GetBotSeatingComponent()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating.GetHandIKEnabled(bool&,bool&)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetHandIKEnabled(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructureSeating.GetHandIKEnabled(bool&,bool&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating.GetHandsSocketsTransforms(UE::Math::TTransform<double>&,UE::Math::TTrans
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetHandsSocketsTransforms(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructureSeating.GetHandsSocketsTransforms(UE::Math::TTransform<double>&,UE::Math::TTransform<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureSeating.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocat
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=331+grafo=10/10]]
    void GetLifetimeReplicatedProps(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureSeating.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureSeating.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaul
    // endereco: casamento de bytes com a build de referencia
    void GetMultiUseEntries(void* a0, void* a1, int a2) const
    {
        NativeCall<void, void*, void*, int>(this, "APrimalStructureSeating.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureSeating.GetNearestFreeSpot(AShooterPlayerController*,UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    long long GetNearestFreeSpot(void* a0, void* a1) const
    {
        return NativeCall<long long, void*, void*>(this, "APrimalStructureSeating.GetNearestFreeSpot(AShooterPlayerController*,UE::Math::TVector<double>)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureSeating.GetNearestFreeSpotForBot(APrimalBotCharacter*)
    // endereco: casamento de bytes com a build de referencia
    int GetNearestFreeSpotForBot(void* a0) const
    {
        return NativeCall<int, void*>(this, "APrimalStructureSeating.GetNearestFreeSpotForBot(APrimalBotCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureSeating.GetNearestSitSpot(UE::Math::TVector<double>,UE::Math::TVector<double>&,U
    // endereco: casamento de bytes com a build de referencia
    void GetNearestSitSpot(void* a0, void* a1, void* a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "APrimalStructureSeating.GetNearestSitSpot(UE::Math::TVector<double>,UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureSeating.GetNearestSitSpot(UE::Math::TVector<double>,int,UE::Math::TVector<double
    // endereco: casamento de bytes com a build de referencia
    void GetNearestSitSpot(void* a0, int a1, void* a2, void* a3) const
    {
        NativeCall<void, void*, int, void*, void*>(this, "APrimalStructureSeating.GetNearestSitSpot(UE::Math::TVector<double>,int,UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureSeating.GetNumTakenSeats()
    // endereco: casamento de bytes com a build de referencia
    int GetNumTakenSeats() const
    {
        return NativeCall<int>(this, "APrimalStructureSeating.GetNumTakenSeats()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating.GetOrbitCamZoomParams(float&,float&,float&,float&)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetOrbitCamZoomParams(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "APrimalStructureSeating.GetOrbitCamZoomParams(float&,float&,float&,float&)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureSeating.GetSeatingAnimOverrideBP(int)
    // endereco: casamento de bytes com a build de referencia
    UObject* GetSeatingAnimOverrideBP(int a0) const
    {
        return NativeCall<UObject*, int>(this, "APrimalStructureSeating.GetSeatingAnimOverrideBP(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureSeating.GetSittingSpotWorldLocation(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSittingSpotWorldLocation(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalStructureSeating.GetSittingSpotWorldLocation(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating.GetSocketLocationAndRotation(UE::Math::TQuat<double>&,UE::Math::TVector<
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSocketLocationAndRotation(void* a0, void* a1, unsigned long long a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, unsigned long long, void*>(this, "APrimalStructureSeating.GetSocketLocationAndRotation(UE::Math::TQuat<double>&,UE::Math::TVector<double>&,FName,UE::Math::TTransform<double>&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating.GetUnboardLocation(UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetUnboardLocation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureSeating.GetUnboardLocation(UE::Math::TVector<double>)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureSeating.HasAvailableSeat()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool HasAvailableSeat() const
    {
        return NativeCall<bool>(this, "APrimalStructureSeating.HasAvailableSeat()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureSeating.IsSeatAvailable(int)
    // endereco: casamento de bytes com a build de referencia
    bool IsSeatAvailable(int a0) const
    {
        return NativeCall<bool, int>(this, "APrimalStructureSeating.IsSeatAvailable(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating.IsSeatingSpotFreeForBot(APrimalBotCharacter*,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsSeatingSpotFreeForBot(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "APrimalStructureSeating.IsSeatingSpotFreeForBot(APrimalBotCharacter*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureSeating.OnRep_CharacterPerSeat()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void OnRep_CharacterPerSeat() const
    {
        NativeCall<void>(this, "APrimalStructureSeating.OnRep_CharacterPerSeat()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureSeating.OnRep_SeatedCharacter()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void OnRep_SeatedCharacter() const
    {
        NativeCall<void>(this, "APrimalStructureSeating.OnRep_SeatedCharacter()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureSeating.OverrideBotIdleFidgetAnimation(UAnimMontage*,int)
    // endereco: casamento de bytes com a build de referencia
    UObject* OverrideBotIdleFidgetAnimation(void* a0, int a1) const
    {
        return NativeCall<UObject*, void*, int>(this, "APrimalStructureSeating.OverrideBotIdleFidgetAnimation(UAnimMontage*,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating.OverrideBotIdleFidgetAnimation_Implementation(UAnimMontage*,int)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro OverrideBotIdleFidgetAnimation_Implementation(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "APrimalStructureSeating.OverrideBotIdleFidgetAnimation_Implementation(UAnimMontage*,int)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureSeating.OverrideBotMaxControlDuration(APrimalBotCharacter*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    float OverrideBotMaxControlDuration(void* a0) const
    {
        return NativeCall<float, void*>(this, "APrimalStructureSeating.OverrideBotMaxControlDuration(APrimalBotCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating.OverrideBotMaxControlDuration_Implementation(APrimalBotCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OverrideBotMaxControlDuration_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureSeating.OverrideBotMaxControlDuration_Implementation(APrimalBotCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating.PostInitializeComponents()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PostInitializeComponents() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating.PostInitializeComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureSeating.Release(AShooterCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void Release(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureSeating.Release(AShooterCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureSeating.TryMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    bool TryMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<bool, void*, int, int>(this, "APrimalStructureSeating.TryMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    TArray<TWeakObjectPtr<void>>& CharacterPerSeatField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APrimalStructureSeating.CharacterPerSeat"); }
    double& LastServerUpdateSentField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureSeating.LastServerUpdateSent"); }
    FName& LeftHandkdSkeletalMeshSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureSeating.LeftHandkdSkeletalMeshSocketName"); }
    FName& LeftHandkdStaticMeshSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureSeating.LeftHandkdStaticMeshSocketName"); }
    int& NumSeatsField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureSeating.NumSeats"); }
    BrzCampoPonteiro OtherSeatingSpotsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating.OtherSeatingSpots")); }
    USoundCue*& RideSoundField() const
    { return *GetNativePointerField<USoundCue**>(this, "APrimalStructureSeating.RideSound"); }
    FName& RightHandkdSkeletalMeshSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureSeating.RightHandkdSkeletalMeshSocketName"); }
    FName& RightHandkdStaticMeshSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureSeating.RightHandkdStaticMeshSocketName"); }
    float& SeatedCameraBaseArmLengthField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating.SeatedCameraBaseArmLength"); }
    float& SeatedCameraZoomMaxLevelMultField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating.SeatedCameraZoomMaxLevelMult"); }
    float& SeatedCameraZoomMinLevelMultField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating.SeatedCameraZoomMinLevelMult"); }
    float& SeatedCameraZoomStepSizeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating.SeatedCameraZoomStepSize"); }
    TWeakObjectPtr<void>& SeatedCharacterField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalStructureSeating.SeatedCharacter"); }
    BrzCampoPonteiro SeatedCharacterLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating.SeatedCharacterLocationOffset")); }
    BrzCampoPonteiro SeatedCharacterRotationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating.SeatedCharacterRotationOffset")); }
    TWeakObjectPtr<void>& SeatedControllerField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalStructureSeating.SeatedController"); }
    TObjectPtr<UTexture2D>& SeatingActionIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureSeating.SeatingActionIcon"); }
    int& SeatingActionPriorityField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureSeating.SeatingActionPriority"); }
    FString& SeatingActionTextField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureSeating.SeatingActionText"); }
    UAnimSequence*& SeatingAnimOverrideField() const
    { return *GetNativePointerField<UAnimSequence**>(this, "APrimalStructureSeating.SeatingAnimOverride"); }
    BrzCampoPonteiro SeatingUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating.SeatingUITemplate")); }
    BrzCampoPonteiro TPVCameraOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating.TPVCameraOffset")); }
    BrzCampoPonteiro TPVCameraOffsetMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating.TPVCameraOffsetMultiplier")); }
    float& TPVCameraYawRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating.TPVCameraYawRange"); }
    float& UnboardDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating.UnboardDistance"); }
    USoundCue*& UnrideSoundField() const
    { return *GetNativePointerField<USoundCue**>(this, "APrimalStructureSeating.UnrideSound"); }
    BrzCampoPonteiro bAdjustForLegLengthField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating.bAdjustForLegLength")); }
    BrzCampoPonteiro bAdjustForLegLengthStandingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating.bAdjustForLegLengthStanding")); }
    BrzCampoPonteiro bAllowAnyTeamToSitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating.bAllowAnyTeamToSit")); }
    BrzCampoPonteiro bAllowCrouchProneToSitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating.bAllowCrouchProneToSit")); }
    BrzCampoPonteiro bAllowDinoCompanionAttachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating.bAllowDinoCompanionAttachment")); }
    BrzCampoPonteiro bAllowFPVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating.bAllowFPV")); }
    BrzCampoPonteiro bAllowOrbitCamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating.bAllowOrbitCam")); }
    BrzCampoPonteiro bAllowSleepingPlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating.bAllowSleepingPlayers")); }
    BrzCampoPonteiro bBendForwardWithIKField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating.bBendForwardWithIK")); }
    BrzCampoPonteiro bEnableSeatedFreeLookField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating.bEnableSeatedFreeLook")); }
    BrzCampoPonteiro bFreeLookActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating.bFreeLookActive")); }
    BrzCampoPonteiro bHideCharacterInFPVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating.bHideCharacterInFPV")); }
    BrzCampoPonteiro bHideLegacyStructureAmmoHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating.bHideLegacyStructureAmmoHUD")); }
    BrzCampoPonteiro bJumpOnDetachField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating.bJumpOnDetach")); }
    BrzCampoPonteiro bOnlyUseHandIKForFirstSeatField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating.bOnlyUseHandIKForFirstSeat")); }
    BrzCampoPonteiro bOverrideOrbitCamTargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating.bOverrideOrbitCamTargetLocation")); }
    BrzCampoPonteiro bPreventBotIdleFidgetAnimationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating.bPreventBotIdleFidgetAnimations")); }
    BrzCampoPonteiro bPreventHandcuffLockedSeatingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating.bPreventHandcuffLockedSeating")); }
    BrzCampoPonteiro bPreventSeatingWhenHandcuffedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating.bPreventSeatingWhenHandcuffed")); }
    BrzCampoPonteiro bReleaseFindsGroundPlacementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating.bReleaseFindsGroundPlacement")); }
    bool& bRestrictTPVCameraYawField() const
    { return *GetNativePointerField<bool*>(this, "APrimalStructureSeating.bRestrictTPVCameraYaw"); }
    BrzCampoPonteiro bSupportDynamicSeatingChangesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating.bSupportDynamicSeatingChanges")); }
    BrzCampoPonteiro bTraceToUnboardLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating.bTraceToUnboardLocation")); }
    BrzCampoPonteiro bUseGetSeatingAnimOverrideBPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating.bUseGetSeatingAnimOverrideBP")); }
    BrzCampoPonteiro bUseHandIkField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating.bUseHandIk")); }
    BrzCampoPonteiro bUsesAltFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating.bUsesAltFire")); }
    BrzCampoPonteiro bUsesItemSlotKeysField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating.bUsesItemSlotKeys")); }
    BrzCampoPonteiro bUsesPrimaryFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating.bUsesPrimaryFire")); }
    BrzCampoPonteiro bUsesTargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating.bUsesTargeting")); }
    BitFieldValue<bool, unsigned __int32> bAdjustForLegLength()
    { return { (void*)this, "bAdjustForLegLength" }; }
    BitFieldValue<bool, unsigned __int32> bRestrictTPVCameraYaw()
    { return { (void*)this, "bRestrictTPVCameraYaw" }; }
    BitFieldValue<bool, unsigned __int32> bUsesPrimaryFire()
    { return { (void*)this, "bUsesPrimaryFire" }; }
    BitFieldValue<bool, unsigned __int32> bUsesAltFire()
    { return { (void*)this, "bUsesAltFire" }; }
    BitFieldValue<bool, unsigned __int32> bUsesItemSlotKeys()
    { return { (void*)this, "bUsesItemSlotKeys" }; }
    BitFieldValue<bool, unsigned __int32> bPreventSeatingWhenHandcuffed()
    { return { (void*)this, "bPreventSeatingWhenHandcuffed" }; }
    BitFieldValue<bool, unsigned __int32> bAllowSleepingPlayers()
    { return { (void*)this, "bAllowSleepingPlayers" }; }
    BitFieldValue<bool, unsigned __int32> bReleaseFindsGroundPlacement()
    { return { (void*)this, "bReleaseFindsGroundPlacement" }; }
    BitFieldValue<bool, unsigned __int32> bAllowCrouchProneToSit()
    { return { (void*)this, "bAllowCrouchProneToSit" }; }
    BitFieldValue<bool, unsigned __int32> bUsesTargeting()
    { return { (void*)this, "bUsesTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bHideLegacyStructureAmmoHUD()
    { return { (void*)this, "bHideLegacyStructureAmmoHUD" }; }
    BitFieldValue<bool, unsigned __int32> bTraceToUnboardLocation()
    { return { (void*)this, "bTraceToUnboardLocation" }; }
    BitFieldValue<bool, unsigned __int32> bAllowAnyTeamToSit()
    { return { (void*)this, "bAllowAnyTeamToSit" }; }
    BitFieldValue<bool, unsigned __int32> bAllowOrbitCam()
    { return { (void*)this, "bAllowOrbitCam" }; }
    BitFieldValue<bool, unsigned __int32> bPreventHandcuffLockedSeating()
    { return { (void*)this, "bPreventHandcuffLockedSeating" }; }
    BitFieldValue<bool, unsigned __int32> bJumpOnDetach()
    { return { (void*)this, "bJumpOnDetach" }; }
    BitFieldValue<bool, unsigned __int32> bAdjustForLegLengthStanding()
    { return { (void*)this, "bAdjustForLegLengthStanding" }; }
    BitFieldValue<bool, unsigned __int32> bAllowFPV()
    { return { (void*)this, "bAllowFPV" }; }
    BitFieldValue<bool, unsigned __int32> bBendForwardWithIK()
    { return { (void*)this, "bBendForwardWithIK" }; }
    BitFieldValue<bool, unsigned __int32> bEnableSeatedFreeLook()
    { return { (void*)this, "bEnableSeatedFreeLook" }; }
    BitFieldValue<bool, unsigned __int32> bFreeLookActive()
    { return { (void*)this, "bFreeLookActive" }; }
    BitFieldValue<bool, unsigned __int32> bHideCharacterInFPV()
    { return { (void*)this, "bHideCharacterInFPV" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyUseHandIKForFirstSeat()
    { return { (void*)this, "bOnlyUseHandIKForFirstSeat" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideOrbitCamTargetLocation()
    { return { (void*)this, "bOverrideOrbitCamTargetLocation" }; }
    BitFieldValue<bool, unsigned __int32> bPreventBotIdleFidgetAnimations()
    { return { (void*)this, "bPreventBotIdleFidgetAnimations" }; }
    BitFieldValue<bool, unsigned __int32> bSupportDynamicSeatingChanges()
    { return { (void*)this, "bSupportDynamicSeatingChanges" }; }
    BitFieldValue<bool, unsigned __int32> bUseGetSeatingAnimOverrideBP()
    { return { (void*)this, "bUseGetSeatingAnimOverrideBP" }; }
    BitFieldValue<bool, unsigned __int32> bUseHandIk()
    { return { (void*)this, "bUseHandIk" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALSTRUCTURESEATING_H

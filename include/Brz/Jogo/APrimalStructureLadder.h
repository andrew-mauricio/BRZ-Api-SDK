// ==========================================================================
//  APrimalStructureLadder — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALSTRUCTURELADDER_H
#define BRZ_SDK_JOGO_APRIMALSTRUCTURELADDER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct USoundBase;
struct UTexture2D;

#include "APrimalStructure.h"

struct APrimalStructureLadder : public APrimalStructure
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalStructureLadder"); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureLadder.BPAdjustLadderMountLocation(UE::Math::TVector<double>&)
    // endereco: cache_pdb_25090264
    BrzPonteiro BPAdjustLadderMountLocation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureLadder.BPAdjustLadderMountLocation(UE::Math::TVector<double>&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureLadder.BPUpdateRetraction()
    // endereco: cache_pdb_25090264
    void BPUpdateRetraction() const
    {
        NativeCall<void>(this, "APrimalStructureLadder.BPUpdateRetraction()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureLadder.BP_SetLaddersRetracted(bool)
    // endereco: casamento de bytes com a build de referencia
    void BP_SetLaddersRetracted(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalStructureLadder.BP_SetLaddersRetracted(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureLadder.CheckForEndClimbing(AShooterCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void CheckForEndClimbing(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureLadder.CheckForEndClimbing(AShooterCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureLadder.ClientMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    void ClientMultiUse(void* a0, int a1, int a2) const
    {
        NativeCall<void, void*, int, int>(this, "APrimalStructureLadder.ClientMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureLadder.EndClimbingLadder(AShooterCharacter*,bool,UE::Math::TVector<double>&,bool
    // endereco: casamento de bytes com a build de referencia
    static void EndClimbingLadder(void* a0, bool a1, void* a2, bool a3)
    {
        NativeCall<void, void*, bool, void*, bool>(nullptr, "APrimalStructureLadder.EndClimbingLadder(AShooterCharacter*,bool,UE::Math::TVector<double>&,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureLadder.GetLadderClimbRotation(AShooterCharacter*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=66+chamadores=2]]
    BrzPonteiro GetLadderClimbRotation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureLadder.GetLadderClimbRotation(AShooterCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureLadder.GetLadderJumpVelocity(AShooterCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=126]]
    BrzPonteiro GetLadderJumpVelocity(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureLadder.GetLadderJumpVelocity(AShooterCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureLadder.GetLadderMountLocation(AShooterCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetLadderMountLocation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureLadder.GetLadderMountLocation(AShooterCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureLadder.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefault
    // endereco: casamento de bytes com a build de referencia
    void GetMultiUseEntries(void* a0, void* a1, int a2) const
    {
        NativeCall<void, void*, void*, int>(this, "APrimalStructureLadder.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureLadder.GetNextLadder(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetNextLadder(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalStructureLadder.GetNextLadder(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureLadder.GetTopLadder()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetTopLadder() const
    {
        return NativeCall<void*>(this, "APrimalStructureLadder.GetTopLadder()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureLadder.IsAboveTopLadder(AShooterCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsAboveTopLadder(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureLadder.IsAboveTopLadder(AShooterCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureLadder.IsLocationClearForCharacter(AShooterCharacter*,UE::Math::TVector<double>&
    // endereco: casamento de bytes com a build de referencia
    bool IsLocationClearForCharacter(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "APrimalStructureLadder.IsLocationClearForCharacter(AShooterCharacter*,UE::Math::TVector<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureLadder.IsNearTopOfLadder(AShooterCharacter*)
    // endereco: casamento de bytes com a build de referencia
    bool IsNearTopOfLadder(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructureLadder.IsNearTopOfLadder(AShooterCharacter*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalStructureLadder.OnCharacterEndClimbingLadder(APrimalCharacter*)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=53]]
    void OnCharacterEndClimbingLadder(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureLadder.OnCharacterEndClimbingLadder(APrimalCharacter*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalStructureLadder.OnCharacterStartClimbingLadder(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void OnCharacterStartClimbingLadder(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureLadder.OnCharacterStartClimbingLadder(APrimalCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureLadder.PostSpawnInitialize()
    // endereco: casamento de bytes com a build de referencia
    void PostSpawnInitialize() const
    {
        NativeCall<void>(this, "APrimalStructureLadder.PostSpawnInitialize()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureLadder.ServerEndClimbing(AShooterCharacter*,bool,UE::Math::TVector<double>,UE::M
    // endereco: casamento de bytes com a build de referencia
    static void ServerEndClimbing(void* a0, bool a1, void* a2, void* a3)
    {
        NativeCall<void, void*, bool, void*, void*>(nullptr, "APrimalStructureLadder.ServerEndClimbing(AShooterCharacter*,bool,UE::Math::TVector<double>,UE::Math::TVector<double>)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureLadder.SetLaddersRetracted(bool,TArray<APrimalStructureLadder*,TSizedDefaultAllo
    // endereco: casamento de bytes com a build de referencia
    void SetLaddersRetracted(bool a0, void* a1) const
    {
        NativeCall<void, bool, void*>(this, "APrimalStructureLadder.SetLaddersRetracted(bool,TArray<APrimalStructureLadder*,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureLadder.StartClimbingLadder(AShooterCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void StartClimbingLadder(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureLadder.StartClimbingLadder(AShooterCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureLadder.TryMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    bool TryMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<bool, void*, int, int>(this, "APrimalStructureLadder.TryMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureLadder.UpdateRetraction()
    // endereco: casamento de bytes com a build de referencia
    void UpdateRetraction() const
    {
        NativeCall<void>(this, "APrimalStructureLadder.UpdateRetraction()");
    }

    TObjectPtr<UTexture2D>& ClimbDownIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureLadder.ClimbDownIcon"); }
    TObjectPtr<UTexture2D>& ClimbUpIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureLadder.ClimbUpIcon"); }
    TObjectPtr<UTexture2D>& DisablePublicRetractionIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureLadder.DisablePublicRetractionIcon"); }
    TObjectPtr<UTexture2D>& EnablePublicRetractionIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureLadder.EnablePublicRetractionIcon"); }
    TObjectPtr<UTexture2D>& ExtendLadderIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureLadder.ExtendLadderIcon"); }
    FString& ExtendLadderStringField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureLadder.ExtendLadderString"); }
    float& IsAboveTopLadderOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureLadder.IsAboveTopLadderOffset"); }
    TObjectPtr<UTexture2D>& JumpIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureLadder.JumpIcon"); }
    float& LadderBottomPointField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureLadder.LadderBottomPoint"); }
    BrzCampoPonteiro LadderClimbRotationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureLadder.LadderClimbRotationOffset")); }
    USoundBase*& LadderRetractionSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureLadder.LadderRetractionSound"); }
    float& LadderTopPointField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureLadder.LadderTopPoint"); }
    USoundBase*& LadderUnretractionSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureLadder.LadderUnretractionSound"); }
    TObjectPtr<UTexture2D>& RetractLadderIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureLadder.RetractLadderIcon"); }
    FString& RetractLadderStringField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureLadder.RetractLadderString"); }
    float& RetractMultiuseDelayField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureLadder.RetractMultiuseDelay"); }
    BitFieldValue<bool, unsigned __int32> bWasRetracted()
    { return { (void*)this, "bWasRetracted" }; }
    BitFieldValue<bool, unsigned __int32> bWasLowerLaddersRetracted()
    { return { (void*)this, "bWasLowerLaddersRetracted" }; }
    BitFieldValue<bool, unsigned __int32> bPostSpawnInitialized()
    { return { (void*)this, "bPostSpawnInitialized" }; }
    BitFieldValue<bool, unsigned __int32> bCanRetract()
    { return { (void*)this, "bCanRetract" }; }
    BitFieldValue<bool, unsigned __int32> bCanRetractFromBottom()
    { return { (void*)this, "bCanRetractFromBottom" }; }
    BitFieldValue<bool, unsigned __int32> bIsRetracted()
    { return { (void*)this, "bIsRetracted" }; }
    BitFieldValue<bool, unsigned __int32> bHasLowerLaddersRetracted()
    { return { (void*)this, "bHasLowerLaddersRetracted" }; }
    BitFieldValue<bool, unsigned __int32> bAllowPublicRetraction()
    { return { (void*)this, "bAllowPublicRetraction" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustLadderMountLocation()
    { return { (void*)this, "bUseBPAdjustLadderMountLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPUpdateRetraction()
    { return { (void*)this, "bUseBPUpdateRetraction" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALSTRUCTURELADDER_H

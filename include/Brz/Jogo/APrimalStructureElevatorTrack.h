// ==========================================================================
//  APrimalStructureElevatorTrack — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALSTRUCTUREELEVATORTRACK_H
#define BRZ_SDK_JOGO_APRIMALSTRUCTUREELEVATORTRACK_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UObject;

#include "APrimalStructureItemContainer.h"

struct APrimalStructureElevatorTrack : public APrimalStructureItemContainer
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalStructureElevatorTrack"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureElevatorTrack.AddedLinkedStructure(APrimalStructure*)
    // endereco: casamento de bytes com a build de referencia
    void AddedLinkedStructure(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureElevatorTrack.AddedLinkedStructure(APrimalStructure*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureElevatorTrack.BPGetElevatorPlatform()
    // endereco: casamento de bytes com a build de referencia
    UObject* BPGetElevatorPlatform() const
    {
        return NativeCall<UObject*>(this, "APrimalStructureElevatorTrack.BPGetElevatorPlatform()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureElevatorTrack.CalculateTrackHeight(float&,float&,TArray<APrimalStructureElevator
    // endereco: casamento de bytes com a build de referencia
    void CalculateTrackHeight(void* a0, void* a1, void* a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "APrimalStructureElevatorTrack.CalculateTrackHeight(float&,float&,TArray<APrimalStructureElevatorTrack*,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureElevatorTrack.CanBeActivated()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=90]]
    bool CanBeActivated() const
    {
        return NativeCall<bool>(this, "APrimalStructureElevatorTrack.CanBeActivated()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureElevatorTrack.ClientMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    void ClientMultiUse(void* a0, int a1, int a2) const
    {
        NativeCall<void, void*, int, int>(this, "APrimalStructureElevatorTrack.ClientMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // dump_sobre_sdk_287a0
    //   APrimalStructureElevatorTrack.GetElevatorPlatformEx(TArray<APrimalStructureElevatorTrack*,TSized
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=428+chamadores=7]]
    void** GetElevatorPlatformEx(void* a0) const
    {
        return NativeCall<void**, void*>(this, "APrimalStructureElevatorTrack.GetElevatorPlatformEx(TArray<APrimalStructureElevatorTrack*,TSizedDefaultAllocator<32>>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureElevatorTrack.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSized
    // endereco: casamento de bytes com a build de referencia
    void GetMultiUseEntries(void* a0, void* a1, int a2) const
    {
        NativeCall<void, void*, void*, int>(this, "APrimalStructureElevatorTrack.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureElevatorTrack.GetTooltipStructureInfo(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTooltipStructureInfo(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureElevatorTrack.GetTooltipStructureInfo(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureElevatorTrack.HasPlatformAttachedToTheTrack()
    // endereco: casamento de bytes com a build de referencia
    bool HasPlatformAttachedToTheTrack() const
    {
        return NativeCall<bool>(this, "APrimalStructureElevatorTrack.HasPlatformAttachedToTheTrack()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureElevatorTrack.IsPowered()
    // endereco: casamento de bytes com a build de referencia
    bool IsPowered() const
    {
        return NativeCall<bool>(this, "APrimalStructureElevatorTrack.IsPowered()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureElevatorTrack.IsPoweredEx(TArray<APrimalStructureElevatorTrack*,TSizedDefaultAll
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    char IsPoweredEx(void* a0) const
    {
        return NativeCall<char, void*>(this, "APrimalStructureElevatorTrack.IsPoweredEx(TArray<APrimalStructureElevatorTrack*,TSizedDefaultAllocator<32>>)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalStructureElevatorTrack.MulticastSetElevatorBase(APrimalStructureElevatorPlatform*)
    // endereco: casamento de bytes com a build de referencia
    void MulticastSetElevatorBase(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureElevatorTrack.MulticastSetElevatorBase(APrimalStructureElevatorPlatform*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureElevatorTrack.PlayDying(float,FDamageEvent&,APawn*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void PlayDying(float a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, float, void*, void*, void*>(this, "APrimalStructureElevatorTrack.PlayDying(float,FDamageEvent&,APawn*,AActor*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureElevatorTrack.RemovedLinkedStructure(APrimalStructure*,APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemovedLinkedStructure(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructureElevatorTrack.RemovedLinkedStructure(APrimalStructure*,APlayerController*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureElevatorTrack.Tick(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=30]]
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "APrimalStructureElevatorTrack.Tick(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureElevatorTrack.TryMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    bool TryMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<bool, void*, int, int>(this, "APrimalStructureElevatorTrack.TryMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    TWeakObjectPtr<void>& ElevatorBaseField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalStructureElevatorTrack.ElevatorBase"); }
    float& TrackBottomPointField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorTrack.TrackBottomPoint"); }
    float& TrackTopPointField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureElevatorTrack.TrackTopPoint"); }
    BitFieldValue<bool, unsigned __int32> bAddElevatorMultiUseEntries()
    { return { (void*)this, "bAddElevatorMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bRequiresPower()
    { return { (void*)this, "bRequiresPower" }; }
    BitFieldValue<bool, unsigned __int32> bHasBase()
    { return { (void*)this, "bHasBase" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALSTRUCTUREELEVATORTRACK_H

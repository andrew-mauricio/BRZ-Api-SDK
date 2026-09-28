// ==========================================================================
//  APrimalBuffAbilityCharges — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALBUFFABILITYCHARGES_H
#define BRZ_SDK_JOGO_APRIMALBUFFABILITYCHARGES_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct AMissionType;
struct APawn;
struct FActorTickFunction;
struct FName;
struct FVector2D;
struct UAudioComponent;
struct UInputComponent;
struct UMaterialInterface;
struct UPrimalBuffPersistentData;
struct UPrimitiveComponent;
struct USceneComponent;
struct USoundBase;


struct APrimalBuffAbilityCharges
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalBuffAbilityCharges"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.AddOrUpdateReplicatedEntry(FName,FChargeSystemState&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddOrUpdateReplicatedEntry(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "APrimalBuffAbilityCharges.AddOrUpdateReplicatedEntry(FName,FChargeSystemState&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.AddOrUpdateReplicatedEntry_Implementation(FName,FChargeSystemState&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddOrUpdateReplicatedEntry_Implementation(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "APrimalBuffAbilityCharges.AddOrUpdateReplicatedEntry_Implementation(FName,FChargeSystemState&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.AdjustCharge_Implementation(FName,float,FName&,float&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AdjustCharge_Implementation(unsigned long long a0, float a1, const FName& a2, void* a3) const
    {
        return NativeCall<void*, unsigned long long, float, void*, void*>(this, "APrimalBuffAbilityCharges.AdjustCharge_Implementation(FName,float,FName&,float&)", a0, a1, const_cast<FName*>(&a2), a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro AdjustCharge_Implementation(unsigned long long a0, float a1, FName* a2, void* a3) const
    { return AdjustCharge_Implementation(a0, a1, *a2, a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.CanActivateChargeSystem(FName,FName&)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro CanActivateChargeSystem(unsigned long long a0, const FName& a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "APrimalBuffAbilityCharges.CanActivateChargeSystem(FName,FName&)", a0, const_cast<FName*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro CanActivateChargeSystem(unsigned long long a0, FName* a1) const
    { return CanActivateChargeSystem(a0, *a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.CanActivateChargeSystem_Implementation(FName,FName&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanActivateChargeSystem_Implementation(unsigned long long a0, const FName& a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "APrimalBuffAbilityCharges.CanActivateChargeSystem_Implementation(FName,FName&)", a0, const_cast<FName*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro CanActivateChargeSystem_Implementation(unsigned long long a0, FName* a1) const
    { return CanActivateChargeSystem_Implementation(a0, *a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.CanDeactivateChargeSystem(FName,FName&)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro CanDeactivateChargeSystem(unsigned long long a0, const FName& a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "APrimalBuffAbilityCharges.CanDeactivateChargeSystem(FName,FName&)", a0, const_cast<FName*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro CanDeactivateChargeSystem(unsigned long long a0, FName* a1) const
    { return CanDeactivateChargeSystem(a0, *a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.CanDeactivateChargeSystem_Implementation(FName,FName&)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro CanDeactivateChargeSystem_Implementation(unsigned long long a0, const FName& a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "APrimalBuffAbilityCharges.CanDeactivateChargeSystem_Implementation(FName,FName&)", a0, const_cast<FName*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro CanDeactivateChargeSystem_Implementation(unsigned long long a0, FName* a1) const
    { return CanDeactivateChargeSystem_Implementation(a0, *a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.CanRegenerate(FName)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro CanRegenerate(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalBuffAbilityCharges.CanRegenerate(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.ClearRegenDelay(FName)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro ClearRegenDelay(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalBuffAbilityCharges.ClearRegenDelay(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.ClearRegenDelay_Implementation(FName)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro ClearRegenDelay_Implementation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalBuffAbilityCharges.ClearRegenDelay_Implementation(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.GetAllChargeSystemNames_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAllChargeSystemNames_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalBuffAbilityCharges.GetAllChargeSystemNames_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.GetChargePercentage_Implementation(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetChargePercentage_Implementation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalBuffAbilityCharges.GetChargePercentage_Implementation(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.GetChargeSystemConfigConst(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetChargeSystemConfigConst(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalBuffAbilityCharges.GetChargeSystemConfigConst(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.GetChargeSystemConfig_Implementation(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetChargeSystemConfig_Implementation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalBuffAbilityCharges.GetChargeSystemConfig_Implementation(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.GetChargeSystemStateCopy_Implementation(FName,bool&)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetChargeSystemStateCopy_Implementation(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "APrimalBuffAbilityCharges.GetChargeSystemStateCopy_Implementation(FName,bool&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.GetCurrentCharge_Implementation(FName)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetCurrentCharge_Implementation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalBuffAbilityCharges.GetCurrentCharge_Implementation(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.HasChargeSystem_Implementation(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HasChargeSystem_Implementation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalBuffAbilityCharges.HasChargeSystem_Implementation(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.IsRegenPaused(FName)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro IsRegenPaused(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalBuffAbilityCharges.IsRegenPaused(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.IsRegenPaused_Implementation(FName)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro IsRegenPaused_Implementation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalBuffAbilityCharges.IsRegenPaused_Implementation(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.IsWaitingForRegenDelay_Implementation(FName)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro IsWaitingForRegenDelay_Implementation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalBuffAbilityCharges.IsWaitingForRegenDelay_Implementation(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.MulticastUpdateChargeSystemState(FName,bool,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MulticastUpdateChargeSystemState(unsigned long long a0, bool a1, float a2) const
    {
        return NativeCall<void*, unsigned long long, bool, float>(this, "APrimalBuffAbilityCharges.MulticastUpdateChargeSystemState(FName,bool,float)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.OnChargeSystemDecrementThreshold(FName,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnChargeSystemDecrementThreshold(unsigned long long a0, int a1) const
    {
        return NativeCall<void*, unsigned long long, int>(this, "APrimalBuffAbilityCharges.OnChargeSystemDecrementThreshold(FName,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.OnChargeSystemDepleted(FName)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro OnChargeSystemDepleted(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalBuffAbilityCharges.OnChargeSystemDepleted(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.OnChargeSystemFullyCharged(FName)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro OnChargeSystemFullyCharged(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalBuffAbilityCharges.OnChargeSystemFullyCharged(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.PauseRegen_Implementation(FName)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro PauseRegen_Implementation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalBuffAbilityCharges.PauseRegen_Implementation(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.ProcessChargeDecrement(FName,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ProcessChargeDecrement(unsigned long long a0, float a1) const
    {
        return NativeCall<void*, unsigned long long, float>(this, "APrimalBuffAbilityCharges.ProcessChargeDecrement(FName,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.ProcessChargeDecrement_Implementation(FName,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ProcessChargeDecrement_Implementation(unsigned long long a0, float a1) const
    {
        return NativeCall<void*, unsigned long long, float>(this, "APrimalBuffAbilityCharges.ProcessChargeDecrement_Implementation(FName,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.RegisterChargeSystem_Implementation(FName,FChargeSystemConfig&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RegisterChargeSystem_Implementation(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "APrimalBuffAbilityCharges.RegisterChargeSystem_Implementation(FName,FChargeSystemConfig&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.RemoveReplicatedEntry_Implementation(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveReplicatedEntry_Implementation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalBuffAbilityCharges.RemoveReplicatedEntry_Implementation(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.ResumeRegen_Implementation(FName)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro ResumeRegen_Implementation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalBuffAbilityCharges.ResumeRegen_Implementation(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.SetChargeValue(FName,float,FName&,float&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetChargeValue(unsigned long long a0, float a1, const FName& a2, void* a3) const
    {
        return NativeCall<void*, unsigned long long, float, void*, void*>(this, "APrimalBuffAbilityCharges.SetChargeValue(FName,float,FName&,float&)", a0, a1, const_cast<FName*>(&a2), a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro SetChargeValue(unsigned long long a0, float a1, FName* a2, void* a3) const
    { return SetChargeValue(a0, a1, *a2, a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.SetChargeValue_Implementation(FName,float,FName&,float&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetChargeValue_Implementation(unsigned long long a0, float a1, const FName& a2, void* a3) const
    {
        return NativeCall<void*, unsigned long long, float, void*, void*>(this, "APrimalBuffAbilityCharges.SetChargeValue_Implementation(FName,float,FName&,float&)", a0, a1, const_cast<FName*>(&a2), a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro SetChargeValue_Implementation(unsigned long long a0, float a1, FName* a2, void* a3) const
    { return SetChargeValue_Implementation(a0, a1, *a2, a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.StartRegenDelay(FName)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro StartRegenDelay(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalBuffAbilityCharges.StartRegenDelay(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.StartRegenDelay_Implementation(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartRegenDelay_Implementation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalBuffAbilityCharges.StartRegenDelay_Implementation(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.StartUsingChargeSystem_Implementation(FName,FName&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartUsingChargeSystem_Implementation(unsigned long long a0, const FName& a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "APrimalBuffAbilityCharges.StartUsingChargeSystem_Implementation(FName,FName&)", a0, const_cast<FName*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro StartUsingChargeSystem_Implementation(unsigned long long a0, FName* a1) const
    { return StartUsingChargeSystem_Implementation(a0, *a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.StopUsingChargeSystem(FName,FName&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro StopUsingChargeSystem(unsigned long long a0, const FName& a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "APrimalBuffAbilityCharges.StopUsingChargeSystem(FName,FName&)", a0, const_cast<FName*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro StopUsingChargeSystem(unsigned long long a0, FName* a1) const
    { return StopUsingChargeSystem(a0, *a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.StopUsingChargeSystem_Implementation(FName,FName&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StopUsingChargeSystem_Implementation(unsigned long long a0, const FName& a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "APrimalBuffAbilityCharges.StopUsingChargeSystem_Implementation(FName,FName&)", a0, const_cast<FName*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro StopUsingChargeSystem_Implementation(unsigned long long a0, FName* a1) const
    { return StopUsingChargeSystem_Implementation(a0, *a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Tick(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalBuffAbilityCharges.Tick(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.UnregisterChargeSystem_Implementation(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UnregisterChargeSystem_Implementation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalBuffAbilityCharges.UnregisterChargeSystem_Implementation(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.UpdateChargeSystemConfig_Implementation(FName,FChargeSystemConfig&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateChargeSystemConfig_Implementation(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "APrimalBuffAbilityCharges.UpdateChargeSystemConfig_Implementation(FName,FChargeSystemConfig&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.UpdateChargeSystemResource(FName,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateChargeSystemResource(unsigned long long a0, float a1) const
    {
        return NativeCall<void*, unsigned long long, float>(this, "APrimalBuffAbilityCharges.UpdateChargeSystemResource(FName,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.UpdateChargeSystemResource_Implementation(FName,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateChargeSystemResource_Implementation(unsigned long long a0, float a1) const
    {
        return NativeCall<void*, unsigned long long, float>(this, "APrimalBuffAbilityCharges.UpdateChargeSystemResource_Implementation(FName,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.UpdateChargeSystemState(FName,bool,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateChargeSystemState(unsigned long long a0, bool a1, float a2) const
    {
        return NativeCall<void*, unsigned long long, bool, float>(this, "APrimalBuffAbilityCharges.UpdateChargeSystemState(FName,bool,float)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuffAbilityCharges.UpdateChargeSystemState_Implementation(FName,bool,float)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro UpdateChargeSystemState_Implementation(unsigned long long a0, bool a1, float a2) const
    {
        return NativeCall<void*, unsigned long long, bool, float>(this, "APrimalBuffAbilityCharges.UpdateChargeSystemState_Implementation(FName,bool,float)", a0, a1, a2);
    }

    float& AOEBuffIntervalMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.AOEBuffIntervalMax"); }
    float& AOEBuffIntervalMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.AOEBuffIntervalMin"); }
    float& AOEBuffRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.AOEBuffRange"); }
    BrzCampoPonteiro AOEOtherBuffToApplyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.AOEOtherBuffToApply")); }
    float& ActivateSoundFadeInDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.ActivateSoundFadeInDuration"); }
    TArray<void*>& ActivePreventsBuffClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuffAbilityCharges.ActivePreventsBuffClasses"); }
    BrzCampoPonteiro ActivePreventsBuffClassesExceptionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.ActivePreventsBuffClassesExceptions")); }
    TObjectPtr<AActor>& ActorUsingQuickActionField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalBuffAbilityCharges.ActorUsingQuickAction"); }
    int& AddBuffMaxNumStacksField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuffAbilityCharges.AddBuffMaxNumStacks"); }
    float& AdditionalRidingDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.AdditionalRidingDistance"); }
    int& AltNumStacksField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuffAbilityCharges.AltNumStacks"); }
    float& AoEApplyDamageField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.AoEApplyDamage"); }
    float& AoEApplyDamageIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.AoEApplyDamageInterval"); }
    BrzCampoPonteiro AoEApplyDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.AoEApplyDamageType")); }
    BrzCampoPonteiro AoEBuffLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.AoEBuffLocOffset")); }
    TArray<void*>& AoEClassesToExcludeField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuffAbilityCharges.AoEClassesToExclude"); }
    TArray<void*>& AoEClassesToIncludeField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuffAbilityCharges.AoEClassesToInclude"); }
    BrzCampoPonteiro AoETraceToTargetsStartOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.AoETraceToTargetsStartOffset")); }
    BrzCampoPonteiro AttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.AttachmentReplication")); }
    unsigned char& AutoReceiveInputField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalBuffAbilityCharges.AutoReceiveInput"); }
    TArray<void*>& BPNotifyActivationToOtherBuffClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuffAbilityCharges.BPNotifyActivationToOtherBuffClasses"); }
    TArray<void*>& BlueprintCreatedComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuffAbilityCharges.BlueprintCreatedComponents"); }
    TArray<void*>& BuffClassesToCancelOnActivationField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuffAbilityCharges.BuffClassesToCancelOnActivation"); }
    TWeakObjectPtr<void>& BuffDamageCauserField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBuffAbilityCharges.BuffDamageCauser"); }
    BrzCampoPonteiro BuffDescriptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.BuffDescription")); }
    BrzCampoPonteiro BuffPersistentDataClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.BuffPersistentDataClass")); }
    BrzCampoPonteiro BuffPostProcessEffectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.BuffPostProcessEffect")); }
    TArray<void*>& BuffPreventsOwnerClassField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuffAbilityCharges.BuffPreventsOwnerClass"); }
    TArray<void*>& BuffRequiresOwnerClassField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuffAbilityCharges.BuffRequiresOwnerClass"); }
    double& BuffStartTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuffAbilityCharges.BuffStartTime"); }
    float& BuffTickClientMaxTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.BuffTickClientMaxTime"); }
    float& BuffTickClientMinTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.BuffTickClientMinTime"); }
    float& BuffTickRemoteClientMaxTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.BuffTickRemoteClientMaxTime"); }
    float& BuffTickRemoteClientMinTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.BuffTickRemoteClientMinTime"); }
    float& BuffTickServerMaxTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.BuffTickServerMaxTime"); }
    float& BuffTickServerMinTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.BuffTickServerMinTime"); }
    BrzCampoPonteiro BuffToGiveOnDeactivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.BuffToGiveOnDeactivation")); }
    BrzCampoPonteiro CameraShakeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.CameraShake")); }
    float& CameraShakeFalloffField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.CameraShakeFalloff"); }
    float& CameraShakeInnerRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.CameraShakeInnerRadius"); }
    float& CameraShakeOuterRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.CameraShakeOuterRadius"); }
    float& CameraShakeScaleMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.CameraShakeScaleMultiplier"); }
    float& CharacterAOEBuffDamageField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.CharacterAOEBuffDamage"); }
    float& CharacterAOEBuffResistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.CharacterAOEBuffResistance"); }
    float& CharacterAdd_DefaultHyperthermicInsulationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.CharacterAdd_DefaultHyperthermicInsulation"); }
    float& CharacterAdd_DefaultHypothermicInsulationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.CharacterAdd_DefaultHypothermicInsulation"); }
    float& CharacterMultiplier_DefaultExtraDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.CharacterMultiplier_DefaultExtraDamageMultiplier"); }
    float& CharacterMultiplier_ExtraFoodConsumptionMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.CharacterMultiplier_ExtraFoodConsumptionMultiplier"); }
    float& CharacterMultiplier_ExtraWaterConsumptionMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.CharacterMultiplier_ExtraWaterConsumptionMultiplier"); }
    float& CharacterMultiplier_SubmergedOxygenDecreaseSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.CharacterMultiplier_SubmergedOxygenDecreaseSpeed"); }
    TArray<void*>& CharacterStatusValueModifiersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuffAbilityCharges.CharacterStatusValueModifiers"); }
    BrzCampoPonteiro ChargeSystemConfigsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.ChargeSystemConfigs")); }
    TArray<void*>& ChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuffAbilityCharges.Children"); }
    float& ClientReplicationSendNowThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.ClientReplicationSendNowThreshold"); }
    BrzCampoPonteiro ColorParameterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.ColorParameter")); }
    TArray<void*>& ControllingMatineeActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuffAbilityCharges.ControllingMatineeActors"); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuffAbilityCharges.CreationTime"); }
    int& CustomActorFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuffAbilityCharges.CustomActorFlags"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuffAbilityCharges.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "APrimalBuffAbilityCharges.CustomTag"); }
    float& CustomTimeDilationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.CustomTimeDilation"); }
    float& DeactivateAfterTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.DeactivateAfterTime"); }
    float& DeactivateSoundFadeOutDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.DeactivateSoundFadeOutDuration"); }
    USoundBase*& DeactivatedSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalBuffAbilityCharges.DeactivatedSound"); }
    float& DeactivationLifespanField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.DeactivationLifespan"); }
    BrzCampoPonteiro DecalToSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.DecalToSpawn")); }
    int& DefaultStasisComponentOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuffAbilityCharges.DefaultStasisComponentOctreeFlags"); }
    int& DefaultStasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuffAbilityCharges.DefaultStasisedOctreeFlags"); }
    int& DefaultUnstasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuffAbilityCharges.DefaultUnstasisedOctreeFlags"); }
    BrzCampoPonteiro DefaultUpdateOverlapsMethodDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.DefaultUpdateOverlapsMethodDuringLevelStreaming")); }
    float& DepleteInstigatorItemDurabilityPerSecondField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.DepleteInstigatorItemDurabilityPerSecond"); }
    unsigned char& DesiredRepGraphBehaviorField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalBuffAbilityCharges.DesiredRepGraphBehavior"); }
    float& DinoColorizationInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.DinoColorizationInterpSpeed"); }
    int& DinoColorizationPriorityField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuffAbilityCharges.DinoColorizationPriority"); }
    TArray<void*>& DisabledWeaponTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuffAbilityCharges.DisabledWeaponTags"); }
    BrzCampoPonteiro EmitterNiagaraComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.EmitterNiagaraComponent")); }
    float& ExtendBuffTimeOverrideField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.ExtendBuffTimeOverride"); }
    USoundBase*& ExtraActivationSoundToPlayField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalBuffAbilityCharges.ExtraActivationSoundToPlay"); }
    double& ForceMaximumReplicationRateUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuffAbilityCharges.ForceMaximumReplicationRateUntilTime"); }
    int& ForceNetworkSpatializationBuffMaxLimitNumField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuffAbilityCharges.ForceNetworkSpatializationBuffMaxLimitNum"); }
    float& ForceNetworkSpatializationBuffMaxLimitRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.ForceNetworkSpatializationBuffMaxLimitRange"); }
    BrzCampoPonteiro ForceNetworkSpatializationMaxLimitBuffTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.ForceNetworkSpatializationMaxLimitBuffType")); }
    int& ForceNetworkSpatializationMaxLimitBuffTypeFlagField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuffAbilityCharges.ForceNetworkSpatializationMaxLimitBuffTypeFlag"); }
    float& FrictionModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.FrictionModifier"); }
    float& HarvestQuantityMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.HarvestQuantityMultiplier"); }
    BrzCampoPonteiro HitLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.HitLocation")); }
    float& HyperThermiaInsulationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.HyperThermiaInsulation"); }
    float& HypoThermiaInsulationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.HypoThermiaInsulation"); }
    BrzCampoPonteiro ImpulseDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.ImpulseData")); }
    float& InitialLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.InitialLifeSpan"); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "APrimalBuffAbilityCharges.InputComponent"); }
    int& InputPriorityField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuffAbilityCharges.InputPriority"); }
    TArray<void*>& InstanceComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuffAbilityCharges.InstanceComponents"); }
    TObjectPtr<APawn>& InstigatorField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "APrimalBuffAbilityCharges.Instigator"); }
    FName& InstigatorAttachmentSocketField() const
    { return *GetNativePointerField<FName*>(this, "APrimalBuffAbilityCharges.InstigatorAttachmentSocket"); }
    FName& InstigatorAttachmentSocket_PlayerOverrideField() const
    { return *GetNativePointerField<FName*>(this, "APrimalBuffAbilityCharges.InstigatorAttachmentSocket_PlayerOverride"); }
    TWeakObjectPtr<void>& InstigatorItemField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBuffAbilityCharges.InstigatorItem"); }
    float& InsulationRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.InsulationRange"); }
    double& LastActorForceReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuffAbilityCharges.LastActorForceReplicationTime"); }
    double& LastEnterStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuffAbilityCharges.LastEnterStasisTime"); }
    double& LastExitStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuffAbilityCharges.LastExitStasisTime"); }
    double& LastItemDurabilityDepletionTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuffAbilityCharges.LastItemDurabilityDepletionTime"); }
    TWeakObjectPtr<void>& LastPostProcessVolumeSoundField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBuffAbilityCharges.LastPostProcessVolumeSound"); }
    double& LastPreReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuffAbilityCharges.LastPreReplicationTime"); }
    FString& LastSelectedWindSourceComponentNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalBuffAbilityCharges.LastSelectedWindSourceComponentName"); }
    double& LastThrottledTickTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuffAbilityCharges.LastThrottledTickTime"); }
    double& LastTimeAddedStackField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuffAbilityCharges.LastTimeAddedStack"); }
    TArray<void*>& LayersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuffAbilityCharges.Layers"); }
    BrzCampoPonteiro MPCAdjustersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.MPCAdjusters")); }
    int& MaxConcurrentActivatedVfxField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuffAbilityCharges.MaxConcurrentActivatedVfx"); }
    int& MaxNumStacksField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuffAbilityCharges.MaxNumStacks"); }
    TArray<void*>& MaxStatScalersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuffAbilityCharges.MaxStatScalers"); }
    float& Maximum2DVelocityForStaminaRecoveryField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.Maximum2DVelocityForStaminaRecovery"); }
    float& MaximumVelocityZForSlowingFallField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.MaximumVelocityZForSlowingFall"); }
    float& MeleeDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.MeleeDamageMultiplier"); }
    float& MinNetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.MinNetUpdateFrequency"); }
    float& MinTimeBetweenStacksField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.MinTimeBetweenStacks"); }
    UPrimalBuffPersistentData*& MyBuffPersistentDataField() const
    { return *GetNativePointerField<UPrimalBuffPersistentData**>(this, "APrimalBuffAbilityCharges.MyBuffPersistentData"); }
    int& NetCriticalPriorityAdjustmentField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuffAbilityCharges.NetCriticalPriorityAdjustment"); }
    float& NetCullDistanceSquaredField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.NetCullDistanceSquared"); }
    float& NetCullDistanceSquaredDormantField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.NetCullDistanceSquaredDormant"); }
    unsigned char& NetDormancyField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalBuffAbilityCharges.NetDormancy"); }
    FName& NetDriverNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalBuffAbilityCharges.NetDriverName"); }
    float& NetPriorityField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.NetPriority"); }
    int& NetTagField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuffAbilityCharges.NetTag"); }
    float& NetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.NetUpdateFrequency"); }
    float& NetworkAndStasisRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.NetworkAndStasisRangeMultiplier"); }
    float& NetworkRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.NetworkRangeMultiplier"); }
    TArray<void*>& NetworkSpatializationChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuffAbilityCharges.NetworkSpatializationChildren"); }
    TArray<void*>& NetworkSpatializationChildrenDormantField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuffAbilityCharges.NetworkSpatializationChildrenDormant"); }
    TObjectPtr<AActor>& NetworkSpatializationParentField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalBuffAbilityCharges.NetworkSpatializationParent"); }
    BrzCampoPonteiro NiagaraComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.NiagaraComponent")); }
    BrzCampoPonteiro OnActorBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.OnActorBeginOverlap")); }
    BrzCampoPonteiro OnActorCustomEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.OnActorCustomEvent")); }
    BrzCampoPonteiro OnActorEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.OnActorEndOverlap")); }
    BrzCampoPonteiro OnActorHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.OnActorHit")); }
    BrzCampoPonteiro OnChargeSystemDecrementThresholdDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.OnChargeSystemDecrementThresholdDelegate")); }
    BrzCampoPonteiro OnChargeSystemDepletedDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.OnChargeSystemDepletedDelegate")); }
    BrzCampoPonteiro OnChargeSystemFullyChargedDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.OnChargeSystemFullyChargedDelegate")); }
    BrzCampoPonteiro OnChargeSystemStateChangedDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.OnChargeSystemStateChangedDelegate")); }
    BrzCampoPonteiro OnDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.OnDestroyed")); }
    BrzCampoPonteiro OnEndPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.OnEndPlay")); }
    BrzCampoPonteiro OnMatineeUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.OnMatineeUpdated")); }
    BrzCampoPonteiro OnParticleBurstField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.OnParticleBurst")); }
    BrzCampoPonteiro OnParticleCollideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.OnParticleCollide")); }
    BrzCampoPonteiro OnParticleDeathField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.OnParticleDeath")); }
    BrzCampoPonteiro OnParticleSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.OnParticleSpawn")); }
    BrzCampoPonteiro OnSemaphoreTakenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.OnSemaphoreTaken")); }
    BrzCampoPonteiro OnTakeAnyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.OnTakeAnyDamage")); }
    BrzCampoPonteiro OnTakePointDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.OnTakePointDamage")); }
    BrzCampoPonteiro OnTakeRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.OnTakeRadialDamage")); }
    BrzCampoPonteiro OnTargetingTeamChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.OnTargetingTeamChanged")); }
    float& OnlyForInstigatorSoundFadeInTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.OnlyForInstigatorSoundFadeInTime"); }
    double& OriginalCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuffAbilityCharges.OriginalCreationTime"); }
    TArray<void*>& OverrideInventoryItemClassWeightMultipliersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuffAbilityCharges.OverrideInventoryItemClassWeightMultipliers"); }
    float& OverrideStasisComponentRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.OverrideStasisComponentRadius"); }
    TObjectPtr<AActor>& OwnerField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalBuffAbilityCharges.Owner"); }
    TWeakObjectPtr<void>& ParentComponentField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBuffAbilityCharges.ParentComponent"); }
    BrzCampoPonteiro ParticleSystemComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.ParticleSystemComponent")); }
    BrzCampoPonteiro PhysicsReplicationModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.PhysicsReplicationMode")); }
    float& PostProcessInterpSpeedDownField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.PostProcessInterpSpeedDown"); }
    float& PostProcessInterpSpeedUpField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.PostProcessInterpSpeedUp"); }
    TArray<UMaterialInterface*>& PostprocessBlendablesToExcludeField() const
    { return *GetNativePointerField<TArray<UMaterialInterface*>*>(this, "APrimalBuffAbilityCharges.PostprocessBlendablesToExclude"); }
    TArray<void*>& PostprocessMaterialAdjustersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuffAbilityCharges.PostprocessMaterialAdjusters"); }
    TArray<void*>& PreventActorClassesTargetingField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuffAbilityCharges.PreventActorClassesTargeting"); }
    TArray<void*>& PreventActorClassesTargetingRangesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuffAbilityCharges.PreventActorClassesTargetingRanges"); }
    float& PreventIfMovementMassGreaterThanField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.PreventIfMovementMassGreaterThan"); }
    FActorTickFunction& PrimaryActorTickField() const
    { return *GetNativePointerField<FActorTickFunction*>(this, "APrimalBuffAbilityCharges.PrimaryActorTick"); }
    int& RayTracingGroupIdField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuffAbilityCharges.RayTracingGroupId"); }
    float& ReceiveDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.ReceiveDamageMultiplier"); }
    float& ReflectMeleeDamagePercentField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.ReflectMeleeDamagePercent"); }
    AMissionType*& RelatedMissionField() const
    { return *GetNativePointerField<AMissionType**>(this, "APrimalBuffAbilityCharges.RelatedMission"); }
    float& RemoteForcedFleeDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.RemoteForcedFleeDuration"); }
    unsigned char& RemoteRoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalBuffAbilityCharges.RemoteRole"); }
    BrzCampoPonteiro RepGraphBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.RepGraphBehavior")); }
    BrzCampoPonteiro ReplicatedDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.ReplicatedData")); }
    BrzCampoPonteiro ReplicatedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.ReplicatedMovement")); }
    float& ReplicationIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.ReplicationIntervalMultiplier"); }
    unsigned char& RoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalBuffAbilityCharges.Role"); }
    TObjectPtr<USceneComponent>& RootComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "APrimalBuffAbilityCharges.RootComponent"); }
    BrzCampoPonteiro RootTransformCompField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.RootTransformComp")); }
    float& ShallowEmitterDontSpawnOutOfViewCheckRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.ShallowEmitterDontSpawnOutOfViewCheckRadius"); }
    float& ShallowEmitterOverrideSecondsBeforeInactiveField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.ShallowEmitterOverrideSecondsBeforeInactive"); }
    float& ShallowEmitterSpawnableMaxDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.ShallowEmitterSpawnableMaxDistance"); }
    BrzCampoPonteiro ShouldInterceptedInputEventOverwriteUsualFunctionality_Array_GamepadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.ShouldInterceptedInputEventOverwriteUsualFunctionality_Array_Gamepad")); }
    float& SkillActivationCostField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.SkillActivationCost"); }
    unsigned char& SkillActivationStatusCostTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalBuffAbilityCharges.SkillActivationStatusCostType"); }
    float& SlowInstigatorFallingAddZVelocityField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.SlowInstigatorFallingAddZVelocity"); }
    float& SlowInstigatorFallingDampenZVelocityField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.SlowInstigatorFallingDampenZVelocity"); }
    UAudioComponent*& SoundToPlayField() const
    { return *GetNativePointerField<UAudioComponent**>(this, "APrimalBuffAbilityCharges.SoundToPlay"); }
    BrzCampoPonteiro SpawnCollisionHandlingMethodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.SpawnCollisionHandlingMethod")); }
    BrzCampoPonteiro SpawnedForActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.SpawnedForActor")); }
    float& StackDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.StackDuration"); }
    float& StackingUpdatedBuffLifetimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.StackingUpdatedBuffLifetime"); }
    float& StaminaDrainMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.StaminaDrainMultiplier"); }
    TObjectPtr<UPrimitiveComponent>& StasisCheckComponentField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "APrimalBuffAbilityCharges.StasisCheckComponent"); }
    TArray<TWeakObjectPtr<void>>& StasisUnRegisteredComponentsField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APrimalBuffAbilityCharges.StasisUnRegisteredComponents"); }
    float& SubmergedMaxAccelerationModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.SubmergedMaxAccelerationModifier"); }
    float& SubmergedMaxSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.SubmergedMaxSpeedModifier"); }
    float& SubmergedRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.SubmergedRotationRateModifier"); }
    BrzCampoPonteiro TPVCameraOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.TPVCameraOffset")); }
    BrzCampoPonteiro TPVCameraOffsetMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.TPVCameraOffsetMultiplier")); }
    float& TPVCameraSpeedInterpolationMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.TPVCameraSpeedInterpolationMultiplier"); }
    TArray<void*>& TagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuffAbilityCharges.Tags"); }
    TWeakObjectPtr<void>& TargetField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBuffAbilityCharges.Target"); }
    BrzCampoPonteiro TargetingInfoToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.TargetingInfoToolTipWidget")); }
    FVector2D& TargetingInfoTooltipPaddingField() const
    { return *GetNativePointerField<FVector2D*>(this, "APrimalBuffAbilityCharges.TargetingInfoTooltipPadding"); }
    FVector2D& TargetingInfoTooltipScaleField() const
    { return *GetNativePointerField<FVector2D*>(this, "APrimalBuffAbilityCharges.TargetingInfoTooltipScale"); }
    int& TargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuffAbilityCharges.TargetingTeam"); }
    float& TargetingTooltipCheckRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.TargetingTooltipCheckRange"); }
    BrzCampoPonteiro TotalChargeDecrementedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.TotalChargeDecremented")); }
    double& UnstasisLastInRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuffAbilityCharges.UnstasisLastInRangeTime"); }
    float& UnsubmergedMaxAccelerationModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.UnsubmergedMaxAccelerationModifier"); }
    float& UnsubmergedMaxSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.UnsubmergedMaxSpeedModifier"); }
    float& UnsubmergedRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.UnsubmergedRotationRateModifier"); }
    int& UpdateOverlapsMethodDuringLevelStreamingField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuffAbilityCharges.UpdateOverlapsMethodDuringLevelStreaming"); }
    BrzCampoPonteiro UseBPAdjustOutputDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.UseBPAdjustOutputDamage")); }
    BrzCampoPonteiro UseBPAdjustOutputDamageForNonMeleePlayerDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.UseBPAdjustOutputDamageForNonMeleePlayerDamage")); }
    FieldArray<float> ValuesToAddPerSecondField() const
    { return { (void*)this, "APrimalBuffAbilityCharges.ValuesToAddPerSecond" }; }
    float& ViewMaxExposureMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.ViewMaxExposureMultiplier"); }
    float& ViewMinExposureMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.ViewMinExposureMultiplier"); }
    float& WarmupSecondsPerFrameCapField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.WarmupSecondsPerFrameCap"); }
    float& WeaponRecoilMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.WeaponRecoilMultiplier"); }
    float& XPEarningMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.XPEarningMultiplier"); }
    float& XPtoAddField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.XPtoAdd"); }
    float& XPtoAddRateField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuffAbilityCharges.XPtoAddRate"); }
    BrzCampoPonteiro bAOEApplyOtherBuffIgnoreSameTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bAOEApplyOtherBuffIgnoreSameTeam")); }
    BrzCampoPonteiro bAOEApplyOtherBuffOnDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bAOEApplyOtherBuffOnDinos")); }
    BrzCampoPonteiro bAOEApplyOtherBuffOnPlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bAOEApplyOtherBuffOnPlayers")); }
    BrzCampoPonteiro bAOEApplyOtherBuffRequireSameTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bAOEApplyOtherBuffRequireSameTeam")); }
    BrzCampoPonteiro bAOEBuffCarnosOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bAOEBuffCarnosOnly")); }
    BrzCampoPonteiro bAOEOnlyApplyOtherBuffToWildDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bAOEOnlyApplyOtherBuffToWildDinos")); }
    BrzCampoPonteiro bActorEnableCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bActorEnableCollision")); }
    BrzCampoPonteiro bActorIsBeingDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bActorIsBeingDestroyed")); }
    BrzCampoPonteiro bActorPreventPhysicsSceneRegistrationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bActorPreventPhysicsSceneRegistration")); }
    BrzCampoPonteiro bAddCharacterValuesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bAddCharacterValues")); }
    BrzCampoPonteiro bAddExtendBuffTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bAddExtendBuffTime")); }
    BrzCampoPonteiro bAddReactivatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bAddReactivates")); }
    BrzCampoPonteiro bAddRequireSameDamageCauserField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bAddRequireSameDamageCauser")); }
    BrzCampoPonteiro bAddResetsBuffTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bAddResetsBuffTime")); }
    BrzCampoPonteiro bAddStackResetsBuffStartField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bAddStackResetsBuffStart")); }
    bool& bAddTPVCameraOffsetField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuffAbilityCharges.bAddTPVCameraOffset"); }
    BrzCampoPonteiro bAdditionalExperienceMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bAdditionalExperienceMultiplier")); }
    BrzCampoPonteiro bAdditionalTamingSpeedMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bAdditionalTamingSpeedMultiplier")); }
    BrzCampoPonteiro bAllowBuffStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bAllowBuffStasis")); }
    BrzCampoPonteiro bAllowBuffWhenInstigatorDeadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bAllowBuffWhenInstigatorDead")); }
    BrzCampoPonteiro bAllowLoopingEmitterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bAllowLoopingEmitter")); }
    BrzCampoPonteiro bAllowMultiUseEntriesFromSelfField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bAllowMultiUseEntriesFromSelf")); }
    BrzCampoPonteiro bAllowOnlyCustomFallDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bAllowOnlyCustomFallDamage")); }
    BrzCampoPonteiro bAllowReceiveTickEventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bAllowReceiveTickEventOnDedicatedServer")); }
    BrzCampoPonteiro bAllowTickBeforeBeginPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bAllowTickBeforeBeginPlay")); }
    BrzCampoPonteiro bAllowTurretsToTargetInstigatorIfTraceHitsBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bAllowTurretsToTargetInstigatorIfTraceHitsBuff")); }
    BrzCampoPonteiro bAlwaysCreatePhysicsStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bAlwaysCreatePhysicsState")); }
    BrzCampoPonteiro bAlwaysRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bAlwaysRelevant")); }
    BrzCampoPonteiro bAlwaysRelevantPrimalStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bAlwaysRelevantPrimalStructure")); }
    BrzCampoPonteiro bAlwaysShowBuffDescriptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bAlwaysShowBuffDescription")); }
    BrzCampoPonteiro bAoEApplyDamageAllTargetablesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bAoEApplyDamageAllTargetables")); }
    BrzCampoPonteiro bAoEBuffAllowIfAlreadyBuffedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bAoEBuffAllowIfAlreadyBuffed")); }
    BrzCampoPonteiro bAoEIgnoreDinosTargetingInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bAoEIgnoreDinosTargetingInstigator")); }
    BrzCampoPonteiro bAoEOnlyOnDinosTargetingInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bAoEOnlyOnDinosTargetingInstigator")); }
    BrzCampoPonteiro bAoETraceToTargetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bAoETraceToTargets")); }
    BrzCampoPonteiro bApplyOneMaxSpeedModifierPerStackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bApplyOneMaxSpeedModifierPerStack")); }
    BrzCampoPonteiro bApplyStatModifierToDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bApplyStatModifierToDinos")); }
    BrzCampoPonteiro bApplyStatModifierToPlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bApplyStatModifierToPlayers")); }
    BrzCampoPonteiro bAsyncPhysicsTickEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bAsyncPhysicsTickEnabled")); }
    BrzCampoPonteiro bAttachmentReplicationUseNetworkParentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bAttachmentReplicationUseNetworkParent")); }
    BrzCampoPonteiro bAutoDestroyWhenFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bAutoDestroyWhenFinished")); }
    BrzCampoPonteiro bAutoStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bAutoStasis")); }
    BrzCampoPonteiro bBPAddMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bBPAddMultiUseEntries")); }
    BrzCampoPonteiro bBPAdjustStatusValueModificationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bBPAdjustStatusValueModification")); }
    BrzCampoPonteiro bBPDrawBuffStatusHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bBPDrawBuffStatusHUD")); }
    BrzCampoPonteiro bBPFilterMultiUseFilterTargetEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bBPFilterMultiUseFilterTargetEntries")); }
    BrzCampoPonteiro bBPInventoryItemUsedHandlesDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bBPInventoryItemUsedHandlesDurability")); }
    BrzCampoPonteiro bBPModifyAimOffsetNoTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bBPModifyAimOffsetNoTarget")); }
    BrzCampoPonteiro bBPModifyCharacterFOVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bBPModifyCharacterFOV")); }
    BrzCampoPonteiro bBPOverrideActorForTargetingTooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bBPOverrideActorForTargetingTooltip")); }
    BrzCampoPonteiro bBPOverrideCharacterFlyingVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bBPOverrideCharacterFlyingVelocity")); }
    BrzCampoPonteiro bBPOverrideCharacterNewFallVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bBPOverrideCharacterNewFallVelocity")); }
    BrzCampoPonteiro bBPOverrideCharacterSwimmingVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bBPOverrideCharacterSwimmingVelocity")); }
    BrzCampoPonteiro bBPOverrideCharacterWalkVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bBPOverrideCharacterWalkVelocity")); }
    BrzCampoPonteiro bBPOverrideWeaponBobField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bBPOverrideWeaponBob")); }
    BrzCampoPonteiro bBPPostInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bBPPostInitializeComponents")); }
    BrzCampoPonteiro bBPPreInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bBPPreInitializeComponents")); }
    BrzCampoPonteiro bBPUseBumpedByPawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bBPUseBumpedByPawn")); }
    BrzCampoPonteiro bBPUseBumpedPawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bBPUseBumpedPawn")); }
    BrzCampoPonteiro bBlockInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bBlockInput")); }
    BrzCampoPonteiro bBlueprintMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bBlueprintMultiUseEntries")); }
    BrzCampoPonteiro bBuffDrawFloatingHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bBuffDrawFloatingHUD")); }
    BrzCampoPonteiro bBuffDrawFloatingHUDRemotePlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bBuffDrawFloatingHUDRemotePlayers")); }
    BrzCampoPonteiro bBuffForceNoTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bBuffForceNoTick")); }
    BrzCampoPonteiro bBuffForceNoTickDedicatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bBuffForceNoTickDedicated")); }
    BrzCampoPonteiro bBuffHandleInstigatorMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bBuffHandleInstigatorMultiUseEntries")); }
    BrzCampoPonteiro bBuffHidesNonWeaponHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bBuffHidesNonWeaponHUD")); }
    BrzCampoPonteiro bBuffPreSerializeForInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bBuffPreSerializeForInstigator")); }
    BrzCampoPonteiro bBuffPreventsApplyingLevelUpsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bBuffPreventsApplyingLevelUps")); }
    BrzCampoPonteiro bBuffPreventsCryoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bBuffPreventsCryo")); }
    BrzCampoPonteiro bBuffPreventsInventoryAccessField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bBuffPreventsInventoryAccess")); }
    BrzCampoPonteiro bBuffPreventsInventoryAccessAllowMissionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bBuffPreventsInventoryAccessAllowMissions")); }
    BrzCampoPonteiro bBuffPreventsMountedWeaponryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bBuffPreventsMountedWeaponry")); }
    BrzCampoPonteiro bBuffPreventsPlayerDropAllInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bBuffPreventsPlayerDropAllInventory")); }
    BrzCampoPonteiro bCallPreReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bCallPreReplication")); }
    BrzCampoPonteiro bCallPreReplicationForReplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bCallPreReplicationForReplay")); }
    BrzCampoPonteiro bCallRiderChangeWeaponsOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bCallRiderChangeWeaponsOnClient")); }
    BrzCampoPonteiro bCallRiderNotifiesOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bCallRiderNotifiesOnClient")); }
    BrzCampoPonteiro bCameraShakeOrientTowardsEpicenterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bCameraShakeOrientTowardsEpicenter")); }
    BrzCampoPonteiro bCanBeDamagedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bCanBeDamaged")); }
    BrzCampoPonteiro bCanBeInClusterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bCanBeInCluster")); }
    BrzCampoPonteiro bCausesCryoSicknessField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bCausesCryoSickness")); }
    BrzCampoPonteiro bCheckPreventInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bCheckPreventInput")); }
    BrzCampoPonteiro bClimbableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bClimbable")); }
    BrzCampoPonteiro bCollideWhenPlacingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bCollideWhenPlacing")); }
    BrzCampoPonteiro bCompleteCustomDepthStencilOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bCompleteCustomDepthStencilOverride")); }
    bool& bContinueTickingClientAfterDeactivateField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuffAbilityCharges.bContinueTickingClientAfterDeactivate"); }
    BrzCampoPonteiro bContinueTickingServerAfterDeactivateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bContinueTickingServerAfterDeactivate")); }
    BrzCampoPonteiro bCurrentlyActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bCurrentlyActive")); }
    BrzCampoPonteiro bCustomDepthStencilIgnoreHealthField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bCustomDepthStencilIgnoreHealth")); }
    BrzCampoPonteiro bDeactivateAfterAddingXPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bDeactivateAfterAddingXP")); }
    BrzCampoPonteiro bDeactivateOnJumpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bDeactivateOnJump")); }
    BrzCampoPonteiro bDeactivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bDeactivated")); }
    BrzCampoPonteiro bDeactivatedSoundOnlyLocalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bDeactivatedSoundOnlyLocal")); }
    BrzCampoPonteiro bDediServerUseBPModifyPlayerBoneModifiersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bDediServerUseBPModifyPlayerBoneModifiers")); }
    BrzCampoPonteiro bDelayedDeactivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bDelayedDeactivation")); }
    BrzCampoPonteiro bDesiredRepGraphBehaviorHasBeenSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bDesiredRepGraphBehaviorHasBeenSet")); }
    BrzCampoPonteiro bDestroyDontClearNetworkChildrenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bDestroyDontClearNetworkChildren")); }
    BrzCampoPonteiro bDestroyOnSystemFinishField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bDestroyOnSystemFinish")); }
    BrzCampoPonteiro bDestroyOnTargetStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bDestroyOnTargetStasis")); }
    bool& bDestroyWhenUnpossessedField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuffAbilityCharges.bDestroyWhenUnpossessed"); }
    BrzCampoPonteiro bDinoIgnoreBuffPostprocessEffectWhenRiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bDinoIgnoreBuffPostprocessEffectWhenRidden")); }
    bool& bDisableBloomField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuffAbilityCharges.bDisableBloom"); }
    BrzCampoPonteiro bDisableFaceRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bDisableFaceRotation")); }
    BrzCampoPonteiro bDisableFootstepsParticlesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bDisableFootstepsParticles")); }
    BrzCampoPonteiro bDisableIfCharacterUnderwaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bDisableIfCharacterUnderwater")); }
    BrzCampoPonteiro bDisableRigidBodyAnimNodesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bDisableRigidBodyAnimNodes")); }
    BrzCampoPonteiro bDisplayHUDProgressBarField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bDisplayHUDProgressBar")); }
    BrzCampoPonteiro bDoCharacterDetachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bDoCharacterDetachment")); }
    BrzCampoPonteiro bDoCharacterDetachmentIncludeCarryingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bDoCharacterDetachmentIncludeCarrying")); }
    BrzCampoPonteiro bDoCharacterDetachmentIncludeRidingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bDoCharacterDetachmentIncludeRiding")); }
    BrzCampoPonteiro bDontPlayInstigatorActiveSoundOnDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bDontPlayInstigatorActiveSoundOnDino")); }
    BrzCampoPonteiro bEditorOnlyActorShowInPIEField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bEditorOnlyActorShowInPIE")); }
    BrzCampoPonteiro bEnableAutoLODGenerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bEnableAutoLODGeneration")); }
    BrzCampoPonteiro bEnableBuffStackingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bEnableBuffStacking")); }
    BrzCampoPonteiro bEnableDistanceBasedVfxField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bEnableDistanceBasedVfx")); }
    BrzCampoPonteiro bEnableMultiUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bEnableMultiUse")); }
    BrzCampoPonteiro bEnableStaticPathingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bEnableStaticPathing")); }
    BrzCampoPonteiro bEnableTargetingTooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bEnableTargetingTooltip")); }
    BrzCampoPonteiro bEnablesSpyglassEffectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bEnablesSpyglassEffect")); }
    BrzCampoPonteiro bExchangedRolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bExchangedRoles")); }
    BrzCampoPonteiro bFindCameraComponentWhenViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bFindCameraComponentWhenViewTarget")); }
    BrzCampoPonteiro bFollowTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bFollowTarget")); }
    BrzCampoPonteiro bForceAddUnderwaterCharacterStatusValuesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bForceAddUnderwaterCharacterStatusValues")); }
    BrzCampoPonteiro bForceAllowAddingWithoutControllerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bForceAllowAddingWithoutController")); }
    BrzCampoPonteiro bForceAllowNetMulticastField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bForceAllowNetMulticast")); }
    BrzCampoPonteiro bForceAllowWhileBuriedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bForceAllowWhileBuried")); }
    BrzCampoPonteiro bForceAlwaysAllowBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bForceAlwaysAllowBuff")); }
    BrzCampoPonteiro bForceCrosshairField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bForceCrosshair")); }
    BrzCampoPonteiro bForceDrawMissionDinoTargetHealthbarsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bForceDrawMissionDinoTargetHealthbars")); }
    BrzCampoPonteiro bForceHiddenReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bForceHiddenReplication")); }
    BrzCampoPonteiro bForceHideFloatingNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bForceHideFloatingName")); }
    BrzCampoPonteiro bForceHighQualityViewerReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bForceHighQualityViewerReplication")); }
    BrzCampoPonteiro bForceInfiniteDrawDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bForceInfiniteDrawDistance")); }
    BrzCampoPonteiro bForceInstigatorTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bForceInstigatorTick")); }
    BrzCampoPonteiro bForceNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bForceNetAddressable")); }
    BrzCampoPonteiro bForceNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bForceNetworkSpatialization")); }
    BrzCampoPonteiro bForceNoRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bForceNoRotation")); }
    BrzCampoPonteiro bForceNonBlockingHitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bForceNonBlockingHits")); }
    BrzCampoPonteiro bForceOnDediServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bForceOnDediServer")); }
    BrzCampoPonteiro bForceOverrideCharacterFlyingVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bForceOverrideCharacterFlyingVelocity")); }
    BrzCampoPonteiro bForceOverrideCharacterNewFallVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bForceOverrideCharacterNewFallVelocity")); }
    BrzCampoPonteiro bForceOverrideCharacterSwimmingVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bForceOverrideCharacterSwimmingVelocity")); }
    BrzCampoPonteiro bForceOverrideCharacterWalkingVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bForceOverrideCharacterWalkingVelocity")); }
    BrzCampoPonteiro bForcePlayerProneField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bForcePlayerProne")); }
    BrzCampoPonteiro bForcePreventSeamlessTravelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bForcePreventSeamlessTravel")); }
    BrzCampoPonteiro bForceReplicateDormantChildrenWithoutSpatialRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bForceReplicateDormantChildrenWithoutSpatialRelevancy")); }
    BrzCampoPonteiro bForceSelfTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bForceSelfTick")); }
    BrzCampoPonteiro bForceShowFloatingNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bForceShowFloatingName")); }
    BrzCampoPonteiro bForceUsePreventTargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bForceUsePreventTargeting")); }
    BrzCampoPonteiro bForceUsePreventTargetingTurretField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bForceUsePreventTargetingTurret")); }
    BrzCampoPonteiro bForceUseStackCountField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bForceUseStackCount")); }
    BrzCampoPonteiro bForcedHudDrawingRequiresSameTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bForcedHudDrawingRequiresSameTeam")); }
    BrzCampoPonteiro bForcedOnSpectatorPlayerControllerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bForcedOnSpectatorPlayerController")); }
    BrzCampoPonteiro bGenerateOverlapEventsDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bGenerateOverlapEventsDuringLevelStreaming")); }
    BrzCampoPonteiro bGetInstigatorChatMessagesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bGetInstigatorChatMessages")); }
    BrzCampoPonteiro bHUDFormatTimerAsTimecodeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bHUDFormatTimerAsTimecode")); }
    BrzCampoPonteiro bHasHighVolumeRPCsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bHasHighVolumeRPCs")); }
    BrzCampoPonteiro bHasImpulseDataAvailableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bHasImpulseDataAvailable")); }
    BrzCampoPonteiro bHasRelatedMissionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bHasRelatedMission")); }
    BrzCampoPonteiro bHibernateChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bHibernateChange")); }
    BrzCampoPonteiro bHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bHidden")); }
    BrzCampoPonteiro bHideBuffFromHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bHideBuffFromHUD")); }
    BrzCampoPonteiro bHideBuffFromHUDOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bHideBuffFromHUDOnly")); }
    BrzCampoPonteiro bHideFootStepDecalsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bHideFootStepDecals")); }
    BrzCampoPonteiro bHideTimerFromHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bHideTimerFromHUD")); }
    BrzCampoPonteiro bHighPrioritySoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bHighPrioritySound")); }
    BrzCampoPonteiro bIgnoreNetworkRangeScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bIgnoreNetworkRangeScaling")); }
    BrzCampoPonteiro bIgnoreWeightWhenUsingExtraMaxSpeedModifierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bIgnoreWeightWhenUsingExtraMaxSpeedModifier")); }
    BrzCampoPonteiro bIgnoredByCharacterEncroachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bIgnoredByCharacterEncroachment")); }
    BrzCampoPonteiro bIgnoresOriginShiftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bIgnoresOriginShifting")); }
    BrzCampoPonteiro bImmobilizeTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bImmobilizeTarget")); }
    BrzCampoPonteiro bImmobilizeTargetPreventDismountField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bImmobilizeTargetPreventDismount")); }
    BrzCampoPonteiro bInterceptInputEventsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bInterceptInputEvents")); }
    BrzCampoPonteiro bInterceptUseActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bInterceptUseAction")); }
    BrzCampoPonteiro bInterceptWeaponToggleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bInterceptWeaponToggle")); }
    BrzCampoPonteiro bIsBuffPersistentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bIsBuffPersistent")); }
    BrzCampoPonteiro bIsCarryBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bIsCarryBuff")); }
    BrzCampoPonteiro bIsDestroyedFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bIsDestroyedFromChildActorComponent")); }
    BrzCampoPonteiro bIsDiseaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bIsDisease")); }
    BrzCampoPonteiro bIsEditorOnlyActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bIsEditorOnlyActor")); }
    BrzCampoPonteiro bIsFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bIsFromChildActorComponent")); }
    BrzCampoPonteiro bIsFromSkillField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bIsFromSkill")); }
    BrzCampoPonteiro bIsHighRiskMissionBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bIsHighRiskMissionBuff")); }
    BrzCampoPonteiro bIsInvincibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bIsInvincible")); }
    BrzCampoPonteiro bIsMapActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bIsMapActor")); }
    BrzCampoPonteiro bIsSkillBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bIsSkillBuff")); }
    BrzCampoPonteiro bIsValidUnstasisCasterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bIsValidUnstasisCaster")); }
    BrzCampoPonteiro bListenForInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bListenForInput")); }
    BrzCampoPonteiro bLoadedFromSaveGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bLoadedFromSaveGame")); }
    BrzCampoPonteiro bModifyFrictionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bModifyFriction")); }
    BrzCampoPonteiro bModifyMaxAccelerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bModifyMaxAcceleration")); }
    BrzCampoPonteiro bModifyMaxSpeedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bModifyMaxSpeed")); }
    BrzCampoPonteiro bModifyRotationRateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bModifyRotationRate")); }
    BrzCampoPonteiro bMultiUseCenterHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bMultiUseCenterHUD")); }
    BrzCampoPonteiro bNetCriticalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bNetCritical")); }
    BrzCampoPonteiro bNetLoadOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bNetLoadOnClient")); }
    BrzCampoPonteiro bNetResetBuffStartField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bNetResetBuffStart")); }
    BrzCampoPonteiro bNetTemporaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bNetTemporary")); }
    BrzCampoPonteiro bNetUseClientRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bNetUseClientRelevancy")); }
    BrzCampoPonteiro bNetUseOwnerRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bNetUseOwnerRelevancy")); }
    BrzCampoPonteiro bNetworkSpatializationForceRelevancyCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bNetworkSpatializationForceRelevancyCheck")); }
    BrzCampoPonteiro bNotifyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bNotifyDamage")); }
    BrzCampoPonteiro bNotifyExperienceGainedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bNotifyExperienceGained")); }
    BrzCampoPonteiro bNotifyExperienceGained_AllowCountingAlphaKillsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bNotifyExperienceGained_AllowCountingAlphaKills")); }
    BrzCampoPonteiro bNotifyExperienceGained_IncludeSmallAmountsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bNotifyExperienceGained_IncludeSmallAmounts")); }
    BrzCampoPonteiro bOnlyActivateSoundForInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bOnlyActivateSoundForInstigator")); }
    BrzCampoPonteiro bOnlyAddCharacterValuesUnderwaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bOnlyAddCharacterValuesUnderwater")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bOnlyReplicateOnNetForcedUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bOnlyReplicateOnNetForcedUpdate")); }
    bool& bOnlyTickIfPlayerCharacterField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuffAbilityCharges.bOnlyTickIfPlayerCharacter"); }
    BrzCampoPonteiro bOnlyTickWhenPossessedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bOnlyTickWhenPossessed")); }
    BrzCampoPonteiro bOnlyTickWhenVisibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bOnlyTickWhenVisible")); }
    bool& bOverrideBuffDescriptionField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuffAbilityCharges.bOverrideBuffDescription"); }
    BrzCampoPonteiro bOverrideBuffTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bOverrideBuffType")); }
    BrzCampoPonteiro bOverrideCharacterLandingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bOverrideCharacterLanding")); }
    BrzCampoPonteiro bOverrideCharacterMovementInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bOverrideCharacterMovementInput")); }
    BrzCampoPonteiro bOverrideInventoryWeightMultipliersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bOverrideInventoryWeightMultipliers")); }
    BrzCampoPonteiro bOverrideRightShoulderOnPlayerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bOverrideRightShoulderOnPlayer")); }
    BrzCampoPonteiro bOverrideTPVCameraOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bOverrideTPVCameraOffset")); }
    BrzCampoPonteiro bOverrideTPVCameraOffsetMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bOverrideTPVCameraOffsetMultiplier")); }
    BrzCampoPonteiro bPersistentBuffSurvivesLevelUpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bPersistentBuffSurvivesLevelUp")); }
    BrzCampoPonteiro bPlayerIgnoreBuffPostprocessEffectWhenRidingDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bPlayerIgnoreBuffPostprocessEffectWhenRidingDino")); }
    BrzCampoPonteiro bPostUpdateTickGroupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bPostUpdateTickGroup")); }
    BrzCampoPonteiro bPreventActorStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bPreventActorStasis")); }
    BrzCampoPonteiro bPreventCarryCharacterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bPreventCarryCharacter")); }
    BrzCampoPonteiro bPreventCarryOrPassengerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bPreventCarryOrPassenger")); }
    BrzCampoPonteiro bPreventCharacterBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bPreventCharacterBasing")); }
    BrzCampoPonteiro bPreventCharacterBasingAllowSteppingUpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bPreventCharacterBasingAllowSteppingUp")); }
    BrzCampoPonteiro bPreventClearRiderOnDinoImmobilizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bPreventClearRiderOnDinoImmobilize")); }
    BrzCampoPonteiro bPreventCliffPlatformsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bPreventCliffPlatforms")); }
    BrzCampoPonteiro bPreventDinoDismountField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bPreventDinoDismount")); }
    BrzCampoPonteiro bPreventDinoRidingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bPreventDinoRiding")); }
    BrzCampoPonteiro bPreventFallDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bPreventFallDamage")); }
    BrzCampoPonteiro bPreventInputDoesOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bPreventInputDoesOffset")); }
    BrzCampoPonteiro bPreventInstigatorAttackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bPreventInstigatorAttack")); }
    BrzCampoPonteiro bPreventJumpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bPreventJump")); }
    BrzCampoPonteiro bPreventLevelBoundsRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bPreventLevelBoundsRelevant")); }
    BrzCampoPonteiro bPreventLogoutSleepingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bPreventLogoutSleeping")); }
    BrzCampoPonteiro bPreventNPCSpawnFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bPreventNPCSpawnFloor")); }
    BrzCampoPonteiro bPreventOnBigDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bPreventOnBigDino")); }
    BrzCampoPonteiro bPreventOnBossDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bPreventOnBossDino")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventOnDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bPreventOnDino")); }
    BrzCampoPonteiro bPreventOnPlayerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bPreventOnPlayer")); }
    BrzCampoPonteiro bPreventOnRobotDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bPreventOnRobotDino")); }
    BrzCampoPonteiro bPreventOnSeatingStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bPreventOnSeatingStructures")); }
    BrzCampoPonteiro bPreventOnShipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bPreventOnShip")); }
    BrzCampoPonteiro bPreventOnWildDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bPreventOnWildDino")); }
    BrzCampoPonteiro bPreventRegularForceNetUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bPreventRegularForceNetUpdate")); }
    BrzCampoPonteiro bPreventSavingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bPreventSaving")); }
    BrzCampoPonteiro bReactivateWithNewDamageCauserField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bReactivateWithNewDamageCauser")); }
    BrzCampoPonteiro bReactivationAddsNewStackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bReactivationAddsNewStack")); }
    BrzCampoPonteiro bRealtimeThrottledTickUseNativeTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bRealtimeThrottledTickUseNativeTick")); }
    BrzCampoPonteiro bRelevantForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bRelevantForLevelBounds")); }
    BrzCampoPonteiro bRelevantForNetworkReplaysField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bRelevantForNetworkReplays")); }
    BrzCampoPonteiro bRemoteForcedFleeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bRemoteForcedFlee")); }
    BrzCampoPonteiro bReplayRewindableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bReplayRewindable")); }
    BrzCampoPonteiro bReplicateHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bReplicateHidden")); }
    BrzCampoPonteiro bReplicateMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bReplicateMovement")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bReplicates")); }
    BrzCampoPonteiro bRequireControllerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bRequireController")); }
    BrzCampoPonteiro bResetTopStackTimeWhenAddingNewStackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bResetTopStackTimeWhenAddingNewStack")); }
    BrzCampoPonteiro bSavePlayerDataOnSaveWorldField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bSavePlayerDataOnSaveWorld")); }
    BrzCampoPonteiro bSavedWhenStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bSavedWhenStasised")); }
    BrzCampoPonteiro bShallowEmitterDontSpawnOutOfViewField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bShallowEmitterDontSpawnOutOfView")); }
    BrzCampoPonteiro bShallowEmitterSpawnableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bShallowEmitterSpawnable")); }
    BrzCampoPonteiro bShowBuffModifierDescriptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bShowBuffModifierDescription")); }
    bool& bShowMammalIncubationOptionsField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuffAbilityCharges.bShowMammalIncubationOptions"); }
    BrzCampoPonteiro bSkillAddBuffDeactivationTimeToCooldownField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bSkillAddBuffDeactivationTimeToCooldown")); }
    BrzCampoPonteiro bSkillAllowUseWhileEncumberedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bSkillAllowUseWhileEncumbered")); }
    BrzCampoPonteiro bSkillAllowUseWhileSeatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bSkillAllowUseWhileSeated")); }
    BrzCampoPonteiro bSkillBuffSetCooldownField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bSkillBuffSetCooldown")); }
    BrzCampoPonteiro bSkipInstigatorTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bSkipInstigatorTick")); }
    BrzCampoPonteiro bSlowInstigatorFallingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bSlowInstigatorFalling")); }
    BrzCampoPonteiro bStasisComponentRadiusForceDistanceCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bStasisComponentRadiusForceDistanceCheck")); }
    BrzCampoPonteiro bStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bStasised")); }
    BrzCampoPonteiro bStatusComponentUsingExtendedHUDTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bStatusComponentUsingExtendedHUDText")); }
    BrzCampoPonteiro bSupportsCustomHexagonConversionShopField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bSupportsCustomHexagonConversionShop")); }
    BrzCampoPonteiro bTearOffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bTearOff")); }
    BrzCampoPonteiro bTickSoundInRangePlaybackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bTickSoundInRangePlayback")); }
    BrzCampoPonteiro bTriggerBPStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bTriggerBPStasis")); }
    BrzCampoPonteiro bTriggerBPUnstasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bTriggerBPUnstasis")); }
    BrzCampoPonteiro bUnstreamComponentsUseEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUnstreamComponentsUseEndOverlap")); }
    BrzCampoPonteiro bUseASACameraPivotLocationForOldCameraField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseASACameraPivotLocationForOldCamera")); }
    BrzCampoPonteiro bUseActivateSoundFadeInDurationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseActivateSoundFadeInDuration")); }
    BrzCampoPonteiro bUseActorNotifyCustomEventBPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseActorNotifyCustomEventBP")); }
    BrzCampoPonteiro bUseAttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseAttachmentReplication")); }
    BrzCampoPonteiro bUseBPActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPActivated")); }
    BrzCampoPonteiro bUseBPAdjustCharacterMovementImpulseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPAdjustCharacterMovementImpulse")); }
    BrzCampoPonteiro bUseBPAdjustImpulseFromDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPAdjustImpulseFromDamage")); }
    BrzCampoPonteiro bUseBPAdjustRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPAdjustRadialDamage")); }
    BrzCampoPonteiro bUseBPAllowActorSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPAllowActorSpawn")); }
    BrzCampoPonteiro bUseBPAllowPlayMontageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPAllowPlayMontage")); }
    BrzCampoPonteiro bUseBPBuffControllerKilledSomethingEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPBuffControllerKilledSomethingEvent")); }
    BrzCampoPonteiro bUseBPBuffKilledSomethingEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPBuffKilledSomethingEvent")); }
    BrzCampoPonteiro bUseBPBuffPreventBuildingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPBuffPreventBuilding")); }
    BrzCampoPonteiro bUseBPBuffPreventsImmobilizationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPBuffPreventsImmobilization")); }
    BrzCampoPonteiro bUseBPBuffPreventsMultiuseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPBuffPreventsMultiuseEntries")); }
    BrzCampoPonteiro bUseBPCanBeCarriedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPCanBeCarried")); }
    BrzCampoPonteiro bUseBPCanFlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPCanFly")); }
    BrzCampoPonteiro bUseBPChangeBuffStatusValueModifiersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPChangeBuffStatusValueModifiers")); }
    BrzCampoPonteiro bUseBPChangedActorTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPChangedActorTeam")); }
    BrzCampoPonteiro bUseBPCheckForErrorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPCheckForErrors")); }
    bool& bUseBPCustomAllowAddBuffField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuffAbilityCharges.bUseBPCustomAllowAddBuff"); }
    BrzCampoPonteiro bUseBPCustomApplyColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPCustomApplyColor")); }
    BrzCampoPonteiro bUseBPCustomIsRelevantForClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPCustomIsRelevantForClient")); }
    bool& bUseBPDeactivatedField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuffAbilityCharges.bUseBPDeactivated"); }
    BrzCampoPonteiro bUseBPDinoNameColorOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPDinoNameColorOverride")); }
    BrzCampoPonteiro bUseBPDinoRefreshColorizationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPDinoRefreshColorization")); }
    BrzCampoPonteiro bUseBPDrawEntryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPDrawEntry")); }
    BrzCampoPonteiro bUseBPExcludeAoEActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPExcludeAoEActor")); }
    BrzCampoPonteiro bUseBPFilterMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPFilterMultiUseEntries")); }
    BrzCampoPonteiro bUseBPForceAllowsInventoryUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPForceAllowsInventoryUse")); }
    BrzCampoPonteiro bUseBPForceCameraStyleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPForceCameraStyle")); }
    BrzCampoPonteiro bUseBPForceOverrideWeaponFireTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPForceOverrideWeaponFireTransform")); }
    BrzCampoPonteiro bUseBPFullyHarvestedNodeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPFullyHarvestedNode")); }
    BrzCampoPonteiro bUseBPGetAltInventoryForAmmoConsumptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPGetAltInventoryForAmmoConsumption")); }
    BrzCampoPonteiro bUseBPGetAttackAnimPlayRateModifierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPGetAttackAnimPlayRateModifier")); }
    BrzCampoPonteiro bUseBPGetBonesToHideOnAllocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPGetBonesToHideOnAllocation")); }
    BrzCampoPonteiro bUseBPGetBuffDamageCauserField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPGetBuffDamageCauser")); }
    BrzCampoPonteiro bUseBPGetBuffDescriptionIconAlphaMultField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPGetBuffDescriptionIconAlphaMult")); }
    BrzCampoPonteiro bUseBPGetBuffLevelUpStatOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPGetBuffLevelUpStatOverride")); }
    BrzCampoPonteiro bUseBPGetCameraCollisionIgnoreActorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPGetCameraCollisionIgnoreActors")); }
    BrzCampoPonteiro bUseBPGetCameraShakeScalarField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPGetCameraShakeScalar")); }
    BrzCampoPonteiro bUseBPGetCrosshairColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPGetCrosshairColor")); }
    BrzCampoPonteiro bUseBPGetCustomTooltipActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPGetCustomTooltipActor")); }
    BrzCampoPonteiro bUseBPGetGravityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPGetGravity")); }
    BrzCampoPonteiro bUseBPGetHUDDrawLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPGetHUDDrawLocationOffset")); }
    BrzCampoPonteiro bUseBPGetHUDElementsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPGetHUDElements")); }
    BrzCampoPonteiro bUseBPGetMoveAnimRateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPGetMoveAnimRate")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPGetMultiUseCenterText")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextWithNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPGetMultiUseCenterTextWithName")); }
    BrzCampoPonteiro bUseBPGetOrbitCamTargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPGetOrbitCamTargetLocation")); }
    bool& bUseBPGetPlayerFootStepSoundField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuffAbilityCharges.bUseBPGetPlayerFootStepSound"); }
    BrzCampoPonteiro bUseBPGetShowDebugAnimationComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPGetShowDebugAnimationComponents")); }
    BrzCampoPonteiro bUseBPGetWaypointsBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPGetWaypointsBuff")); }
    BrzCampoPonteiro bUseBPHandleOnStartAltFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPHandleOnStartAltFire")); }
    BrzCampoPonteiro bUseBPHandleOnStartFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPHandleOnStartFire")); }
    BrzCampoPonteiro bUseBPHandleOnStopAltFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPHandleOnStopAltFire")); }
    BrzCampoPonteiro bUseBPHandleOnStopFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPHandleOnStopFire")); }
    BrzCampoPonteiro bUseBPInformDamageCauserOfBuffAddedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPInformDamageCauserOfBuffAdded")); }
    BrzCampoPonteiro bUseBPInitializedCharacterAnimScriptInstanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPInitializedCharacterAnimScriptInstance")); }
    BrzCampoPonteiro bUseBPInstigatorAllowDinoTargetingRangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPInstigatorAllowDinoTargetingRange")); }
    BrzCampoPonteiro bUseBPInventoryItemDroppedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPInventoryItemDropped")); }
    BrzCampoPonteiro bUseBPInventoryItemUsedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPInventoryItemUsed")); }
    BrzCampoPonteiro bUseBPIsCharacterHardAttachedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPIsCharacterHardAttached")); }
    BrzCampoPonteiro bUseBPIsValidUnstasisActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPIsValidUnstasisActor")); }
    BrzCampoPonteiro bUseBPModifyArmorValueField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPModifyArmorValue")); }
    BrzCampoPonteiro bUseBPModifyPlayerBoneModifiersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPModifyPlayerBoneModifiers")); }
    BrzCampoPonteiro bUseBPNofityMontagePlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPNofityMontagePlay")); }
    BrzCampoPonteiro bUseBPNonDedicatedPlayerPostAnimUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPNonDedicatedPlayerPostAnimUpdate")); }
    BrzCampoPonteiro bUseBPNotifyBuffWeaponFiredField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPNotifyBuffWeaponFired")); }
    BrzCampoPonteiro bUseBPNotifyItemAddedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPNotifyItemAdded")); }
    BrzCampoPonteiro bUseBPNotifyItemQuantityUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPNotifyItemQuantityUpdated")); }
    BrzCampoPonteiro bUseBPNotifyItemRemovedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPNotifyItemRemoved")); }
    BrzCampoPonteiro bUseBPNotifyOtherBuffActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPNotifyOtherBuffActivated")); }
    BrzCampoPonteiro bUseBPNotifyOtherBuffDeactivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPNotifyOtherBuffDeactivated")); }
    BrzCampoPonteiro bUseBPNotifyPreventDismountingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPNotifyPreventDismounting")); }
    BrzCampoPonteiro bUseBPOnAoeBuffAddedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPOnAoeBuffAdded")); }
    BrzCampoPonteiro bUseBPOnDestroyInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPOnDestroyInstigator")); }
    BrzCampoPonteiro bUseBPOnHexagonCountChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPOnHexagonCountChanged")); }
    BrzCampoPonteiro bUseBPOnInstigatorCapsuleComponentHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPOnInstigatorCapsuleComponentHit")); }
    BrzCampoPonteiro bUseBPOnInstigatorLootedCrateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPOnInstigatorLootedCrate")); }
    BrzCampoPonteiro bUseBPOnInstigatorMovementModeChangedNotifyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPOnInstigatorMovementModeChangedNotify")); }
    BrzCampoPonteiro bUseBPOnOwnerMassTeleportEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPOnOwnerMassTeleportEvent")); }
    BrzCampoPonteiro bUseBPOnPlayerShoulderMountDinoChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPOnPlayerShoulderMountDinoChange")); }
    BrzCampoPonteiro bUseBPOnRiderChangeWeaponsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPOnRiderChangeWeapons")); }
    BrzCampoPonteiro bUseBPOnTamedWildDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPOnTamedWildDino")); }
    BrzCampoPonteiro bUseBPOverrideAoEBuffDamageCauserField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPOverrideAoEBuffDamageCauser")); }
    BrzCampoPonteiro bUseBPOverrideBloodDecalsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPOverrideBloodDecals")); }
    BrzCampoPonteiro bUseBPOverrideBuffToGiveOnDeactivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPOverrideBuffToGiveOnDeactivation")); }
    BrzCampoPonteiro bUseBPOverrideCameraArmLengthField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPOverrideCameraArmLength")); }
    BrzCampoPonteiro bUseBPOverrideCameraArmLengthInterpParamsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPOverrideCameraArmLengthInterpParams")); }
    BrzCampoPonteiro bUseBPOverrideCameraDesiredPivotLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPOverrideCameraDesiredPivotLocation")); }
    BrzCampoPonteiro bUseBPOverrideCameraPivotLocationInterpParamsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPOverrideCameraPivotLocationInterpParams")); }
    BrzCampoPonteiro bUseBPOverrideCameraViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPOverrideCameraViewTarget")); }
    BrzCampoPonteiro bUseBPOverrideCharacterLocalControlZInterpSpeedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPOverrideCharacterLocalControlZInterpSpeed")); }
    BrzCampoPonteiro bUseBPOverrideCuddleFoodTypesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPOverrideCuddleFoodTypes")); }
    BrzCampoPonteiro bUseBPOverrideDynamicMusicField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPOverrideDynamicMusic")); }
    BrzCampoPonteiro bUseBPOverrideIsImprintPlayerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPOverrideIsImprintPlayer")); }
    BrzCampoPonteiro bUseBPOverrideIsNetRelevantForField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPOverrideIsNetRelevantFor")); }
    BrzCampoPonteiro bUseBPOverrideMaxInventoryAccessDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPOverrideMaxInventoryAccessDistance")); }
    BrzCampoPonteiro bUseBPOverrideMaxUseDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPOverrideMaxUseDistance")); }
    BrzCampoPonteiro bUseBPOverrideTalkerCharacterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPOverrideTalkerCharacter")); }
    BrzCampoPonteiro bUseBPOverrideTargetStructureSettingsDamageAdjusterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPOverrideTargetStructureSettingsDamageAdjuster")); }
    BrzCampoPonteiro bUseBPOverrideTargetingDesireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPOverrideTargetingDesire")); }
    BrzCampoPonteiro bUseBPOverrideTargetingLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPOverrideTargetingLocation")); }
    BrzCampoPonteiro bUseBPOverrideUILocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPOverrideUILocation")); }
    BrzCampoPonteiro bUseBPOverrideValuesToAddPerSecondField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPOverrideValuesToAddPerSecond")); }
    BrzCampoPonteiro bUseBPOverrideWaterJumpVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPOverrideWaterJumpVelocity")); }
    BrzCampoPonteiro bUseBPPassHarvestExperienceToActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPPassHarvestExperienceToActor")); }
    BrzCampoPonteiro bUseBPPreClaimWildFollowerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPPreClaimWildFollower")); }
    BrzCampoPonteiro bUseBPPreServerUploadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPPreServerUpload")); }
    BrzCampoPonteiro bUseBPPreventAddingOtherBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPPreventAddingOtherBuff")); }
    BrzCampoPonteiro bUseBPPreventAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPPreventAttachments")); }
    BrzCampoPonteiro bUseBPPreventEquipWeaponsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPPreventEquipWeapons")); }
    BrzCampoPonteiro bUseBPPreventFallDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPPreventFallDamage")); }
    BrzCampoPonteiro bUseBPPreventFirstPersonField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPPreventFirstPerson")); }
    BrzCampoPonteiro bUseBPPreventFlightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPPreventFlight")); }
    BrzCampoPonteiro bUseBPPreventInstigatorAttackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPPreventInstigatorAttack")); }
    BrzCampoPonteiro bUseBPPreventInstigatorMovementModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPPreventInstigatorMovementMode")); }
    BrzCampoPonteiro bUseBPPreventNotifySoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPPreventNotifySound")); }
    BrzCampoPonteiro bUseBPPreventOnStartJumpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPPreventOnStartJump")); }
    BrzCampoPonteiro bUseBPPreventRunningField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPPreventRunning")); }
    BrzCampoPonteiro bUseBPPreventTekArmorBuffsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPPreventTekArmorBuffs")); }
    BrzCampoPonteiro bUseBPPreventThrowingItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPPreventThrowingItem")); }
    BrzCampoPonteiro bUseBPSetupForInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPSetupForInstigator")); }
    BrzCampoPonteiro bUseBPShouldForceOwnerDedicatedMovementTickPerFrameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBPShouldForceOwnerDedicatedMovementTickPerFrame")); }
    BrzCampoPonteiro bUseBP_AdjustDamageExField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBP_AdjustDamageEx")); }
    BrzCampoPonteiro bUseBP_OnOwnerDealtDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBP_OnOwnerDealtDamage")); }
    BrzCampoPonteiro bUseBP_OnOwnerTeleportedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBP_OnOwnerTeleported")); }
    BrzCampoPonteiro bUseBP_OverrideTerminalVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBP_OverrideTerminalVelocity")); }
    bool& bUseBlueprintAnimNotificationsField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuffAbilityCharges.bUseBlueprintAnimNotifications"); }
    BrzCampoPonteiro bUseBuffOverrideFinalWanderLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBuffOverrideFinalWanderLocation")); }
    BrzCampoPonteiro bUseBuffOverrideInventoryAccessInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBuffOverrideInventoryAccessInput")); }
    bool& bUseBuffTickClientField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuffAbilityCharges.bUseBuffTickClient"); }
    BrzCampoPonteiro bUseBuffTickServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseBuffTickServer")); }
    BrzCampoPonteiro bUseCanMoveThroughActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseCanMoveThroughActor")); }
    BrzCampoPonteiro bUseCenteredTPVCameraField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseCenteredTPVCamera")); }
    BrzCampoPonteiro bUseConsolidatedMultiUseWheelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseConsolidatedMultiUseWheel")); }
    BrzCampoPonteiro bUseDinoRangeForTooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseDinoRangeForTooltip")); }
    BrzCampoPonteiro bUseFinalAdjustDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseFinalAdjustDamage")); }
    BrzCampoPonteiro bUseForcedBuffAimOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseForcedBuffAimOverride")); }
    BrzCampoPonteiro bUseGetGravityZScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseGetGravityZScale")); }
    BrzCampoPonteiro bUseInstigatorItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseInstigatorItem")); }
    BrzCampoPonteiro bUseInterceptInstigatorPlayerEmoteField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseInterceptInstigatorPlayerEmote")); }
    BrzCampoPonteiro bUseInterceptItemSlotUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseInterceptItemSlotUse")); }
    BrzCampoPonteiro bUseNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseNetworkSpatialization")); }
    BrzCampoPonteiro bUseNiagaraDestroyOnSystemFinishField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseNiagaraDestroyOnSystemFinish")); }
    BrzCampoPonteiro bUseOnCarryCharacterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseOnCarryCharacter")); }
    BrzCampoPonteiro bUseOnlyPointForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseOnlyPointForLevelBounds")); }
    BrzCampoPonteiro bUsePostAdjustDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUsePostAdjustDamage")); }
    BrzCampoPonteiro bUseRemoteClientTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseRemoteClientTick")); }
    BrzCampoPonteiro bUseSetHiddenInGameFromInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseSetHiddenInGameFromInstigator")); }
    BrzCampoPonteiro bUseShouldInterceptedInputEventOverwriteUsualFunctionality_Array_GamepadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseShouldInterceptedInputEventOverwriteUsualFunctionality_Array_Gamepad")); }
    BrzCampoPonteiro bUseStasisGridField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseStasisGrid")); }
    BrzCampoPonteiro bUseTickingDeactivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUseTickingDeactivation")); }
    BrzCampoPonteiro bUsesInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bUsesInstigator")); }
    BrzCampoPonteiro bWantsPerformanceThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bWantsPerformanceThrottledTick")); }
    BrzCampoPonteiro bWantsRealtimeThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bWantsRealtimeThrottledTick")); }
    BrzCampoPonteiro bWantsServerThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bWantsServerThrottledTick")); }
    BrzCampoPonteiro bWasActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.bWasActivated")); }
    BrzCampoPonteiro omitHapticsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.omitHaptics")); }
    BrzCampoPonteiro staticPathingDestinationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuffAbilityCharges.staticPathingDestination")); }
};

#endif  // BRZ_SDK_JOGO_APRIMALBUFFABILITYCHARGES_H

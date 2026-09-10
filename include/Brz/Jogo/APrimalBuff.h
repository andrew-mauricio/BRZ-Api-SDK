// ==========================================================================
//  APrimalBuff — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALBUFF_H
#define BRZ_SDK_JOGO_APRIMALBUFF_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AMissionType;
struct FName;
struct FVector2D;
struct UClass;
struct UMaterialInstanceDynamic;
struct UMaterialInterface;
struct UObject;
struct UPrimalBuffPersistentData;
struct USoundBase;

#include "APrimalEmitterSpawnable.h"

struct APrimalBuff : public APrimalEmitterSpawnable
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalBuff"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.AOEBuffCanAffect(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    bool AOEBuffCanAffect(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBuff.AOEBuffCanAffect(APrimalCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.AddBuff(APrimalCharacter*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddBuff(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalBuff.AddBuff(APrimalCharacter*,AActor*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.AddBuffLifetime(float)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=140+chamadores=2]]
    void AddBuffLifetime(float a0) const
    {
        NativeCall<void, float>(this, "APrimalBuff.AddBuffLifetime(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.AddDamageStatusValueModifier(APrimalCharacter*,EPrimalCharacterStatusValue::Type,boo
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddDamageStatusValueModifier(void* a0, int a1, bool a2, bool a3, bool a4, bool a5, bool a6, float a7, float a8, float a9, int a10, bool a11, bool a12, float a13, void* a14, bool a15) const
    {
        return NativeCall<void*, void*, int, bool, bool, bool, bool, bool, float, float, float, int, bool, bool, float, void*, bool>(this, "APrimalBuff.AddDamageStatusValueModifier(APrimalCharacter*,EPrimalCharacterStatusValue::Type,bool,bool,bool,bool,bool,float,float,float,int,bool,bool,float,TSubclassOf<UDamageType>,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.AddStacks(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo+string_aprovado]
    void AddStacks(int a0) const
    {
        NativeCall<void, int>(this, "APrimalBuff.AddStacks(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.AllowPlayMontage(UAnimMontage*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool AllowPlayMontage(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBuff.AllowPlayMontage(UAnimMontage*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.AllowPostProcessEffect()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=112]]
    bool AllowPostProcessEffect() const
    {
        return NativeCall<bool>(this, "APrimalBuff.AllowPostProcessEffect()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)
    // endereco: casamento de bytes com a build de referencia
    void AnimNotifyCustomEvent(unsigned long long a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, unsigned long long, void*, void*, void*>(this, "APrimalBuff.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.AnimNotifyCustomState_Begin(FName,USkeletalMeshComponent*,UAnimSequenceBase*,float,U
    // endereco: casamento de bytes com a build de referencia
    void AnimNotifyCustomState_Begin(unsigned long long a0, void* a1, void* a2, float a3, void* a4) const
    {
        NativeCall<void, unsigned long long, void*, void*, float, void*>(this, "APrimalBuff.AnimNotifyCustomState_Begin(FName,USkeletalMeshComponent*,UAnimSequenceBase*,float,UAnimNotifyState*)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.AnimNotifyCustomState_End(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNoti
    // endereco: casamento de bytes com a build de referencia
    void AnimNotifyCustomState_End(unsigned long long a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, unsigned long long, void*, void*, void*>(this, "APrimalBuff.AnimNotifyCustomState_End(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotifyState*)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.ApplyBuffStatusValueModifiers(bool)
    // endereco: casamento de bytes com a build de referencia
    void ApplyBuffStatusValueModifiers(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalBuff.ApplyBuffStatusValueModifiers(bool)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.ApplyPhysicsImpulses(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ApplyPhysicsImpulses(float a0) const
    {
        NativeCall<void, float>(this, "APrimalBuff.ApplyPhysicsImpulses(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.ApplyPhysicsImpulses_Implementation(float)
    // endereco: casamento de bytes com a build de referencia
    void ApplyPhysicsImpulses_Implementation(float a0) const
    {
        NativeCall<void, float>(this, "APrimalBuff.ApplyPhysicsImpulses_Implementation(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.BPActivated(AActor*)
    // endereco: casamento de bytes com a build de referencia
    void BPActivated(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff.BPActivated(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.BPAdditionalExperienceMultiplier(EXPType::Type)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPAdditionalExperienceMultiplier(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalBuff.BPAdditionalExperienceMultiplier(EXPType::Type)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPAdditionalTamingSpeedMultiplier()
    // endereco: casamento de bytes com a build de referencia
    float BPAdditionalTamingSpeedMultiplier() const
    {
        return NativeCall<float>(this, "APrimalBuff.BPAdditionalTamingSpeedMultiplier()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.BPAdjustCharacterMovementImpulse(UE::Math::TVector<double>,bool,float,bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPAdjustCharacterMovementImpulse(void* a0, bool a1, float a2, bool a3) const
    {
        return NativeCall<void*, void*, bool, float, bool>(this, "APrimalBuff.BPAdjustCharacterMovementImpulse(UE::Math::TVector<double>,bool,float,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.BPAdjustDamage_Ex(float,FHitResult&,UE::Math::TVector<double>&,AController*,AActor*,
    // endereco: casamento de bytes com a build de referencia
    float BPAdjustDamage_Ex(float a0, void* a1, void* a2, void* a3, void* a4, void* a5) const
    {
        return NativeCall<float, float, void*, void*, void*, void*, void*>(this, "APrimalBuff.BPAdjustDamage_Ex(float,FHitResult&,UE::Math::TVector<double>&,AController*,AActor*,TSubclassOf<UDamageType>)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.BPAdjustImpulseFromDamage(UE::Math::TVector<double>,float,FDamageEvent,APawn*,AActor
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPAdjustImpulseFromDamage(void* a0, float a1, void* a2, void* a3, void* a4, bool a5, void* a6) const
    {
        return NativeCall<void*, void*, float, void*, void*, void*, bool, void*>(this, "APrimalBuff.BPAdjustImpulseFromDamage(UE::Math::TVector<double>,float,FDamageEvent,APawn*,AActor*,bool,FHitResult)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.BPAdjustOutputDamage(AActor*,float,UE::Math::TVector<double>&,FHitResult&,AControlle
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPAdjustOutputDamage(void* a0, float a1, void* a2, void* a3, void* a4, void* a5, void* a6, float a7, void* a8) const
    {
        return NativeCall<void*, void*, float, void*, void*, void*, void*, void*, float, void*>(this, "APrimalBuff.BPAdjustOutputDamage(AActor*,float,UE::Math::TVector<double>&,FHitResult&,AController*,AActor*,TSubclassOf<UDamageType>,float,AShooterProjectile*)", a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.BPAdjustRadialDamage(float,UE::Math::TVector<double>&,FRadialDamageEvent&)
    // endereco: casamento de bytes com a build de referencia
    float BPAdjustRadialDamage(float a0, void* a1, void* a2) const
    {
        return NativeCall<float, float, void*, void*>(this, "APrimalBuff.BPAdjustRadialDamage(float,UE::Math::TVector<double>&,FRadialDamageEvent&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.BPAdjustStatusValueModification(UPrimalCharacterStatusComponent*,EPrimalCharacterSta
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPAdjustStatusValueModification(void* a0, int a1, float a2, void* a3, bool a4) const
    {
        return NativeCall<void*, void*, int, float, void*, bool>(this, "APrimalBuff.BPAdjustStatusValueModification(UPrimalCharacterStatusComponent*,EPrimalCharacterStatusValue::Type,float,TSubclassOf<UDamageType>,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BPAnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPAnimNotifyCustomEvent(unsigned long long a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, unsigned long long, void*, void*, void*>(this, "APrimalBuff.BPAnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", a0, a1, a2, a3);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BPAnimNotifyCustomState_End(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNo
    // endereco: casamento de bytes com a build de referencia
    void BPAnimNotifyCustomState_End(unsigned long long a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, unsigned long long, void*, void*, void*>(this, "APrimalBuff.BPAnimNotifyCustomState_End(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotifyState*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.BPBPGetCameraShakeScalar(TSubclassOf<ULegacyCameraShake>,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPBPGetCameraShakeScalar(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "APrimalBuff.BPBPGetCameraShakeScalar(TSubclassOf<ULegacyCameraShake>,float)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BPBuffControllerKilledSomethingEvent(APrimalCharacter*,AActor*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPBuffControllerKilledSomethingEvent(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalBuff.BPBuffControllerKilledSomethingEvent(APrimalCharacter*,AActor*)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BPBuffKilledSomethingEvent(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void BPBuffKilledSomethingEvent(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff.BPBuffKilledSomethingEvent(APrimalCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.BPBuffPreventBuilding(APrimalStructure*,FPlacementData&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPBuffPreventBuilding(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalBuff.BPBuffPreventBuilding(APrimalStructure*,FPlacementData&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPBuffPreventUploading()
    // endereco: casamento de bytes com a build de referencia
    bool BPBuffPreventUploading() const
    {
        return NativeCall<bool>(this, "APrimalBuff.BPBuffPreventUploading()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPBuffPreventsImmobilization()
    // endereco: casamento de bytes com a build de referencia
    bool BPBuffPreventsImmobilization() const
    {
        return NativeCall<bool>(this, "APrimalBuff.BPBuffPreventsImmobilization()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.BPBuffPreventsMultiuseEntry(UObject*,int,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPBuffPreventsMultiuseEntry(void* a0, int a1, const FString& a2) const
    {
        return NativeCall<void*, void*, int, void*>(this, "APrimalBuff.BPBuffPreventsMultiuseEntry(UObject*,int,FString&)", a0, a1, const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro BPBuffPreventsMultiuseEntry(void* a0, int a1, FString* a2) const
    { return BPBuffPreventsMultiuseEntry(a0, a1, *a2); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPBypassPreventDinoDismount(bool,bool,bool,int,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    bool BPBypassPreventDinoDismount(bool a0, bool a1, bool a2, int a3, bool a4, bool a5) const
    {
        return NativeCall<bool, bool, bool, bool, int, bool, bool>(this, "APrimalBuff.BPBypassPreventDinoDismount(bool,bool,bool,int,bool,bool)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPCanBeCarried(APrimalCharacter*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPCanBeCarried(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBuff.BPCanBeCarried(APrimalCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPCanFly()
    // endereco: casamento de bytes com a build de referencia
    bool BPCanFly() const
    {
        return NativeCall<bool>(this, "APrimalBuff.BPCanFly()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BPChangeBuffStatusValueModifiers(EPrimalCharacterStatusValue::Type,float&,float&,boo
    // endereco: casamento de bytes com a build de referencia
    void BPChangeBuffStatusValueModifiers(int a0, void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8, void* a9, void* a10) const
    {
        NativeCall<void, int, void*, void*, void*, void*, void*, void*, void*, void*, void**, void*>(this, "APrimalBuff.BPChangeBuffStatusValueModifiers(EPrimalCharacterStatusValue::Type,float&,float&,bool&,bool&,int&,bool&,float&,bool&,TSubclassOf<UDamageType>&,bool&)", a0, a1, a2, a3, a4, a5, a6, a7, a8, &a9, a10);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPCharacterDetach()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPCharacterDetach() const
    {
        NativeCall<void>(this, "APrimalBuff.BPCharacterDetach()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.BPCheckPreventInput(EPrimalCharacterInputType::Type)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPCheckPreventInput(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalBuff.BPCheckPreventInput(EPrimalCharacterInputType::Type)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPCustomAllowAddBuff(APrimalCharacter*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    bool BPCustomAllowAddBuff(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "APrimalBuff.BPCustomAllowAddBuff(APrimalCharacter*,AActor*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.BPCustomRequest(FName,int&,int,AActor*,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPCustomRequest(unsigned long long a0, void* a1, int a2, void* a3, float a4) const
    {
        return NativeCall<void*, unsigned long long, void*, int, void*, float>(this, "APrimalBuff.BPCustomRequest(FName,int&,int,AActor*,float)", a0, a1, a2, a3, a4);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPDeactivate()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void BPDeactivate() const
    {
        NativeCall<void>(this, "APrimalBuff.BPDeactivate()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BPDeactivated(AActor*)
    // endereco: casamento de bytes com a build de referencia
    void BPDeactivated(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff.BPDeactivated(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.BPDinoRefreshColorization(TArray<FLinearColor,TSizedDefaultAllocator<32>>&,TArray<FL
    // endereco: casamento de bytes com a build de referencia
    void BPDinoRefreshColorization(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalBuff.BPDinoRefreshColorization(TArray<FLinearColor,TSizedDefaultAllocator<32>>&,TArray<FLinearColor,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BPDrawBuffStatusHUD(AShooterHUD*,float,float,float)
    // endereco: casamento de bytes com a build de referencia
    void BPDrawBuffStatusHUD(void* a0, float a1, float a2, float a3) const
    {
        NativeCall<void, void*, float, float, float>(this, "APrimalBuff.BPDrawBuffStatusHUD(AShooterHUD*,float,float,float)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.BPDrawSkillIcon_Implementation(AShooterCharacter*,FName,UCanvas*,UE::Math::TVector2<
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPDrawSkillIcon_Implementation(void* a0, unsigned long long a1, void* a2, void* a3, float a4, float a5, float a6, float a7, float a8, float a9, bool a10, bool a11, bool a12) const
    {
        return NativeCall<void*, void*, unsigned long long, void*, void*, float, float, float, float, float, float, bool, bool, bool>(this, "APrimalBuff.BPDrawSkillIcon_Implementation(AShooterCharacter*,FName,UCanvas*,UE::Math::TVector2<double>&,float,float,float,float,float,float,bool,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.BPFinalAdjustDamage(float,FHitResult&,AController*,AActor*,TSubclassOf<UDamageType>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPFinalAdjustDamage(float a0, void* a1, void* a2, void* a3, void* a4) const
    {
        return NativeCall<void*, float, void*, void*, void*, void*>(this, "APrimalBuff.BPFinalAdjustDamage(float,FHitResult&,AController*,AActor*,TSubclassOf<UDamageType>)", a0, a1, a2, a3, a4);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPForceCameraStyle(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    unsigned char BPForceCameraStyle(void* a0) const
    {
        return NativeCall<unsigned char, void*>(this, "APrimalBuff.BPForceCameraStyle(APrimalCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPForceDinoNameTargetingTeamOverride(AShooterHUD*,int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    int BPForceDinoNameTargetingTeamOverride(void* a0, int a1) const
    {
        return NativeCall<int, void*, int>(this, "APrimalBuff.BPForceDinoNameTargetingTeamOverride(AShooterHUD*,int)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPForceEnableTickFunction()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=332+grafo=3/3]]
    void BPForceEnableTickFunction() const
    {
        NativeCall<void>(this, "APrimalBuff.BPForceEnableTickFunction()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BPForceOverrideWeaponFireTransform(AShooterWeapon*,UE::Math::TVector<double>&,UE::Ma
    // endereco: casamento de bytes com a build de referencia
    void BPForceOverrideWeaponFireTransform(void* a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, void*, void*, void*, void*>(this, "APrimalBuff.BPForceOverrideWeaponFireTransform(AShooterWeapon*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,FHitResult&)", a0, a1, a2, a3);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BPFullyHarvestedNode(UPrimalHarvestingComponent*,bool,UPrimalInventoryComponent*,flo
    // endereco: casamento de bytes com a build de referencia
    void BPFullyHarvestedNode(void* a0, bool a1, void* a2, float a3, void* a4, void* a5) const
    {
        NativeCall<void, void*, bool, void*, float, void*, void*>(this, "APrimalBuff.BPFullyHarvestedNode(UPrimalHarvestingComponent*,bool,UPrimalInventoryComponent*,float,AController*,AActor*)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPGetAltInventoryForAmmoConsumption()
    // endereco: casamento de bytes com a build de referencia
    UObject* BPGetAltInventoryForAmmoConsumption() const
    {
        return NativeCall<UObject*>(this, "APrimalBuff.BPGetAltInventoryForAmmoConsumption()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.BPGetAttackAnimPlayRateModifier(int,FDinoAttackInfo)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetAttackAnimPlayRateModifier(int a0, void* a1) const
    {
        return NativeCall<void*, int, void*>(this, "APrimalBuff.BPGetAttackAnimPlayRateModifier(int,FDinoAttackInfo)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPGetBabyImprintingSpeedMultiplier()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    float BPGetBabyImprintingSpeedMultiplier() const
    {
        return NativeCall<float>(this, "APrimalBuff.BPGetBabyImprintingSpeedMultiplier()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPGetBuffDamageCauser()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    UObject* BPGetBuffDamageCauser() const
    {
        return NativeCall<UObject*>(this, "APrimalBuff.BPGetBuffDamageCauser()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPGetBuffDescriptionIconAlphaMult()
    // endereco: casamento de bytes com a build de referencia
    float BPGetBuffDescriptionIconAlphaMult() const
    {
        return NativeCall<float>(this, "APrimalBuff.BPGetBuffDescriptionIconAlphaMult()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPGetCrosshairColor()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPGetCrosshairColor() const
    {
        return NativeCall<void*>(this, "APrimalBuff.BPGetCrosshairColor()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPGetDebugInfoString()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPGetDebugInfoString(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalBuff.BPGetDebugInfoString()", retorno);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPGetMoveAnimRate()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    float BPGetMoveAnimRate() const
    {
        return NativeCall<float>(this, "APrimalBuff.BPGetMoveAnimRate()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPGetPlayerFootStepSound()
    // endereco: casamento de bytes com a build de referencia
    UObject* BPGetPlayerFootStepSound() const
    {
        return NativeCall<UObject*>(this, "APrimalBuff.BPGetPlayerFootStepSound()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BPHandleOnStartAltFire(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BPHandleOnStartAltFire(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalBuff.BPHandleOnStartAltFire(bool)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BPHandleOnStartFire(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BPHandleOnStartFire(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalBuff.BPHandleOnStartFire(bool)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BPHandleOnStopAltFire(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BPHandleOnStopAltFire(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalBuff.BPHandleOnStopAltFire(bool)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BPHandleOnStopFire(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPHandleOnStopFire(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalBuff.BPHandleOnStopFire(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.BPInstigatorAllowDinoTargetingRange(UE::Math::TVector<double>&,float,APrimalDinoChar
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPInstigatorAllowDinoTargetingRange(void* a0, float a1, void* a2) const
    {
        return NativeCall<void*, void*, float, void*>(this, "APrimalBuff.BPInstigatorAllowDinoTargetingRange(UE::Math::TVector<double>&,float,APrimalDinoCharacter*)", a0, a1, a2);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BPInstigatorDied(AActor*)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=53]]
    void BPInstigatorDied(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff.BPInstigatorDied(AActor*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPInstigatorDisconnected()
    // endereco: cache_pdb_25090264
    void BPInstigatorDisconnected() const
    {
        NativeCall<void>(this, "APrimalBuff.BPInstigatorDisconnected()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BPInstigatorLocalPossessed(AShooterPlayerController*)
    // endereco: cache_pdb_25090264
    void BPInstigatorLocalPossessed(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff.BPInstigatorLocalPossessed(AShooterPlayerController*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BPInstigatorPossessed(AController*)
    // endereco: cache_pdb_25090264
    void BPInstigatorPossessed(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff.BPInstigatorPossessed(AController*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPInstigatorReceivedKillingDamage()
    // endereco: cache_pdb_25090264
    void BPInstigatorReceivedKillingDamage() const
    {
        NativeCall<void>(this, "APrimalBuff.BPInstigatorReceivedKillingDamage()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BPInstigatorSleeped(bool)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=52+chamadores=2]]
    void BPInstigatorSleeped(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalBuff.BPInstigatorSleeped(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPInstigatorStartedRiding()
    // endereco: cache_pdb_25090264
    void BPInstigatorStartedRiding() const
    {
        NativeCall<void>(this, "APrimalBuff.BPInstigatorStartedRiding()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BPInstigatorStoppedRiding(APrimalDinoCharacter*)
    // endereco: cache_pdb_25090264
    void BPInstigatorStoppedRiding(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff.BPInstigatorStoppedRiding(APrimalDinoCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPInstigatorUnpossessed()
    // endereco: cache_pdb_25090264
    void BPInstigatorUnpossessed() const
    {
        NativeCall<void>(this, "APrimalBuff.BPInstigatorUnpossessed()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPInterceptWeaponToggle()
    // endereco: cache_pdb_25090264
    bool BPInterceptWeaponToggle() const
    {
        return NativeCall<bool>(this, "APrimalBuff.BPInterceptWeaponToggle()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPIsCharacterHardAttached()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=61]]
    bool BPIsCharacterHardAttached() const
    {
        return NativeCall<bool>(this, "APrimalBuff.BPIsCharacterHardAttached()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.BPModifyAimOffsetNoTarget(UE::Math::TRotator<double>&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPModifyAimOffsetNoTarget(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff.BPModifyAimOffsetNoTarget(UE::Math::TRotator<double>&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPModifyArmorValue(UPrimalItem*,float)
    // endereco: casamento de bytes com a build de referencia
    float BPModifyArmorValue(void* a0, float a1) const
    {
        return NativeCall<float, void*, float>(this, "APrimalBuff.BPModifyArmorValue(UPrimalItem*,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.BPModifyPlayerBoneModifiers(TArray<FBoneModifier,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPModifyPlayerBoneModifiers(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff.BPModifyPlayerBoneModifiers(TArray<FBoneModifier,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BPNofityMontagePlay(UAnimMontage*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BPNofityMontagePlay(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff.BPNofityMontagePlay(UAnimMontage*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPNotifyBuffWeaponFired()
    // endereco: casamento de bytes com a build de referencia
    void BPNotifyBuffWeaponFired() const
    {
        NativeCall<void>(this, "APrimalBuff.BPNotifyBuffWeaponFired()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BPNotifyExperienceGained(float,float,EXPType::Type)
    // endereco: casamento de bytes com a build de referencia
    void BPNotifyExperienceGained(float a0, float a1, int a2) const
    {
        NativeCall<void, float, float, int>(this, "APrimalBuff.BPNotifyExperienceGained(float,float,EXPType::Type)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPNotifyInstigatorLevelUp()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPNotifyInstigatorLevelUp() const
    {
        NativeCall<void>(this, "APrimalBuff.BPNotifyInstigatorLevelUp()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPNotifyLevelUpAvailable()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BPNotifyLevelUpAvailable() const
    {
        NativeCall<void>(this, "APrimalBuff.BPNotifyLevelUpAvailable()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BPNotifyOtherBuffActivated(APrimalBuff*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=53]]
    void BPNotifyOtherBuffActivated(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff.BPNotifyOtherBuffActivated(APrimalBuff*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BPNotifyOtherBuffActivatedToThisBuffClass(APrimalBuff*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=53]]
    void BPNotifyOtherBuffActivatedToThisBuffClass(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff.BPNotifyOtherBuffActivatedToThisBuffClass(APrimalBuff*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BPNotifyOtherBuffDeactivated(APrimalBuff*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BPNotifyOtherBuffDeactivated(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff.BPNotifyOtherBuffDeactivated(APrimalBuff*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BPNotifyPreventDismounting(APrimalDinoCharacter*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPNotifyPreventDismounting(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff.BPNotifyPreventDismounting(APrimalDinoCharacter*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BPOnAOEBuffAdded(APrimalBuff*,APrimalCharacter*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPOnAOEBuffAdded(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalBuff.BPOnAOEBuffAdded(APrimalBuff*,APrimalCharacter*)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BPOnAmmoConsummedFromAltInventory(float,float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPOnAmmoConsummedFromAltInventory(float a0, float a1) const
    {
        NativeCall<void, float, float>(this, "APrimalBuff.BPOnAmmoConsummedFromAltInventory(float,float)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPOnDestroyInstigator()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=45]]
    void BPOnDestroyInstigator() const
    {
        NativeCall<void>(this, "APrimalBuff.BPOnDestroyInstigator()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BPOnHexagonCountChanged(int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPOnHexagonCountChanged(int a0) const
    {
        NativeCall<void, int>(this, "APrimalBuff.BPOnHexagonCountChanged(int)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BPOnInstigatorLootedCrate(APrimalStructureItemContainer_SupplyCrate*)
    // endereco: casamento de bytes com a build de referencia
    void BPOnInstigatorLootedCrate(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff.BPOnInstigatorLootedCrate(APrimalStructureItemContainer_SupplyCrate*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.BPOnInstigatorMovementModeChangedNotify(EMovementMode,unsignedchar,EMovementMode,uns
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOnInstigatorMovementModeChangedNotify(int a0, unsigned char a1, int a2, unsigned char a3) const
    {
        return NativeCall<void*, int, unsigned char, int, unsigned char>(this, "APrimalBuff.BPOnInstigatorMovementModeChangedNotify(EMovementMode,unsignedchar,EMovementMode,unsignedchar)", a0, a1, a2, a3);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BPOnPlayerShoulderMountDinoChange(bool,APrimalDinoCharacter*,bool)
    // endereco: casamento de bytes com a build de referencia
    void BPOnPlayerShoulderMountDinoChange(bool a0, void* a1, bool a2) const
    {
        NativeCall<void, bool, void*, bool>(this, "APrimalBuff.BPOnPlayerShoulderMountDinoChange(bool,APrimalDinoCharacter*,bool)", a0, a1, a2);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BPOnPreventedFiringDisabledWeapon(AShooterWeapon*,FName)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPOnPreventedFiringDisabledWeapon(void* a0, unsigned long long a1) const
    {
        NativeCall<void, void*, unsigned long long>(this, "APrimalBuff.BPOnPreventedFiringDisabledWeapon(AShooterWeapon*,FName)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BPOnStacksAdded(int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPOnStacksAdded(int a0) const
    {
        NativeCall<void, int>(this, "APrimalBuff.BPOnStacksAdded(int)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BPOnStacksUpdated(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPOnStacksUpdated(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalBuff.BPOnStacksUpdated(bool)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BPOnTamedWildDino(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void BPOnTamedWildDino(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff.BPOnTamedWildDino(APrimalDinoCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPOverrideActorForTargetingTooltip()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    UObject* BPOverrideActorForTargetingTooltip() const
    {
        return NativeCall<UObject*>(this, "APrimalBuff.BPOverrideActorForTargetingTooltip()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPOverrideAoEBuffDamageCauser()
    // endereco: casamento de bytes com a build de referencia
    UObject* BPOverrideAoEBuffDamageCauser() const
    {
        return NativeCall<UObject*>(this, "APrimalBuff.BPOverrideAoEBuffDamageCauser()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPOverrideBuffToGiveOnDeactivation()
    // endereco: casamento de bytes com a build de referencia
    UClass* BPOverrideBuffToGiveOnDeactivation() const
    {
        return NativeCall<UClass*>(this, "APrimalBuff.BPOverrideBuffToGiveOnDeactivation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.BPOverrideCameraArmLength(FPrimalCameraParams&,float,float&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=256+bytes40+grafo=6/6]]
    BrzPonteiro BPOverrideCameraArmLength(void* a0, float a1, void* a2) const
    {
        return NativeCall<void*, void*, float, void*>(this, "APrimalBuff.BPOverrideCameraArmLength(FPrimalCameraParams&,float,float&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.BPOverrideCameraArmLengthInterpParams(FPrimalCameraProfile&,FPrimalCameraParams&,FPr
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOverrideCameraArmLengthInterpParams(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "APrimalBuff.BPOverrideCameraArmLengthInterpParams(FPrimalCameraProfile&,FPrimalCameraParams&,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.BPOverrideCameraDesiredPivotLocation(UE::Math::TVector<double>,UE::Math::TVector<dou
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPOverrideCameraDesiredPivotLocation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalBuff.BPOverrideCameraDesiredPivotLocation(UE::Math::TVector<double>,UE::Math::TVector<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.BPOverrideCameraPivotLocationInterpParams(FPrimalCameraParams&,FPrimalCameraPivotZIn
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOverrideCameraPivotLocationInterpParams(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8, void* a9, void* a10) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, void*, void*, void*, void*, void*, void*>(this, "APrimalBuff.BPOverrideCameraPivotLocationInterpParams(FPrimalCameraParams&,FPrimalCameraPivotZInterpOverrides&,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&,FPrimalCameraInterpParams&)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.BPOverrideCameraViewTarget(FName,UE::Math::TVector<double>,UE::Math::TRotator<double
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPOverrideCameraViewTarget(unsigned long long a0, void* a1, void* a2, float a3, void* a4, void* a5, void* a6, void* a7, void* a8, void* a9) const
    {
        return NativeCall<void*, unsigned long long, void*, void*, float, void*, void*, void*, void*, void*, void*>(this, "APrimalBuff.BPOverrideCameraViewTarget(FName,UE::Math::TVector<double>,UE::Math::TRotator<double>,float,bool&,UE::Math::TVector<double>&,bool&,UE::Math::TRotator<double>&,bool&,float&)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BPOverrideCharacterLocalControlZInterpSpeed(float&)
    // endereco: casamento de bytes com a build de referencia
    void BPOverrideCharacterLocalControlZInterpSpeed(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff.BPOverrideCharacterLocalControlZInterpSpeed(float&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.BPOverrideCuddleFoodTypes(TArray<TSubclassOf<UPrimalItem>,TSizedDefaultAllocator<32>
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPOverrideCuddleFoodTypes(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff.BPOverrideCuddleFoodTypes(TArray<TSubclassOf<UPrimalItem>,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPOverrideIsImprintPlayer(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    bool BPOverrideIsImprintPlayer(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBuff.BPOverrideIsImprintPlayer(APrimalDinoCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.BPOverrideIsNetRelevantFor(APlayerController*,AActor*,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOverrideIsNetRelevantFor(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalBuff.BPOverrideIsNetRelevantFor(APlayerController*,AActor*,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPOverrideMaxInventoryAccessDistance(UPrimalInventoryComponent*,APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    float BPOverrideMaxInventoryAccessDistance(void* a0, void* a1) const
    {
        return NativeCall<float, void*, void*>(this, "APrimalBuff.BPOverrideMaxInventoryAccessDistance(UPrimalInventoryComponent*,APrimalCharacter*)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPOverrideMaxUseDistance(AActor*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    float BPOverrideMaxUseDistance(void* a0) const
    {
        return NativeCall<float, void*>(this, "APrimalBuff.BPOverrideMaxUseDistance(AActor*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPOverrideRightShoulderOnPlayer(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool BPOverrideRightShoulderOnPlayer(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBuff.BPOverrideRightShoulderOnPlayer(APlayerController*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPOverrideTalkerCharacter()
    // endereco: casamento de bytes com a build de referencia
    UObject* BPOverrideTalkerCharacter() const
    {
        return NativeCall<UObject*>(this, "APrimalBuff.BPOverrideTalkerCharacter()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.BPOverrideTargetStructureSettingsDamageAdjuster(float,AActor*,AController*,AActor*,T
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOverrideTargetStructureSettingsDamageAdjuster(float a0, void* a1, void* a2, void* a3, void* a4, void* a5) const
    {
        return NativeCall<void*, float, void*, void*, void*, void*, void*>(this, "APrimalBuff.BPOverrideTargetStructureSettingsDamageAdjuster(float,AActor*,AController*,AActor*,TSubclassOf<UDamageType>,float&)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPOverrideTargetingDesire(AActor*,float)
    // endereco: casamento de bytes com a build de referencia
    float BPOverrideTargetingDesire(void* a0, float a1) const
    {
        return NativeCall<float, void*, float>(this, "APrimalBuff.BPOverrideTargetingDesire(AActor*,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.BPOverrideValuesToAddPerSecond(float,EPrimalCharacterStatusValue::Type)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOverrideValuesToAddPerSecond(float a0, int a1) const
    {
        return NativeCall<void*, float, int>(this, "APrimalBuff.BPOverrideValuesToAddPerSecond(float,EPrimalCharacterStatusValue::Type)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.BPOverrideWeaponBob(UE::Math::TVector<double>&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPOverrideWeaponBob(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff.BPOverrideWeaponBob(UE::Math::TVector<double>&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPPassHarvestExperienceToActor(AActor*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPPassHarvestExperienceToActor(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBuff.BPPassHarvestExperienceToActor(AActor*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BPPreClaimWildFollower(AShooterPlayerController*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPPreClaimWildFollower(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff.BPPreClaimWildFollower(AShooterPlayerController*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BPPreSerializeForInstigator(bool)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=52+chamadores=2]]
    void BPPreSerializeForInstigator(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalBuff.BPPreSerializeForInstigator(bool)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BPPreServerUpload(AShooterPlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BPPreServerUpload(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff.BPPreServerUpload(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.BPPreSetupForInstigator(AActor*)
    // endereco: casamento de bytes com a build de referencia
    void BPPreSetupForInstigator(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff.BPPreSetupForInstigator(AActor*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPPreventAddingOtherBuff(TSubclassOf<APrimalBuff>)
    // endereco: casamento de bytes com a build de referencia
    bool BPPreventAddingOtherBuff(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBuff.BPPreventAddingOtherBuff(TSubclassOf<APrimalBuff>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.BPPreventCharacterLanding(UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Ma
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPPreventCharacterLanding(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "APrimalBuff.BPPreventCharacterLanding(UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>&)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPPreventCharacterStatusValueModifiers(APrimalCharacter*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPPreventCharacterStatusValueModifiers(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBuff.BPPreventCharacterStatusValueModifiers(APrimalCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPPreventEquipWeapons()
    // endereco: casamento de bytes com a build de referencia
    bool BPPreventEquipWeapons() const
    {
        return NativeCall<bool>(this, "APrimalBuff.BPPreventEquipWeapons()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.BPPreventFallDamage(FHitResult&,float,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPPreventFallDamage(void* a0, float a1, bool a2) const
    {
        return NativeCall<void*, void*, float, bool>(this, "APrimalBuff.BPPreventFallDamage(FHitResult&,float,bool)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPPreventFirstPerson()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPPreventFirstPerson() const
    {
        return NativeCall<bool>(this, "APrimalBuff.BPPreventFirstPerson()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPPreventOnStartJump()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool BPPreventOnStartJump() const
    {
        return NativeCall<bool>(this, "APrimalBuff.BPPreventOnStartJump()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPPreventRidingInstigator(APrimalCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=66]]
    bool BPPreventRidingInstigator(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBuff.BPPreventRidingInstigator(APrimalCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPPreventThrowingItem(UPrimalItem*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool BPPreventThrowingItem(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBuff.BPPreventThrowingItem(UPrimalItem*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BPReactivateWithDamageCauser(AActor*,AActor*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPReactivateWithDamageCauser(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalBuff.BPReactivateWithDamageCauser(AActor*,AActor*)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPResetBuffStart()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=45]]
    void BPResetBuffStart() const
    {
        NativeCall<void>(this, "APrimalBuff.BPResetBuffStart()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.BPSetupForInstigator(AActor*)
    // endereco: casamento de bytes com a build de referencia
    void BPSetupForInstigator(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff.BPSetupForInstigator(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.BPShouldBlockLocalChatMessage(FString&,EChatSendMode::Type,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPShouldBlockLocalChatMessage(const FString& a0, int a1, int a2) const
    {
        return NativeCall<void*, void*, int, int>(this, "APrimalBuff.BPShouldBlockLocalChatMessage(FString&,EChatSendMode::Type,int)", const_cast<FString*>(&a0), a1, a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro BPShouldBlockLocalChatMessage(FString* a0, int a1, int a2) const
    { return BPShouldBlockLocalChatMessage(*a0, a1, a2); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BPUnstasis()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPUnstasis() const
    {
        NativeCall<void>(this, "APrimalBuff.BPUnstasis()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.BPValueToAddPerSecondIsManualModification(EPrimalCharacterStatusValue::Type)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPValueToAddPerSecondIsManualModification(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalBuff.BPValueToAddPerSecondIsManualModification(EPrimalCharacterStatusValue::Type)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BP_OnOwnerDealtDamage(AActor*,float,FDamageEvent&)
    // endereco: casamento de bytes com a build de referencia
    void BP_OnOwnerDealtDamage(void* a0, float a1, void* a2) const
    {
        NativeCall<void, void*, float, void*>(this, "APrimalBuff.BP_OnOwnerDealtDamage(AActor*,float,FDamageEvent&)", a0, a1, a2);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BP_OnRiderChangeWeapons(AShooterCharacter*,UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    void BP_OnRiderChangeWeapons(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalBuff.BP_OnRiderChangeWeapons(AShooterCharacter*,UPrimalItem*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.BP_OverrideCharacterSwimmingVelocity(UE::Math::TVector<double>&,UE::Math::TVector<do
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BP_OverrideCharacterSwimmingVelocity(void* a0, void* a1, void* a2, void* a3, float a4) const
    {
        return NativeCall<void*, void*, void*, void*, void*, float>(this, "APrimalBuff.BP_OverrideCharacterSwimmingVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float&,float&,float)", a0, a1, a2, a3, a4);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BP_OverrideMoveForwardInput(float)
    // endereco: casamento de bytes com a build de referencia
    float BP_OverrideMoveForwardInput(float a0) const
    {
        return NativeCall<float, float>(this, "APrimalBuff.BP_OverrideMoveForwardInput(float)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BP_OverrideMoveRightInput(float)
    // endereco: casamento de bytes com a build de referencia
    float BP_OverrideMoveRightInput(float a0) const
    {
        return NativeCall<float, float>(this, "APrimalBuff.BP_OverrideMoveRightInput(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "APrimalBuff.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.BuffAdjustDamage(float,FHitResult&,AController*,AActor*,TSubclassOf<UDamageType>)
    // endereco: casamento de bytes com a build de referencia
    float BuffAdjustDamage(float a0, void* a1, void* a2, void* a3, void* a4) const
    {
        return NativeCall<float, float, void*, void*, void*, void*>(this, "APrimalBuff.BuffAdjustDamage(float,FHitResult&,AController*,AActor*,TSubclassOf<UDamageType>)", a0, a1, a2, a3, a4);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.BuffOverrideInventoryAccessInput(AController*,bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BuffOverrideInventoryAccessInput(void* a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "APrimalBuff.BuffOverrideInventoryAccessInput(AController*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.BuffPostAdjustDamage(float,FHitResult&,AController*,AActor*,TSubclassOf<UDamageType>
    // endereco: casamento de bytes com a build de referencia
    void BuffPostAdjustDamage(float a0, void* a1, void* a2, void* a3, void* a4) const
    {
        NativeCall<void, float, void*, void*, void*, void*>(this, "APrimalBuff.BuffPostAdjustDamage(float,FHitResult&,AController*,AActor*,TSubclassOf<UDamageType>)", a0, a1, a2, a3, a4);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BuffTickClient(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BuffTickClient(float a0) const
    {
        NativeCall<void, float>(this, "APrimalBuff.BuffTickClient(float)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.BuffTickServer(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BuffTickServer(float a0) const
    {
        NativeCall<void, float>(this, "APrimalBuff.BuffTickServer(float)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.CalculateNumStacksFromLifetime()
    // endereco: thunk
    int CalculateNumStacksFromLifetime() const
    {
        return NativeCall<int>(this, "APrimalBuff.CalculateNumStacksFromLifetime()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.ClientReceiveRelatedMissionData_Implementation(AMissionType*,bool)
    // endereco: cache_pdb_25090264
    void ClientReceiveRelatedMissionData_Implementation(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "APrimalBuff.ClientReceiveRelatedMissionData_Implementation(AMissionType*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.Deactivate()
    // endereco: casamento de bytes com a build de referencia
    void Deactivate() const
    {
        NativeCall<void>(this, "APrimalBuff.Deactivate()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.Destroyed()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=100+grafo=3/3]]
    void Destroyed() const
    {
        NativeCall<void>(this, "APrimalBuff.Destroyed()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.DinoInstigatorClearedBotRider(APrimalBotCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=53]]
    void DinoInstigatorClearedBotRider(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff.DinoInstigatorClearedBotRider(APrimalBotCharacter*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.DinoInstigatorClearedRider(AShooterCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=53]]
    void DinoInstigatorClearedRider(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff.DinoInstigatorClearedRider(AShooterCharacter*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.DinoInstigatorPreReceivedRider(AShooterCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=53]]
    void DinoInstigatorPreReceivedRider(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff.DinoInstigatorPreReceivedRider(AShooterCharacter*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.DinoInstigatorReceivedBotRider(APrimalBotCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void DinoInstigatorReceivedBotRider(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff.DinoInstigatorReceivedBotRider(APrimalBotCharacter*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.DinoInstigatorReceivedRider(AShooterCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void DinoInstigatorReceivedRider(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff.DinoInstigatorReceivedRider(AShooterCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.DinoRefreshColorization(TArray<FLinearColor,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    void DinoRefreshColorization(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff.DinoRefreshColorization(TArray<FLinearColor,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.DirectSetBuffDuration(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void DirectSetBuffDuration(float a0) const
    {
        NativeCall<void, float>(this, "APrimalBuff.DirectSetBuffDuration(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.DoTeleporterHaptics(APlayerController*,UE::Math::TVector<double>&,float)
    // endereco: thunk
    BrzPonteiro DoTeleporterHaptics(void* a0, void* a1, float a2) const
    {
        return NativeCall<void*, void*, void*, float>(this, "APrimalBuff.DoTeleporterHaptics(APlayerController*,UE::Math::TVector<double>&,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.DrawBuffFloatingHUD(int,AShooterHUD*,float,float,float)
    // endereco: casamento de bytes com a build de referencia
    void DrawBuffFloatingHUD(int a0, void* a1, float a2, float a3, float a4) const
    {
        NativeCall<void, int, void*, float, float, float>(this, "APrimalBuff.DrawBuffFloatingHUD(int,AShooterHUD*,float,float,float)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.EnableTickFunction()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=31]]
    BrzPonteiro EnableTickFunction() const
    {
        return NativeCall<void*>(this, "APrimalBuff.EnableTickFunction()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.ExcludeAoEActor(AActor*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=1308+bytes40+grafo=8/8]]
    bool ExcludeAoEActor(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBuff.ExcludeAoEActor(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.ExcludePostProcessBlendableMaterial(UMaterialInterface*)
    // endereco: cache_pdb_25090264
    bool ExcludePostProcessBlendableMaterial(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBuff.ExcludePostProcessBlendableMaterial(UMaterialInterface*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.ExtendBuffTime(float)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=649+grafo=13/13]]
    bool ExtendBuffTime(float a0) const
    {
        return NativeCall<bool, float>(this, "APrimalBuff.ExtendBuffTime(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.FinalLoadedFromSaveGame()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=320]]
    void FinalLoadedFromSaveGame() const
    {
        NativeCall<void>(this, "APrimalBuff.FinalLoadedFromSaveGame()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.GetAlternateMultiUseCategory()
    // endereco: casamento de bytes com a build de referencia
    int GetAlternateMultiUseCategory() const
    {
        return NativeCall<int>(this, "APrimalBuff.GetAlternateMultiUseCategory()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.GetBuffDescription()
    // endereco: casamento de bytes com a build de referencia
    void GetBuffDescription(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalBuff.GetBuffDescription()", retorno);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.GetBuffPOIs(TArray<FPointOfInterestData_ForCompanion,TSizedDefaultAllocator<32>>&)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetBuffPOIs(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff.GetBuffPOIs(TArray<FPointOfInterestData_ForCompanion,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.GetBuffPostprocessIntensity()
    // endereco: cache_pdb_25090264
    float GetBuffPostprocessIntensity() const
    {
        return NativeCall<float>(this, "APrimalBuff.GetBuffPostprocessIntensity()");
    }

    // jogo_confirmou_dump
    //   APrimalBuff.GetBuffPostprocessMaterial(AShooterPlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=729+grafo=5/5]]
    UMaterialInstanceDynamic* GetBuffPostprocessMaterial(void* a0) const
    {
        return NativeCall<UMaterialInstanceDynamic*, void*>(this, "APrimalBuff.GetBuffPostprocessMaterial(AShooterPlayerController*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.GetBuffTickClientDeltaTime()
    // endereco: casamento de bytes com a build de referencia
    float GetBuffTickClientDeltaTime() const
    {
        return NativeCall<float>(this, "APrimalBuff.GetBuffTickClientDeltaTime()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.GetBuffTickServerDeltaTime()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=77]]
    float GetBuffTickServerDeltaTime() const
    {
        return NativeCall<float>(this, "APrimalBuff.GetBuffTickServerDeltaTime()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.GetBuffType()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=111+chamadores=2]]
    int GetBuffType() const
    {
        return NativeCall<int>(this, "APrimalBuff.GetBuffType()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.GetBuffType_Implementation()
    // endereco: casamento de bytes com a build de referencia
    int GetBuffType_Implementation() const
    {
        return NativeCall<int>(this, "APrimalBuff.GetBuffType_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.GetCustomTooltip(UE::Math::TVector2<double>&,UE::Math::TVector2<double>&,UE::Math::T
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetCustomTooltip(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalBuff.GetCustomTooltip(UE::Math::TVector2<double>&,UE::Math::TVector2<double>&,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.GetDeactivationTime()
    // endereco: cache_pdb_25090264
    double GetDeactivationTime() const
    {
        return NativeCall<double>(this, "APrimalBuff.GetDeactivationTime()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.GetDebugInfoString()
    // endereco: casamento de bytes com a build de referencia
    void GetDebugInfoString(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalBuff.GetDebugInfoString()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.GetEnabledGestationMonitoringTargets()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void GetEnabledGestationMonitoringTargets(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalBuff.GetEnabledGestationMonitoringTargets()", retorno);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.GetForcedBuffAimOverride(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetForcedBuffAimOverride(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalBuff.GetForcedBuffAimOverride(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.GetForcedBuffAimOverride_Implementation(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetForcedBuffAimOverride_Implementation(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalBuff.GetForcedBuffAimOverride_Implementation(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.GetGravityZScale(float)
    // endereco: cache_pdb_25090264
    float GetGravityZScale(float a0) const
    {
        return NativeCall<float, float>(this, "APrimalBuff.GetGravityZScale(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.GetHUDElements(APlayerController*,TArray<FHUDElement,TSizedDefaultAllocator<32>>&)
    // endereco: cache_pdb_25090264
    void GetHUDElements(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalBuff.GetHUDElements(APlayerController*,TArray<FHUDElement,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.GetHUDProgressBarPercent()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=113]]
    float GetHUDProgressBarPercent() const
    {
        return NativeCall<float>(this, "APrimalBuff.GetHUDProgressBarPercent()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.GetInstigatorPlayerController()
    // endereco: casamento de bytes com a build de referencia
    UObject* GetInstigatorPlayerController() const
    {
        return NativeCall<UObject*>(this, "APrimalBuff.GetInstigatorPlayerController()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    void GetLifetimeReplicatedProps(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.GetNumStacks()
    // endereco: thunk
    int GetNumStacks() const
    {
        return NativeCall<int>(this, "APrimalBuff.GetNumStacks()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.GetOverrideWaterJumpVelocity(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    float GetOverrideWaterJumpVelocity(float a0) const
    {
        return NativeCall<float, float>(this, "APrimalBuff.GetOverrideWaterJumpVelocity(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.GetRemainingTime(float)
    // endereco: casamento de bytes com a build de referencia
    float GetRemainingTime(float a0) const
    {
        return NativeCall<float, float>(this, "APrimalBuff.GetRemainingTime(float)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.GetRemainingTimeInTopStack()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=144]]
    float GetRemainingTimeInTopStack() const
    {
        return NativeCall<float>(this, "APrimalBuff.GetRemainingTimeInTopStack()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.GetSkillActivationCost(FName)
    // endereco: casamento de bytes com a build de referencia
    float GetSkillActivationCost(unsigned long long a0) const
    {
        return NativeCall<float, unsigned long long>(this, "APrimalBuff.GetSkillActivationCost(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.GetSkillActivationCost_Implementation(FName)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetSkillActivationCost_Implementation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalBuff.GetSkillActivationCost_Implementation(FName)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.GetStackDuration()
    // endereco: cache_pdb_25090264
    float GetStackDuration() const
    {
        return NativeCall<float>(this, "APrimalBuff.GetStackDuration()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.GetTimeLeft()
    // endereco: casamento de bytes com a build de referencia
    float GetTimeLeft() const
    {
        return NativeCall<float>(this, "APrimalBuff.GetTimeLeft()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.GetUniqueName()
    // endereco: casamento de bytes com a build de referencia
    void GetUniqueName(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalBuff.GetUniqueName()", retorno);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.GetValueToAddPerSecond(TEnumAsByte<EPrimalCharacterStatusValue::Type>)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetValueToAddPerSecond(unsigned char a0) const
    {
        return NativeCall<void*, unsigned char>(this, "APrimalBuff.GetValueToAddPerSecond(TEnumAsByte<EPrimalCharacterStatusValue::Type>)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.HideBuffFromHUD()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool HideBuffFromHUD() const
    {
        return NativeCall<bool>(this, "APrimalBuff.HideBuffFromHUD()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.HideBuffFromHUD_Implementation()
    // endereco: cache_pdb_25090264
    bool HideBuffFromHUD_Implementation() const
    {
        return NativeCall<bool>(this, "APrimalBuff.HideBuffFromHUD_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.InitializeStackDuration()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=22]]
    void InitializeStackDuration() const
    {
        NativeCall<void>(this, "APrimalBuff.InitializeStackDuration()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.InstigatorDie()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void InstigatorDie() const
    {
        NativeCall<void>(this, "APrimalBuff.InstigatorDie()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.InstigatorJumped()
    // endereco: cache_pdb_25090264
    void InstigatorJumped() const
    {
        NativeCall<void>(this, "APrimalBuff.InstigatorJumped()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.InterceptInstigatorPlayerEmoteAnim(UAnimMontage*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool InterceptInstigatorPlayerEmoteAnim(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBuff.InterceptInstigatorPlayerEmoteAnim(UAnimMontage*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.IsGodModeBuff()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsGodModeBuff() const
    {
        return NativeCall<void*>(this, "APrimalBuff.IsGodModeBuff()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.IsNetRelevantFor(AActor*,AActor*,UE::Math::TVector<double>&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=95]]
    bool IsNetRelevantFor(void* a0, void* a1, void* a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "APrimalBuff.IsNetRelevantFor(AActor*,AActor*,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.IsOwningClient()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool IsOwningClient() const
    {
        return NativeCall<bool>(this, "APrimalBuff.IsOwningClient()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.IsValidUnStasisCaster()
    // classe: a funcao mora em UPrimalActor, e APrimalBuff herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    bool IsValidUnStasisCaster() const
    {
        return NativeCall<bool>(this, "UPrimalActor.IsValidUnStasisCaster()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.ModifyBuffMPCValues(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ModifyBuffMPCValues(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalBuff.ModifyBuffMPCValues(bool)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.Multi_SyncBuffLifetime(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void Multi_SyncBuffLifetime(float a0) const
    {
        NativeCall<void, float>(this, "APrimalBuff.Multi_SyncBuffLifetime(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.Multi_SyncBuffLifetime_Implementation(float)
    // endereco: cache_pdb_25090264
    void Multi_SyncBuffLifetime_Implementation(float a0) const
    {
        NativeCall<void, float>(this, "APrimalBuff.Multi_SyncBuffLifetime_Implementation(float)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.NetDeactivate()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void NetDeactivate() const
    {
        NativeCall<void>(this, "APrimalBuff.NetDeactivate()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.NetResetBuffStart()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=45]]
    void NetResetBuffStart() const
    {
        NativeCall<void>(this, "APrimalBuff.NetResetBuffStart()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.NetResetBuffStart_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=40]]
    void NetResetBuffStart_Implementation() const
    {
        NativeCall<void>(this, "APrimalBuff.NetResetBuffStart_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.NetSyncBuffLifetime()
    // endereco: cache_pdb_25090264
    void NetSyncBuffLifetime() const
    {
        NativeCall<void>(this, "APrimalBuff.NetSyncBuffLifetime()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.NetUpdateStackingBuffLifetime_Implementation(float)
    // endereco: cache_pdb_25090264
    BrzPonteiro NetUpdateStackingBuffLifetime_Implementation(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalBuff.NetUpdateStackingBuffLifetime_Implementation(float)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.NotifyBumpedPawn(APrimalCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=128]]
    void NotifyBumpedPawn(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff.NotifyBumpedPawn(APrimalCharacter*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.NotifyDamage(float,TSubclassOf<UDamageType>,AController*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void NotifyDamage(float a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, float, void*, void*, void*>(this, "APrimalBuff.NotifyDamage(float,TSubclassOf<UDamageType>,AController*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.OnBuffLifetimeUpdated()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=76]]
    void OnBuffLifetimeUpdated() const
    {
        NativeCall<void>(this, "APrimalBuff.OnBuffLifetimeUpdated()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.OnCapsuleHitCallback(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,UE::Math::TVe
    // endereco: casamento de bytes com a build de referencia
    void OnCapsuleHitCallback(void* a0, void* a1, void* a2, void* a3, void* a4) const
    {
        NativeCall<void, void*, void*, void*, void*, void*>(this, "APrimalBuff.OnCapsuleHitCallback(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,UE::Math::TVector<double>,FHitResult&)", a0, a1, a2, a3, a4);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.OnCarryCharacter(APrimalCharacter*,APrimalCharacter*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void OnCarryCharacter(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalBuff.OnCarryCharacter(APrimalCharacter*,APrimalCharacter*)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.OnClearCarriedCharacter(APrimalCharacter*,APrimalCharacter*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void OnClearCarriedCharacter(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalBuff.OnClearCarriedCharacter(APrimalCharacter*,APrimalCharacter*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.OnInputEvent(APrimalCharacter*,EPrimalCharacterInputType::Type)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnInputEvent(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "APrimalBuff.OnInputEvent(APrimalCharacter*,EPrimalCharacterInputType::Type)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.OnInstigatorDeathHarvesting()
    // endereco: casamento de bytes com a build de referencia
    void OnInstigatorDeathHarvesting() const
    {
        NativeCall<void>(this, "APrimalBuff.OnInstigatorDeathHarvesting()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.OnItemTraitActivated(FBPNetExecParams&)
    // endereco: casamento de bytes com a build de referencia
    void OnItemTraitActivated(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff.OnItemTraitActivated(FBPNetExecParams&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.OnOwnerTeleported()
    // endereco: cache_pdb_25090264
    void OnOwnerTeleported() const
    {
        NativeCall<void>(this, "APrimalBuff.OnOwnerTeleported()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.OnStacksRemoved()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnStacksRemoved() const
    {
        return NativeCall<void*>(this, "APrimalBuff.OnStacksRemoved()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.OverrideAttackerDamageImpactFX(FName,APrimalCharacter*,APrimalCharacter*)
    // endereco: cache_pdb_25090264
    bool OverrideAttackerDamageImpactFX(unsigned long long a0, void* a1, void* a2) const
    {
        return NativeCall<bool, unsigned long long, void*, void*>(this, "APrimalBuff.OverrideAttackerDamageImpactFX(FName,APrimalCharacter*,APrimalCharacter*)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.OverrideAttackerDamageImpactFXAsVictim(FName,APrimalCharacter*,APrimalCharacter*)
    // endereco: cache_pdb_25090264
    bool OverrideAttackerDamageImpactFXAsVictim(unsigned long long a0, void* a1, void* a2) const
    {
        return NativeCall<bool, unsigned long long, void*, void*>(this, "APrimalBuff.OverrideAttackerDamageImpactFXAsVictim(FName,APrimalCharacter*,APrimalCharacter*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.OverrideCharacterFlyingVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=62]]
    void OverrideCharacterFlyingVelocity(void* a0, void* a1, float a2) const
    {
        NativeCall<void, void*, void*, float>(this, "APrimalBuff.OverrideCharacterFlyingVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.OverrideCharacterNewFallVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void OverrideCharacterNewFallVelocity(void* a0, void* a1, float a2) const
    {
        NativeCall<void, void*, void*, float>(this, "APrimalBuff.OverrideCharacterNewFallVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.OverrideCharacterSwimmingVelocity(UE::Math::TVector<double>&,UE::Math::TVector<doubl
    // endereco: casamento de bytes com a build de referencia
    void OverrideCharacterSwimmingVelocity(void* a0, void* a1, void* a2, void* a3, float a4) const
    {
        NativeCall<void, void*, void*, void*, void*, float>(this, "APrimalBuff.OverrideCharacterSwimmingVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float&,float&,float)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.OverrideCharacterWalkingVelocity(UE::Math::TVector<double>&,float&,float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=62]]
    void OverrideCharacterWalkingVelocity(void* a0, void* a1, float a2) const
    {
        NativeCall<void, void*, void*, float>(this, "APrimalBuff.OverrideCharacterWalkingVelocity(UE::Math::TVector<double>&,float&,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.PostProcessModifyBlendableMaterial(UMaterialInterface*,UMaterialInstanceDynamic*)
    // endereco: casamento de bytes com a build de referencia
    void PostProcessModifyBlendableMaterial(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalBuff.PostProcessModifyBlendableMaterial(UMaterialInterface*,UMaterialInstanceDynamic*)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.PreventActorTargeting(AActor*)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=141]]
    bool PreventActorTargeting(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBuff.PreventActorTargeting(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.PreventActorTargeting_Implementation(AActor*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=751]]
    bool PreventActorTargeting_Implementation(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBuff.PreventActorTargeting_Implementation(AActor*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.PreventBlockingWithShield()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool PreventBlockingWithShield() const
    {
        return NativeCall<bool>(this, "APrimalBuff.PreventBlockingWithShield()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.PreventCharacterLanding(UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math
    // endereco: casamento de bytes com a build de referencia
    bool PreventCharacterLanding(void* a0, void* a1, void* a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "APrimalBuff.PreventCharacterLanding(UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.PreventFlight()
    // endereco: cache_pdb_25090264
    BrzPonteiro PreventFlight() const
    {
        return NativeCall<void*>(this, "APrimalBuff.PreventFlight()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.PreventInstigatorAttack(int)
    // endereco: cache_pdb_25090264
    bool PreventInstigatorAttack(int a0) const
    {
        return NativeCall<bool, int>(this, "APrimalBuff.PreventInstigatorAttack(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.PreventInstigatorMovementMode(EMovementMode,unsignedchar)
    // endereco: cache_pdb_25090264
    BrzPonteiro PreventInstigatorMovementMode(int a0, unsigned char a1) const
    {
        return NativeCall<void*, int, unsigned char>(this, "APrimalBuff.PreventInstigatorMovementMode(EMovementMode,unsignedchar)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.PreventJump()
    // endereco: cache_pdb_25090264
    bool PreventJump() const
    {
        return NativeCall<bool>(this, "APrimalBuff.PreventJump()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.PreventRunning()
    // endereco: cache_pdb_25090264
    bool PreventRunning() const
    {
        return NativeCall<bool>(this, "APrimalBuff.PreventRunning()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.ProcessStaticPathing(bool)
    // endereco: cache_pdb_25090264
    void ProcessStaticPathing(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalBuff.ProcessStaticPathing(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.ReduceBuffTime(float)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=695+chamadores=2+grafo=14/14]]
    bool ReduceBuffTime(float a0) const
    {
        return NativeCall<bool, float>(this, "APrimalBuff.ReduceBuffTime(float)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.RefreshInstigatorPersistentBuffs(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void RefreshInstigatorPersistentBuffs(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "APrimalBuff.RefreshInstigatorPersistentBuffs(bool,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.ResetBuffStart(bool)
    // endereco: casamento de bytes com a build de referencia
    bool ResetBuffStart(bool a0) const
    {
        return NativeCall<bool, bool>(this, "APrimalBuff.ResetBuffStart(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.ServerRequestRelatedMissionData()
    // endereco: cache_pdb_25090264
    void ServerRequestRelatedMissionData() const
    {
        NativeCall<void>(this, "APrimalBuff.ServerRequestRelatedMissionData()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.ServerRequestRelatedMissionData_Implementation()
    // endereco: cache_pdb_25090264
    void ServerRequestRelatedMissionData_Implementation() const
    {
        NativeCall<void>(this, "APrimalBuff.ServerRequestRelatedMissionData_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.SetBuffCauser(AActor*)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=53]]
    void SetBuffCauser(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff.SetBuffCauser(AActor*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.SetStackDuration(float,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetStackDuration(float a0, bool a1) const
    {
        NativeCall<void, float, bool>(this, "APrimalBuff.SetStackDuration(float,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.SetStacks(int)
    // endereco: casamento de bytes com a build de referencia
    void SetStacks(int a0) const
    {
        NativeCall<void, int>(this, "APrimalBuff.SetStacks(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.SetValueToAddPerSecond(TEnumAsByte<EPrimalCharacterStatusValue::Type>,float)
    // endereco: cache_pdb_25090264
    BrzPonteiro SetValueToAddPerSecond(unsigned char a0, float a1) const
    {
        return NativeCall<void*, unsigned char, float>(this, "APrimalBuff.SetValueToAddPerSecond(TEnumAsByte<EPrimalCharacterStatusValue::Type>,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.SetupForInstigator()
    // endereco: casamento de bytes com a build de referencia
    void SetupForInstigator() const
    {
        NativeCall<void>(this, "APrimalBuff.SetupForInstigator()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.ShouldForceOwnerDedicatedMovementTickPerFrame()
    // endereco: cache_pdb_25090264
    bool ShouldForceOwnerDedicatedMovementTickPerFrame() const
    {
        return NativeCall<bool>(this, "APrimalBuff.ShouldForceOwnerDedicatedMovementTickPerFrame()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.Stasis()
    // endereco: casamento de bytes com a build de referencia
    void Stasis() const
    {
        NativeCall<void>(this, "APrimalBuff.Stasis()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.StaticAddBuff(TSubclassOf<APrimalBuff>,APrimalCharacter*,UPrimalItem*,AActor*,bool)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro StaticAddBuff(void* a0, void* a1, void* a2, void* a3, bool a4)
    {
        return NativeCall<void*, void**, void*, void*, void*, bool>(nullptr, "APrimalBuff.StaticAddBuff(TSubclassOf<APrimalBuff>,APrimalCharacter*,UPrimalItem*,AActor*,bool)", &a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.StaticAddBuffToSpectatorController(TSubclassOf<APrimalBuff>,AShooterPlayerController
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro StaticAddBuffToSpectatorController(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "APrimalBuff.StaticAddBuffToSpectatorController(TSubclassOf<APrimalBuff>,AShooterPlayerController*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.StaticRegisterNativesAPrimalBuff()
    // endereco: casamento de bytes com a build de referencia
    static void StaticRegisterNativesAPrimalBuff()
    {
        NativeCall<void>(nullptr, "APrimalBuff.StaticRegisterNativesAPrimalBuff()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "APrimalBuff.Tick(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.TryApplyStatusModifiersForInstigator()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryApplyStatusModifiersForInstigator() const
    {
        return NativeCall<void*>(this, "APrimalBuff.TryApplyStatusModifiersForInstigator()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff.Unstasis()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=73]]
    void Unstasis() const
    {
        NativeCall<void>(this, "APrimalBuff.Unstasis()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.UpdateAltInventoryState()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=45]]
    void UpdateAltInventoryState() const
    {
        NativeCall<void>(this, "APrimalBuff.UpdateAltInventoryState()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.UpdateAltInventoryStateAfterAmmoItemConsumption(int)
    // endereco: casamento de bytes com a build de referencia
    void UpdateAltInventoryStateAfterAmmoItemConsumption(int a0) const
    {
        NativeCall<void, int>(this, "APrimalBuff.UpdateAltInventoryStateAfterAmmoItemConsumption(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.UpdateBuffLifetime(float,bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void UpdateBuffLifetime(float a0, bool a1) const
    {
        NativeCall<void, float, bool>(this, "APrimalBuff.UpdateBuffLifetime(float,bool)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff.UpdateBuffPersistentData(bool,bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void UpdateBuffPersistentData(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "APrimalBuff.UpdateBuffPersistentData(bool,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff.UpdateLastStackTimer()
    // endereco: casamento de bytes com a build de referencia
    void UpdateLastStackTimer() const
    {
        NativeCall<void>(this, "APrimalBuff.UpdateLastStackTimer()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff.UpdateStaticPathingDestination(UE::Math::TVector<double>,float,bool,bool,UE::Math::T
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateStaticPathingDestination(void* a0, float a1, bool a2, bool a3, void* a4, float a5) const
    {
        return NativeCall<void*, void*, float, bool, bool, void*, float>(this, "APrimalBuff.UpdateStaticPathingDestination(UE::Math::TVector<double>,float,bool,bool,UE::Math::TRotator<double>,float)", a0, a1, a2, a3, a4, a5);
    }

    float& AOEBuffIntervalMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.AOEBuffIntervalMax"); }
    float& AOEBuffIntervalMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.AOEBuffIntervalMin"); }
    float& AOEBuffRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.AOEBuffRange"); }
    BrzCampoPonteiro AOEOtherBuffToApplyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff.AOEOtherBuffToApply")); }
    TArray<void*>& ActivePreventsBuffClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff.ActivePreventsBuffClasses"); }
    BrzCampoPonteiro ActivePreventsBuffClassesExceptionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff.ActivePreventsBuffClassesExceptions")); }
    int& AddBuffMaxNumStacksField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff.AddBuffMaxNumStacks"); }
    float& AdditionalRidingDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.AdditionalRidingDistance"); }
    int& AltNumStacksField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff.AltNumStacks"); }
    float& AoEApplyDamageField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.AoEApplyDamage"); }
    float& AoEApplyDamageIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.AoEApplyDamageInterval"); }
    BrzCampoPonteiro AoEApplyDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff.AoEApplyDamageType")); }
    BrzCampoPonteiro AoEBuffLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff.AoEBuffLocOffset")); }
    TArray<void*>& AoEClassesToExcludeField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff.AoEClassesToExclude"); }
    TArray<void*>& AoEClassesToIncludeField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff.AoEClassesToInclude"); }
    BrzCampoPonteiro AoETraceToTargetsStartOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff.AoETraceToTargetsStartOffset")); }
    TArray<void*>& BPNotifyActivationToOtherBuffClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff.BPNotifyActivationToOtherBuffClasses"); }
    TArray<void*>& BuffClassesToCancelOnActivationField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff.BuffClassesToCancelOnActivation"); }
    TWeakObjectPtr<void>& BuffDamageCauserField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBuff.BuffDamageCauser"); }
    BrzCampoPonteiro BuffDescriptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff.BuffDescription")); }
    BrzCampoPonteiro BuffPersistentDataClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff.BuffPersistentDataClass")); }
    BrzCampoPonteiro BuffPostProcessEffectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff.BuffPostProcessEffect")); }
    TArray<void*>& BuffPreventsOwnerClassField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff.BuffPreventsOwnerClass"); }
    TArray<void*>& BuffRequiresOwnerClassField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff.BuffRequiresOwnerClass"); }
    double& BuffStartTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff.BuffStartTime"); }
    float& BuffTickClientMaxTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.BuffTickClientMaxTime"); }
    float& BuffTickClientMinTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.BuffTickClientMinTime"); }
    float& BuffTickRemoteClientMaxTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.BuffTickRemoteClientMaxTime"); }
    float& BuffTickRemoteClientMinTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.BuffTickRemoteClientMinTime"); }
    float& BuffTickServerMaxTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.BuffTickServerMaxTime"); }
    float& BuffTickServerMinTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.BuffTickServerMinTime"); }
    BrzCampoPonteiro BuffToGiveOnDeactivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff.BuffToGiveOnDeactivation")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PostprocessBlendablesToExclude` +16, medido na build 25090264
    //  (offset absoluto medido: 0x858; confianca alta)
    TArray<TWeakObjectPtr<void>>& BuffedCharactersField() const
    { return BrzCampoAncorado<TArray<TWeakObjectPtr<void>>>(this, "PostprocessBlendablesToExclude", 16); }
    float& CharacterAOEBuffDamageField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.CharacterAOEBuffDamage"); }
    float& CharacterAOEBuffResistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.CharacterAOEBuffResistance"); }
    float& CharacterAdd_DefaultHyperthermicInsulationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.CharacterAdd_DefaultHyperthermicInsulation"); }
    float& CharacterAdd_DefaultHypothermicInsulationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.CharacterAdd_DefaultHypothermicInsulation"); }
    float& CharacterMultiplier_DefaultExtraDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.CharacterMultiplier_DefaultExtraDamageMultiplier"); }
    float& CharacterMultiplier_ExtraFoodConsumptionMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.CharacterMultiplier_ExtraFoodConsumptionMultiplier"); }
    float& CharacterMultiplier_ExtraWaterConsumptionMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.CharacterMultiplier_ExtraWaterConsumptionMultiplier"); }
    float& CharacterMultiplier_SubmergedOxygenDecreaseSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.CharacterMultiplier_SubmergedOxygenDecreaseSpeed"); }
    TArray<void*>& CharacterStatusValueModifiersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff.CharacterStatusValueModifiers"); }
    float& DeactivateAfterTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.DeactivateAfterTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CharacterStatusValueModifiers` +16, medido na build 25090264
    //  (offset absoluto medido: 0x788; confianca alta)
    void*& DeactivateHandleField() const
    { return BrzCampoAncorado<void*>(this, "CharacterStatusValueModifiers", 16); }
    USoundBase*& DeactivatedSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalBuff.DeactivatedSound"); }
    float& DeactivationLifespanField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.DeactivationLifespan"); }
    float& DepleteInstigatorItemDurabilityPerSecondField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.DepleteInstigatorItemDurabilityPerSecond"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OverrideInventoryItemClassWeightMultipliers` +16, medido na build 25090264
    //  (offset absoluto medido: 0x6F8; confianca alta)
    void*& DesiredDinoColorsField() const
    { return BrzCampoAncorado<void*>(this, "OverrideInventoryItemClassWeightMultipliers", 16); }
    float& DinoColorizationInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.DinoColorizationInterpSpeed"); }
    int& DinoColorizationPriorityField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff.DinoColorizationPriority"); }
    TArray<void*>& DisabledWeaponTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff.DisabledWeaponTags"); }
    float& ExtendBuffTimeOverrideField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.ExtendBuffTimeOverride"); }
    USoundBase*& ExtraActivationSoundToPlayField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalBuff.ExtraActivationSoundToPlay"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaximumVelocityZForSlowingFall` +4, medido na build 25090264
    //  (offset absoluto medido: 0xA9C; confianca alta)
    int& FNameIntField() const
    { return BrzCampoAncorado<int>(this, "MaximumVelocityZForSlowingFall", 4); }
    int& ForceNetworkSpatializationBuffMaxLimitNumField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff.ForceNetworkSpatializationBuffMaxLimitNum"); }
    float& ForceNetworkSpatializationBuffMaxLimitRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.ForceNetworkSpatializationBuffMaxLimitRange"); }
    BrzCampoPonteiro ForceNetworkSpatializationMaxLimitBuffTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff.ForceNetworkSpatializationMaxLimitBuffType")); }
    int& ForceNetworkSpatializationMaxLimitBuffTypeFlagField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff.ForceNetworkSpatializationMaxLimitBuffTypeFlag"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BuffStartTime` +8, medido na build 25090264
    //  (offset absoluto medido: 0x798; confianca alta)
    TWeakObjectPtr<void>& ForcedOnSpectatorPlayerControllerField() const
    { return BrzCampoAncorado<TWeakObjectPtr<void>>(this, "BuffStartTime", 8); }
    float& FrictionModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.FrictionModifier"); }
    float& HarvestQuantityMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.HarvestQuantityMultiplier"); }
    float& HyperThermiaInsulationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.HyperThermiaInsulation"); }
    float& HypoThermiaInsulationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.HypoThermiaInsulation"); }
    FName& InstigatorAttachmentSocketField() const
    { return *GetNativePointerField<FName*>(this, "APrimalBuff.InstigatorAttachmentSocket"); }
    FName& InstigatorAttachmentSocket_PlayerOverrideField() const
    { return *GetNativePointerField<FName*>(this, "APrimalBuff.InstigatorAttachmentSocket_PlayerOverride"); }
    TWeakObjectPtr<void>& InstigatorItemField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBuff.InstigatorItem"); }
    float& InsulationRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.InsulationRange"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bDestroyWhenUnpossessed` +3, medido na build 25090264
    //  (offset absoluto medido: 0x9F8; confianca alta)
    double& LastAoEApplyDamageTimeField() const
    { return BrzCampoAncorado<double>(this, "bDestroyWhenUnpossessed", 3); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bContinueTickingClientAfterDeactivate` +11, medido na build 25090264
    //  (offset absoluto medido: 0xA30; confianca alta)
    double& LastBuffTickTimeClientField() const
    { return BrzCampoAncorado<double>(this, "bContinueTickingClientAfterDeactivate", 11); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bContinueTickingClientAfterDeactivate` +3, medido na build 25090264
    //  (offset absoluto medido: 0xA28; confianca alta)
    double& LastBuffTickTimeServerField() const
    { return BrzCampoAncorado<double>(this, "bContinueTickingClientAfterDeactivate", 3); }
    double& LastItemDurabilityDepletionTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff.LastItemDurabilityDepletionTime"); }
    double& LastTimeAddedStackField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff.LastTimeAddedStack"); }
    BrzCampoPonteiro MPCAdjustersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff.MPCAdjusters")); }
    int& MaxNumStacksField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff.MaxNumStacks"); }
    TArray<void*>& MaxStatScalersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff.MaxStatScalers"); }
    float& Maximum2DVelocityForStaminaRecoveryField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.Maximum2DVelocityForStaminaRecovery"); }
    float& MaximumVelocityZForSlowingFallField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.MaximumVelocityZForSlowingFall"); }
    float& MeleeDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.MeleeDamageMultiplier"); }
    float& MinTimeBetweenStacksField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.MinTimeBetweenStacks"); }
    UPrimalBuffPersistentData*& MyBuffPersistentDataField() const
    { return *GetNativePointerField<UPrimalBuffPersistentData**>(this, "APrimalBuff.MyBuffPersistentData"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bContinueTickingClientAfterDeactivate` +27, medido na build 25090264
    //  (offset absoluto medido: 0xA40; confianca alta)
    double& NextBuffTickTimeClientField() const
    { return BrzCampoAncorado<double>(this, "bContinueTickingClientAfterDeactivate", 27); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bContinueTickingClientAfterDeactivate` +19, medido na build 25090264
    //  (offset absoluto medido: 0xA38; confianca alta)
    double& NextBuffTickTimeServerField() const
    { return BrzCampoAncorado<double>(this, "bContinueTickingClientAfterDeactivate", 19); }
    float& OnlyForInstigatorSoundFadeInTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.OnlyForInstigatorSoundFadeInTime"); }
    TArray<void*>& OverrideInventoryItemClassWeightMultipliersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff.OverrideInventoryItemClassWeightMultipliers"); }
    float& PostProcessInterpSpeedDownField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.PostProcessInterpSpeedDown"); }
    float& PostProcessInterpSpeedUpField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.PostProcessInterpSpeedUp"); }
    TArray<UMaterialInterface*>& PostprocessBlendablesToExcludeField() const
    { return *GetNativePointerField<TArray<UMaterialInterface*>*>(this, "APrimalBuff.PostprocessBlendablesToExclude"); }
    TArray<void*>& PostprocessMaterialAdjustersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff.PostprocessMaterialAdjusters"); }
    TArray<void*>& PreventActorClassesTargetingField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff.PreventActorClassesTargeting"); }
    TArray<void*>& PreventActorClassesTargetingRangesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff.PreventActorClassesTargetingRanges"); }
    float& PreventIfMovementMassGreaterThanField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.PreventIfMovementMassGreaterThan"); }
    float& ReceiveDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.ReceiveDamageMultiplier"); }
    float& ReflectMeleeDamagePercentField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.ReflectMeleeDamagePercent"); }
    AMissionType*& RelatedMissionField() const
    { return *GetNativePointerField<AMissionType**>(this, "APrimalBuff.RelatedMission"); }
    float& RemoteForcedFleeDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.RemoteForcedFleeDuration"); }
    BrzCampoPonteiro ShouldInterceptedInputEventOverwriteUsualFunctionality_Array_GamepadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff.ShouldInterceptedInputEventOverwriteUsualFunctionality_Array_Gamepad")); }
    float& SkillActivationCostField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.SkillActivationCost"); }
    unsigned char& SkillActivationStatusCostTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalBuff.SkillActivationStatusCostType"); }
    float& SlowInstigatorFallingAddZVelocityField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.SlowInstigatorFallingAddZVelocity"); }
    float& SlowInstigatorFallingDampenZVelocityField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.SlowInstigatorFallingDampenZVelocity"); }
    float& StackDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.StackDuration"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AltNumStacks` +8, medido na build 25090264
    //  (offset absoluto medido: 0xB68; confianca alta)
    void*& StackUpdateHandleField() const
    { return BrzCampoAncorado<void*>(this, "AltNumStacks", 8); }
    float& StackingUpdatedBuffLifetimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.StackingUpdatedBuffLifetime"); }
    float& StaminaDrainMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.StaminaDrainMultiplier"); }
    float& SubmergedMaxAccelerationModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.SubmergedMaxAccelerationModifier"); }
    float& SubmergedMaxSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.SubmergedMaxSpeedModifier"); }
    float& SubmergedRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.SubmergedRotationRateModifier"); }
    BrzCampoPonteiro TPVCameraOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff.TPVCameraOffset")); }
    BrzCampoPonteiro TPVCameraOffsetMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff.TPVCameraOffsetMultiplier")); }
    float& TPVCameraSpeedInterpolationMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.TPVCameraSpeedInterpolationMultiplier"); }
    TWeakObjectPtr<void>& TargetField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBuff.Target"); }
    BrzCampoPonteiro TargetingInfoToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff.TargetingInfoToolTipWidget")); }
    FVector2D& TargetingInfoTooltipPaddingField() const
    { return *GetNativePointerField<FVector2D*>(this, "APrimalBuff.TargetingInfoTooltipPadding"); }
    FVector2D& TargetingInfoTooltipScaleField() const
    { return *GetNativePointerField<FVector2D*>(this, "APrimalBuff.TargetingInfoTooltipScale"); }
    float& TargetingTooltipCheckRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.TargetingTooltipCheckRange"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `staticPathingDestination` +24, medido na build 25090264
    //  (offset absoluto medido: 0x910; confianca alta)
    double& TickingDeactivationTimeField() const
    { return BrzCampoAncorado<double>(this, "staticPathingDestination", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PostprocessMaterialAdjusters` +24, medido na build 25090264
    //  (offset absoluto medido: 0xA88; confianca alta)
    double& TimeForNextAOECheckField() const
    { return BrzCampoAncorado<double>(this, "PostprocessMaterialAdjusters", 24); }
    float& UnsubmergedMaxAccelerationModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.UnsubmergedMaxAccelerationModifier"); }
    float& UnsubmergedMaxSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.UnsubmergedMaxSpeedModifier"); }
    float& UnsubmergedRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.UnsubmergedRotationRateModifier"); }
    FieldArray<float> ValuesToAddPerSecondField() const
    { return { (void*)this, "APrimalBuff.ValuesToAddPerSecond" }; }
    float& ViewMaxExposureMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.ViewMaxExposureMultiplier"); }
    float& ViewMinExposureMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.ViewMinExposureMultiplier"); }
    float& WeaponRecoilMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.WeaponRecoilMultiplier"); }
    float& XPEarningMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.XPEarningMultiplier"); }
    float& XPtoAddField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.XPtoAdd"); }
    float& XPtoAddRateField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff.XPtoAddRate"); }
    bool& bAddTPVCameraOffsetField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff.bAddTPVCameraOffset"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AdditionalRidingDistance` +4, medido na build 25090264
    //  (offset absoluto medido: 0xB1C; confianca alta)
    void*& bAlreadyRequestedRelatedMissionDataField() const
    { return BrzCampoAncorado<void*>(this, "AdditionalRidingDistance", 4); }
    bool& bContinueTickingClientAfterDeactivateField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff.bContinueTickingClientAfterDeactivate"); }
    bool& bDestroyWhenUnpossessedField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff.bDestroyWhenUnpossessed"); }
    bool& bDisableBloomField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff.bDisableBloom"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bBPModifyCharacterFOV` +1, medido na build 25090264
    //  (offset absoluto medido: 0xA5B; confianca alta)
    bool& bDisableLightShaftsField() const
    { return BrzCampoAncorado<bool>(this, "bBPModifyCharacterFOV", 1); }
    bool& bOnlyTickIfPlayerCharacterField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff.bOnlyTickIfPlayerCharacter"); }
    bool& bOverrideBuffDescriptionField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff.bOverrideBuffDescription"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AdditionalRidingDistance` +5, medido na build 25090264
    //  (offset absoluto medido: 0xB1D; confianca alta)
    bool& bRelatedMissionWasInvalidField() const
    { return BrzCampoAncorado<bool>(this, "AdditionalRidingDistance", 5); }
    bool& bShowMammalIncubationOptionsField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff.bShowMammalIncubationOptions"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bContinueTickingClientAfterDeactivate` +35, medido na build 25090264
    //  (offset absoluto medido: 0xA48; confianca media)
    void*& bTickFunctionDisabledField() const
    { return BrzCampoAncorado<void*>(this, "bContinueTickingClientAfterDeactivate", 35); }
    bool& bUseBPCustomAllowAddBuffField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseBPCustomAllowAddBuff"); }
    bool& bUseBPDeactivatedField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseBPDeactivated"); }
    bool& bUseBPGetPlayerFootStepSoundField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseBPGetPlayerFootStepSound"); }
    bool& bUseBlueprintAnimNotificationsField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseBlueprintAnimNotifications"); }
    bool& bUseBuffTickClientField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff.bUseBuffTickClient"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bContinueTickingClientAfterDeactivate` +36, medido na build 25090264
    //  (offset absoluto medido: 0xA49; confianca media)
    bool& bWasStasisedField() const
    { return BrzCampoAncorado<bool>(this, "bContinueTickingClientAfterDeactivate", 36); }
    BrzCampoPonteiro staticPathingDestinationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff.staticPathingDestination")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AdditionalRidingDistance` +8, medido na build 25090264
    //  (offset absoluto medido: 0xB20; confianca alta)
    float& teleporterHapticTimeField() const
    { return BrzCampoAncorado<float>(this, "AdditionalRidingDistance", 8); }
    BitFieldValue<bool, unsigned __int32> bSlowInstigatorFalling()
    { return { (void*)this, "bSlowInstigatorFalling" }; }
    BitFieldValue<bool, unsigned __int32> bDeactivateOnJump()
    { return { (void*)this, "bDeactivateOnJump" }; }
    BitFieldValue<bool, unsigned __int32> bPreventJump()
    { return { (void*)this, "bPreventJump" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDinoRiding()
    { return { (void*)this, "bPreventDinoRiding" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDinoDismount()
    { return { (void*)this, "bPreventDinoDismount" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyPreventDismounting()
    { return { (void*)this, "bUseBPNotifyPreventDismounting" }; }
    BitFieldValue<bool, unsigned __int32> bForceShowFloatingName()
    { return { (void*)this, "bForceShowFloatingName" }; }
    BitFieldValue<bool, unsigned __int32> bForceHideFloatingName()
    { return { (void*)this, "bForceHideFloatingName" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCarryOrPassenger()
    { return { (void*)this, "bPreventCarryOrPassenger" }; }
    BitFieldValue<bool, unsigned __int32> bDeactivated()
    { return { (void*)this, "bDeactivated" }; }
    BitFieldValue<bool, unsigned __int32> bUsesInstigator()
    { return { (void*)this, "bUsesInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bFollowTarget()
    { return { (void*)this, "bFollowTarget" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideRightShoulderOnPlayer()
    { return { (void*)this, "bOverrideRightShoulderOnPlayer" }; }
    BitFieldValue<bool, unsigned __int32> bAddCharacterValues()
    { return { (void*)this, "bAddCharacterValues" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyAddCharacterValuesUnderwater()
    { return { (void*)this, "bOnlyAddCharacterValuesUnderwater" }; }
    BitFieldValue<bool, unsigned __int32> bDisableIfCharacterUnderwater()
    { return { (void*)this, "bDisableIfCharacterUnderwater" }; }
    BitFieldValue<bool, unsigned __int32> bUseInstigatorItem()
    { return { (void*)this, "bUseInstigatorItem" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyOnTargetStasis()
    { return { (void*)this, "bDestroyOnTargetStasis" }; }
    BitFieldValue<bool, unsigned __int32> bAoETraceToTargets()
    { return { (void*)this, "bAoETraceToTargets" }; }
    BitFieldValue<bool, unsigned __int32> bAOEOnlyApplyOtherBuffToWildDinos()
    { return { (void*)this, "bAOEOnlyApplyOtherBuffToWildDinos" }; }
    BitFieldValue<bool, unsigned __int32> bAoEIgnoreDinosTargetingInstigator()
    { return { (void*)this, "bAoEIgnoreDinosTargetingInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bAoEOnlyOnDinosTargetingInstigator()
    { return { (void*)this, "bAoEOnlyOnDinosTargetingInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bBuffForceNoTick()
    { return { (void*)this, "bBuffForceNoTick" }; }
    BitFieldValue<bool, unsigned __int32> bBuffForceNoTickDedicated()
    { return { (void*)this, "bBuffForceNoTickDedicated" }; }
    BitFieldValue<bool, unsigned __int32> bCustomDepthStencilIgnoreHealth()
    { return { (void*)this, "bCustomDepthStencilIgnoreHealth" }; }
    BitFieldValue<bool, unsigned __int32> bCompleteCustomDepthStencilOverride()
    { return { (void*)this, "bCompleteCustomDepthStencilOverride" }; }
    BitFieldValue<bool, unsigned __int32> bUseActivateSoundFadeInDuration()
    { return { (void*)this, "bUseActivateSoundFadeInDuration" }; }
    BitFieldValue<bool, unsigned __int32> bDinoIgnoreBuffPostprocessEffectWhenRidden()
    { return { (void*)this, "bDinoIgnoreBuffPostprocessEffectWhenRidden" }; }
    BitFieldValue<bool, unsigned __int32> bPlayerIgnoreBuffPostprocessEffectWhenRidingDino()
    { return { (void*)this, "bPlayerIgnoreBuffPostprocessEffectWhenRidingDino" }; }
    BitFieldValue<bool, unsigned __int32> bRemoteForcedFlee()
    { return { (void*)this, "bRemoteForcedFlee" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPDinoRefreshColorization()
    { return { (void*)this, "bUseBPDinoRefreshColorization" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideInventoryWeightMultipliers()
    { return { (void*)this, "bOverrideInventoryWeightMultipliers" }; }
    BitFieldValue<bool, unsigned __int32> bDeactivateAfterAddingXP()
    { return { (void*)this, "bDeactivateAfterAddingXP" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyActivateSoundForInstigator()
    { return { (void*)this, "bOnlyActivateSoundForInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bAOEBuffCarnosOnly()
    { return { (void*)this, "bAOEBuffCarnosOnly" }; }
    BitFieldValue<bool, unsigned __int32> bCausesCryoSickness()
    { return { (void*)this, "bCausesCryoSickness" }; }
    BitFieldValue<bool, unsigned __int32> bModifyMaxSpeed()
    { return { (void*)this, "bModifyMaxSpeed" }; }
    BitFieldValue<bool, unsigned __int32> bDisplayHUDProgressBar()
    { return { (void*)this, "bDisplayHUDProgressBar" }; }
    BitFieldValue<bool, unsigned __int32> bForceUsePreventTargeting()
    { return { (void*)this, "bForceUsePreventTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bForceUsePreventTargetingTurret()
    { return { (void*)this, "bForceUsePreventTargetingTurret" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideWeaponBob()
    { return { (void*)this, "bBPOverrideWeaponBob" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPModifyPlayerBoneModifiers()
    { return { (void*)this, "bUseBPModifyPlayerBoneModifiers" }; }
    BitFieldValue<bool, unsigned __int32> bDediServerUseBPModifyPlayerBoneModifiers()
    { return { (void*)this, "bDediServerUseBPModifyPlayerBoneModifiers" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNonDedicatedPlayerPostAnimUpdate()
    { return { (void*)this, "bUseBPNonDedicatedPlayerPostAnimUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPIsCharacterHardAttached()
    { return { (void*)this, "bUseBPIsCharacterHardAttached" }; }
    BitFieldValue<bool, unsigned __int32> bDoCharacterDetachment()
    { return { (void*)this, "bDoCharacterDetachment" }; }
    BitFieldValue<bool, unsigned __int32> bDoCharacterDetachmentIncludeRiding()
    { return { (void*)this, "bDoCharacterDetachmentIncludeRiding" }; }
    BitFieldValue<bool, unsigned __int32> bDoCharacterDetachmentIncludeCarrying()
    { return { (void*)this, "bDoCharacterDetachmentIncludeCarrying" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInitializedCharacterAnimScriptInstance()
    { return { (void*)this, "bUseBPInitializedCharacterAnimScriptInstance" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanBeCarried()
    { return { (void*)this, "bUseBPCanBeCarried" }; }
    BitFieldValue<bool, unsigned __int32> bUsePostAdjustDamage()
    { return { (void*)this, "bUsePostAdjustDamage" }; }
    BitFieldValue<bool, unsigned __int32> bPreventFallDamage()
    { return { (void*)this, "bPreventFallDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnInstigatorCapsuleComponentHit()
    { return { (void*)this, "bUseBPOnInstigatorCapsuleComponentHit" }; }
    BitFieldValue<bool, unsigned __int32> bEnabledCollisionNotify()
    { return { (void*)this, "bEnabledCollisionNotify" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCameraViewTarget()
    { return { (void*)this, "bUseBPOverrideCameraViewTarget" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceCameraStyle()
    { return { (void*)this, "bUseBPForceCameraStyle" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPIsValidUnstasisActor()
    { return { (void*)this, "bUseBPIsValidUnstasisActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideIsNetRelevantFor()
    { return { (void*)this, "bUseBPOverrideIsNetRelevantFor" }; }
    BitFieldValue<bool, unsigned __int32> bPreventClearRiderOnDinoImmobilize()
    { return { (void*)this, "bPreventClearRiderOnDinoImmobilize" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysShowBuffDescription()
    { return { (void*)this, "bAlwaysShowBuffDescription" }; }
    BitFieldValue<bool, unsigned __int32> bAOEApplyOtherBuffOnPlayers()
    { return { (void*)this, "bAOEApplyOtherBuffOnPlayers" }; }
    BitFieldValue<bool, unsigned __int32> bAOEApplyOtherBuffOnDinos()
    { return { (void*)this, "bAOEApplyOtherBuffOnDinos" }; }
    BitFieldValue<bool, unsigned __int32> bAOEApplyOtherBuffIgnoreSameTeam()
    { return { (void*)this, "bAOEApplyOtherBuffIgnoreSameTeam" }; }
    BitFieldValue<bool, unsigned __int32> bAOEApplyOtherBuffRequireSameTeam()
    { return { (void*)this, "bAOEApplyOtherBuffRequireSameTeam" }; }
    BitFieldValue<bool, unsigned __int32> bBuffDrawFloatingHUD()
    { return { (void*)this, "bBuffDrawFloatingHUD" }; }
    BitFieldValue<bool, unsigned __int32> bAddResetsBuffTime()
    { return { (void*)this, "bAddResetsBuffTime" }; }
    BitFieldValue<bool, unsigned __int32> bAoEBuffAllowIfAlreadyBuffed()
    { return { (void*)this, "bAoEBuffAllowIfAlreadyBuffed" }; }
    BitFieldValue<bool, unsigned __int32> bNetResetBuffStart()
    { return { (void*)this, "bNetResetBuffStart" }; }
    BitFieldValue<bool, unsigned __int32> bImmobilizeTarget()
    { return { (void*)this, "bImmobilizeTarget" }; }
    BitFieldValue<bool, unsigned __int32> bForcePlayerProne()
    { return { (void*)this, "bForcePlayerProne" }; }
    BitFieldValue<bool, unsigned __int32> bHideBuffFromHUD()
    { return { (void*)this, "bHideBuffFromHUD" }; }
    BitFieldValue<bool, unsigned __int32> bHideTimerFromHUD()
    { return { (void*)this, "bHideTimerFromHUD" }; }
    BitFieldValue<bool, unsigned __int32> bBPAddMultiUseEntries()
    { return { (void*)this, "bBPAddMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bIsBuffPersistent()
    { return { (void*)this, "bIsBuffPersistent" }; }
    BitFieldValue<bool, unsigned __int32> bBPUseBumpedByPawn()
    { return { (void*)this, "bBPUseBumpedByPawn" }; }
    BitFieldValue<bool, unsigned __int32> bBPUseBumpedPawn()
    { return { (void*)this, "bBPUseBumpedPawn" }; }
    BitFieldValue<bool, unsigned __int32> bAllowBuffWhenInstigatorDead()
    { return { (void*)this, "bAllowBuffWhenInstigatorDead" }; }
    BitFieldValue<bool, unsigned __int32> bNotifyDamage()
    { return { (void*)this, "bNotifyDamage" }; }
    BitFieldValue<bool, unsigned __int32> bAllowBuffStasis()
    { return { (void*)this, "bAllowBuffStasis" }; }
    BitFieldValue<bool, unsigned __int32> bApplyStatModifierToPlayers()
    { return { (void*)this, "bApplyStatModifierToPlayers" }; }
    BitFieldValue<bool, unsigned __int32> bApplyStatModifierToDinos()
    { return { (void*)this, "bApplyStatModifierToDinos" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnWildDino()
    { return { (void*)this, "bPreventOnWildDino" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnDino()
    { return { (void*)this, "bPreventOnDino" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnPlayer()
    { return { (void*)this, "bPreventOnPlayer" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnBigDino()
    { return { (void*)this, "bPreventOnBigDino" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnBossDino()
    { return { (void*)this, "bPreventOnBossDino" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnRobotDino()
    { return { (void*)this, "bPreventOnRobotDino" }; }
    BitFieldValue<bool, unsigned __int32> bIsDisease()
    { return { (void*)this, "bIsDisease" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventAddingOtherBuff()
    { return { (void*)this, "bUseBPPreventAddingOtherBuff" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventRunning()
    { return { (void*)this, "bUseBPPreventRunning" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyItemAdded()
    { return { (void*)this, "bUseBPNotifyItemAdded" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyItemQuantityUpdated()
    { return { (void*)this, "bUseBPNotifyItemQuantityUpdated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyItemRemoved()
    { return { (void*)this, "bUseBPNotifyItemRemoved" }; }
    BitFieldValue<bool, unsigned __int32> bAddReactivates()
    { return { (void*)this, "bAddReactivates" }; }
    BitFieldValue<bool, unsigned __int32> bAoEApplyDamageAllTargetables()
    { return { (void*)this, "bAoEApplyDamageAllTargetables" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustCharacterMovementImpulse()
    { return { (void*)this, "bUseBPAdjustCharacterMovementImpulse" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustImpulseFromDamage()
    { return { (void*)this, "bUseBPAdjustImpulseFromDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetHUDElements()
    { return { (void*)this, "bUseBPGetHUDElements" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetCameraShakeScalar()
    { return { (void*)this, "bUseBPGetCameraShakeScalar" }; }
    BitFieldValue<bool, unsigned __int32> bForceDrawMissionDinoTargetHealthbars()
    { return { (void*)this, "bForceDrawMissionDinoTargetHealthbars" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetWaypointsBuff()
    { return { (void*)this, "bUseBPGetWaypointsBuff" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPActivated()
    { return { (void*)this, "bUseBPActivated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPHandleOnStartFire()
    { return { (void*)this, "bUseBPHandleOnStartFire" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPHandleOnStartAltFire()
    { return { (void*)this, "bUseBPHandleOnStartAltFire" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPHandleOnStopAltFire()
    { return { (void*)this, "bUseBPHandleOnStopAltFire" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventFlight()
    { return { (void*)this, "bUseBPPreventFlight" }; }
    BitFieldValue<bool, unsigned __int32> bRequireController()
    { return { (void*)this, "bRequireController" }; }
    BitFieldValue<bool, unsigned __int32> bDontPlayInstigatorActiveSoundOnDino()
    { return { (void*)this, "bDontPlayInstigatorActiveSoundOnDino" }; }
    BitFieldValue<bool, unsigned __int32> bAddExtendBuffTime()
    { return { (void*)this, "bAddExtendBuffTime" }; }
    BitFieldValue<bool, unsigned __int32> bUseTickingDeactivation()
    { return { (void*)this, "bUseTickingDeactivation" }; }
    BitFieldValue<bool, unsigned __int32> bCheckPreventInput()
    { return { (void*)this, "bCheckPreventInput" }; }
    BitFieldValue<bool, unsigned __int32> bBPDrawBuffStatusHUD()
    { return { (void*)this, "bBPDrawBuffStatusHUD" }; }
    BitFieldValue<bool, unsigned __int32> bStatusComponentUsingExtendedHUDText()
    { return { (void*)this, "bStatusComponentUsingExtendedHUDText" }; }
    BitFieldValue<bool, unsigned __int32> bEnableStaticPathing()
    { return { (void*)this, "bEnableStaticPathing" }; }
    BitFieldValue<bool, unsigned __int32> bHUDFormatTimerAsTimecode()
    { return { (void*)this, "bHUDFormatTimerAsTimecode" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventThrowingItem()
    { return { (void*)this, "bUseBPPreventThrowingItem" }; }
    BitFieldValue<bool, unsigned __int32> bPreventInputDoesOffset()
    { return { (void*)this, "bPreventInputDoesOffset" }; }
    BitFieldValue<bool, unsigned __int32> bNotifyExperienceGained()
    { return { (void*)this, "bNotifyExperienceGained" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyTickWhenVisible()
    { return { (void*)this, "bOnlyTickWhenVisible" }; }
    BitFieldValue<bool, unsigned __int32> bBPAdjustStatusValueModification()
    { return { (void*)this, "bBPAdjustStatusValueModification" }; }
    BitFieldValue<bool, unsigned __int32> bWasDestroyed()
    { return { (void*)this, "bWasDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyOtherBuffActivated()
    { return { (void*)this, "bUseBPNotifyOtherBuffActivated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyOtherBuffDeactivated()
    { return { (void*)this, "bUseBPNotifyOtherBuffDeactivated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventFirstPerson()
    { return { (void*)this, "bUseBPPreventFirstPerson" }; }
    BitFieldValue<bool, unsigned __int32> bForceAddUnderwaterCharacterStatusValues()
    { return { (void*)this, "bForceAddUnderwaterCharacterStatusValues" }; }
    BitFieldValue<bool, unsigned __int32> bPreventInstigatorAttack()
    { return { (void*)this, "bPreventInstigatorAttack" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnInstigatorMovementModeChangedNotify()
    { return { (void*)this, "bUseBPOnInstigatorMovementModeChangedNotify" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventInstigatorMovementMode()
    { return { (void*)this, "bUseBPPreventInstigatorMovementMode" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideTalkerCharacter()
    { return { (void*)this, "bUseBPOverrideTalkerCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bBuffHandleInstigatorMultiUseEntries()
    { return { (void*)this, "bBuffHandleInstigatorMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventInstigatorAttack()
    { return { (void*)this, "bUseBPPreventInstigatorAttack" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventOnStartJump()
    { return { (void*)this, "bUseBPPreventOnStartJump" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideCharacterWalkVelocity()
    { return { (void*)this, "bBPOverrideCharacterWalkVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideCharacterSwimmingVelocity()
    { return { (void*)this, "bBPOverrideCharacterSwimmingVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideCharacterNewFallVelocity()
    { return { (void*)this, "bBPOverrideCharacterNewFallVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideCharacterFlyingVelocity()
    { return { (void*)this, "bBPOverrideCharacterFlyingVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bForceOverrideCharacterWalkingVelocity()
    { return { (void*)this, "bForceOverrideCharacterWalkingVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bForceOverrideCharacterSwimmingVelocity()
    { return { (void*)this, "bForceOverrideCharacterSwimmingVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bForceOverrideCharacterFlyingVelocity()
    { return { (void*)this, "bForceOverrideCharacterFlyingVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bForceOverrideCharacterNewFallVelocity()
    { return { (void*)this, "bForceOverrideCharacterNewFallVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideCharacterLanding()
    { return { (void*)this, "bOverrideCharacterLanding" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideCharacterMovementInput()
    { return { (void*)this, "bOverrideCharacterMovementInput" }; }
    BitFieldValue<bool, unsigned __int32> bAllowMultiUseEntriesFromSelf()
    { return { (void*)this, "bAllowMultiUseEntriesFromSelf" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPHandleOnStopFire()
    { return { (void*)this, "bUseBPHandleOnStopFire" }; }
    BitFieldValue<bool, unsigned __int32> bForceCrosshair()
    { return { (void*)this, "bForceCrosshair" }; }
    BitFieldValue<bool, unsigned __int32> bPreventLogoutSleeping()
    { return { (void*)this, "bPreventLogoutSleeping" }; }
    BitFieldValue<bool, unsigned __int32> bUseInterceptInstigatorPlayerEmote()
    { return { (void*)this, "bUseInterceptInstigatorPlayerEmote" }; }
    BitFieldValue<bool, unsigned __int32> bTriggerBPStasis()
    { return { (void*)this, "bTriggerBPStasis" }; }
    BitFieldValue<bool, unsigned __int32> bTriggerBPUnstasis()
    { return { (void*)this, "bTriggerBPUnstasis" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetGravity()
    { return { (void*)this, "bUseBPGetGravity" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnOwnerMassTeleportEvent()
    { return { (void*)this, "bUseBPOnOwnerMassTeleportEvent" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPShouldForceOwnerDedicatedMovementTickPerFrame()
    { return { (void*)this, "bUseBPShouldForceOwnerDedicatedMovementTickPerFrame" }; }
    BitFieldValue<bool, unsigned __int32> bAllowOnlyCustomFallDamage()
    { return { (void*)this, "bAllowOnlyCustomFallDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMoveAnimRate()
    { return { (void*)this, "bUseBPGetMoveAnimRate" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideTargetingDesire()
    { return { (void*)this, "bUseBPOverrideTargetingDesire" }; }
    BitFieldValue<bool, unsigned __int32> bBuffPreventsApplyingLevelUps()
    { return { (void*)this, "bBuffPreventsApplyingLevelUps" }; }
    BitFieldValue<bool, unsigned __int32> bBuffPreSerializeForInstigator()
    { return { (void*)this, "bBuffPreSerializeForInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bUseFinalAdjustDamage()
    { return { (void*)this, "bUseFinalAdjustDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideWaterJumpVelocity()
    { return { (void*)this, "bUseBPOverrideWaterJumpVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OnOwnerDealtDamage()
    { return { (void*)this, "bUseBP_OnOwnerDealtDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseGetGravityZScale()
    { return { (void*)this, "bUseGetGravityZScale" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_AdjustDamageEx()
    { return { (void*)this, "bUseBP_AdjustDamageEx" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OverrideTerminalVelocity()
    { return { (void*)this, "bUseBP_OverrideTerminalVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bUseBuffOverrideFinalWanderLocation()
    { return { (void*)this, "bUseBuffOverrideFinalWanderLocation" }; }
    BitFieldValue<bool, unsigned __int32> bModifyMaxAcceleration()
    { return { (void*)this, "bModifyMaxAcceleration" }; }
    BitFieldValue<bool, unsigned __int32> bModifyRotationRate()
    { return { (void*)this, "bModifyRotationRate" }; }
    BitFieldValue<bool, unsigned __int32> bModifyFriction()
    { return { (void*)this, "bModifyFriction" }; }
    BitFieldValue<bool, unsigned __int32> bDisableFootstepsParticles()
    { return { (void*)this, "bDisableFootstepsParticles" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowAddingWithoutController()
    { return { (void*)this, "bForceAllowAddingWithoutController" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowWhileBuried()
    { return { (void*)this, "bForceAllowWhileBuried" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OnOwnerTeleported()
    { return { (void*)this, "bUseBP_OnOwnerTeleported" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustRadialDamage()
    { return { (void*)this, "bUseBPAdjustRadialDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseForcedBuffAimOverride()
    { return { (void*)this, "bUseForcedBuffAimOverride" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventTekArmorBuffs()
    { return { (void*)this, "bUseBPPreventTekArmorBuffs" }; }
    BitFieldValue<bool, unsigned __int32> bBuffPreventsInventoryAccess()
    { return { (void*)this, "bBuffPreventsInventoryAccess" }; }
    BitFieldValue<bool, unsigned __int32> bReactivateWithNewDamageCauser()
    { return { (void*)this, "bReactivateWithNewDamageCauser" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPDinoNameColorOverride()
    { return { (void*)this, "bUseBPDinoNameColorOverride" }; }
    BitFieldValue<bool, unsigned __int32> bBuffPreventsCryo()
    { return { (void*)this, "bBuffPreventsCryo" }; }
    BitFieldValue<bool, unsigned __int32> bUseBuffOverrideInventoryAccessInput()
    { return { (void*)this, "bUseBuffOverrideInventoryAccessInput" }; }
    BitFieldValue<bool, unsigned __int32> bListenForInput()
    { return { (void*)this, "bListenForInput" }; }
    BitFieldValue<bool, unsigned __int32> bInterceptUseAction()
    { return { (void*)this, "bInterceptUseAction" }; }
    BitFieldValue<bool, unsigned __int32> bInterceptWeaponToggle()
    { return { (void*)this, "bInterceptWeaponToggle" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventNotifySound()
    { return { (void*)this, "bUseBPPreventNotifySound" }; }
    BitFieldValue<bool, unsigned __int32> bBuffDrawFloatingHUDRemotePlayers()
    { return { (void*)this, "bBuffDrawFloatingHUDRemotePlayers" }; }
    BitFieldValue<bool, unsigned __int32> bUseConsolidatedMultiUseWheel()
    { return { (void*)this, "bUseConsolidatedMultiUseWheel" }; }
    BitFieldValue<bool, unsigned __int32> bForceAlwaysAllowBuff()
    { return { (void*)this, "bForceAlwaysAllowBuff" }; }
    BitFieldValue<bool, unsigned __int32> bForceSelfTick()
    { return { (void*)this, "bForceSelfTick" }; }
    BitFieldValue<bool, unsigned __int32> bForceInstigatorTick()
    { return { (void*)this, "bForceInstigatorTick" }; }
    BitFieldValue<bool, unsigned __int32> bSkipInstigatorTick()
    { return { (void*)this, "bSkipInstigatorTick" }; }
    BitFieldValue<bool, unsigned __int32> bBuffTickByInstigator()
    { return { (void*)this, "bBuffTickByInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bTriggeredInstigatorDie()
    { return { (void*)this, "bTriggeredInstigatorDie" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTurretsToTargetInstigatorIfTraceHitsBuff()
    { return { (void*)this, "bAllowTurretsToTargetInstigatorIfTraceHitsBuff" }; }
    BitFieldValue<bool, unsigned __int32> bIsHighRiskMissionBuff()
    { return { (void*)this, "bIsHighRiskMissionBuff" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreClaimWildFollower()
    { return { (void*)this, "bUseBPPreClaimWildFollower" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetBuffLevelUpStatOverride()
    { return { (void*)this, "bUseBPGetBuffLevelUpStatOverride" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPBuffKilledSomethingEvent()
    { return { (void*)this, "bUseBPBuffKilledSomethingEvent" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNofityMontagePlay()
    { return { (void*)this, "bUseBPNofityMontagePlay" }; }
    BitFieldValue<bool, unsigned __int32> UseBPAdjustOutputDamage()
    { return { (void*)this, "UseBPAdjustOutputDamage" }; }
    BitFieldValue<bool, unsigned __int32> UseBPAdjustOutputDamageForNonMeleePlayerDamage()
    { return { (void*)this, "UseBPAdjustOutputDamageForNonMeleePlayerDamage" }; }
    BitFieldValue<bool, unsigned __int32> bAddRequireSameDamageCauser()
    { return { (void*)this, "bAddRequireSameDamageCauser" }; }
    BitFieldValue<bool, unsigned __int32> bAddStackResetsBuffStart()
    { return { (void*)this, "bAddStackResetsBuffStart" }; }
    BitFieldValue<bool, unsigned __int32> bAddTPVCameraOffset()
    { return { (void*)this, "bAddTPVCameraOffset" }; }
    BitFieldValue<bool, unsigned __int32> bAdditionalExperienceMultiplier()
    { return { (void*)this, "bAdditionalExperienceMultiplier" }; }
    BitFieldValue<bool, unsigned __int32> bAdditionalTamingSpeedMultiplier()
    { return { (void*)this, "bAdditionalTamingSpeedMultiplier" }; }
    BitFieldValue<bool, unsigned __int32> bApplyOneMaxSpeedModifierPerStack()
    { return { (void*)this, "bApplyOneMaxSpeedModifierPerStack" }; }
    BitFieldValue<bool, unsigned __int32> bBPFilterMultiUseFilterTargetEntries()
    { return { (void*)this, "bBPFilterMultiUseFilterTargetEntries" }; }
    BitFieldValue<bool, unsigned __int32> bBPModifyAimOffsetNoTarget()
    { return { (void*)this, "bBPModifyAimOffsetNoTarget" }; }
    BitFieldValue<bool, unsigned __int32> bBPModifyCharacterFOV()
    { return { (void*)this, "bBPModifyCharacterFOV" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideActorForTargetingTooltip()
    { return { (void*)this, "bBPOverrideActorForTargetingTooltip" }; }
    BitFieldValue<bool, unsigned __int32> bBuffHidesNonWeaponHUD()
    { return { (void*)this, "bBuffHidesNonWeaponHUD" }; }
    BitFieldValue<bool, unsigned __int32> bBuffPreventsInventoryAccessAllowMissions()
    { return { (void*)this, "bBuffPreventsInventoryAccessAllowMissions" }; }
    BitFieldValue<bool, unsigned __int32> bBuffPreventsMountedWeaponry()
    { return { (void*)this, "bBuffPreventsMountedWeaponry" }; }
    BitFieldValue<bool, unsigned __int32> bBuffPreventsPlayerDropAllInventory()
    { return { (void*)this, "bBuffPreventsPlayerDropAllInventory" }; }
    BitFieldValue<bool, unsigned __int32> bCallRiderChangeWeaponsOnClient()
    { return { (void*)this, "bCallRiderChangeWeaponsOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bCallRiderNotifiesOnClient()
    { return { (void*)this, "bCallRiderNotifiesOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bContinueTickingClientAfterDeactivate()
    { return { (void*)this, "bContinueTickingClientAfterDeactivate" }; }
    BitFieldValue<bool, unsigned __int32> bContinueTickingServerAfterDeactivate()
    { return { (void*)this, "bContinueTickingServerAfterDeactivate" }; }
    BitFieldValue<bool, unsigned __int32> bDeactivatedSoundOnlyLocal()
    { return { (void*)this, "bDeactivatedSoundOnlyLocal" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyWhenUnpossessed()
    { return { (void*)this, "bDestroyWhenUnpossessed" }; }
    BitFieldValue<bool, unsigned __int32> bDisableBloom()
    { return { (void*)this, "bDisableBloom" }; }
    BitFieldValue<bool, unsigned __int32> bDisableFaceRotation()
    { return { (void*)this, "bDisableFaceRotation" }; }
    BitFieldValue<bool, unsigned __int32> bEnableBuffStacking()
    { return { (void*)this, "bEnableBuffStacking" }; }
    BitFieldValue<bool, unsigned __int32> bEnableTargetingTooltip()
    { return { (void*)this, "bEnableTargetingTooltip" }; }
    BitFieldValue<bool, unsigned __int32> bEnablesSpyglassEffect()
    { return { (void*)this, "bEnablesSpyglassEffect" }; }
    BitFieldValue<bool, unsigned __int32> bForceUseStackCount()
    { return { (void*)this, "bForceUseStackCount" }; }
    BitFieldValue<bool, unsigned __int32> bForcedOnSpectatorPlayerController()
    { return { (void*)this, "bForcedOnSpectatorPlayerController" }; }
    BitFieldValue<bool, unsigned __int32> bGetInstigatorChatMessages()
    { return { (void*)this, "bGetInstigatorChatMessages" }; }
    BitFieldValue<bool, unsigned __int32> bHasRelatedMission()
    { return { (void*)this, "bHasRelatedMission" }; }
    BitFieldValue<bool, unsigned __int32> bHideBuffFromHUDOnly()
    { return { (void*)this, "bHideBuffFromHUDOnly" }; }
    BitFieldValue<bool, unsigned __int32> bHideFootStepDecals()
    { return { (void*)this, "bHideFootStepDecals" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreWeightWhenUsingExtraMaxSpeedModifier()
    { return { (void*)this, "bIgnoreWeightWhenUsingExtraMaxSpeedModifier" }; }
    BitFieldValue<bool, unsigned __int32> bImmobilizeTargetPreventDismount()
    { return { (void*)this, "bImmobilizeTargetPreventDismount" }; }
    BitFieldValue<bool, unsigned __int32> bInterceptInputEvents()
    { return { (void*)this, "bInterceptInputEvents" }; }
    BitFieldValue<bool, unsigned __int32> bIsCarryBuff()
    { return { (void*)this, "bIsCarryBuff" }; }
    BitFieldValue<bool, unsigned __int32> bIsFromSkill()
    { return { (void*)this, "bIsFromSkill" }; }
    BitFieldValue<bool, unsigned __int32> bIsSkillBuff()
    { return { (void*)this, "bIsSkillBuff" }; }
    BitFieldValue<bool, unsigned __int32> bNotifyExperienceGained_AllowCountingAlphaKills()
    { return { (void*)this, "bNotifyExperienceGained_AllowCountingAlphaKills" }; }
    BitFieldValue<bool, unsigned __int32> bNotifyExperienceGained_IncludeSmallAmounts()
    { return { (void*)this, "bNotifyExperienceGained_IncludeSmallAmounts" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyTickIfPlayerCharacter()
    { return { (void*)this, "bOnlyTickIfPlayerCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyTickWhenPossessed()
    { return { (void*)this, "bOnlyTickWhenPossessed" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideBuffDescription()
    { return { (void*)this, "bOverrideBuffDescription" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideBuffType()
    { return { (void*)this, "bOverrideBuffType" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideTPVCameraOffset()
    { return { (void*)this, "bOverrideTPVCameraOffset" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideTPVCameraOffsetMultiplier()
    { return { (void*)this, "bOverrideTPVCameraOffsetMultiplier" }; }
    BitFieldValue<bool, unsigned __int32> bPersistentBuffSurvivesLevelUp()
    { return { (void*)this, "bPersistentBuffSurvivesLevelUp" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCarryCharacter()
    { return { (void*)this, "bPreventCarryCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnSeatingStructures()
    { return { (void*)this, "bPreventOnSeatingStructures" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnShip()
    { return { (void*)this, "bPreventOnShip" }; }
    BitFieldValue<bool, unsigned __int32> bReactivationAddsNewStack()
    { return { (void*)this, "bReactivationAddsNewStack" }; }
    BitFieldValue<bool, unsigned __int32> bResetTopStackTimeWhenAddingNewStack()
    { return { (void*)this, "bResetTopStackTimeWhenAddingNewStack" }; }
    BitFieldValue<bool, unsigned __int32> bSavePlayerDataOnSaveWorld()
    { return { (void*)this, "bSavePlayerDataOnSaveWorld" }; }
    BitFieldValue<bool, unsigned __int32> bShowBuffModifierDescription()
    { return { (void*)this, "bShowBuffModifierDescription" }; }
    BitFieldValue<bool, unsigned __int32> bShowMammalIncubationOptions()
    { return { (void*)this, "bShowMammalIncubationOptions" }; }
    BitFieldValue<bool, unsigned __int32> bSkillAddBuffDeactivationTimeToCooldown()
    { return { (void*)this, "bSkillAddBuffDeactivationTimeToCooldown" }; }
    BitFieldValue<bool, unsigned __int32> bSkillAllowUseWhileEncumbered()
    { return { (void*)this, "bSkillAllowUseWhileEncumbered" }; }
    BitFieldValue<bool, unsigned __int32> bSkillAllowUseWhileSeated()
    { return { (void*)this, "bSkillAllowUseWhileSeated" }; }
    BitFieldValue<bool, unsigned __int32> bSkillBuffSetCooldown()
    { return { (void*)this, "bSkillBuffSetCooldown" }; }
    BitFieldValue<bool, unsigned __int32> bUseASACameraPivotLocationForOldCamera()
    { return { (void*)this, "bUseASACameraPivotLocationForOldCamera" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowPlayMontage()
    { return { (void*)this, "bUseBPAllowPlayMontage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPBuffControllerKilledSomethingEvent()
    { return { (void*)this, "bUseBPBuffControllerKilledSomethingEvent" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPBuffPreventBuilding()
    { return { (void*)this, "bUseBPBuffPreventBuilding" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPBuffPreventsImmobilization()
    { return { (void*)this, "bUseBPBuffPreventsImmobilization" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPBuffPreventsMultiuseEntries()
    { return { (void*)this, "bUseBPBuffPreventsMultiuseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanFly()
    { return { (void*)this, "bUseBPCanFly" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPChangeBuffStatusValueModifiers()
    { return { (void*)this, "bUseBPChangeBuffStatusValueModifiers" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCustomAllowAddBuff()
    { return { (void*)this, "bUseBPCustomAllowAddBuff" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPDeactivated()
    { return { (void*)this, "bUseBPDeactivated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPExcludeAoEActor()
    { return { (void*)this, "bUseBPExcludeAoEActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceOverrideWeaponFireTransform()
    { return { (void*)this, "bUseBPForceOverrideWeaponFireTransform" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPFullyHarvestedNode()
    { return { (void*)this, "bUseBPFullyHarvestedNode" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetAltInventoryForAmmoConsumption()
    { return { (void*)this, "bUseBPGetAltInventoryForAmmoConsumption" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetAttackAnimPlayRateModifier()
    { return { (void*)this, "bUseBPGetAttackAnimPlayRateModifier" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetBuffDamageCauser()
    { return { (void*)this, "bUseBPGetBuffDamageCauser" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetBuffDescriptionIconAlphaMult()
    { return { (void*)this, "bUseBPGetBuffDescriptionIconAlphaMult" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetCrosshairColor()
    { return { (void*)this, "bUseBPGetCrosshairColor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetCustomTooltipActor()
    { return { (void*)this, "bUseBPGetCustomTooltipActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetPlayerFootStepSound()
    { return { (void*)this, "bUseBPGetPlayerFootStepSound" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInformDamageCauserOfBuffAdded()
    { return { (void*)this, "bUseBPInformDamageCauserOfBuffAdded" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInstigatorAllowDinoTargetingRange()
    { return { (void*)this, "bUseBPInstigatorAllowDinoTargetingRange" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPModifyArmorValue()
    { return { (void*)this, "bUseBPModifyArmorValue" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyBuffWeaponFired()
    { return { (void*)this, "bUseBPNotifyBuffWeaponFired" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnAoeBuffAdded()
    { return { (void*)this, "bUseBPOnAoeBuffAdded" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnDestroyInstigator()
    { return { (void*)this, "bUseBPOnDestroyInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnHexagonCountChanged()
    { return { (void*)this, "bUseBPOnHexagonCountChanged" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnInstigatorLootedCrate()
    { return { (void*)this, "bUseBPOnInstigatorLootedCrate" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnPlayerShoulderMountDinoChange()
    { return { (void*)this, "bUseBPOnPlayerShoulderMountDinoChange" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnRiderChangeWeapons()
    { return { (void*)this, "bUseBPOnRiderChangeWeapons" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnTamedWildDino()
    { return { (void*)this, "bUseBPOnTamedWildDino" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideAoEBuffDamageCauser()
    { return { (void*)this, "bUseBPOverrideAoEBuffDamageCauser" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideBloodDecals()
    { return { (void*)this, "bUseBPOverrideBloodDecals" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideBuffToGiveOnDeactivation()
    { return { (void*)this, "bUseBPOverrideBuffToGiveOnDeactivation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCameraArmLength()
    { return { (void*)this, "bUseBPOverrideCameraArmLength" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCameraArmLengthInterpParams()
    { return { (void*)this, "bUseBPOverrideCameraArmLengthInterpParams" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCameraDesiredPivotLocation()
    { return { (void*)this, "bUseBPOverrideCameraDesiredPivotLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCameraPivotLocationInterpParams()
    { return { (void*)this, "bUseBPOverrideCameraPivotLocationInterpParams" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCharacterLocalControlZInterpSpeed()
    { return { (void*)this, "bUseBPOverrideCharacterLocalControlZInterpSpeed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCuddleFoodTypes()
    { return { (void*)this, "bUseBPOverrideCuddleFoodTypes" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideIsImprintPlayer()
    { return { (void*)this, "bUseBPOverrideIsImprintPlayer" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideMaxInventoryAccessDistance()
    { return { (void*)this, "bUseBPOverrideMaxInventoryAccessDistance" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideMaxUseDistance()
    { return { (void*)this, "bUseBPOverrideMaxUseDistance" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideTargetStructureSettingsDamageAdjuster()
    { return { (void*)this, "bUseBPOverrideTargetStructureSettingsDamageAdjuster" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideValuesToAddPerSecond()
    { return { (void*)this, "bUseBPOverrideValuesToAddPerSecond" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPassHarvestExperienceToActor()
    { return { (void*)this, "bUseBPPassHarvestExperienceToActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreServerUpload()
    { return { (void*)this, "bUseBPPreServerUpload" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventEquipWeapons()
    { return { (void*)this, "bUseBPPreventEquipWeapons" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventFallDamage()
    { return { (void*)this, "bUseBPPreventFallDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSetupForInstigator()
    { return { (void*)this, "bUseBPSetupForInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bUseBlueprintAnimNotifications()
    { return { (void*)this, "bUseBlueprintAnimNotifications" }; }
    BitFieldValue<bool, unsigned __int32> bUseBuffTickClient()
    { return { (void*)this, "bUseBuffTickClient" }; }
    BitFieldValue<bool, unsigned __int32> bUseBuffTickServer()
    { return { (void*)this, "bUseBuffTickServer" }; }
    BitFieldValue<bool, unsigned __int32> bUseCenteredTPVCamera()
    { return { (void*)this, "bUseCenteredTPVCamera" }; }
    BitFieldValue<bool, unsigned __int32> bUseDinoRangeForTooltip()
    { return { (void*)this, "bUseDinoRangeForTooltip" }; }
    BitFieldValue<bool, unsigned __int32> bUseInterceptItemSlotUse()
    { return { (void*)this, "bUseInterceptItemSlotUse" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnCarryCharacter()
    { return { (void*)this, "bUseOnCarryCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bUseRemoteClientTick()
    { return { (void*)this, "bUseRemoteClientTick" }; }
    BitFieldValue<bool, unsigned __int32> bUseSetHiddenInGameFromInstigator()
    { return { (void*)this, "bUseSetHiddenInGameFromInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bUseShouldInterceptedInputEventOverwriteUsualFunctionality_Array_Gamepad()
    { return { (void*)this, "bUseShouldInterceptedInputEventOverwriteUsualFunctionality_Array_Gamepad" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALBUFF_H

// ==========================================================================
//  APrimalBotCharacter — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALBOTCHARACTER_H
#define BRZ_SDK_JOGO_APRIMALBOTCHARACTER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct APrimalDinoCharacter;
struct UAnimSequence;
struct UAnimationAsset;
struct UObject;
struct USkeletalMeshComponent;

#include "APrimalDinoCharacter.h"

struct APrimalBotCharacter : public APrimalDinoCharacter
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalBotCharacter"); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.AddEquipmentAttachments(FBotEquipmentDefinitions&,USkeletalMeshComponent*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddEquipmentAttachments(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalBotCharacter.AddEquipmentAttachments(FBotEquipmentDefinitions&,USkeletalMeshComponent*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.AdjustDamage(float&,FDamageEvent&,AController*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AdjustDamage(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "APrimalBotCharacter.AdjustDamage(float&,FDamageEvent&,AController*,AActor*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.AllowBlockingWithShield()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=459+grafo=5/5]]
    BrzPonteiro AllowBlockingWithShield() const
    {
        return NativeCall<void*>(this, "APrimalBotCharacter.AllowBlockingWithShield()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.AllowedToPlayIdleFidgetAnimations()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AllowedToPlayIdleFidgetAnimations() const
    {
        return NativeCall<void*>(this, "APrimalBotCharacter.AllowedToPlayIdleFidgetAnimations()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnim
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AnimNotifyCustomEvent(unsigned long long a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, unsigned long long, void*, void*, void*>(this, "APrimalBotCharacter.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.AnimNotifyCustomState_Tick(FName,USkeletalMeshComponent*,UAnimSequenceBase*,
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AnimNotifyCustomState_Tick(unsigned long long a0, void* a1, void* a2, float a3, void* a4) const
    {
        return NativeCall<void*, unsigned long long, void*, void*, float, void*>(this, "APrimalBotCharacter.AnimNotifyCustomState_Tick(FName,USkeletalMeshComponent*,UAnimSequenceBase*,float,UAnimNotifyState*)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.ApplyBodyColors()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyBodyColors() const
    {
        return NativeCall<void*>(this, "APrimalBotCharacter.ApplyBodyColors()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.ApplyBoneModifiers()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=1367+bytes40+grafo=14/14]]
    void ApplyBoneModifiers() const
    {
        NativeCall<void>(this, "APrimalBotCharacter.ApplyBoneModifiers()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.ApplyMaterailDamageEffect(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyMaterailDamageEffect(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalBotCharacter.ApplyMaterailDamageEffect(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBotCharacter.AttachToDino(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void AttachToDino(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBotCharacter.AttachToDino(APrimalDinoCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.AttachWeaponMesh()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=2256+bytes40+chamadores=2+grafo=40/40]]
    BrzPonteiro AttachWeaponMesh() const
    {
        return NativeCall<void*>(this, "APrimalBotCharacter.AttachWeaponMesh()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBotCharacter.BPAttachedToSeatingStructure(APrimalStructureSeating*)
    // endereco: casamento de bytes com a build de referencia
    void BPAttachedToSeatingStructure(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBotCharacter.BPAttachedToSeatingStructure(APrimalStructureSeating*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.BPCanEquipWeapon(int)
    // endereco: casamento de bytes com a build de referencia
    bool BPCanEquipWeapon(int a0) const
    {
        return NativeCall<bool, int>(this, "APrimalBotCharacter.BPCanEquipWeapon(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.BPCanRideDino(APrimalDinoCharacter*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPCanRideDino(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBotCharacter.BPCanRideDino(APrimalDinoCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.BPCanSitOnStructure(APrimalStructureSeating*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=66+chamadores=3]]
    bool BPCanSitOnStructure(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBotCharacter.BPCanSitOnStructure(APrimalStructureSeating*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.BPFireInstantWeapon()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPFireInstantWeapon() const
    {
        return NativeCall<bool>(this, "APrimalBotCharacter.BPFireInstantWeapon()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.BPGetMeleeSocketLocation(FName)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPGetMeleeSocketLocation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalBotCharacter.BPGetMeleeSocketLocation(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.BPGetWeaponDefinitionDyeColorIDs(FBotWeaponDefinitions)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetWeaponDefinitionDyeColorIDs(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBotCharacter.BPGetWeaponDefinitionDyeColorIDs(FBotWeaponDefinitions)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.BPInitializeVoiceCollection()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BPInitializeVoiceCollection() const
    {
        NativeCall<void>(this, "APrimalBotCharacter.BPInitializeVoiceCollection()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.BPNotifyWeaponEquipped()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=45]]
    void BPNotifyWeaponEquipped() const
    {
        NativeCall<void>(this, "APrimalBotCharacter.BPNotifyWeaponEquipped()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.BPNotifyWeaponUnequipped()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=45]]
    void BPNotifyWeaponUnequipped() const
    {
        NativeCall<void>(this, "APrimalBotCharacter.BPNotifyWeaponUnequipped()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBotCharacter.BPOnStartRiding(APrimalDinoCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BPOnStartRiding(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBotCharacter.BPOnStartRiding(APrimalDinoCharacter*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBotCharacter.BPOnStopRiding(APrimalDinoCharacter*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPOnStopRiding(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBotCharacter.BPOnStopRiding(APrimalDinoCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.BPOnVoiceCollectionInitialized()
    // endereco: casamento de bytes com a build de referencia
    void BPOnVoiceCollectionInitialized() const
    {
        NativeCall<void>(this, "APrimalBotCharacter.BPOnVoiceCollectionInitialized()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.BPOverrideColorIDForEquipmentAttachment(int)
    // endereco: casamento de bytes com a build de referencia
    int BPOverrideColorIDForEquipmentAttachment(int a0) const
    {
        return NativeCall<int, int>(this, "APrimalBotCharacter.BPOverrideColorIDForEquipmentAttachment(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.BPOverrideInstantWeaponConfig(FInstantWeaponData)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOverrideInstantWeaponConfig(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBotCharacter.BPOverrideInstantWeaponConfig(FInstantWeaponData)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.BPPreSetupCharacterMesh()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPPreSetupCharacterMesh() const
    {
        NativeCall<void>(this, "APrimalBotCharacter.BPPreSetupCharacterMesh()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.BPPreventPlayTauntOrAcquireTargetAnim(AActor*,bool)
    // endereco: casamento de bytes com a build de referencia
    bool BPPreventPlayTauntOrAcquireTargetAnim(void* a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "APrimalBotCharacter.BPPreventPlayTauntOrAcquireTargetAnim(AActor*,bool)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBotCharacter.BPReleasedFromSeatingStructure(APrimalStructureSeating*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=53]]
    void BPReleasedFromSeatingStructure(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBotCharacter.BPReleasedFromSeatingStructure(APrimalStructureSeating*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBotCharacter.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "APrimalBotCharacter.BeginPlay()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.CalcDodgeWorldDirection()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro CalcDodgeWorldDirection() const
    {
        return NativeCall<void*>(this, "APrimalBotCharacter.CalcDodgeWorldDirection()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.CalcDodgeWorldDirection_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CalcDodgeWorldDirection_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalBotCharacter.CalcDodgeWorldDirection_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.CanAttack(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanAttack(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalBotCharacter.CanAttack(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.CanDodge()
    // endereco: casamento de bytes com a build de referencia
    bool CanDodge() const
    {
        return NativeCall<bool>(this, "APrimalBotCharacter.CanDodge()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.CanDodge_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=90]]
    BrzPonteiro CanDodge_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalBotCharacter.CanDodge_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.CanEquipShield()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro CanEquipShield() const
    {
        return NativeCall<void*>(this, "APrimalBotCharacter.CanEquipShield()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.CanEquipWeapon(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool CanEquipWeapon(int a0) const
    {
        return NativeCall<bool, int>(this, "APrimalBotCharacter.CanEquipWeapon(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.CanRideDino(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    bool CanRideDino(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBotCharacter.CanRideDino(APrimalDinoCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.CanSitOnStructure(APrimalStructureSeating*)
    // endereco: casamento de bytes com a build de referencia
    bool CanSitOnStructure(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBotCharacter.CanSitOnStructure(APrimalStructureSeating*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBotCharacter.ClearRidingDino()
    // endereco: thunk
    void ClearRidingDino() const
    {
        NativeCall<void>(this, "APrimalBotCharacter.ClearRidingDino()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBotCharacter.ClientsControlSeatingStructure(APrimalStructureSeating*,int)
    // endereco: casamento de bytes com a build de referencia
    void ClientsControlSeatingStructure(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "APrimalBotCharacter.ClientsControlSeatingStructure(APrimalStructureSeating*,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.ClientsControlSeatingStructure_Implementation(APrimalStructureSeating*,int)
    // endereco: cache_pdb_25090264
    BrzPonteiro ClientsControlSeatingStructure_Implementation(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "APrimalBotCharacter.ClientsControlSeatingStructure_Implementation(APrimalStructureSeating*,int)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBotCharacter.ClientsReleaseSeatingStructure(APrimalStructureSeating*,bool)
    // endereco: casamento de bytes com a build de referencia
    void ClientsReleaseSeatingStructure(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "APrimalBotCharacter.ClientsReleaseSeatingStructure(APrimalStructureSeating*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.ClientsReleaseSeatingStructure_Implementation(APrimalStructureSeating*,bool)
    // endereco: cache_pdb_25090264
    BrzPonteiro ClientsReleaseSeatingStructure_Implementation(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalBotCharacter.ClientsReleaseSeatingStructure_Implementation(APrimalStructureSeating*,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.ControlSeatingStructure(APrimalStructureSeating*,int)
    // endereco: casamento de bytes com a build de referencia
    bool ControlSeatingStructure(void* a0, int a1) const
    {
        return NativeCall<bool, void*, int>(this, "APrimalBotCharacter.ControlSeatingStructure(APrimalStructureSeating*,int)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.CopyBoneModifiersToMesh(USkeletalMeshComponent*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=84]]
    void CopyBoneModifiersToMesh(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBotCharacter.CopyBoneModifiersToMesh(USkeletalMeshComponent*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.CurrentSeatingStructure()
    // endereco: cache_pdb_25090264
    UObject* CurrentSeatingStructure() const
    {
        return NativeCall<UObject*>(this, "APrimalBotCharacter.CurrentSeatingStructure()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBotCharacter.CurrentlyRiddenDino()
    // endereco: cache_pdb_25090264
    APrimalDinoCharacter* CurrentlyRiddenDino() const
    {
        return NativeCall<APrimalDinoCharacter*>(this, "APrimalBotCharacter.CurrentlyRiddenDino()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.DestroyWeaponMeshes()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro DestroyWeaponMeshes() const
    {
        return NativeCall<void*>(this, "APrimalBotCharacter.DestroyWeaponMeshes()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.Destroyed()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=67]]
    BrzPonteiro Destroyed() const
    {
        return NativeCall<void*>(this, "APrimalBotCharacter.Destroyed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBotCharacter.Die(float,FDamageEvent&,AController*,AActor*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=163]]
    bool Die(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<bool, float, void*, void*, void*>(this, "APrimalBotCharacter.Die(float,FDamageEvent&,AController*,AActor*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.DoAttack(int,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DoAttack(int a0, bool a1, bool a2) const
    {
        return NativeCall<void*, int, bool, bool>(this, "APrimalBotCharacter.DoAttack(int,bool,bool)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.EquipDefaultWeapon()
    // endereco: casamento de bytes com a build de referencia
    void EquipDefaultWeapon() const
    {
        NativeCall<void>(this, "APrimalBotCharacter.EquipDefaultWeapon()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.FinishWeaponSwitch()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FinishWeaponSwitch() const
    {
        return NativeCall<void*>(this, "APrimalBotCharacter.FinishWeaponSwitch()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.FireInstantWeapon()
    // endereco: casamento de bytes com a build de referencia
    bool FireInstantWeapon() const
    {
        return NativeCall<bool>(this, "APrimalBotCharacter.FireInstantWeapon()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.GenerateBodyType()
    // endereco: cache_pdb_25090264
    BrzPonteiro GenerateBodyType() const
    {
        return NativeCall<void*>(this, "APrimalBotCharacter.GenerateBodyType()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.GetAdditiveStandingAnimation_Implementation(float&,float&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAdditiveStandingAnimation_Implementation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalBotCharacter.GetAdditiveStandingAnimation_Implementation(float&,float&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.GetAlternateStandingAnimation_Implementation(float&,float&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=42]]
    BrzPonteiro GetAlternateStandingAnimation_Implementation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalBotCharacter.GetAlternateStandingAnimation_Implementation(float&,float&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.GetAvailableWeaponsForAttackIndex(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAvailableWeaponsForAttackIndex(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalBotCharacter.GetAvailableWeaponsForAttackIndex(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.GetBoneModifierValue(TEnumAsByte<EBoneModifierType::Type>,FBoneModifierRange
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetBoneModifierValue(unsigned char a0, void* a1) const
    {
        return NativeCall<void*, unsigned char, void*>(this, "APrimalBotCharacter.GetBoneModifierValue(TEnumAsByte<EBoneModifierType::Type>,FBoneModifierRangeArray&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.GetBotAnimBlueprintOverride(TSubclassOf<UAnimInstance>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetBotAnimBlueprintOverride(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBotCharacter.GetBotAnimBlueprintOverride(TSubclassOf<UAnimInstance>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBotCharacter.GetBotAnimSequenceOverride(UAnimSequence*)
    // endereco: casamento de bytes com a build de referencia
    UAnimSequence* GetBotAnimSequenceOverride(void* a0) const
    {
        return NativeCall<UAnimSequence*, void*>(this, "APrimalBotCharacter.GetBotAnimSequenceOverride(UAnimSequence*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.GetComplexTargetingLocationForTarget(AActor*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetComplexTargetingLocationForTarget(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalBotCharacter.GetComplexTargetingLocationForTarget(AActor*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.GetDeathAnim_Implementation(float,UE::Math::TVector<double>&,APawn*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    UAnimationAsset* GetDeathAnim_Implementation(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<UAnimationAsset*, float, void*, void*, void*>(this, "APrimalBotCharacter.GetDeathAnim_Implementation(float,UE::Math::TVector<double>&,APawn*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBotCharacter.GetDinoRidingAnimation()
    // endereco: thunk
    UAnimSequence* GetDinoRidingAnimation() const
    {
        return NativeCall<UAnimSequence*>(this, "APrimalBotCharacter.GetDinoRidingAnimation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.GetEquipmentItemCDOOfType(TEnumAsByte<EPrimalEquipmentType::Type>)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=412+grafo=4/4]]
    BrzPonteiro GetEquipmentItemCDOOfType(unsigned char a0) const
    {
        return NativeCall<void*, unsigned char>(this, "APrimalBotCharacter.GetEquipmentItemCDOOfType(TEnumAsByte<EPrimalEquipmentType::Type>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBotCharacter.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<3
    // endereco: casamento de bytes com a build de referencia
    void GetLifetimeReplicatedProps(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBotCharacter.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.GetLookOffsetSocketLocation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetLookOffsetSocketLocation() const
    {
        return NativeCall<void*>(this, "APrimalBotCharacter.GetLookOffsetSocketLocation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBotCharacter.GetMaxAttackRange()
    // endereco: casamento de bytes com a build de referencia
    float GetMaxAttackRange() const
    {
        return NativeCall<float>(this, "APrimalBotCharacter.GetMaxAttackRange()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.GetMeleeSocketLocation(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMeleeSocketLocation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalBotCharacter.GetMeleeSocketLocation(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBotCharacter.GetMinAttackRange()
    // endereco: casamento de bytes com a build de referencia
    float GetMinAttackRange() const
    {
        return NativeCall<float>(this, "APrimalBotCharacter.GetMinAttackRange()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.GetOriginalTargetingTeam()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetOriginalTargetingTeam() const
    {
        return NativeCall<void*>(this, "APrimalBotCharacter.GetOriginalTargetingTeam()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.GetSeatingAnimation()
    // endereco: thunk
    UObject* GetSeatingAnimation() const
    {
        return NativeCall<UObject*>(this, "APrimalBotCharacter.GetSeatingAnimation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.GetSeatingStructure()
    // classe: a funcao mora em APrimalCharacter, e APrimalBotCharacter herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSeatingStructure() const
    {
        return NativeCall<void*>(this, "APrimalCharacter.GetSeatingStructure()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.GetShouldUseComplexTargeting()
    // endereco: casamento de bytes com a build de referencia
    bool GetShouldUseComplexTargeting() const
    {
        return NativeCall<bool>(this, "APrimalBotCharacter.GetShouldUseComplexTargeting()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.GetTyrantsInfluenceEffect(UE::Math::TVector2<double>&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=244+grafo=3/3]]
    BrzPonteiro GetTyrantsInfluenceEffect(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBotCharacter.GetTyrantsInfluenceEffect(UE::Math::TVector2<double>&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.GetWeaponTemplateCDO(int)
    // endereco: casamento de bytes com a build de referencia
    UObject* GetWeaponTemplateCDO(int a0) const
    {
        return NativeCall<UObject*, int>(this, "APrimalBotCharacter.GetWeaponTemplateCDO(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.HasEquipmentOfType(TEnumAsByte<EPrimalEquipmentType::Type>)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=408+grafo=4/4]]
    BrzPonteiro HasEquipmentOfType(unsigned char a0) const
    {
        return NativeCall<void*, unsigned char>(this, "APrimalBotCharacter.HasEquipmentOfType(TEnumAsByte<EPrimalEquipmentType::Type>)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.HasWeaponEquipped()
    // endereco: cache_pdb_25090264
    bool HasWeaponEquipped() const
    {
        return NativeCall<bool>(this, "APrimalBotCharacter.HasWeaponEquipped()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.HasWeaponEquippedForAttackIndex(int)
    // endereco: cache_pdb_25090264
    bool HasWeaponEquippedForAttackIndex(int a0) const
    {
        return NativeCall<bool, int>(this, "APrimalBotCharacter.HasWeaponEquippedForAttackIndex(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBotCharacter.InitializeAnimOverrides()
    // endereco: casamento de bytes com a build de referencia
    void InitializeAnimOverrides() const
    {
        NativeCall<void>(this, "APrimalBotCharacter.InitializeAnimOverrides()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.InitializeVoiceCollection()
    // endereco: casamento de bytes com a build de referencia
    void InitializeVoiceCollection() const
    {
        NativeCall<void>(this, "APrimalBotCharacter.InitializeVoiceCollection()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.IsBlockedByShield(FHitResult&,UE::Math::TVector<double>&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsBlockedByShield(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "APrimalBotCharacter.IsBlockedByShield(FHitResult&,UE::Math::TVector<double>&,bool)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.IsBlockingWithShield()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=139]]
    bool IsBlockingWithShield() const
    {
        return NativeCall<bool>(this, "APrimalBotCharacter.IsBlockingWithShield()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.IsControllingBallistaTurret()
    // endereco: cache_pdb_25090264
    bool IsControllingBallistaTurret() const
    {
        return NativeCall<bool>(this, "APrimalBotCharacter.IsControllingBallistaTurret()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.IsControllingStandingMountedTurret()
    // endereco: cache_pdb_25090264
    bool IsControllingStandingMountedTurret() const
    {
        return NativeCall<bool>(this, "APrimalBotCharacter.IsControllingStandingMountedTurret()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.IsDodging(float)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=139+chamadores=3]]
    bool IsDodging(float a0) const
    {
        return NativeCall<bool, float>(this, "APrimalBotCharacter.IsDodging(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.IsDodging_Implementation(float)
    // endereco: cache_pdb_25090264
    BrzPonteiro IsDodging_Implementation(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalBotCharacter.IsDodging_Implementation(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBotCharacter.IsNetRelevantFor(AActor*,AActor*,UE::Math::TVector<double>&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=159]]
    bool IsNetRelevantFor(void* a0, void* a1, void* a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "APrimalBotCharacter.IsNetRelevantFor(AActor*,AActor*,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.IsNonWeaponAttack(int)
    // endereco: casamento de bytes com a build de referencia
    bool IsNonWeaponAttack(int a0) const
    {
        return NativeCall<bool, int>(this, "APrimalBotCharacter.IsNonWeaponAttack(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.IsProjectileVisible()
    // endereco: cache_pdb_25090264
    bool IsProjectileVisible() const
    {
        return NativeCall<bool>(this, "APrimalBotCharacter.IsProjectileVisible()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.IsPullingBowString()
    // endereco: cache_pdb_25090264
    bool IsPullingBowString() const
    {
        return NativeCall<bool>(this, "APrimalBotCharacter.IsPullingBowString()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.IsUsingAlternateSkelMesh()
    // endereco: cache_pdb_25090264
    bool IsUsingAlternateSkelMesh() const
    {
        return NativeCall<bool>(this, "APrimalBotCharacter.IsUsingAlternateSkelMesh()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.IsUsingShield()
    // endereco: cache_pdb_25090264
    bool IsUsingShield() const
    {
        return NativeCall<bool>(this, "APrimalBotCharacter.IsUsingShield()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.NetOnShieldBlocked(UE::Math::TVector<double>,AActor*,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NetOnShieldBlocked(void* a0, void* a1, float a2) const
    {
        return NativeCall<void*, void*, void*, float>(this, "APrimalBotCharacter.NetOnShieldBlocked(UE::Math::TVector<double>,AActor*,float)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.NetOnShieldBlocked_Implementation(UE::Math::TVector<double>,AActor*,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NetOnShieldBlocked_Implementation(void* a0, void* a1, float a2) const
    {
        return NativeCall<void*, void*, void*, float>(this, "APrimalBotCharacter.NetOnShieldBlocked_Implementation(UE::Math::TVector<double>,AActor*,float)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.NetPlayFireBallistaAnimation_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NetPlayFireBallistaAnimation_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalBotCharacter.NetPlayFireBallistaAnimation_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.NetStartFireWeapon()
    // endereco: cache_pdb_25090264
    void NetStartFireWeapon() const
    {
        NativeCall<void>(this, "APrimalBotCharacter.NetStartFireWeapon()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.NetStartFireWeapon_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=29]]
    BrzPonteiro NetStartFireWeapon_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalBotCharacter.NetStartFireWeapon_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.NetStopFireWeapon()
    // endereco: cache_pdb_25090264
    void NetStopFireWeapon() const
    {
        NativeCall<void>(this, "APrimalBotCharacter.NetStopFireWeapon()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.NetStopFireWeapon_Implementation()
    // endereco: cache_pdb_25090264
    BrzPonteiro NetStopFireWeapon_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalBotCharacter.NetStopFireWeapon_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.OnDodgeStart()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=96]]
    void OnDodgeStart() const
    {
        NativeCall<void>(this, "APrimalBotCharacter.OnDodgeStart()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.OnDodgeStart_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=169]]
    BrzPonteiro OnDodgeStart_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalBotCharacter.OnDodgeStart_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.OnEquipFinished()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=527+grafo=3/3]]
    void OnEquipFinished() const
    {
        NativeCall<void>(this, "APrimalBotCharacter.OnEquipFinished()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.OnMovementModeChanged(EMovementMode,unsignedchar)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=182]]
    BrzPonteiro OnMovementModeChanged(int a0, unsigned char a1) const
    {
        return NativeCall<void*, int, unsigned char>(this, "APrimalBotCharacter.OnMovementModeChanged(EMovementMode,unsignedchar)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.OnRep_CurrEquippedWeaponIndex(int)
    // endereco: casamento de bytes com a build de referencia
    void OnRep_CurrEquippedWeaponIndex(int a0) const
    {
        NativeCall<void, int>(this, "APrimalBotCharacter.OnRep_CurrEquippedWeaponIndex(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.OnRep_RawBoneModifiers()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=273+grafo=3/3]]
    void OnRep_RawBoneModifiers() const
    {
        NativeCall<void>(this, "APrimalBotCharacter.OnRep_RawBoneModifiers()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.OnRep_RidingDino()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=81]]
    void OnRep_RidingDino() const
    {
        NativeCall<void>(this, "APrimalBotCharacter.OnRep_RidingDino()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.OnRiddenDinoDied(APrimalCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=61]]
    void OnRiddenDinoDied(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBotCharacter.OnRiddenDinoDied(APrimalCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.OnRiddenDinoSleepStateChanged(APrimalCharacter*,bool)
    // endereco: casamento de bytes com a build de referencia
    void OnRiddenDinoSleepStateChanged(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "APrimalBotCharacter.OnRiddenDinoSleepStateChanged(APrimalCharacter*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.OnShieldBlockDamageDepleted(AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnShieldBlockDamageDepleted(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBotCharacter.OnShieldBlockDamageDepleted(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.OnTargetChanged_Implementation(AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnTargetChanged_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBotCharacter.OnTargetChanged_Implementation(AActor*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.OnUnEquipFinished()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=123]]
    void OnUnEquipFinished() const
    {
        NativeCall<void>(this, "APrimalBotCharacter.OnUnEquipFinished()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.OverrideAcquiredTargetAnim(UAnimMontage*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    UObject* OverrideAcquiredTargetAnim(void* a0) const
    {
        return NativeCall<UObject*, void*>(this, "APrimalBotCharacter.OverrideAcquiredTargetAnim(UAnimMontage*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.OverrideIdleFidgetAnimation(UAnimMontage*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OverrideIdleFidgetAnimation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBotCharacter.OverrideIdleFidgetAnimation(UAnimMontage*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.PlayDying(float,FDamageEvent&,APawn*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PlayDying(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, float, void*, void*, void*>(this, "APrimalBotCharacter.PlayDying(float,FDamageEvent&,APawn*,AActor*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.PlayReloadBallistaAnimation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PlayReloadBallistaAnimation() const
    {
        return NativeCall<void*>(this, "APrimalBotCharacter.PlayReloadBallistaAnimation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.PostInitializeComponents()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=54+grafo=3/3]]
    BrzPonteiro PostInitializeComponents() const
    {
        return NativeCall<void*>(this, "APrimalBotCharacter.PostInitializeComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBotCharacter.PreInitializeComponents()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=132]]
    void PreInitializeComponents() const
    {
        NativeCall<void>(this, "APrimalBotCharacter.PreInitializeComponents()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.PrepareForSaving()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=36]]
    BrzPonteiro PrepareForSaving() const
    {
        return NativeCall<void*>(this, "APrimalBotCharacter.PrepareForSaving()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.PreventReleaseFromSeatingStructure(APrimalStructureSeating*)
    // endereco: cache_pdb_25090264
    bool PreventReleaseFromSeatingStructure(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBotCharacter.PreventReleaseFromSeatingStructure(APrimalStructureSeating*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.PreventReleaseFromSeatingStructure_Implementation(APrimalStructureSeating*)
    // endereco: cache_pdb_25090264
    BrzPonteiro PreventReleaseFromSeatingStructure_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBotCharacter.PreventReleaseFromSeatingStructure_Implementation(APrimalStructureSeating*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.RefreshDefaultAttachments()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro RefreshDefaultAttachments() const
    {
        return NativeCall<void*>(this, "APrimalBotCharacter.RefreshDefaultAttachments()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.RefreshEquipment(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void RefreshEquipment(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "APrimalBotCharacter.RefreshEquipment(bool,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.RefreshEquipmentColors()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RefreshEquipmentColors() const
    {
        return NativeCall<void*>(this, "APrimalBotCharacter.RefreshEquipmentColors()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.ReleaseSeatingStructure(APrimalStructureSeating*,bool)
    // endereco: casamento de bytes com a build de referencia
    bool ReleaseSeatingStructure(void* a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "APrimalBotCharacter.ReleaseSeatingStructure(APrimalStructureSeating*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.RemoveAttachedComponents(TArray<TWeakObjectPtr<UActorComponent,FWeakObjectPt
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveAttachedComponents(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBotCharacter.RemoveAttachedComponents(TArray<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.Serialize(FArchive&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Serialize(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBotCharacter.Serialize(FArchive&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.SetCharacterMeshesMaterialScalarParamValue(FName,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetCharacterMeshesMaterialScalarParamValue(unsigned long long a0, float a1) const
    {
        return NativeCall<void*, unsigned long long, float>(this, "APrimalBotCharacter.SetCharacterMeshesMaterialScalarParamValue(FName,float)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.SetIsStationairy(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=40]]
    void SetIsStationairy(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalBotCharacter.SetIsStationairy(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.SetProjectileVisible(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=117]]
    void SetProjectileVisible(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalBotCharacter.SetProjectileVisible(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.SetShieldVisible(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetShieldVisible(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalBotCharacter.SetShieldVisible(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.SetSleeping(bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetSleeping(bool a0, bool a1, bool a2) const
    {
        return NativeCall<void*, bool, bool, bool>(this, "APrimalBotCharacter.SetSleeping(bool,bool,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.ShouldActivateNavigationInvokerComponent()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShouldActivateNavigationInvokerComponent() const
    {
        return NativeCall<void*>(this, "APrimalBotCharacter.ShouldActivateNavigationInvokerComponent()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.ShouldDodge(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool ShouldDodge(bool a0) const
    {
        return NativeCall<bool, bool>(this, "APrimalBotCharacter.ShouldDodge(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.ShouldDodge_Implementation(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShouldDodge_Implementation(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalBotCharacter.ShouldDodge_Implementation(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.ShouldMoveTowardsTargetWithinAttackRange(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShouldMoveTowardsTargetWithinAttackRange(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalBotCharacter.ShouldMoveTowardsTargetWithinAttackRange(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.ShouldReleaseFromSeatingStructure_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=142]]
    BrzPonteiro ShouldReleaseFromSeatingStructure_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalBotCharacter.ShouldReleaseFromSeatingStructure_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.StartEquipNewWeapon()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartEquipNewWeapon() const
    {
        return NativeCall<void*>(this, "APrimalBotCharacter.StartEquipNewWeapon()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.StartFireBallista()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=378]]
    bool StartFireBallista() const
    {
        return NativeCall<bool>(this, "APrimalBotCharacter.StartFireBallista()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.StartFireSound()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartFireSound() const
    {
        return NativeCall<void*>(this, "APrimalBotCharacter.StartFireSound()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.StartFireWeapon(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=246+grafo=5/5]]
    void StartFireWeapon(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalBotCharacter.StartFireWeapon(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.StartMuzzleFX()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartMuzzleFX() const
    {
        return NativeCall<void*>(this, "APrimalBotCharacter.StartMuzzleFX()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBotCharacter.StaticRegisterNativesAPrimalBotCharacter()
    // endereco: cache_pdb_25090264
    static void StaticRegisterNativesAPrimalBotCharacter()
    {
        NativeCall<void>(nullptr, "APrimalBotCharacter.StaticRegisterNativesAPrimalBotCharacter()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.StopFireBallista()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=269]]
    bool StopFireBallista() const
    {
        return NativeCall<bool>(this, "APrimalBotCharacter.StopFireBallista()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.StopFireWeapon(bool)
    // endereco: casamento de bytes com a build de referencia
    void StopFireWeapon(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalBotCharacter.StopFireWeapon(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBotCharacter.TakeDamage(float,FDamageEvent&,AController*,AActor*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=367+grafo=3/3]]
    float TakeDamage(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<float, float, void*, void*, void*>(this, "APrimalBotCharacter.TakeDamage(float,FDamageEvent&,AController*,AActor*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.TargetingTeamChanged()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=47]]
    BrzPonteiro TargetingTeamChanged() const
    {
        return NativeCall<void*>(this, "APrimalBotCharacter.TargetingTeamChanged()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBotCharacter.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "APrimalBotCharacter.Tick(float)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.TryDodge()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=112]]
    bool TryDodge() const
    {
        return NativeCall<bool>(this, "APrimalBotCharacter.TryDodge()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.TryDodge_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryDodge_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalBotCharacter.TryDodge_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.TryEquipWeapon(int)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=598+grafo=11/11]]
    bool TryEquipWeapon(int a0) const
    {
        return NativeCall<bool, int>(this, "APrimalBotCharacter.TryEquipWeapon(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.UnEquipWeapon()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void UnEquipWeapon() const
    {
        NativeCall<void>(this, "APrimalBotCharacter.UnEquipWeapon()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.UnEquipWeaponImmediate_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=113]]
    BrzPonteiro UnEquipWeaponImmediate_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalBotCharacter.UnEquipWeaponImmediate_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.UnPausedAnimSharingLeaderComponent()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=45]]
    BrzPonteiro UnPausedAnimSharingLeaderComponent() const
    {
        return NativeCall<void*>(this, "APrimalBotCharacter.UnPausedAnimSharingLeaderComponent()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.Unstasis()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Unstasis() const
    {
        return NativeCall<void*>(this, "APrimalBotCharacter.Unstasis()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBotCharacter.UpdateDodge(float)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=126]]
    void UpdateDodge(float a0) const
    {
        NativeCall<void, float>(this, "APrimalBotCharacter.UpdateDodge(float)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBotCharacter.UpdateDodgeCooldown(float)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=126]]
    void UpdateDodgeCooldown(float a0) const
    {
        NativeCall<void, float>(this, "APrimalBotCharacter.UpdateDodgeCooldown(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.UpdateDodgeCooldown_Implementation(float)
    // endereco: cache_pdb_25090264
    BrzPonteiro UpdateDodgeCooldown_Implementation(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalBotCharacter.UpdateDodgeCooldown_Implementation(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.UpdateDodge_Implementation(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=324+grafo=3/3]]
    BrzPonteiro UpdateDodge_Implementation(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalBotCharacter.UpdateDodge_Implementation(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.UpdateFollowerAttachedItemsLeaderPose()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=566+grafo=5/5]]
    BrzPonteiro UpdateFollowerAttachedItemsLeaderPose() const
    {
        return NativeCall<void*>(this, "APrimalBotCharacter.UpdateFollowerAttachedItemsLeaderPose()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.UpdateHair(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateHair(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalBotCharacter.UpdateHair(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotCharacter.UpdateRidingDinoTargetingTeam()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=42]]
    void UpdateRidingDinoTargetingTeam() const
    {
        NativeCall<void>(this, "APrimalBotCharacter.UpdateRidingDinoTargetingTeam()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.UseAdditiveStandingAnimation_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=81]]
    BrzPonteiro UseAdditiveStandingAnimation_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalBotCharacter.UseAdditiveStandingAnimation_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.UseAlternateStandingAnimation_Implementation()
    // endereco: cache_pdb_25090264
    BrzPonteiro UseAlternateStandingAnimation_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalBotCharacter.UseAlternateStandingAnimation_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBotCharacter.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)
    // endereco: cache_pdb_25090264
    void ValidateGeneratedRepEnums(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBotCharacter.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotCharacter.WildCanDamageFoliage()
    // endereco: cache_pdb_25090264
    BrzPonteiro WildCanDamageFoliage() const
    {
        return NativeCall<void*>(this, "APrimalBotCharacter.WildCanDamageFoliage()");
    }

    BrzCampoPonteiro AdditionalOverrideAnimBlueprintsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBotCharacter.AdditionalOverrideAnimBlueprints")); }
    BrzCampoPonteiro AlternateAnimBPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBotCharacter.AlternateAnimBP")); }
    BrzCampoPonteiro AlternateSkeletalMeshField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBotCharacter.AlternateSkeletalMesh")); }
    BrzCampoPonteiro AlternateSkeletalMeshMaterialsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBotCharacter.AlternateSkeletalMeshMaterials")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AdditionalOverrideAnimBlueprints` +64, medido na build 25090264
    //  (offset absoluto medido: 0x2B40; confianca media)
    void*& AnimSequenceOverridesField() const
    { return BrzCampoAncorado<void*>(this, "AdditionalOverrideAnimBlueprints", 64); }
    int& AttackIndexForDesiredAttackRangeField() const
    { return *GetNativePointerField<int*>(this, "APrimalBotCharacter.AttackIndexForDesiredAttackRange"); }
    float& BodyScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalBotCharacter.BodyScale"); }
    BrzCampoPonteiro BoneModifierSliderValuesMaxField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBotCharacter.BoneModifierSliderValuesMax")); }
    BrzCampoPonteiro BoneModifierSliderValuesMinField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBotCharacter.BoneModifierSliderValuesMin")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AdditionalOverrideAnimBlueprints` +16, medido na build 25090264
    //  (offset absoluto medido: 0x2B10; confianca media)
    TArray<void*>& BoneModifiersField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "AdditionalOverrideAnimBlueprints", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AdditionalOverrideAnimBlueprints` +32, medido na build 25090264
    //  (offset absoluto medido: 0x2B20; confianca media)
    TArray<void*>& BoneModifiers_FemaleField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "AdditionalOverrideAnimBlueprints", 32); }
    BrzCampoPonteiro Bot_Voice_CollectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBotCharacter.Bot_Voice_Collection")); }
    BrzCampoPonteiro Bot_Voice_Collection_FemaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBotCharacter.Bot_Voice_Collection_Female")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BodyScale` +20, medido na build 25090264
    //  (offset absoluto medido: 0x2DD8; confianca alta)
    void*& CheckDodgeCooldownField() const
    { return BrzCampoAncorado<void*>(this, "BodyScale", 20); }
    float& CheckDodgeIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalBotCharacter.CheckDodgeInterval"); }
    int& CurrEquippedWeaponIndexField() const
    { return *GetNativePointerField<int*>(this, "APrimalBotCharacter.CurrEquippedWeaponIndex"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SeatingStructureSeatNumber` +8, medido na build 25090264
    //  (offset absoluto medido: 0x2DEC; confianca alta)
    void*& CurrentWeaponStateField() const
    { return BrzCampoAncorado<void*>(this, "SeatingStructureSeatNumber", 8); }
    TArray<void*>& DefaultAttachmentInfosField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBotCharacter.DefaultAttachmentInfos"); }
    BrzCampoPonteiro DefaultAttachmentInfosMaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBotCharacter.DefaultAttachmentInfosMale")); }
    TArray<void*>& DefaultDynamicMaterialByteFloatsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBotCharacter.DefaultDynamicMaterialByteFloats"); }
    TWeakObjectPtr<void>& DinoBeingRiddenField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBotCharacter.DinoBeingRidden"); }
    float& DodgeChanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalBotCharacter.DodgeChance"); }
    float& DodgeCooldownField() const
    { return *GetNativePointerField<float*>(this, "APrimalBotCharacter.DodgeCooldown"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AdditionalOverrideAnimBlueprints` +144, medido na build 25090264
    //  (offset absoluto medido: 0x2B90; confianca baixa)
    void*& DodgeDirectionField() const
    { return BrzCampoAncorado<void*>(this, "AdditionalOverrideAnimBlueprints", 144); }
    float& DodgeDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalBotCharacter.DodgeDistance"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BodyScale` +16, medido na build 25090264
    //  (offset absoluto medido: 0x2DD4; confianca alta)
    void*& DodgeDurationField() const
    { return BrzCampoAncorado<void*>(this, "BodyScale", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AdditionalOverrideAnimBlueprints` +192, medido na build 25090264
    //  (offset absoluto medido: 0x2BC0; confianca baixa)
    void*& DodgeEndLocField() const
    { return BrzCampoAncorado<void*>(this, "AdditionalOverrideAnimBlueprints", 192); }
    BrzCampoPonteiro DodgeMontageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBotCharacter.DodgeMontage")); }
    float& DodgeSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalBotCharacter.DodgeSpeed"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AdditionalOverrideAnimBlueprints` +168, medido na build 25090264
    //  (offset absoluto medido: 0x2BA8; confianca baixa)
    void*& DodgeStartLocField() const
    { return BrzCampoAncorado<void*>(this, "AdditionalOverrideAnimBlueprints", 168); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BodyScale` +12, medido na build 25090264
    //  (offset absoluto medido: 0x2DD0; confianca alta)
    void*& DodgeTimeElapsedField() const
    { return BrzCampoAncorado<void*>(this, "BodyScale", 12); }
    FieldArray<unsigned char> DynamicMaterialBytesField() const
    { return { (void*)this, "APrimalBotCharacter.DynamicMaterialBytes" }; }
    FieldArray<unsigned char> DynamicOverrideHairDyeBytesField() const
    { return { (void*)this, "APrimalBotCharacter.DynamicOverrideHairDyeBytes" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AdditionalOverrideAnimBlueprints` +256, medido na build 25090264
    //  (offset absoluto medido: 0x2C00; confianca baixa)
    void*& EquipDefaultWeaponHandleField() const
    { return BrzCampoAncorado<void*>(this, "AdditionalOverrideAnimBlueprints", 256); }
    BrzCampoPonteiro EquipmentDefinitionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBotCharacter.EquipmentDefinitions")); }
    BrzCampoPonteiro EquippedWeaponCDOField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBotCharacter.EquippedWeaponCDO")); }
    unsigned char& EyebrowIndexField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalBotCharacter.EyebrowIndex"); }
    USkeletalMeshComponent*& EyebrowsComponentField() const
    { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalBotCharacter.EyebrowsComponent"); }
    USkeletalMeshComponent*& EyelashesComponentField() const
    { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalBotCharacter.EyelashesComponent"); }
    USkeletalMeshComponent*& FacialHairComponentField() const
    { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalBotCharacter.FacialHairComponent"); }
    unsigned char& FacialHairIndexField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalBotCharacter.FacialHairIndex"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AdditionalOverrideAnimBlueprints` +288, medido na build 25090264
    //  (offset absoluto medido: 0x2C20; confianca baixa)
    void*& FinishWeaponSwitchHandleField() const
    { return BrzCampoAncorado<void*>(this, "AdditionalOverrideAnimBlueprints", 288); }
    BrzCampoPonteiro FireACField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBotCharacter.FireAC")); }
    USkeletalMeshComponent*& HeadHairComponentField() const
    { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalBotCharacter.HeadHairComponent"); }
    unsigned char& HeadHairIndexField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalBotCharacter.HeadHairIndex"); }
    double& LastControlSeatingStructureTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBotCharacter.LastControlSeatingStructureTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SeatingStructureSeatNumber` +4, medido na build 25090264
    //  (offset absoluto medido: 0x2DE8; confianca alta)
    void*& LastEquippedWeaponIndexField() const
    { return BrzCampoAncorado<void*>(this, "SeatingStructureSeatNumber", 4); }
    double& LastFireTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBotCharacter.LastFireTime"); }
    double& LastReleaseSeatingStructureTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBotCharacter.LastReleaseSeatingStructureTime"); }
    double& LastStartedRidingTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBotCharacter.LastStartedRidingTime"); }
    double& LastStoppedRidingTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBotCharacter.LastStoppedRidingTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MuzzleFXSC` +24, medido na build 25090264
    //  (offset absoluto medido: 0x2CF0; confianca alta)
    void*& LastTimeBlockedWithShieldField() const
    { return BrzCampoAncorado<void*>(this, "MuzzleFXSC", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MuzzleFXSC` +48, medido na build 25090264
    //  (offset absoluto medido: 0x2D08; confianca media)
    void*& LastTimeCheckedShouldMoveTowardsTargetWithinAttackRangeField() const
    { return BrzCampoAncorado<void*>(this, "MuzzleFXSC", 48); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MuzzleFXSC` +40, medido na build 25090264
    //  (offset absoluto medido: 0x2D00; confianca media)
    double& LastTimeDetectedSleepingAnimWhileAwakeField() const
    { return BrzCampoAncorado<double>(this, "MuzzleFXSC", 40); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MuzzleFXSC` +32, medido na build 25090264
    //  (offset absoluto medido: 0x2CF8; confianca alta)
    void*& LastTimeDidForceUpdateCharactersField() const
    { return BrzCampoAncorado<void*>(this, "MuzzleFXSC", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MuzzleFXSC` +8, medido na build 25090264
    //  (offset absoluto medido: 0x2CE0; confianca alta)
    void*& LastTimeEquippedWeaponField() const
    { return BrzCampoAncorado<void*>(this, "MuzzleFXSC", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MuzzleFXSC` +16, medido na build 25090264
    //  (offset absoluto medido: 0x2CE8; confianca alta)
    void*& LastTimeWasAttackingField() const
    { return BrzCampoAncorado<void*>(this, "MuzzleFXSC", 16); }
    BrzCampoPonteiro MuzzleFXSCField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBotCharacter.MuzzleFXSC")); }
    BrzCampoPonteiro NotifyOnTargetChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBotCharacter.NotifyOnTargetChanged")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AdditionalOverrideAnimBlueprints` +264, medido na build 25090264
    //  (offset absoluto medido: 0x2C08; confianca baixa)
    void*& OnEquipFinishedHandleField() const
    { return BrzCampoAncorado<void*>(this, "AdditionalOverrideAnimBlueprints", 264); }
    BrzCampoPonteiro OnFullyInitializedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBotCharacter.OnFullyInitialized")); }
    BrzCampoPonteiro OnSeatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBotCharacter.OnSeated")); }
    BrzCampoPonteiro OnStartRidingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBotCharacter.OnStartRiding")); }
    BrzCampoPonteiro OnStopRidingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBotCharacter.OnStopRiding")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AdditionalOverrideAnimBlueprints` +272, medido na build 25090264
    //  (offset absoluto medido: 0x2C10; confianca baixa)
    void*& OnUnEquipFinishedHandleField() const
    { return BrzCampoAncorado<void*>(this, "AdditionalOverrideAnimBlueprints", 272); }
    BrzCampoPonteiro OnUnseatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBotCharacter.OnUnseated")); }
    BrzCampoPonteiro OnWeaponEquippedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBotCharacter.OnWeaponEquipped")); }
    BrzCampoPonteiro OnWeaponUnequippedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBotCharacter.OnWeaponUnequipped")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AdditionalOverrideAnimBlueprints` +48, medido na build 25090264
    //  (offset absoluto medido: 0x2B30; confianca media)
    TArray<void*>& OverrideAnimBlueprintsField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "AdditionalOverrideAnimBlueprints", 48); }
    float& PercentOfFullFacialHairGrowthField() const
    { return *GetNativePointerField<float*>(this, "APrimalBotCharacter.PercentOfFullFacialHairGrowth"); }
    float& PercentOfFullHeadHairGrowthField() const
    { return *GetNativePointerField<float*>(this, "APrimalBotCharacter.PercentOfFullHeadHairGrowth"); }
    BrzCampoPonteiro ProjectileMeshCompField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBotCharacter.ProjectileMeshComp")); }
    FieldArray<float> RawBoneModifiersField() const
    { return { (void*)this, "APrimalBotCharacter.RawBoneModifiers" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BodyScale` +8, medido na build 25090264
    //  (offset absoluto medido: 0x2DCC; confianca alta)
    void*& RemainingDodgeCooldownField() const
    { return BrzCampoAncorado<void*>(this, "BodyScale", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BodyScale` +4, medido na build 25090264
    //  (offset absoluto medido: 0x2DC8; confianca alta)
    void*& RemainingShieldBlockDamageField() const
    { return BrzCampoAncorado<void*>(this, "BodyScale", 4); }
    UAnimationAsset*& ReplicatedSleepAnimField() const
    { return *GetNativePointerField<UAnimationAsset**>(this, "APrimalBotCharacter.ReplicatedSleepAnim"); }
    BrzCampoPonteiro SavedSleepAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBotCharacter.SavedSleepAnim")); }
    float& SeatedViewRotationPitchField() const
    { return *GetNativePointerField<float*>(this, "APrimalBotCharacter.SeatedViewRotationPitch"); }
    float& SeatedViewRotationYawField() const
    { return *GetNativePointerField<float*>(this, "APrimalBotCharacter.SeatedViewRotationYaw"); }
    TWeakObjectPtr<void>& SeatingStructureField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBotCharacter.SeatingStructure"); }
    int& SeatingStructureSeatNumberField() const
    { return *GetNativePointerField<int*>(this, "APrimalBotCharacter.SeatingStructureSeatNumber"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AdditionalOverrideAnimBlueprints` +216, medido na build 25090264
    //  (offset absoluto medido: 0x2BD8; confianca baixa)
    void*& SpawnedRotationField() const
    { return BrzCampoAncorado<void*>(this, "AdditionalOverrideAnimBlueprints", 216); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AdditionalOverrideAnimBlueprints` +240, medido na build 25090264
    //  (offset absoluto medido: 0x2BF0; confianca baixa)
    void*& TyrantsInfluenceEffectField() const
    { return BrzCampoAncorado<void*>(this, "AdditionalOverrideAnimBlueprints", 240); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AdditionalOverrideAnimBlueprints` +280, medido na build 25090264
    //  (offset absoluto medido: 0x2C18; confianca baixa)
    void*& UnEquipHandleField() const
    { return BrzCampoAncorado<void*>(this, "AdditionalOverrideAnimBlueprints", 280); }
    BrzCampoPonteiro WeaponDefinitionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBotCharacter.WeaponDefinitions")); }
    BrzCampoPonteiro WeaponMeshCompField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBotCharacter.WeaponMeshComp")); }
    BrzCampoPonteiro WeaponOwnerActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBotCharacter.WeaponOwnerActor")); }
    BitFieldValue<bool, unsigned __int32> UseAltAimOffsetAnimation()
    { return { (void*)this, "UseAltAimOffsetAnimation" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysCheckBPCanRideDino()
    { return { (void*)this, "bAlwaysCheckBPCanRideDino" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysCheckBPCanSitOnStructure()
    { return { (void*)this, "bAlwaysCheckBPCanSitOnStructure" }; }
    BitFieldValue<bool, unsigned __int32> bCanEverDodge()
    { return { (void*)this, "bCanEverDodge" }; }
    BitFieldValue<bool, unsigned __int32> bIsControllingBallista()
    { return { (void*)this, "bIsControllingBallista" }; }
    BitFieldValue<bool, unsigned __int32> bIsControllingStandingMountedTurret()
    { return { (void*)this, "bIsControllingStandingMountedTurret" }; }
    BitFieldValue<bool, unsigned __int32> bIsCookingGrenade()
    { return { (void*)this, "bIsCookingGrenade" }; }
    BitFieldValue<bool, unsigned __int32> bIsCurrentAttackComplete()
    { return { (void*)this, "bIsCurrentAttackComplete" }; }
    BitFieldValue<bool, unsigned __int32> bIsGuardPost()
    { return { (void*)this, "bIsGuardPost" }; }
    BitFieldValue<bool, unsigned __int32> bIsOnSeatingStructure()
    { return { (void*)this, "bIsOnSeatingStructure" }; }
    BitFieldValue<bool, unsigned __int32> bIsRiding()
    { return { (void*)this, "bIsRiding" }; }
    BitFieldValue<bool, unsigned __int32> bIsStationary()
    { return { (void*)this, "bIsStationary" }; }
    BitFieldValue<bool, unsigned __int32> bIsUsingAlternateMesh()
    { return { (void*)this, "bIsUsingAlternateMesh" }; }
    BitFieldValue<bool, unsigned __int32> bReceivesTyrantsInfluence()
    { return { (void*)this, "bReceivesTyrantsInfluence" }; }
    BitFieldValue<bool, unsigned __int32> bSavedWithAnimSharingVersion()
    { return { (void*)this, "bSavedWithAnimSharingVersion" }; }
    BitFieldValue<bool, unsigned __int32> bStatExploitApplied()
    { return { (void*)this, "bStatExploitApplied" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSaveEvents()
    { return { (void*)this, "bUseBPSaveEvents" }; }
    BitFieldValue<bool, unsigned __int32> bUseBallistaAimOffset()
    { return { (void*)this, "bUseBallistaAimOffset" }; }
    BitFieldValue<bool, unsigned __int32> bUseBallistaAimOffset_StandingTurret()
    { return { (void*)this, "bUseBallistaAimOffset_StandingTurret" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALBOTCHARACTER_H

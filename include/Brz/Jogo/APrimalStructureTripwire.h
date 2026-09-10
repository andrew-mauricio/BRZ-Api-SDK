// ==========================================================================
//  APrimalStructureTripwire — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALSTRUCTURETRIPWIRE_H
#define BRZ_SDK_JOGO_APRIMALSTRUCTURETRIPWIRE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UBoxComponent;
struct UParticleSystemComponent;
struct USoundBase;
struct UTexture2D;

#include "APrimalStructureExplosive.h"

struct APrimalStructureTripwire : public APrimalStructureExplosive
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalStructureTripwire"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTripwire.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "APrimalStructureTripwire.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTripwire.CanDetonateMe(AShooterCharacter*,bool)
    // classe: a funcao mora em APrimalStructureExplosive, e APrimalStructureTripwire herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    bool CanDetonateMe(void* a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "APrimalStructureExplosive.CanDetonateMe(AShooterCharacter*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTripwire.ClientMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    void ClientMultiUse(void* a0, int a1, int a2) const
    {
        NativeCall<void, void*, int, int>(this, "APrimalStructureTripwire.ClientMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTripwire.DisconnectMe()
    // endereco: casamento de bytes com a build de referencia
    void DisconnectMe() const
    {
        NativeCall<void>(this, "APrimalStructureTripwire.DisconnectMe()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTripwire.DisconnectMe_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    void DisconnectMe_Implementation() const
    {
        NativeCall<void>(this, "APrimalStructureTripwire.DisconnectMe_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTripwire.GetDescriptiveName()
    // endereco: casamento de bytes com a build de referencia
    void GetDescriptiveName(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalStructureTripwire.GetDescriptiveName()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTripwire.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAlloca
    // endereco: casamento de bytes com a build de referencia
    void GetLifetimeReplicatedProps(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureTripwire.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTripwire.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefau
    // endereco: casamento de bytes com a build de referencia
    void GetMultiUseEntries(void* a0, void* a1, int a2) const
    {
        NativeCall<void, void*, void*, int>(this, "APrimalStructureTripwire.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTripwire.HideWireComponent()
    // endereco: casamento de bytes com a build de referencia
    void HideWireComponent() const
    {
        NativeCall<void>(this, "APrimalStructureTripwire.HideWireComponent()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureTripwire.InitTripWire()
    // endereco: casamento de bytes com a build de referencia
    void InitTripWire() const
    {
        NativeCall<void>(this, "APrimalStructureTripwire.InitTripWire()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTripwire.IsWireComponentValid()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=63+grafo=3/3]]
    bool IsWireComponentValid() const
    {
        return NativeCall<bool>(this, "APrimalStructureTripwire.IsWireComponentValid()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalStructureTripwire.Multicast_ConnectedTo(APrimalStructureTripwire*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=53+chamadores=4]]
    void Multicast_ConnectedTo(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureTripwire.Multicast_ConnectedTo(APrimalStructureTripwire*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTripwire.Multicast_ConnectedTo_Implementation(APrimalStructureTripwire*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=105]]
    void Multicast_ConnectedTo_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureTripwire.Multicast_ConnectedTo_Implementation(APrimalStructureTripwire*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTripwire.NetUpdateBoxName(FString&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=167+bytes40+chamadores=2]]
    void NetUpdateBoxName(const FString& a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureTripwire.NetUpdateBoxName(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void NetUpdateBoxName(FString* a0) const
    { NetUpdateBoxName(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTripwire.NetUpdateBoxName_Implementation(FString&)
    // endereco: casamento de bytes com a build de referencia
    void NetUpdateBoxName_Implementation(const FString& a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureTripwire.NetUpdateBoxName_Implementation(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void NetUpdateBoxName_Implementation(FString* a0) const
    { NetUpdateBoxName_Implementation(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTripwire.OnRep_ConnectedTo()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=103]]
    void OnRep_ConnectedTo() const
    {
        NativeCall<void>(this, "APrimalStructureTripwire.OnRep_ConnectedTo()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTripwire.OnRep_UnwiredTrap()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=91]]
    void OnRep_UnwiredTrap() const
    {
        NativeCall<void>(this, "APrimalStructureTripwire.OnRep_UnwiredTrap()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTripwire.PlacedStructure(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void PlacedStructure(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureTripwire.PlacedStructure(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTripwire.PlayDying(float,FDamageEvent&,APawn*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void PlayDying(float a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, float, void*, void*, void*>(this, "APrimalStructureTripwire.PlayDying(float,FDamageEvent&,APawn*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTripwire.PostInitProperties()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=74]]
    void PostInitProperties() const
    {
        NativeCall<void>(this, "APrimalStructureTripwire.PostInitProperties()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTripwire.ProcessEditText(AShooterPlayerController*,FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    void ProcessEditText(void* a0, const FString& a1, bool a2) const
    {
        NativeCall<void, void*, void*, bool>(this, "APrimalStructureTripwire.ProcessEditText(AShooterPlayerController*,FString&,bool)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ProcessEditText(void* a0, FString* a1, bool a2) const
    { ProcessEditText(a0, *a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTripwire.SetConnectedTo(APrimalStructureTripwire*)
    // endereco: cache_pdb_25090264
    void SetConnectedTo(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureTripwire.SetConnectedTo(APrimalStructureTripwire*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTripwire.SetStaticMobility()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=84]]
    void SetStaticMobility() const
    {
        NativeCall<void>(this, "APrimalStructureTripwire.SetStaticMobility()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTripwire.SetUnwiredTrap(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void SetUnwiredTrap(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalStructureTripwire.SetUnwiredTrap(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTripwire.ShowWireComponent()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ShowWireComponent() const
    {
        NativeCall<void>(this, "APrimalStructureTripwire.ShowWireComponent()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTripwire.TriggerTouched(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int,bo
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=510+grafo=3/3]]
    BrzPonteiro TriggerTouched(void* a0, void* a1, void* a2, int a3, bool a4, void* a5) const
    {
        return NativeCall<void*, void*, void*, void*, int, bool, void*>(this, "APrimalStructureTripwire.TriggerTouched(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int,bool,FHitResult&)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTripwire.Tripped()
    // endereco: casamento de bytes com a build de referencia
    void Tripped() const
    {
        NativeCall<void>(this, "APrimalStructureTripwire.Tripped()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTripwire.TryMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    bool TryMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<bool, void*, int, int>(this, "APrimalStructureTripwire.TryMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTripwire.Unstasis()
    // endereco: casamento de bytes com a build de referencia
    void Unstasis() const
    {
        NativeCall<void>(this, "APrimalStructureTripwire.Unstasis()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTripwire.WireCheck()
    // endereco: casamento de bytes com a build de referencia
    void WireCheck() const
    {
        NativeCall<void>(this, "APrimalStructureTripwire.WireCheck()");
    }

    FString& BoxNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureTripwire.BoxName"); }
    BrzCampoPonteiro CableRotOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTripwire.CableRotOffset")); }
    APrimalStructureTripwire*& ConnectedToField() const
    { return *GetNativePointerField<APrimalStructureTripwire**>(this, "APrimalStructureTripwire.ConnectedTo"); }
    TObjectPtr<UTexture2D>& DisableTripAlliesIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTripwire.DisableTripAlliesIcon"); }
    TObjectPtr<UTexture2D>& DisableTripWildDinosIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTripwire.DisableTripWildDinosIcon"); }
    TObjectPtr<UTexture2D>& EnableTripAlliesIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTripwire.EnableTripAlliesIcon"); }
    TObjectPtr<UTexture2D>& EnableTripWildDinosIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTripwire.EnableTripWildDinosIcon"); }
    float& MaximumCableLengthField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTripwire.MaximumCableLength"); }
    USoundBase*& NotifyTripChatSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureTripwire.NotifyTripChatSound"); }
    int& OwnerTargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTripwire.OwnerTargetingTeam"); }
    TObjectPtr<UTexture2D>& RewireIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTripwire.RewireIcon"); }
    UBoxComponent*& TriggerComponentField() const
    { return *GetNativePointerField<UBoxComponent**>(this, "APrimalStructureTripwire.TriggerComponent"); }
    TObjectPtr<UTexture2D>& UnwireIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTripwire.UnwireIcon"); }
    UParticleSystemComponent*& WireComponentField() const
    { return *GetNativePointerField<UParticleSystemComponent**>(this, "APrimalStructureTripwire.WireComponent"); }
    //  no cache antigo este campo se chamava WireComponentRelativeLocation.
    //  nesta build ele e' `WireComponent` — resolve por NOME.
    BrzCampoPonteiro WireComponentRelativeLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTripwire.WireComponent")); }
    BitFieldValue<bool, unsigned __int32> bOnlyPrimalCharacters()
    { return { (void*)this, "bOnlyPrimalCharacters" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreAllies()
    { return { (void*)this, "bIgnoreAllies" }; }
    BitFieldValue<bool, unsigned __int32> bNotifyTripChat()
    { return { (void*)this, "bNotifyTripChat" }; }
    BitFieldValue<bool, unsigned __int32> bShowingWireComponent()
    { return { (void*)this, "bShowingWireComponent" }; }
    BitFieldValue<bool, unsigned __int32> bForceIgnoreAllies()
    { return { (void*)this, "bForceIgnoreAllies" }; }
    BitFieldValue<bool, unsigned __int32> bForceIgnoreWildDinos()
    { return { (void*)this, "bForceIgnoreWildDinos" }; }
    BitFieldValue<bool, unsigned __int32> bDoingWireCheck()
    { return { (void*)this, "bDoingWireCheck" }; }
    BitFieldValue<bool, unsigned __int32> bUnwiredTrap()
    { return { (void*)this, "bUnwiredTrap" }; }
    BitFieldValue<bool, unsigned __int32> bAllowToggleForceIgnoreAllies()
    { return { (void*)this, "bAllowToggleForceIgnoreAllies" }; }
    BitFieldValue<bool, unsigned __int32> bAllowToggleForceIgnoreWildDinos()
    { return { (void*)this, "bAllowToggleForceIgnoreWildDinos" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALSTRUCTURETRIPWIRE_H

// ==========================================================================
//  UShooterLocalPlayer — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_USHOOTERLOCALPLAYER_H
#define BRZ_SDK_JOGO_USHOOTERLOCALPLAYER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct APlayerController;
struct UShooterPersistentUser;


struct UShooterLocalPlayer
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UShooterLocalPlayer"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterLocalPlayer.CalcSceneViewInitOptions(FSceneViewInitOptions&,FViewport*,FViewElementDrawe
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CalcSceneViewInitOptions(void* a0, void* a1, void* a2, int a3) const
    {
        return NativeCall<void*, void*, void*, void*, int>(this, "UShooterLocalPlayer.CalcSceneViewInitOptions(FSceneViewInitOptions&,FViewport*,FViewElementDrawer*,int)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterLocalPlayer.ClearUITick(UPrimalUI*)
    // endereco: cache_pdb_25090264
    BrzPonteiro ClearUITick(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterLocalPlayer.ClearUITick(UPrimalUI*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterLocalPlayer.DisplayNotificationMessage(FString,FString,bool,bool,bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DisplayNotificationMessage(const FString& a0, const FString& a1, bool a2, bool a3, bool a4, bool a5, bool a6) const
    {
        return NativeCall<void*, void*, void*, bool, bool, bool, bool, bool>(this, "UShooterLocalPlayer.DisplayNotificationMessage(FString,FString,bool,bool,bool,bool,bool)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), a2, a3, a4, a5, a6);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro DisplayNotificationMessage(FString* a0, FString* a1, bool a2, bool a3, bool a4, bool a5, bool a6) const
    { return DisplayNotificationMessage(*a0, *a1, a2, a3, a4, a5, a6); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterLocalPlayer.Exec(UWorld*,wchar_t*,FOutputDevice&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Exec(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UShooterLocalPlayer.Exec(UWorld*,wchar_t*,FOutputDevice&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterLocalPlayer.GetNickname()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetNickname() const
    {
        return NativeCall<void*>(this, "UShooterLocalPlayer.GetNickname()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterLocalPlayer.GetPersistentUser()
    // endereco: casamento de bytes com a build de referencia
    UShooterPersistentUser* GetPersistentUser() const
    {
        return NativeCall<UShooterPersistentUser*>(this, "UShooterLocalPlayer.GetPersistentUser()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterLocalPlayer.GetSaveSlotName()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSaveSlotName() const
    {
        return NativeCall<void*>(this, "UShooterLocalPlayer.GetSaveSlotName()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterLocalPlayer.GetSceneView(FSceneViewFamily*,UE::Math::TVector<double>&,UE::Math::TRotator
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSceneView(void* a0, void* a1, void* a2, void* a3, void* a4, int a5, bool a6, bool a7) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, int, bool, bool>(this, "UShooterLocalPlayer.GetSceneView(FSceneViewFamily*,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,FViewport*,FViewElementDrawer*,int,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterLocalPlayer.LoadPersistentUser()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LoadPersistentUser() const
    {
        return NativeCall<void*>(this, "UShooterLocalPlayer.LoadPersistentUser()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterLocalPlayer.LocalPlayerCameraIsBasedOnDynamic()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LocalPlayerCameraIsBasedOnDynamic() const
    {
        return NativeCall<void*>(this, "UShooterLocalPlayer.LocalPlayerCameraIsBasedOnDynamic()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterLocalPlayer.OnConnectionFailed(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnConnectionFailed(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterLocalPlayer.OnConnectionFailed(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro OnConnectionFailed(FString* a0) const
    { return OnConnectionFailed(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterLocalPlayer.PlayerRemoved()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PlayerRemoved() const
    {
        return NativeCall<void*>(this, "UShooterLocalPlayer.PlayerRemoved()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterLocalPlayer.SetControllerId(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetControllerId(int a0) const
    {
        return NativeCall<void*, int>(this, "UShooterLocalPlayer.SetControllerId(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterLocalPlayer.TickUI(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TickUI(float a0) const
    {
        return NativeCall<void*, float>(this, "UShooterLocalPlayer.TickUI(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterLocalPlayer.UpdateUserPrivilige(EUserPrivileges::Type,unsignedint)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateUserPrivilige(int a0, unsigned int a1) const
    {
        return NativeCall<void*, int, unsigned int>(this, "UShooterLocalPlayer.UpdateUserPrivilige(EUserPrivileges::Type,unsignedint)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterLocalPlayer._unnamed_type_CachedSceneViewParams_.__unnamed_type_CachedSceneViewParams_()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro _unnamed_type_CachedSceneViewParams____unnamed_type_CachedSceneViewParams_() const
    {
        return NativeCall<void*>(this, "UShooterLocalPlayer._unnamed_type_CachedSceneViewParams_.__unnamed_type_CachedSceneViewParams_()");
    }

    unsigned char& AspectRatioAxisConstraintField() const
    { return *GetNativePointerField<unsigned char*>(this, "UShooterLocalPlayer.AspectRatioAxisConstraint"); }
    int& ConfiguredInternetSpeedField() const
    { return *GetNativePointerField<int*>(this, "UShooterLocalPlayer.ConfiguredInternetSpeed"); }
    int& ConfiguredLanSpeedField() const
    { return *GetNativePointerField<int*>(this, "UShooterLocalPlayer.ConfiguredLanSpeed"); }
    int& ControllerIdField() const
    { return *GetNativePointerField<int*>(this, "UShooterLocalPlayer.ControllerId"); }
    int& CurrentNetSpeedField() const
    { return *GetNativePointerField<int*>(this, "UShooterLocalPlayer.CurrentNetSpeed"); }
    BrzCampoPonteiro OnlineSessionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLocalPlayer.OnlineSession")); }
    BrzCampoPonteiro PendingLevelPlayerControllerClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLocalPlayer.PendingLevelPlayerControllerClass")); }
    BrzCampoPonteiro PersistentUserField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLocalPlayer.PersistentUser")); }
    TObjectPtr<APlayerController>& PlayerControllerField() const
    { return *GetNativePointerField<TObjectPtr<APlayerController>*>(this, "UShooterLocalPlayer.PlayerController"); }
    BrzCampoPonteiro UITicksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLocalPlayer.UITicks")); }
    BrzCampoPonteiro ViewportClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterLocalPlayer.ViewportClient")); }
    BitFieldValue<bool, unsigned __int32> bSentSplitJoin()
    { return { (void*)this, "bSentSplitJoin" }; }
    BitFieldValue<bool, unsigned __int32> bValidCachedViewFrustum()
    { return { (void*)this, "bValidCachedViewFrustum" }; }
};

#endif  // BRZ_SDK_JOGO_USHOOTERLOCALPLAYER_H

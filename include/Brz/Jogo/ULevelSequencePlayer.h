// ==========================================================================
//  ULevelSequencePlayer — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ULEVELSEQUENCEPLAYER_H
#define BRZ_SDK_JOGO_ULEVELSEQUENCEPLAYER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct ULevelSequencePlayer
{
    static UClass* StaticClass()
    { return BrzClassePorNome("ULevelSequencePlayer"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelSequencePlayer.CreateLevelSequencePlayer(UObject*,ULevelSequence*,FMovieSceneSequencePlayb
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CreateLevelSequencePlayer(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "ULevelSequencePlayer.CreateLevelSequencePlayer(UObject*,ULevelSequence*,FMovieSceneSequencePlaybackSettings,ALevelSequenceActor*&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelSequencePlayer.EnableCinematicMode(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EnableCinematicMode(bool a0) const
    {
        return NativeCall<void*, bool>(this, "ULevelSequencePlayer.EnableCinematicMode(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelSequencePlayer.GetAspectRatioAxisConstraintOverride()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAspectRatioAxisConstraintOverride() const
    {
        return NativeCall<void*>(this, "ULevelSequencePlayer.GetAspectRatioAxisConstraintOverride()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelSequencePlayer.GetCameraBlendPlayRate()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro GetCameraBlendPlayRate() const
    {
        return NativeCall<void*>(this, "ULevelSequencePlayer.GetCameraBlendPlayRate()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelSequencePlayer.GetEventContexts()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetEventContexts() const
    {
        return NativeCall<void*>(this, "ULevelSequencePlayer.GetEventContexts()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelSequencePlayer.GetPlaybackContext()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPlaybackContext() const
    {
        return NativeCall<void*>(this, "ULevelSequencePlayer.GetPlaybackContext()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelSequencePlayer.Initialize(ULevelSequence*,ULevel*,FLevelSequenceCameraSettings&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Initialize(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "ULevelSequencePlayer.Initialize(ULevelSequence*,ULevel*,FLevelSequenceCameraSettings&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelSequencePlayer.InitializeLevelSequenceRootInstance(TSharedRef<UE::MovieScene::FSharedPlayb
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InitializeLevelSequenceRootInstance(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ULevelSequencePlayer.InitializeLevelSequenceRootInstance(TSharedRef<UE::MovieScene::FSharedPlaybackState,1>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelSequencePlayer.InitializeRootInstance(TSharedRef<UE::MovieScene::FSharedPlaybackState,1>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InitializeRootInstance(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ULevelSequencePlayer.InitializeRootInstance(TSharedRef<UE::MovieScene::FSharedPlaybackState,1>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelSequencePlayer.OnCameraCutUpdated(UE::MovieScene::FOnCameraCutUpdatedParams&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnCameraCutUpdated(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ULevelSequencePlayer.OnCameraCutUpdated(UE::MovieScene::FOnCameraCutUpdatedParams&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelSequencePlayer.OnStartedPlaying()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro OnStartedPlaying() const
    {
        return NativeCall<void*>(this, "ULevelSequencePlayer.OnStartedPlaying()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelSequencePlayer.OnStopped()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro OnStopped() const
    {
        return NativeCall<void*>(this, "ULevelSequencePlayer.OnStopped()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelSequencePlayer.ShouldUpdateCameraCut()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro ShouldUpdateCameraCut() const
    {
        return NativeCall<void*>(this, "ULevelSequencePlayer.ShouldUpdateCameraCut()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelSequencePlayer.TakeFrameSnapshot(FLevelSequencePlayerSnapshot&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TakeFrameSnapshot(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ULevelSequencePlayer.TakeFrameSnapshot(FLevelSequencePlayerSnapshot&)", a0);
    }

    int& CurrentNumLoopsField() const
    { return *GetNativePointerField<int*>(this, "ULevelSequencePlayer.CurrentNumLoops"); }
    int& DurationFramesField() const
    { return *GetNativePointerField<int*>(this, "ULevelSequencePlayer.DurationFrames"); }
    float& DurationSubFramesField() const
    { return *GetNativePointerField<float*>(this, "ULevelSequencePlayer.DurationSubFrames"); }
    BrzCampoPonteiro NetSyncPropsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelSequencePlayer.NetSyncProps")); }
    BrzCampoPonteiro ObserverField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelSequencePlayer.Observer")); }
    BrzCampoPonteiro OnCameraCutField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelSequencePlayer.OnCameraCut")); }
    BrzCampoPonteiro OnFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelSequencePlayer.OnFinished")); }
    BrzCampoPonteiro OnPauseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelSequencePlayer.OnPause")); }
    BrzCampoPonteiro OnPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelSequencePlayer.OnPlay")); }
    BrzCampoPonteiro OnPlayReverseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelSequencePlayer.OnPlayReverse")); }
    BrzCampoPonteiro OnStopField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelSequencePlayer.OnStop")); }
    BrzCampoPonteiro PlaybackClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelSequencePlayer.PlaybackClient")); }
    BrzCampoPonteiro PlaybackSettingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelSequencePlayer.PlaybackSettings")); }
    BrzCampoPonteiro RootTemplateInstanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelSequencePlayer.RootTemplateInstance")); }
    BrzCampoPonteiro SequenceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelSequencePlayer.Sequence")); }
    int& SerialNumberField() const
    { return *GetNativePointerField<int*>(this, "ULevelSequencePlayer.SerialNumber"); }
    int& StartTimeField() const
    { return *GetNativePointerField<int*>(this, "ULevelSequencePlayer.StartTime"); }
    unsigned char& StatusField() const
    { return *GetNativePointerField<unsigned char*>(this, "ULevelSequencePlayer.Status"); }
    BrzCampoPonteiro TickManagerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelSequencePlayer.TickManager")); }
    BitFieldValue<bool, unsigned __int32> bReversePlayback()
    { return { (void*)this, "bReversePlayback" }; }
};

#endif  // BRZ_SDK_JOGO_ULEVELSEQUENCEPLAYER_H

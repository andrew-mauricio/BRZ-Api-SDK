// ==========================================================================
//  UActorSequencePlayer — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UACTORSEQUENCEPLAYER_H
#define BRZ_SDK_JOGO_UACTORSEQUENCEPLAYER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UActorSequencePlayer
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UActorSequencePlayer"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorSequencePlayer.GetEventContexts()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetEventContexts()
    {
        return NativeCall<void*>(nullptr, "UActorSequencePlayer.GetEventContexts()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UActorSequencePlayer.GetPlaybackContext()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetPlaybackContext()
    {
        return NativeCall<void*>(nullptr, "UActorSequencePlayer.GetPlaybackContext()");
    }

    int& CurrentNumLoopsField() const
    { return *GetNativePointerField<int*>(this, "UActorSequencePlayer.CurrentNumLoops"); }
    int& DurationFramesField() const
    { return *GetNativePointerField<int*>(this, "UActorSequencePlayer.DurationFrames"); }
    float& DurationSubFramesField() const
    { return *GetNativePointerField<float*>(this, "UActorSequencePlayer.DurationSubFrames"); }
    BrzCampoPonteiro NetSyncPropsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UActorSequencePlayer.NetSyncProps")); }
    BrzCampoPonteiro ObserverField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UActorSequencePlayer.Observer")); }
    BrzCampoPonteiro OnFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UActorSequencePlayer.OnFinished")); }
    BrzCampoPonteiro OnPauseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UActorSequencePlayer.OnPause")); }
    BrzCampoPonteiro OnPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UActorSequencePlayer.OnPlay")); }
    BrzCampoPonteiro OnPlayReverseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UActorSequencePlayer.OnPlayReverse")); }
    BrzCampoPonteiro OnStopField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UActorSequencePlayer.OnStop")); }
    BrzCampoPonteiro PlaybackClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UActorSequencePlayer.PlaybackClient")); }
    BrzCampoPonteiro PlaybackSettingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UActorSequencePlayer.PlaybackSettings")); }
    BrzCampoPonteiro RootTemplateInstanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UActorSequencePlayer.RootTemplateInstance")); }
    BrzCampoPonteiro SequenceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UActorSequencePlayer.Sequence")); }
    int& SerialNumberField() const
    { return *GetNativePointerField<int*>(this, "UActorSequencePlayer.SerialNumber"); }
    int& StartTimeField() const
    { return *GetNativePointerField<int*>(this, "UActorSequencePlayer.StartTime"); }
    unsigned char& StatusField() const
    { return *GetNativePointerField<unsigned char*>(this, "UActorSequencePlayer.Status"); }
    BrzCampoPonteiro TickManagerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UActorSequencePlayer.TickManager")); }
    BitFieldValue<bool, unsigned __int32> bReversePlayback()
    { return { (void*)this, "bReversePlayback" }; }
};

#endif  // BRZ_SDK_JOGO_UACTORSEQUENCEPLAYER_H

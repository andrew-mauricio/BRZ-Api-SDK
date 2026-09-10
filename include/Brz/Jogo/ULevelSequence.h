// ==========================================================================
//  ULevelSequence — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ULEVELSEQUENCE_H
#define BRZ_SDK_JOGO_ULEVELSEQUENCE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct ULevelSequence
{
    static UClass* StaticClass()
    { return BrzClassePorNome("ULevelSequence"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelSequence.AllowsSpawnableObjects()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AllowsSpawnableObjects() const
    {
        return NativeCall<void*>(this, "ULevelSequence.AllowsSpawnableObjects()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelSequence.BindPossessableObject(FGuid&,UObject&,UObject*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BindPossessableObject(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "ULevelSequence.BindPossessableObject(FGuid&,UObject&,UObject*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelSequence.CanRebindPossessable(FMovieScenePossessable&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro CanRebindPossessable(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ULevelSequence.CanRebindPossessable(FMovieScenePossessable&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelSequence.FindBindingFromObject(UObject*,TSharedRef<UE::MovieScene::FSharedPlaybackState,1>
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindBindingFromObject(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "ULevelSequence.FindBindingFromObject(UObject*,TSharedRef<UE::MovieScene::FSharedPlaybackState,1>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelSequence.GatherExpiredObjects(FMovieSceneObjectCache&,TArray<FGuid,TSizedDefaultAllocator<
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GatherExpiredObjects(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "ULevelSequence.GatherExpiredObjects(FMovieSceneObjectCache&,TArray<FGuid,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelSequence.Initialize()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Initialize() const
    {
        return NativeCall<void*>(this, "ULevelSequence.Initialize()");
    }

    TArray<void*>& AssetUserDataField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "ULevelSequence.AssetUserData"); }
    BrzCampoPonteiro BindingReferencesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelSequence.BindingReferences")); }
    BrzCampoPonteiro CompiledDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelSequence.CompiledData")); }
    BrzCampoPonteiro DefaultCompletionModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelSequence.DefaultCompletionMode")); }
    BrzCampoPonteiro DirectorClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelSequence.DirectorClass")); }
    BrzCampoPonteiro MovieSceneField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelSequence.MovieScene")); }
    BrzCampoPonteiro SequenceFlagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelSequence.SequenceFlags")); }
    BrzCampoPonteiro SignatureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelSequence.Signature")); }
    BitFieldValue<bool, unsigned __int32> bParentContextsAreSignificant()
    { return { (void*)this, "bParentContextsAreSignificant" }; }
    BitFieldValue<bool, unsigned __int32> bPlayableDirectly()
    { return { (void*)this, "bPlayableDirectly" }; }
};

#endif  // BRZ_SDK_JOGO_ULEVELSEQUENCE_H

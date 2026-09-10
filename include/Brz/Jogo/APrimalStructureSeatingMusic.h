// ==========================================================================
//  APrimalStructureSeatingMusic — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALSTRUCTURESEATINGMUSIC_H
#define BRZ_SDK_JOGO_APRIMALSTRUCTURESEATINGMUSIC_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FName;
struct UAnimMontage;
struct USoundBase;
struct UStaticMeshComponent;

#include "APrimalStructureSeating.h"

struct APrimalStructureSeatingMusic : public APrimalStructureSeating
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalStructureSeatingMusic"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureSeatingMusic.Control(AShooterCharacter*,int,bool)
    // endereco: casamento de bytes com a build de referencia
    void Control(void* a0, int a1, bool a2) const
    {
        NativeCall<void, void*, int, bool>(this, "APrimalStructureSeatingMusic.Control(AShooterCharacter*,int,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureSeatingMusic.LocalSeatingStructureAction(unsignedchar)
    // endereco: casamento de bytes com a build de referencia
    void LocalSeatingStructureAction(unsigned char a0) const
    {
        NativeCall<void, unsigned char>(this, "APrimalStructureSeatingMusic.LocalSeatingStructureAction(unsignedchar)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureSeatingMusic.OnAltFire()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=50]]
    void OnAltFire() const
    {
        NativeCall<void>(this, "APrimalStructureSeatingMusic.OnAltFire()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureSeatingMusic.OnPrimaryFire()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=49]]
    void OnPrimaryFire() const
    {
        NativeCall<void>(this, "APrimalStructureSeatingMusic.OnPrimaryFire()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureSeatingMusic.OnUseKey(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=36]]
    void OnUseKey(int a0) const
    {
        NativeCall<void, int>(this, "APrimalStructureSeatingMusic.OnUseKey(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureSeatingMusic.PostInitializeComponents()
    // classe: a funcao mora em APrimalStructureSeating, e APrimalStructureSeatingMusic herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void PostInitializeComponents() const
    {
        NativeCall<void>(this, "APrimalStructureSeating.PostInitializeComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureSeatingMusic.Release(AShooterCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=107]]
    void Release(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureSeatingMusic.Release(AShooterCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureSeatingMusic.ServerSeatingStructureAction(unsignedchar)
    // endereco: casamento de bytes com a build de referencia
    void ServerSeatingStructureAction(unsigned char a0) const
    {
        NativeCall<void, unsigned char>(this, "APrimalStructureSeatingMusic.ServerSeatingStructureAction(unsignedchar)", a0);
    }

    TArray<UAnimMontage*>& InstrumentPawnAnimationsField() const
    { return *GetNativePointerField<TArray<UAnimMontage*>*>(this, "APrimalStructureSeatingMusic.InstrumentPawnAnimations"); }
    TArray<USoundBase*>& InstrumentSoundsField() const
    { return *GetNativePointerField<TArray<USoundBase*>*>(this, "APrimalStructureSeatingMusic.InstrumentSounds"); }
    TArray<void*>& LastPlayInstrumentTimeField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureSeatingMusic.LastPlayInstrumentTime"); }
    float& MinimumTimeBetweenPlaysField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeatingMusic.MinimumTimeBetweenPlays"); }
    UStaticMeshComponent*& StickMesh1Field() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructureSeatingMusic.StickMesh1"); }
    UStaticMeshComponent*& StickMesh2Field() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructureSeatingMusic.StickMesh2"); }
    FName& StickMeshAttachPoint1Field() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureSeatingMusic.StickMeshAttachPoint1"); }
    FName& StickMeshAttachPoint2Field() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureSeatingMusic.StickMeshAttachPoint2"); }
};

#endif  // BRZ_SDK_JOGO_APRIMALSTRUCTURESEATINGMUSIC_H

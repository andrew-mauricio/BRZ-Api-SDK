// ==========================================================================
//  UShooterPersistentUser — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_USHOOTERPERSISTENTUSER_H
#define BRZ_SDK_JOGO_USHOOTERPERSISTENTUSER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UShooterPersistentUser
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UShooterPersistentUser"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterPersistentUser.LoadPersistentUser(FString,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LoadPersistentUser(const FString& a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "UShooterPersistentUser.LoadPersistentUser(FString,int)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro LoadPersistentUser(FString* a0, int a1) const
    { return LoadPersistentUser(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterPersistentUser.SaveIfDirty()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SaveIfDirty() const
    {
        return NativeCall<void*>(this, "UShooterPersistentUser.SaveIfDirty()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterPersistentUser.TellInputAboutKeybindings()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TellInputAboutKeybindings() const
    {
        return NativeCall<void*>(this, "UShooterPersistentUser.TellInputAboutKeybindings()");
    }

    float& AimSensitivityField() const
    { return *GetNativePointerField<float*>(this, "UShooterPersistentUser.AimSensitivity"); }
    int& BotsCountField() const
    { return *GetNativePointerField<int*>(this, "UShooterPersistentUser.BotsCount"); }
    int& BulletsFiredField() const
    { return *GetNativePointerField<int*>(this, "UShooterPersistentUser.BulletsFired"); }
    int& DeathsField() const
    { return *GetNativePointerField<int*>(this, "UShooterPersistentUser.Deaths"); }
    float& GammaField() const
    { return *GetNativePointerField<float*>(this, "UShooterPersistentUser.Gamma"); }
    int& KillsField() const
    { return *GetNativePointerField<int*>(this, "UShooterPersistentUser.Kills"); }
    int& LossesField() const
    { return *GetNativePointerField<int*>(this, "UShooterPersistentUser.Losses"); }
    int& RocketsFiredField() const
    { return *GetNativePointerField<int*>(this, "UShooterPersistentUser.RocketsFired"); }
    int& WinsField() const
    { return *GetNativePointerField<int*>(this, "UShooterPersistentUser.Wins"); }
    BitFieldValue<bool, unsigned __int32> bInvertedYAxis()
    { return { (void*)this, "bInvertedYAxis" }; }

};

#endif  // BRZ_SDK_JOGO_USHOOTERPERSISTENTUSER_H

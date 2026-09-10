// ==========================================================================
//  UGameplayCueNotify_HitImpact — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UGAMEPLAYCUENOTIFY_HITIMPACT_H
#define BRZ_SDK_JOGO_UGAMEPLAYCUENOTIFY_HITIMPACT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UGameplayCueNotify_HitImpact
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UGameplayCueNotify_HitImpact"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayCueNotify_HitImpact.HandleGameplayCue(AActor*,EGameplayCueEvent::Type,FGameplayCueParam
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleGameplayCue(void* a0, int a1, void* a2) const
    {
        return NativeCall<void*, void*, int, void*>(this, "UGameplayCueNotify_HitImpact.HandleGameplayCue(AActor*,EGameplayCueEvent::Type,FGameplayCueParameters&)", a0, a1, a2);
    }

    FName& GameplayCueNameField() const
    { return *GetNativePointerField<FName*>(this, "UGameplayCueNotify_HitImpact.GameplayCueName"); }
    BrzCampoPonteiro GameplayCueTagField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayCueNotify_HitImpact.GameplayCueTag")); }
    BitFieldValue<bool, unsigned __int32> IsOverride()
    { return { (void*)this, "IsOverride" }; }
    BrzCampoPonteiro ParticleSystemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayCueNotify_HitImpact.ParticleSystem")); }
    BrzCampoPonteiro SoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayCueNotify_HitImpact.Sound")); }
};

#endif  // BRZ_SDK_JOGO_UGAMEPLAYCUENOTIFY_HITIMPACT_H

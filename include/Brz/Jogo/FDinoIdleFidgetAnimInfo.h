// ==========================================================================
//  FDinoIdleFidgetAnimInfo — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FDINOIDLEFIDGETANIMINFO_H
#define BRZ_SDK_JOGO_FDINOIDLEFIDGETANIMINFO_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FDinoIdleFidgetAnimInfo
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FDinoIdleFidgetAnimInfo"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    BrzCampoPonteiro AnimMontageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FDinoIdleFidgetAnimInfo.AnimMontage")); }
    BrzCampoPonteiro AnimPlayRateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FDinoIdleFidgetAnimInfo.AnimPlayRate")); }
    BrzCampoPonteiro AnimWeightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FDinoIdleFidgetAnimInfo.AnimWeight")); }
    BitFieldValue<bool, unsigned __int32> bAllowOnTamed()
    { return { (void*)this, "bAllowOnTamed" }; }
    BitFieldValue<bool, unsigned __int32> bAllowWhileCarried()
    { return { (void*)this, "bAllowWhileCarried" }; }
    BitFieldValue<bool, unsigned __int32> bAllowWhileFlying()
    { return { (void*)this, "bAllowWhileFlying" }; }
    BitFieldValue<bool, unsigned __int32> bAllowWhileMounted()
    { return { (void*)this, "bAllowWhileMounted" }; }
    BitFieldValue<bool, unsigned __int32> bAllowWhileMoving()
    { return { (void*)this, "bAllowWhileMoving" }; }
    BitFieldValue<bool, unsigned __int32> bAllowWhileSeated()
    { return { (void*)this, "bAllowWhileSeated" }; }
    BitFieldValue<bool, unsigned __int32> bAllowWhileSleeping()
    { return { (void*)this, "bAllowWhileSleeping" }; }
    BitFieldValue<bool, unsigned __int32> bAllowWhileSwimming()
    { return { (void*)this, "bAllowWhileSwimming" }; }
    BitFieldValue<bool, unsigned __int32> bAllowWhileWalking()
    { return { (void*)this, "bAllowWhileWalking" }; }

};

#endif  // BRZ_SDK_JOGO_FDINOIDLEFIDGETANIMINFO_H

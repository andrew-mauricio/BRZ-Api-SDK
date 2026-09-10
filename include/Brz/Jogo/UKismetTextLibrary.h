// ==========================================================================
//  UKismetTextLibrary — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UKISMETTEXTLIBRARY_H
#define BRZ_SDK_JOGO_UKISMETTEXTLIBRARY_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UKismetTextLibrary
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UKismetTextLibrary"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetTextLibrary.AsCurrencyBase(int,FString&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro AsCurrencyBase(int a0, const FString& a1)
    {
        return NativeCall<void*, int, void*>(nullptr, "UKismetTextLibrary.AsCurrencyBase(int,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static BrzPonteiro AsCurrencyBase(int a0, FString* a1)
    { return AsCurrencyBase(a0, *a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetTextLibrary.AsCurrency_Float(float,TEnumAsByte<ERoundingMode>,bool,bool,int,int,int,int,F
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro AsCurrency_Float(float a0, unsigned char a1, bool a2, bool a3, int a4, int a5, int a6, int a7, const FString& a8)
    {
        return NativeCall<void*, float, unsigned char, bool, bool, int, int, int, int, void*>(nullptr, "UKismetTextLibrary.AsCurrency_Float(float,TEnumAsByte<ERoundingMode>,bool,bool,int,int,int,int,FString&)", a0, a1, a2, a3, a4, a5, a6, a7, const_cast<FString*>(&a8));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static BrzPonteiro AsCurrency_Float(float a0, unsigned char a1, bool a2, bool a3, int a4, int a5, int a6, int a7, FString* a8)
    { return AsCurrency_Float(a0, a1, a2, a3, a4, a5, a6, a7, *a8); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetTextLibrary.AsCurrency_Integer(int,TEnumAsByte<ERoundingMode>,bool,bool,int,int,int,int,F
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro AsCurrency_Integer(int a0, unsigned char a1, bool a2, bool a3, int a4, int a5, int a6, int a7, const FString& a8)
    {
        return NativeCall<void*, int, unsigned char, bool, bool, int, int, int, int, void*>(nullptr, "UKismetTextLibrary.AsCurrency_Integer(int,TEnumAsByte<ERoundingMode>,bool,bool,int,int,int,int,FString&)", a0, a1, a2, a3, a4, a5, a6, a7, const_cast<FString*>(&a8));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static BrzPonteiro AsCurrency_Integer(int a0, unsigned char a1, bool a2, bool a3, int a4, int a5, int a6, int a7, FString* a8)
    { return AsCurrency_Integer(a0, a1, a2, a3, a4, a5, a6, a7, *a8); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetTextLibrary.AsDateTime_DateTime(FDateTime&,TEnumAsByte<EDateTimeStyle::Type>,TEnumAsByte<
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro AsDateTime_DateTime(void* a0, unsigned char a1, unsigned char a2)
    {
        return NativeCall<void*, void*, unsigned char, unsigned char>(nullptr, "UKismetTextLibrary.AsDateTime_DateTime(FDateTime&,TEnumAsByte<EDateTimeStyle::Type>,TEnumAsByte<EDateTimeStyle::Type>)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetTextLibrary.AsMemory(__int64,TEnumAsByte<EMemoryUnitStandard>,bool,int,int,int,int)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro AsMemory(long long a0, unsigned char a1, bool a2, int a3, int a4, int a5, int a6)
    {
        return NativeCall<void*, long long, unsigned char, bool, int, int, int, int>(nullptr, "UKismetTextLibrary.AsMemory(__int64,TEnumAsByte<EMemoryUnitStandard>,bool,int,int,int,int)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetTextLibrary.AsTimeZoneDateTime_DateTime(FDateTime&,FString&,TEnumAsByte<EDateTimeStyle::T
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro AsTimeZoneDateTime_DateTime(void* a0, const FString& a1, unsigned char a2, unsigned char a3)
    {
        return NativeCall<void*, void*, void*, unsigned char, unsigned char>(nullptr, "UKismetTextLibrary.AsTimeZoneDateTime_DateTime(FDateTime&,FString&,TEnumAsByte<EDateTimeStyle::Type>,TEnumAsByte<EDateTimeStyle::Type>)", a0, const_cast<FString*>(&a1), a2, a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static BrzPonteiro AsTimeZoneDateTime_DateTime(void* a0, FString* a1, unsigned char a2, unsigned char a3)
    { return AsTimeZoneDateTime_DateTime(a0, *a1, a2, a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetTextLibrary.AsTimespan_Timespan(FTimespan&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro AsTimespan_Timespan(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "UKismetTextLibrary.AsTimespan_Timespan(FTimespan&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetTextLibrary.Conv_BoolToText(bool)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro Conv_BoolToText(bool a0)
    {
        return NativeCall<void*, bool>(nullptr, "UKismetTextLibrary.Conv_BoolToText(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetTextLibrary.Conv_ByteToText(unsignedchar)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro Conv_ByteToText(unsigned char a0)
    {
        return NativeCall<void*, unsigned char>(nullptr, "UKismetTextLibrary.Conv_ByteToText(unsignedchar)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetTextLibrary.Conv_ColorToText(FLinearColor)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro Conv_ColorToText(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "UKismetTextLibrary.Conv_ColorToText(FLinearColor)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetTextLibrary.Conv_Int64ToText(__int64,bool,bool,int,int)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro Conv_Int64ToText(long long a0, bool a1, bool a2, int a3, int a4)
    {
        return NativeCall<void*, long long, bool, bool, int, int>(nullptr, "UKismetTextLibrary.Conv_Int64ToText(__int64,bool,bool,int,int)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetTextLibrary.Conv_IntToText(int,bool,bool,int,int)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro Conv_IntToText(int a0, bool a1, bool a2, int a3, int a4)
    {
        return NativeCall<void*, int, bool, bool, int, int>(nullptr, "UKismetTextLibrary.Conv_IntToText(int,bool,bool,int,int)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetTextLibrary.Conv_NameToText(FName)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro Conv_NameToText(unsigned long long a0)
    {
        return NativeCall<void*, unsigned long long>(nullptr, "UKismetTextLibrary.Conv_NameToText(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetTextLibrary.Conv_ObjectToText(UObject*)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro Conv_ObjectToText(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "UKismetTextLibrary.Conv_ObjectToText(UObject*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetTextLibrary.Conv_RotatorToText(UE::Math::TRotator<double>)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=1544+grafo=18/18]]
    static BrzPonteiro Conv_RotatorToText(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "UKismetTextLibrary.Conv_RotatorToText(UE::Math::TRotator<double>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetTextLibrary.Conv_StringToText(FString&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro Conv_StringToText(const FString& a0)
    {
        return NativeCall<void*, void*>(nullptr, "UKismetTextLibrary.Conv_StringToText(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static BrzPonteiro Conv_StringToText(FString* a0)
    { return Conv_StringToText(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetTextLibrary.Conv_TextToString(FText&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro Conv_TextToString(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "UKismetTextLibrary.Conv_TextToString(FText&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetTextLibrary.Conv_TransformToText(UE::Math::TTransform<double>&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro Conv_TransformToText(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "UKismetTextLibrary.Conv_TransformToText(UE::Math::TTransform<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetTextLibrary.Conv_VectorToText(UE::Math::TVector<double>)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo+string_aprovado]
    static BrzPonteiro Conv_VectorToText(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "UKismetTextLibrary.Conv_VectorToText(UE::Math::TVector<double>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetTextLibrary.FindTextInLocalizationTable(FString&,FString&,FText&,FString&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro FindTextInLocalizationTable(const FString& a0, const FString& a1, void* a2, const FString& a3)
    {
        return NativeCall<void*, void*, void*, void*, void*>(nullptr, "UKismetTextLibrary.FindTextInLocalizationTable(FString&,FString&,FText&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), a2, const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static BrzPonteiro FindTextInLocalizationTable(FString* a0, FString* a1, void* a2, FString* a3)
    { return FindTextInLocalizationTable(*a0, *a1, a2, *a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetTextLibrary.Format(FText,TArray<FFormatArgumentData,TSizedDefaultAllocator<32>>)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro Format(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "UKismetTextLibrary.Format(FText,TArray<FFormatArgumentData,TSizedDefaultAllocator<32>>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetTextLibrary.GetEmptyText()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetEmptyText()
    {
        return NativeCall<void*>(nullptr, "UKismetTextLibrary.GetEmptyText()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetTextLibrary.GetTextId(FText,FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetTextId(void* a0, const FString& a1, const FString& a2)
    {
        return NativeCall<void*, void*, void*, void*>(nullptr, "UKismetTextLibrary.GetTextId(FText,FString&,FString&)", a0, const_cast<FString*>(&a1), const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static BrzPonteiro GetTextId(void* a0, FString* a1, FString* a2)
    { return GetTextId(a0, *a1, *a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetTextLibrary.GetTextSourceString(FText)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetTextSourceString(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "UKismetTextLibrary.GetTextSourceString(FText)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetTextLibrary.IsPolyglotDataValid(FPolyglotTextData&,bool&,FText&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsPolyglotDataValid(void* a0, void* a1, void* a2)
    {
        return NativeCall<void*, void*, void*, void*>(nullptr, "UKismetTextLibrary.IsPolyglotDataValid(FPolyglotTextData&,bool&,FText&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetTextLibrary.NotEqual_TextText(FText&,FText&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro NotEqual_TextText(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "UKismetTextLibrary.NotEqual_TextText(FText&,FText&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetTextLibrary.PolyglotDataToText(FPolyglotTextData&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro PolyglotDataToText(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "UKismetTextLibrary.PolyglotDataToText(FPolyglotTextData&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetTextLibrary.StringTableIdAndKeyFromText(FText,FName&,FString&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro StringTableIdAndKeyFromText(void* a0, const FName& a1, const FString& a2)
    {
        return NativeCall<void*, void*, void*, void*>(nullptr, "UKismetTextLibrary.StringTableIdAndKeyFromText(FText,FName&,FString&)", a0, const_cast<FName*>(&a1), const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static BrzPonteiro StringTableIdAndKeyFromText(void* a0, FName* a1, FString* a2)
    { return StringTableIdAndKeyFromText(a0, *a1, *a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetTextLibrary.TextFromStringTable(FName,FString&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro TextFromStringTable(unsigned long long a0, const FString& a1)
    {
        return NativeCall<void*, unsigned long long, void*>(nullptr, "UKismetTextLibrary.TextFromStringTable(FName,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static BrzPonteiro TextFromStringTable(unsigned long long a0, FString* a1)
    { return TextFromStringTable(a0, *a1); }

};

#endif  // BRZ_SDK_JOGO_UKISMETTEXTLIBRARY_H

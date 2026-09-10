// ═══════════════════════════════════════════════════════════════════════════════
//  Base.h — a base do SDK da BRZ Api
//
//  ─────────────────────────────────────────────────────────────────────────────
//  POR QUE ESTE ARQUIVO EXISTE, E POR QUE ELE TEM ESTA FORMA
//  ─────────────────────────────────────────────────────────────────────────────
//  Ate' 05/09/2026 os headers desta API tinham forma propria: todo objeto do jogo
//  era um `brz::jogo::X : Punhado{api, obj}`, e toda chamada descia por reflexao,
//  pelo nome curto da funcao.
//
//  Funcionava — e cobrou um preco que so' ficou visivel depois de quatro defeitos
//  graves em dois dias: **nenhum plugin escrito para a API da comunidade compila
//  contra ela, e nenhum plugin nosso compila contra a deles.** Entao cada plugin
//  precisou ser REESCRITO a mao, um por um. E reescrever e' onde o comportamento
//  muda:
//
//    · o CatastrofesBRZ perdeu o prefixo `ce ` e mandou `stop` cru ao console —
//      a engine obedeceu, e o servidor caia a cada hora;
//    · o `DarItem` do motor procurava `InventoryComp`/`ItemQuantity`/`TheWorld`,
//      e os nomes desta build sao `GiveToInventory`/`quantityOverride`/`World`:
//      recusava TODA entrega, desde sempre;
//    · o Vault passou a gravar um `id` por cofre numa coluna que e' chave
//      primaria GLOBAL — o segundo jogador do servidor perdia tudo que
//      depositava, com "Depositados 163 item(ns)" na tela;
//    · e o `/vault <id> <qty>` sumiu, embora o proprio config o anunciasse.
//
//  Quatro sintomas, um ato. O dono resumiu: *"virou mania quebrar todo plugin que
//  funcionava na api da comunidade"* — e antes disso ja' tinha dito o caminho,
//  varias vezes: *"reescreva os headers com as correcoes e deixe exatamente
//  igual"*.
//
//  E' o que este arquivo comeca. A FORMA e' a que todo plugin de ARK ja' conhece;
//  o que esta' por baixo e' nosso, inteiro:
//
//    · resolucao por **tabela local + reflexao viva**, e nao por PDB nem por
//      cache baixado de CDN de terceiro (a Wildcard parou de publicar o PDB —
//      foi por isso que esta API nasceu);
//    · **recusa** de simbolo resolvido por inferencia de posicao, em vez de
//      chutar endereco;
//    · desvios **encadeados**, para dois plugins poderem hookar a mesma funcao.
//
//  Nada da API da comunidade entra aqui: nem binario, nem fonte, nem dependencia.
//  O que se olhou deles foi a forma — como se olha uma tomada para fabricar um
//  plugue.
// ═══════════════════════════════════════════════════════════════════════════════
#ifndef BRZ_SDK_BASE_H
#define BRZ_SDK_BASE_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include <string>

#ifdef BRZ_SDK_EXPORTS
#define BRZ_API __declspec(dllexport)
#else
#define BRZ_API __declspec(dllimport)
#endif

// ── um campo de bits, medido na build viva ─────────────────────────────────
//
//  A reflexao da Unreal descreve bitfield: diz o byte, o bit inicial e quantos
//  bits. Um dump nao diz — foi preciso descobrir isso a mao mais de uma vez nesta
//  arvore, e cada vez custou um servidor.
struct BitField
{
    DWORD64 offset       = 0;   // endereco absoluto do byte que contem os bits
    int     bit_position = 0;   // primeiro bit, contado do menos significativo
    int     num_bits     = 0;   // quantos bits o campo ocupa
};

// ── as tres perguntas de que todo o SDK depende ────────────────────────────
//
//  Toda chamada tipada, todo `...Field()`, todo `NativeCall` desce para uma
//  destas. Elas moram na DLL da BRZ Api.
//
//  IMPORTANTE, e diferente do que outras APIs fazem: quando a resposta nao existe
//  com CERTEZA, elas devolvem **nulo** e registram o nome no log. Nao devolvem
//  "o mais provavel".
//
//  Nossa tabela tem 9.320 simbolos resolvidos pela estrategia da ORDEM
//  (inferencia por posicao), com taxa de erro MEDIDA de 0,24% — cerca de vinte
//  enderecos errados. Endereco de funcao errado nao devolve valor esquisito:
//  derruba o servidor, ou faz outra coisa com sucesso. Por isso sao recusados.
//
//  Um plugin que dependa de um desses falha AQUI, dizendo qual simbolo — em vez
//  de cair vinte minutos depois, em outro lugar, sem nada no log.
BRZ_API LPVOID   GetAddress(const std::string& name);
BRZ_API DWORD64  GetAddress(const void* base, const std::string& name);
BRZ_API LPVOID   GetDataAddress(const std::string& name);
BRZ_API BitField GetBitField(const void* base, const std::string& name);

// ── O PONTEIRO QUE O JOGO DEVOLVE ──────────────────────────────────────────
//
//  Quase toda funcao do jogo devolve ponteiro para um objeto, e o nosso dump nao
//  diz de que TIPO. Declarar `void*` e' honesto e nao compila do lado do plugin:
//
//      UClass* c = UVictoryCore::BPLoadClass(p);   // erro: void* -> UClass*
//
//  O plugin esta' certo — a funcao devolve `UClass*` mesmo. A primeira tentativa
//  foi tipar cada retorno lendo o SDK de referencia, e isso trouxe um problema
//  por correcao: nome nao declarado, ciclo de include, redefinicao de classe.
//  Uma rodada inteira de conserto para cada tipo novo.
//
//  Isto resolve os 1.179 casos de uma vez: um ponteiro que se converte para o
//  que quem chama pediu. Ocupa os mesmos 8 bytes, atravessa a fronteira igual, e
//  o compilador aceita — porque a conversao esta' escrita aqui, uma vez, em vez
//  de em cada chamada de cada plugin.
//
//  NAO e' um cast escondido perigoso: `void*` para ponteiro de objeto e' a mesma
//  conversao que o plugin faria a mao. O que muda e' quem a escreve.
struct BrzPonteiro
{
    void* p = nullptr;

    BrzPonteiro() = default;
    BrzPonteiro(void* v) : p(v) {}

    //  So' o molde. Um `operator void*()` ao lado dele tornava AMBIGUA toda
    //  conversao para `void*` — `world->SpawnActor(cls, ...)` nao compilava, e o
    //  erro apontava para o SpawnActor, nao para ca'. O molde com `T = void` ja'
    //  cobre esse caso sozinho.
    template <typename T> operator T*() const { return static_cast<T*>(p); }

    explicit operator bool() const { return p != nullptr; }
    bool operator==(std::nullptr_t) const { return p == nullptr; }
    bool operator!=(std::nullptr_t) const { return p != nullptr; }
};

// ── O CAMPO QUE E' PONTEIRO ────────────────────────────────────────────────
//
//  `UPrimalInventoryComponent* inv = dino->MyInventoryComponentField();` — o
//  campo e' um ponteiro cujo tipo o dump nao diz. Devolver `void*&` nao compila
//  do lado do plugin, e devolver `BrzPonteiro` por valor perderia a ESCRITA
//  (`x->OwnerField() = ator;`).
//
//  Isto guarda o ENDERECO do campo e faz as duas coisas: converte para o ponteiro
//  que o plugin pediu ao ler, e escreve no lugar certo ao atribuir.
struct BrzCampoPonteiro
{
    void** onde = nullptr;
    BrzCampoPonteiro() = default;
    explicit BrzCampoPonteiro(void** o) : onde(o) {}
    //  `cond ? x->CampoField() : nullptr` — o ternario precisa unificar os dois
    //  lados, e `nullptr` so' vira isto se houver como.
    BrzCampoPonteiro(std::nullptr_t) {}

    template <typename T> operator T*() const { return onde ? static_cast<T*>(*onde) : nullptr; }
    operator BrzPonteiro() const              { return BrzPonteiro(onde ? *onde : nullptr); }
    BrzPonteiro Get() const                   { return BrzPonteiro(onde ? *onde : nullptr); }

    template <typename T> BrzCampoPonteiro& operator=(T* v) { if (onde) *onde = (void*)v; return *this; }
    BrzCampoPonteiro& operator=(std::nullptr_t)              { if (onde) *onde = nullptr; return *this; }

    bool operator==(std::nullptr_t) const { return !onde || *onde == nullptr; }
    bool operator!=(std::nullptr_t) const { return onde && *onde != nullptr; }
    explicit operator bool() const        { return onde && *onde != nullptr; }
};

#endif  // BRZ_SDK_BASE_H

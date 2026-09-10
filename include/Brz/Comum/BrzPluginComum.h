// ============================================================================
//  BrzPluginComum.h — o que TODO plugin nosso repete.
//
//  BRZ Api — MIT, Copyright (c) 2026 andrew-mauricio.
//
//  ┌──────────────────────────────────────────────────────────────────────┐
//  │  ISTO NÃO É PARTE DA API. É código dos NOSSOS plugins, compilado     │
//  │  dentro de cada um. A API continua sendo um header e uma tabela.     │
//  └──────────────────────────────────────────────────────────────────────┘
//
//  Por que existe: ao portar o segundo e o terceiro plugin ficou claro que
//  todos repetem as mesmas seis coisas — ler o EOSID, mandar mensagem, pegar o
//  argumento do comando, falar com a loja, ler o config e medir tempo. Copiar
//  isso vinte vezes garante que as vinte cópias divirjam, e a que divergir vai
//  ser justamente a que ninguém revisou.
//
//  Tudo aqui é `inline` e sem estado global compartilhado: cada plugin leva a
//  sua cópia dentro do próprio DLL, e um plugin não vê o estado do outro.
// ============================================================================
#ifndef BRZ_PLUGIN_COMUM_H
#define BRZ_PLUGIN_COMUM_H

#include "Brz/BrzPluginApi.h"

#include <cstdio>
#include <cstdarg>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <string>
#include <map>
#include <vector>

//  Para o `MoveFileExA` da `GravarAtomico`. `WIN32_LEAN_AND_MEAN` porque um
//  plugin nao precisa de winsock nem de OLE, e `NOMINMAX` porque as macros
//  `min`/`max` do windows.h quebram `std::min` em qualquer arquivo que as veja.
#ifdef _WIN32
#  ifndef WIN32_LEAN_AND_MEAN
#    define WIN32_LEAN_AND_MEAN
#  endif
#  ifndef NOMINMAX
#    define NOMINMAX
#  endif
#  include <windows.h>
#endif

namespace brz {

// ── o serviço da loja ───────────────────────────────────────────────────────
//
// Substitui o `#pragma comment(lib, "ArkShop.lib")` dos plugins antigos. O
// struct tem de ser idêntico ao que o plugin da loja publica — por isso mora
// aqui, num lugar só, e não copiado em cada plugin.
// ── QUEM PODE USAR CADA COMANDO ─────────────────────────────────────────────
//
//  Metade dos comandos deste servidor é VIP. Quem responde "este jogador tem o
//  nó `VIP`?" era o `Permissions` de terceiro, ligado por `Permissions.lib` —
//  uma chamada C++ entre DLLs, exatamente o que esta API existe para não fazer.
//
//  Aqui é um serviço, como a loja. E a regra de ouro é a mesma dela: **ausência
//  do serviço não é "pode"**. Um plugin que não acha o serviço tem de RECUSAR e
//  dizer no log, e não liberar o comando VIP para o servidor inteiro — que é o
//  erro que ninguém percebe até a economia do servidor já ter ido embora.
//
//  As funções de escrita devolvem 1 em sucesso e escrevem o motivo em `erro`
//  quando falham. Um "não deu" sem motivo faz o admin trocar a coisa errada.
struct PermissoesServico
{
    int (*TemPermissao)(const char* eos, const char* permissao);
    int (*EstaNoGrupo)(const char* eos, const char* grupo);
    // Os grupos do jogador, separados por vírgula. Devolve o que escreveu.
    int (*GruposDoJogador)(const char* eos, char* saida, int tam);
    int (*TriboTemPermissao)(int tribo, const char* permissao);
    int (*AdicionarAoGrupo)(const char* eos, const char* grupo, char* erro, int tam);
    int (*RemoverDoGrupo)(const char* eos, const char* grupo, char* erro, int tam);
};

struct LojaServico
{
    int (*Pontos)(const char* eosId);
    int (*Gastar)(const char* eosId, int quanto);
    int (*Dar)(const char* eosId, int quanto);
};

// ── quem está em modo PvE ───────────────────────────────────────────────────
//
//  O `PveBRZ` tem a chave `ExcluirDaCacada`, LIGADA em produção: quem está
//  protegido não entra no sorteio do `ProcuradoBRZ`. Os dois são DLLs
//  separadas e não veem o estado um do outro — e por isso, até 03/09/2026, o
//  PveBRZ dizia em todo arranque *"este porte AINDA NAO avisa o
//  ProcuradoBRZ"*. A regra estava no config, o aviso estava no log, e um
//  jogador em PvE podia ser sorteado do mesmo jeito.
//
//  O caminho já existia: é o mesmo `PublicarServico` da loja e das permissões.
//  `tribo` entra porque a proteção do PveBRZ pode ser da TRIBO inteira, sem
//  EOSID nenhum — perguntar só pelo jogador deixaria de fora quem está
//  protegido por causa da tribo.
struct PveServico
{
    int (*EstaProtegido)(const char* eosId, int tribo);
};

// ── o contexto que cada plugin guarda ───────────────────────────────────────
struct Contexto
{
    const BrzApiTabela* api  = nullptr;
    const LojaServico*  loja = nullptr;
    std::string         nome;        // o nome do plugin, para caminhos
    std::string         remetente;   // quem assina as mensagens no chat
};

// ── cortar texto sem partir um acento ao meio ───────────────────────────────
//
//  `vsnprintf` corta por BYTE. Com a API convertendo UTF-8 de verdade desde
//  01/09, um texto com acento que estoure o buffer pode terminar na METADE de
//  uma sequencia — meio "ç", meio "ã".
//
//  Meia sequencia UTF-8 nao aparece como um caractere estranho no fim: ela
//  contamina o que vier depois, porque o proximo byte legitimo e' lido como
//  continuacao dela. E' o mesmo defeito que a API ja corrigiu do lado dela
//  (`BrzUtf16ParaUtf8` para ANTES de cortar); aqui esta o lado do plugin.
//
//  Isto apara o rabo incompleto. Custa um laco de no maximo tres voltas.
inline void AparaUtf8(char* t)
{
    if (!t) return;
    size_t n = 0;
    while (t[n]) ++n;
    // Anda para tras ate' o inicio da ultima sequencia.
    size_t i = n;
    while (i > 0 && (static_cast<unsigned char>(t[i - 1]) & 0xC0) == 0x80) --i;
    if (i == 0) return;
    const unsigned char c = static_cast<unsigned char>(t[i - 1]);
    size_t precisa = 1;
    if      ((c & 0xE0) == 0xC0) precisa = 2;
    else if ((c & 0xF0) == 0xE0) precisa = 3;
    else if ((c & 0xF8) == 0xF0) precisa = 4;
    // Se a ultima sequencia ficou curta, ela sai inteira.
    if (n - (i - 1) < precisa) t[i - 1] = 0;
}

// ── E O CORTE QUE NAO AVISAVA QUE CORTOU ────────────────────────────────────
//
//  `vsnprintf` trunca em silencio e devolve o tamanho que a mensagem TERIA. Os
//  tres canais aqui usam buffers de 512 bytes, e ninguem olhava esse retorno.
//
//  Nao e' teoria: o `/procurar selas` do BuscaLoja monta ate' 18 resultados
//  numa linha so'. Com ids de loja do tamanho que eles costumam ter, isso passa
//  facil de 512 — e o jogador via os primeiros, cortados no meio de um nome,
//  **sem nada dizendo que havia mais**. Ele conclui que o servidor vende sete
//  selas quando vende dezoito.
//
//  Um texto cortado que se anuncia cortado ainda e' util. Um que se cala vira
//  informacao errada. Isto nao conserta o corte — quem monta a mensagem e' que
//  sabe como encurta-la —, mas tira a parte silenciosa dele: o log passa a
//  dizer o canal, quantos bytes se perderam e o comeco do que foi cortado.
inline void AvisaSeCortou(const Contexto& c, const char* canal, int precisava, size_t cabe,
                          const char* texto)
{
    if (precisava < 0 || size_t(precisava) < cabe) return;
    if (!c.api) return;
    c.api->Log("[%s] MENSAGEM CORTADA: %d bytes nao cabiam em %zu. O jogador vai "
               "ler so' o comeco, e sem saber que ha' mais. Comeco: \"%.60s...\"",
               canal, int(size_t(precisava) - cabe) + 1, cabe, texto ? texto : "");
}

inline void Log(const Contexto& c, const char* fmt, ...)
{
    if (!c.api) return;
    char linha[1024];
    va_list ap; va_start(ap, fmt);
    vsnprintf(linha, sizeof(linha), fmt, ap);
    va_end(ap);
    AparaUtf8(linha);
    c.api->Log("%s", linha);          // o motor já põe o nome do plugin
}

// ── jogador ─────────────────────────────────────────────────────────────────
inline std::string Eos(const Contexto& c, void* pc)
{
    char b[128] = {0};
    if (!c.api || !pc) return "";
    c.api->EOSIDdoJogador(pc, b, int(sizeof(b)));
    return b;
}
inline std::string NomePersonagem(const Contexto& c, void* pc)
{
    char b[128] = {0};
    if (!c.api || !pc) return "";
    c.api->NomeDoPersonagem(pc, b, int(sizeof(b)));
    return b;
}

// ── mensagens ───────────────────────────────────────────────────────────────
inline void Diz(const Contexto& c, void* pc, const char* fmt, ...)
{
    if (!c.api || !pc) return;
    char t[512];
    va_list ap; va_start(ap, fmt);
    const int precisava = vsnprintf(t, sizeof(t), fmt, ap);
    va_end(ap);
    AparaUtf8(t);
    AvisaSeCortou(c, "Diz", precisava, sizeof(t), t);
    c.api->MensagemDeChat(pc, c.remetente.c_str(), t);
}
inline void DizTodos(const Contexto& c, const char* fmt, ...)
{
    if (!c.api) return;
    char t[512];
    va_list ap; va_start(ap, fmt);
    const int precisava = vsnprintf(t, sizeof(t), fmt, ap);
    va_end(ap);
    AparaUtf8(t);
    AvisaSeCortou(c, "DizTodos", precisava, sizeof(t), t);
    c.api->MensagemDeChatParaTodos(c.remetente.c_str(), t);
}

// ── DIZER COM COR ───────────────────────────────────────────────────────────
//
//  Os configs de producao escolhem a cor por TIPO de mensagem. O do `Casas` tem
//  quatro — info, sucesso, erro e aviso — e a cor e' a informacao mais rapida
//  que a frase carrega: quem ve' vermelho ja sabe que deu errado antes de ler.
//
//  `brz::Diz` continua branco, que e' o certo para a maioria. Isto e' para quem
//  tem a cor no config.
struct Cor { float r, g, b, a; };

inline void DizCor(const Contexto& c, void* pc, const Cor& cor, const char* fmt, ...)
{
    if (!c.api || !pc) return;
    if (!c.api->MensagemDeServidorColorida) return;   // API mais velha que a v25
    char t[512];
    va_list ap; va_start(ap, fmt);
    const int precisava = vsnprintf(t, sizeof(t), fmt, ap);
    va_end(ap);
    AparaUtf8(t);
    AvisaSeCortou(c, "DizCor", precisava, sizeof(t), t);
    c.api->MensagemDeServidorColorida(pc, t, cor.r, cor.g, cor.b, cor.a, 0);
}

// ── PARA ONDE O JOGADOR ESTA OLHANDO ────────────────────────────────────────
//
//  Dois plugins precisam disto, e os dois pelo mesmo motivo: o config deles fala
//  em MIRAR. O `/pve` protege quem o admin esta olhando; o `/fill 1` enche o
//  canteiro mirado. Pegar "o mais proximo" no lugar soa parecido e nao e': num
//  monte de gente, ou num canteiro colado no outro, acerta o errado — e quem
//  digitou so' descobre depois.
//
//  `AController.ControlRotation` e' um campo, e a reflexao o le'. A rotacao da
//  Unreal e' `{Pitch, Yaw, Roll}` em GRAUS, tres doubles. O vetor unitario:
//
//      x = cos(pitch) * cos(yaw)
//      y = cos(pitch) * sin(yaw)
//      z = sin(pitch)
//
//  Devolve false quando o campo nao existe nesta build — e ai' quem chama tem de
//  RECUSAR, e nao cair no mais proximo em silencio.
inline bool DirecaoDoOlhar(const Contexto& c, void* pc, float& dx, float& dy, float& dz)
{
    if (!c.api || !pc) return false;
    const int32_t off = c.api->OffsetDoMembro(pc, "ControlRotation");
    if (off < 0) return false;
    double rot[3] = {0,0,0};
    if (!c.api->LerMembro(pc, uint32_t(off), rot, sizeof(rot))) return false;
    const double kPi = 3.14159265358979323846;
    const double p = rot[0] * kPi / 180.0, y = rot[1] * kPi / 180.0;
    dx = float(std::cos(p) * std::cos(y));
    dy = float(std::cos(p) * std::sin(y));
    dz = float(std::sin(p));
    return true;
}

//  O cosseno do angulo entre o olhar e a direcao de um ponto. Quanto MAIOR,
//  mais alinhado. Devolve -2 quando nao da' para medir — um valor que nenhum
//  cosseno assume, para nao se confundir com "esta' atras de mim" (-1).
inline double CosDoOlharPara(const Contexto& c, void* pc, const BrzPosicao& alvo,
                             double* distancia = nullptr)
{
    BrzPosicao minha{};
    if (!c.api || !pc || !c.api->Posicao(pc, &minha)) return -2.0;
    float dx = 0, dy = 0, dz = 0;
    if (!DirecaoDoOlhar(c, pc, dx, dy, dz)) return -2.0;
    const double vx = alvo.x - minha.x, vy = alvo.y - minha.y, vz = alvo.z - minha.z;
    const double d = std::sqrt(vx*vx + vy*vy + vz*vz);
    if (distancia) *distancia = d;
    if (d <= 1.0) return -2.0;
    return (vx*dx + vy*dy + vz*dz) / d;
}

// ── O EOS VAZIO, E POR QUE ELE PRECISA DE UMA REGRA SO' ────────────────────
//
//  `Eos` devolve "" quando a API nao consegue o identificador — e ela pode nao
//  conseguir: o EOS ID sai de uma funcao do jogo que depende da tabela de
//  simbolos desta build.
//
//  Em 01/09/2026, lendo os 22 plugins linha a linha, essa string vazia apareceu
//  como chave em DEZ lugares, e o estrago era diferente em cada um:
//
//    · no cofre, todo jogador com EOS falho compartilhava o MESMO cofre;
//    · no `/pve off`, ela casava com toda entrada de TRIBO e apagava a protecao
//      de todas elas;
//    · nas casas, um jogador via e apagava as casas de outro;
//    · na loja, `TemPontos("")` e `Dar("")` mexem numa carteira que nao e' de
//      ninguem — ou e' de todos;
//    · na permissao, `TemPermissao("")` decide quem pode.
//
//  Nenhum deles dava erro. Em todos, o plugin respondia que tinha funcionado.
//
//  Entao a regra fica AQUI, uma vez: sem identidade, a operacao nao acontece, e
//  o jogador OUVE o motivo. Dez copias da mesma conferencia divergiriam, e a que
//  faltasse seria justamente a que ninguem olhou.
//
//  Devolve false quando nao ha identidade — quem chama sai sem fazer nada.
inline bool EosOuAvisa(const Contexto& c, void* pc, std::string& saida)
{
    saida = Eos(c, pc);
    if (!saida.empty()) return true;
    Diz(c, pc, "Nao consegui a sua identificacao agora. Nao vou fazer a operacao "
               "pela metade — tente de novo em instantes.");
    Log(c, "EOSIDdoJogador devolveu vazio. Recusei a operacao em vez de usar a "
           "chave vazia, que e' compartilhada por todos que caem neste caso.");
    return false;
}

// Verde, grande, dez segundos — o visual que os plugins antigos usavam.
inline void NoTopo(const Contexto& c, void* pc, const char* fmt, ...)
{
    if (!c.api || !pc) return;
    char t[512];
    va_list ap; va_start(ap, fmt);
    const int precisava = vsnprintf(t, sizeof(t), fmt, ap);
    va_end(ap);
    AparaUtf8(t);
    AvisaSeCortou(c, "NoTopo", precisava, sizeof(t), t);
    c.api->Notificacao(pc, t, 0.0f, 1.0f, 0.0f, 1.6f, 10.0f);
}

// ── argumentos do comando ───────────────────────────────────────────────────
//
// `linha` é o texto inteiro, com o gatilho na frente. Devolve os pedaços
// separados por espaço, SEM o gatilho. Aspas agrupam.
// ── ler e escrever um BIT sem chutar a máscara ──────────────────────────────
//
//  `api->LerBit(o, off, 1)` estava em SEIS plugins e no motor. A máscara `1`
//  é o bit zero, e o dump diz onde os bits realmente moram:
//
//      APrimalDinoCharacter.bNeutered   bit 3   -> máscara 0x08
//      APrimalCharacter.bIsDead         bit 5   -> máscara 0x20
//
//  Com máscara 1, castrar um dino liga o que estiver no bit 0 daquele byte, e
//  "está morto?" responde por outra bandeira. Nenhuma das duas dá erro.
//
//  Estas duas perguntam a máscara à reflexão (`MascaraDoBit`, v12) e devolvem
//  TRÊS respostas, como o resto da API:
//
//      1   o bit está ligado        (Bit)
//      0   o bit está desligado
//     -1   NÃO CONSEGUI SABER       — o campo não existe nesta build, ou o
//          layout do bitfield não pôde ser medido
//
//  Escreva `Bit(...) > 0`, nunca `if (Bit(...))`: em C, −1 é verdadeiro.
inline int Bit(const Contexto& c, void* obj, const char* campo)
{
    // `MascaraDoBit` entrou na v12. Um plugin que a use TEM de declarar
    // `"MinApiVersion": 12` — e o carregador recusa quem nao declarar, porque
    // ler alem do fim da tabela chama lixo. A conferencia aqui e' o cinto: se
    // por qualquer caminho a entrada vier nula, -1 e' "nao sei", que e' a
    // resposta certa. Chamar um ponteiro nulo derruba o servidor.
    if (!c.api || !obj || !campo) return -1;

    //  ── DESDE A v29 A API RESPONDE ISTO DIRETO ──────────────────────────
    //
    //  `LerBitPorNome` faz as duas metades dentro do motor: acha o byte e a
    //  mascara pela reflexao viva e le'. A mascara deixou de existir na
    //  interface, e com ela some a unica coisa que dava para errar aqui — todo
    //  chamador desta arvore passava `1`, e `bNeutered` mora no bit 3.
    //
    //  Este helper existe para os NOSSOS plugins. Quem baixa a API e escreve o
    //  proprio plugin nao tem este arquivo, e por isso a resposta teve de subir
    //  para a tabela em vez de morar aqui.
    if (c.api->versao >= 29 && c.api->LerBitPorNome)
        return c.api->LerBitPorNome(obj, campo);

    //  O caminho da v12 continua, para quem rodar sobre uma API mais velha.
    if (!c.api->MascaraDoBit || !c.api->LerBit) return -1;
    uint32_t off = 0;
    uint8_t masc = 0;
    if (!c.api->MascaraDoBit(obj, campo, &off, &masc)) return -1;
    return c.api->LerBit(obj, off, masc);
}

// Devolve 1 se escreveu, 0 se não soube onde. Zero NÃO quer dizer "escrevi
// zero" — quer dizer que não escrevi nada, e o chamador precisa saber disso
// antes de dizer ao jogador que deu certo.
inline int EscreverBit(const Contexto& c, void* obj, const char* campo, int valor)
{
    if (!c.api || !obj || !campo) return 0;

    //  A v29 faz as duas metades no motor — ver a nota no `Bit` acima.
    if (c.api->versao >= 29 && c.api->EscreverBitPorNome)
        return c.api->EscreverBitPorNome(obj, campo, valor);

    if (!c.api->MascaraDoBit || !c.api->EscreverBit) return 0;
    uint32_t off = 0;
    uint8_t masc = 0;
    if (!c.api->MascaraDoBit(obj, campo, &off, &masc)) return 0;
    return c.api->EscreverBit(obj, off, masc, valor);
}

inline std::vector<std::string> Args(const char* linha)
{
    std::vector<std::string> v;
    if (!linha) return v;
    std::string s = linha;
    size_t i = 0;
    bool primeiro = true;
    while (i < s.size())
    {
        while (i < s.size() && s[i] == ' ') ++i;
        if (i >= s.size()) break;
        std::string p;
        if (s[i] == '"')
        {
            ++i;
            while (i < s.size() && s[i] != '"') p += s[i++];
            if (i < s.size()) ++i;
        }
        else
            while (i < s.size() && s[i] != ' ') p += s[i++];
        if (primeiro) { primeiro = false; continue; }   // o gatilho não conta
        v.push_back(p);
    }
    return v;
}

inline std::string Minusculo(std::string s)
{
    for (char& c : s) if (c >= 'A' && c <= 'Z') c = char(c - 'A' + 'a');
    return s;
}

// ── loja ────────────────────────────────────────────────────────────────────
//
// A loja é OPCIONAL em todos os plugins. Sem ela, o que custava pontos fica
// grátis em vez de quebrado — um plugin que morre porque outro não está
// instalado transforma um servidor incompleto num servidor quebrado.
inline void AcharLoja(Contexto& c)
{
    if (!c.api) return;
    c.loja = (const LojaServico*)c.api->AcharServico("loja", 1, sizeof(LojaServico));
    if (c.loja) Log(c, "loja encontrada; os custos valem.");
    else        Log(c, "loja ausente; o que custaria pontos fica gratis.");
}
// ── perguntar de novo, em vez de confiar no que foi guardado ────────────────
//
//  `AcharLoja` guarda o ponteiro no arranque. Se a loja CAIR em quarentena
//  depois — um plugin que falha para de ser chamado e tudo que ele registrou
//  sai de circulacao —, `AcharServico` passa a devolver nulo, mas o ponteiro
//  que ja foi guardado continua apontando para o codigo dela.
//
//  E ele NAO estoura: a DLL fica carregada de proposito (descarregar
//  transformaria uma falha contida numa incontivel). Entao a chamada acontece,
//  dentro de um plugin cujo estado e' DESCONHECIDO — que e' pior que estourar,
//  porque nao aparece.
//
//  Perguntar de novo custa um percurso sobre meia duzia de entradas. E' a
//  diferenca entre notar que a loja morreu e cobrar pontos de um jogador
//  chamando codigo de um plugin que caiu.
inline const LojaServico* LojaViva(const Contexto& c)
{
    if (!c.api) return nullptr;
    return (const LojaServico*)c.api->AcharServico("loja", 1, sizeof(LojaServico));
}

// ── PERGUNTAR SE PODE, E O QUE FAZER QUANDO NAO HA' QUEM RESPONDA ──────────
//
//  Mesmo cuidado do `LojaViva`: pergunta-se pelo serviço a cada uso, e não se
//  guarda o ponteiro. Um plugin que caiu em quarentena sai de circulação, e o
//  ponteiro guardado continuaria apontando para o código dele.
//
//  A DIFERENÇA para a loja está no que acontece quando o serviço não está lá.
//  Sem loja, o que custaria pontos fica de graça — perde-se receita e ninguém
//  se machuca. Sem permissões, liberar seria dar todo comando VIP para todo
//  mundo. Então **sem serviço é NÃO**, e o chamador diz isso ao jogador e ao
//  log, para o motivo aparecer antes da conta.
inline const PermissoesServico* PermissoesVivas(const Contexto& c)
{
    if (!c.api) return nullptr;
    return (const PermissoesServico*)c.api->AcharServico("permissoes", 1,
                                                         sizeof(PermissoesServico));
}

//  Mesmo cuidado dos outros dois: pergunta-se a cada uso, e não se guarda o
//  ponteiro — plugin em quarentena sai de circulação e o ponteiro guardado
//  continuaria apontando para o código dele.
inline const PveServico* PveVivo(const Contexto& c)
{
    if (!c.api) return nullptr;
    return (const PveServico*)c.api->AcharServico("pve", 1, sizeof(PveServico));
}

inline bool PodeUsar(const Contexto& c, const std::string& eos, const char* no)
{
    const PermissoesServico* p = PermissoesVivas(c);
    if (!p || !p->TemPermissao)
    {
        //  Uma linha por plugin, e não uma por comando: um servidor sem o
        //  Permissions no ar encheria o log em minutos, e a linha que importa
        //  sumiria no meio das repetições.
        static std::map<std::string, bool> avisados;
        if (!avisados[c.nome])
        {
            avisados[c.nome] = true;
            Log(c, "o servico 'permissoes' NAO esta no ar. Todo comando que exige "
                   "grupo vai recusar — inclusive para o dono. Nao e' o config "
                   "deste plugin: e' o Permissions que nao subiu.");
        }
        return false;
    }
    return p->TemPermissao(eos.c_str(), no) != 0;
}

inline bool TemPontos(const Contexto& c, const std::string& eos, int custo)
{
    if (custo <= 0) return true;
    const LojaServico* loja = LojaViva(c);
    if (!loja) return true;          // sem loja, o que custaria pontos e' gratis
    return loja->Pontos(eos.c_str()) >= custo;
}
// ── COBRAR, E SABER SE COBROU ──────────────────────────────────────────────
//
//  Esta funcao era `void` e fazia `loja->Gastar(...)` sem olhar o resultado.
//  Quem chamava nao tinha como saber se o ponto saiu — e o `Gastar` recusa de
//  proposito em dois casos que acontecem:
//
//    · saldo insuficiente. O SQL e' `WHERE ... AND Points >= ?`, entao um
//      jogador com 10 pontos que peca algo de 30 nao paga NADA — e, com esta
//      funcao muda, o comando rodava do mesmo jeito. De graca.
//    · a loja fora do ar, ou o banco em so-leitura.
//
//  E' o mesmo defeito do `DarPontos`, que em 04/09/2026 fez a cacada anunciar
//  premio que o banco nunca recebeu: **retorno de funcao nunca se ignora**.
//  Aqui ele custa do outro lado — o servidor entrega e nao cobra.
//
//  Agora devolve `true` so' quando o ponto SAIU. Quem chama decide o que fazer
//  com o `false`; o que nao da' e' seguir como se tivesse cobrado.
//
//  O `void` some, e isso e proposital: quem tiver `Cobra(...)` solto no codigo
//  continua compilando, porque ignorar um `bool` e' legal em C++ — mas quem
//  ESCREVER daqui para frente ve a assinatura e sabe que ha resposta.
inline bool Cobra(const Contexto& c, const std::string& eos, int custo)
{
    if (custo <= 0) return true;                 // nada a cobrar e' sucesso
    const LojaServico* loja = LojaViva(c);
    if (!loja)
    {
        Log(c, "NAO cobrei %d ponto(s) de %s: a loja nao esta ai. O comando saiu "
               "de graca — registrado para o dono acertar na mao.",
            custo, eos.c_str());
        return false;
    }
    if (loja->Gastar(eos.c_str(), custo)) return true;

    Log(c, "NAO cobrei %d ponto(s) de %s: a loja RECUSOU (saldo insuficiente, ou "
           "banco so' para leitura). Quem chamou tem de decidir — o que nao da' e' "
           "entregar como se tivesse cobrado.", custo, eos.c_str());
    return false;
}

// ── PAGAR, e o numero que troca de sinal no caminho ─────────────────────────
//
//  `Dar` recebe um `int`. Quem paga quase nunca tem um `int` na mao — tem uma
//  conta. E a conta estoura:
//
//    · **Loteria** — `bolo * MultiploSolo`. A aposta e' limitada a nove digitos,
//      e 999.999.999 x 3 da' 2.999.999.997, que nao cabe. O valor voltava como
//      -1.294.967.299, e `Dar` com numero negativo nao paga: TIRA. O jogador
//      que ganhou sairia devendo, com o premio cheio anunciado no chat.
//    · **DinoMind** — `liberados * PontosPorPonto`, e `PontosPorPonto` vem do
//      config sem teto nenhum. Ali e' pior: `int * int` que estoura e'
//      comportamento INDEFINIDO em C++, nao truncamento — o compilador tem
//      licenca para produzir qualquer coisa.
//
//  Nenhum dos dois da' erro. Os dois anunciam o premio certo e entregam o
//  contrario dele.
//
//  Nao ha conserto silencioso: pagar o teto e' pagar menos do que foi
//  anunciado. Entao paga-se o teto e REGISTRA-SE a diferenca, para quem cuida
//  do servidor acertar na mao — a mesma regra do premio que a loja nao pagou.
//
//  Toda conta chega aqui em `long long`. Quem escrever `loja->Dar(...)` direto
//  no plugin volta a ter o defeito, e a `conferir-pagamento.py` acusa.
static const long long kTetoDePagamento = 2147483647LL;   // o que `Dar` aceita

inline bool DarPontos(const Contexto& c, const std::string& eos, long long quanto)
{
    if (quanto <= 0) return true;
    if (eos.empty())
    {
        Log(c, "PAGAMENTO RECUSADO: %lld pontos sem identificacao de jogador. "
               "Iriam para a carteira vazia que todo EOS falho compartilha.", quanto);
        return false;
    }
    const LojaServico* loja = LojaViva(c);
    if (!loja)
    {
        Log(c, "PREMIO NAO PAGO: %lld pontos para %s. A loja nao esta ai. "
               "Registrado para o dono devolver na mao — nao vou fingir que paguei.",
            quanto, eos.c_str());
        return false;
    }
    if (quanto > kTetoDePagamento)
    {
        Log(c, "PREMIO MAIOR QUE O TETO: %lld pontos para %s, e `Dar` so' aceita "
               "%lld. Paguei o teto; faltam %lld, para o dono acertar na mao. "
               "Antes disto o numero virava NEGATIVO e o premio TIRAVA pontos de "
               "quem ganhou.",
            quanto, eos.c_str(), kTetoDePagamento, quanto - kTetoDePagamento);
        quanto = kTetoDePagamento;
    }
    // ── O RETORNO DE `Dar` ERA JOGADO FORA ─────────────────────────────────
    //
    //  Esta linha era `loja->Dar(...);` seguida de `return true;`. O `true`
    //  significava apenas *"eu chamei"* — nunca *"o jogador recebeu"*.
    //
    //  Em 04/09/2026 o dono cacou tres dinos. O chat anunciou "+1 pontos: Dodo",
    //  "+2 pontos: Moschops", "+4 pontos: Anky"; o log da cacada escreveu os
    //  tres pagamentos; e o saldo no banco continuou 34898, com o arquivo sem
    //  ser tocado. **A cacada nao mentiu: ela perguntou e recebeu `true`.**
    //
    //  E o `CacadaBRZ` tem, escrito ao lado da chamada, exatamente a razao pela
    //  qual isto importa: *"o anuncio so' sai se o pagamento saiu: dizer no chat
    //  que alguem levou X pontos que nao entraram na carteira dele e' mentir
    //  para o servidor todo"*. A regra estava certa; a funcao em que ela confiava
    //  e' que respondia sempre sim.
    //
    //  E' a regra desta casa, e ela vale para mim tambem: **retorno de funcao
    //  nunca se ignora. "Rodou" nao e "fez efeito".**
    if (!loja->Dar(eos.c_str(), int(quanto)))
    {
        Log(c, "PREMIO NAO PAGO: %lld ponto(s) para %s. A loja RECUSOU a gravacao "
               "— o motivo esta no log dela, uma linha acima. Nao anuncie este "
               "premio: o jogador nao recebeu.", quanto, eos.c_str());
        return false;
    }
    return true;
}

// ── GRAVAR SEM ABRIR UMA JANELA EM QUE O ARQUIVO NAO EXISTE ─────────────────
//
//  O `Casas` e o `Vault` gravavam assim, os dois, com um comentario em cima
//  explicando por que se grava em temporario:
//
//      std::remove(alvo);
//      if (std::rename(tmp.c_str(), alvo) != 0) ...
//
//  O `remove` **destroi exatamente a garantia** que o temporario existia para
//  dar. Entre as duas chamadas o `casas.json` nao existe: uma queda ali, ou um
//  `rename` que falhe, deixa o jogador sem NENHUMA casa — que e' textualmente o
//  desfecho que o comentario do `Casas` diz estar prevenindo.
//
//  O `remove` estava la' por um motivo real: o `rename` do runtime C nao
//  substitui arquivo existente no Windows. A resposta certa nao e' apagar
//  antes: e' `MoveFileExA` com `MOVEFILE_REPLACE_EXISTING`, que troca os dois
//  num passo so'. Em qualquer instante existe um arquivo inteiro no lugar —
//  o velho ou o novo, nunca nenhum.
//
//  E o segundo defeito, mais silencioso: o `if (!f)` era conferido ANTES de o
//  `ofstream` ser destruido, e a descarga final acontece na destruicao. Disco
//  cheio na ultima descarga passava despercebido — e o disco desta VPS esta a
//  97%. O arquivo truncado era entao instalado por cima do bom.
//
//  Devolve false SEM ter tocado no arquivo bom quando qualquer passo falha.
inline bool GravarAtomico(const Contexto& c, const char* alvo,
                          const std::string& conteudo)
{
    if (!alvo || !*alvo) return false;
    const std::string tmp = std::string(alvo) + ".tmp";

    {
        std::ofstream f(tmp, std::ios::binary | std::ios::trunc);
        if (!f) { Log(c, "nao consegui abrir %s para gravar.", tmp.c_str()); return false; }
        f << conteudo;
        f.flush();
        f.close();                       // a descarga final acontece AQUI...
        if (f.fail())                    // ...e e' aqui que se confere.
        {
            Log(c, "erro escrevendo %s (disco cheio?). NAO toquei em %s — o "
                   "arquivo bom continua inteiro.", tmp.c_str(), alvo);
            std::remove(tmp.c_str());
            return false;
        }
    }

#ifdef _WIN32
    //  Um passo so'. Nunca existe um instante sem arquivo.
    if (!MoveFileExA(tmp.c_str(), alvo, MOVEFILE_REPLACE_EXISTING))
    {
        Log(c, "NAO consegui substituir %s (erro %lu). O arquivo bom continua "
               "inteiro e o novo esta em %s — nao apague esse arquivo.",
            alvo, (unsigned long)GetLastError(), tmp.c_str());
        return false;
    }
#else
    //  Fora do Windows o `rename` do POSIX ja' substitui atomicamente. Este
    //  ramo existe para a arvore compilar no Linux, onde as guardas rodam.
    if (std::rename(tmp.c_str(), alvo) != 0)
    {
        Log(c, "NAO consegui substituir %s. O novo esta em %s.", alvo, tmp.c_str());
        return false;
    }
#endif
    return true;
}

// ── config.json ─────────────────────────────────────────────────────────────
//
// Parser deliberadamente pequeno: entende texto, número, booleano e lista de
// texto no nível de cima. É tudo o que os nossos configs têm.
//
// A REGRA: nada aqui lança nem derruba. Config torto é problema DAQUELE
// plugin, e o valor padrão continua valendo.
class Config
{
public:
    bool Ler(const Contexto& c, const char* pasta)
    {
        texto_.clear();
        if (!c.api) return false;
        const char* caminho = c.api->CaminhoConfig(pasta);
        if (!caminho) return false;
        FILE* f = nullptr;
#ifdef _MSC_VER
        fopen_s(&f, caminho, "rb");
#else
        f = std::fopen(caminho, "rb");
#endif
        if (!f) return false;
        char buf[4096]; size_t n, total = 0;
        while ((n = std::fread(buf, 1, sizeof(buf), f)) > 0)
        {
            total += n;
            if (total > 1048576) { std::fclose(f); texto_.clear(); return false; }
            texto_.append(buf, n);
        }
        std::fclose(f);
        return true;
    }

    std::string Texto(const char* chave, const char* padrao) const
    {
        size_t i;
        if (!Achar(chave, i) || i >= texto_.size() || texto_[i] != '"') return padrao;
        ++i;
        std::string v;
        while (i < texto_.size() && texto_[i] != '"')
        {
            if (texto_[i] == '\\' && i + 1 < texto_.size()) ++i;
            v += texto_[i++];
        }
        return v;
    }
    int Numero(const char* chave, int padrao) const
    {
        size_t i;
        if (!Achar(chave, i)) return padrao;
        if (i < texto_.size() && texto_[i] == '"') ++i;
        std::string v;
        while (i < texto_.size() &&
               (texto_[i] == '-' || (texto_[i] >= '0' && texto_[i] <= '9')))
            v += texto_[i++];
        if (v.empty()) return padrao;
        return std::atoi(v.c_str());
    }
    float Decimal(const char* chave, float padrao) const
    {
        size_t i;
        if (!Achar(chave, i)) return padrao;
        if (i < texto_.size() && texto_[i] == '"') ++i;
        std::string v;
        while (i < texto_.size() &&
               (texto_[i] == '-' || texto_[i] == '.' ||
                (texto_[i] >= '0' && texto_[i] <= '9')))
            v += texto_[i++];
        if (v.empty()) return padrao;
        return float(std::atof(v.c_str()));
    }
    bool Booleano(const char* chave, bool padrao) const
    {
        size_t i;
        if (!Achar(chave, i)) return padrao;
        if (texto_.compare(i, 4, "true")  == 0) return true;
        if (texto_.compare(i, 5, "false") == 0) return false;
        return padrao;
    }
    bool Existe(void) const { return !texto_.empty(); }

private:
    bool Achar(const char* chave, size_t& i) const
    {
        const std::string alvo = std::string("\"") + chave + "\"";
        size_t p = texto_.find(alvo);
        if (p == std::string::npos) return false;
        p += alvo.size();
        while (p < texto_.size() && (texto_[p]==' '||texto_[p]=='\t'||
                                     texto_[p]=='\n'||texto_[p]=='\r')) ++p;
        if (p >= texto_.size() || texto_[p] != ':') return false;
        ++p;
        while (p < texto_.size() && (texto_[p]==' '||texto_[p]=='\t'||
                                     texto_[p]=='\n'||texto_[p]=='\r')) ++p;
        i = p;
        return true;
    }
    std::string texto_;
};

// ── tempo de espera por jogador ─────────────────────────────────────────────
//
// O relógio é contado em SEGUNDOS pelo próprio plugin, via um AoTimer de 1 Hz.
// Não se chama relógio do sistema dentro de um caminho que roda na thread do
// jogo — e a resolução de um segundo é a que todos estes plugins usam.
class Espera
{
public:
    //  ── a lista que crescia para sempre ─────────────────────────────────────
    //
    //  `quem_` ganhava uma entrada por EOS e nunca perdia nenhuma, e ela e'
    //  varrida LINEARMENTE em todo `Aguardando` e todo `Marca` — ou seja, em
    //  todo comando de todo jogador. Num servidor com rotatividade, meses
    //  depois, e' um percurso de milhares de entradas por comando digitado,
    //  para achar uma espera de dez segundos.
    //
    //  Quem chama passa a validade porque so' ele a conhece; a limpeza roda uma
    //  vez por minuto, que basta e nao paga o custo que se quer evitar.
    void Tique(int segundosDeValidade)
    {
        ++agora_;
        if (segundosDeValidade <= 0 || (agora_ % 60u) != 0u) return;
        for (size_t i = quem_.size(); i-- > 0; )
            if (int(agora_ - quem_[i].second) > segundosDeValidade)
                quem_.erase(quem_.begin() + long(i));
    }
    unsigned Agora(void) const { return agora_; }

    //  Quantas entradas a lista guarda. Existe para a bateria poder PROVAR que
    //  a limpeza acontece: sem isto, "nao segura mais ninguem" e "saiu da lista"
    //  sao indistinguiveis de fora, e o vazamento passaria verde.
    size_t Quantos(void) const { return quem_.size(); }

    bool Aguardando(const std::string& eos, int segundos, int& restam) const
    {
        for (size_t i = 0; i < quem_.size(); ++i)
            if (quem_[i].first == eos)
            {
                const unsigned passou = agora_ - quem_[i].second;
                if (int(passou) < segundos) { restam = segundos - int(passou); return true; }
                return false;
            }
        return false;
    }
    void Marca(const std::string& eos)
    {
        for (size_t i = 0; i < quem_.size(); ++i)
            if (quem_[i].first == eos) { quem_[i].second = agora_; return; }
        quem_.push_back({ eos, agora_ });
    }

private:
    unsigned agora_ = 0;
    std::vector<std::pair<std::string, unsigned>> quem_;
};

} // namespace brz
#endif

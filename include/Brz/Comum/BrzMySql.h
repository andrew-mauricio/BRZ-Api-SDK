// ============================================================================
//  BrzMySql.h — um cliente MySQL/MariaDB pequeno, e SEM biblioteca de terceiro.
//
//  BRZ Api — MIT, Copyright (c) 2026 andrew-mauricio.
//
//  ────────────────────────────────────────────────────────────────────────────
//  POR QUE ISTO EXISTE
//  ────────────────────────────────────────────────────────────────────────────
//  O `Permissions` de produção guarda os grupos num MariaDB — `arkdb`, três
//  tabelas. Sem ler esse banco, o `/pod`, o `/vida`, o `/repair` e todo o resto
//  do que é VIP não têm como saber quem é VIP: o servidor responde "voce nao
//  tem permissao" para o dono e para todo mundo.
//
//  A DLL de terceiro resolve isso ligando `mysqlclient.lib` — estático, MSVC.
//  Nós não podemos: esta árvore compila com MinGW, e o header da API diz por
//  quê, com todas as letras:
//
//      "A C++ call between two DLLs only works when BOTH were built by the
//       same compiler, with the same runtime and the same flags. When they
//       were not, it links, it runs, and it corrupts memory with no readable
//       error."
//
//  Uma biblioteca C compilada por outro compilador é o mesmo problema com
//  outra roupa: o `libmariadb.dll` nem sequer está neste servidor, e trazer um
//  seria mais uma peça a versionar, distribuir e explicar.
//
//  O protocolo do MySQL, para o que precisamos, é PEQUENO: um aperto de mão,
//  uma senha embaralhada com SHA-1, `COM_QUERY`, e um resultado em linhas.
//  Está tudo aqui, em C++ puro sobre Winsock — cabe em um arquivo, não tem
//  dependência nenhuma, e não há fronteira de ABI para atravessar.
//
//  ────────────────────────────────────────────────────────────────────────────
//  O QUE ELE FAZ, E O QUE ELE RECUSA
//  ────────────────────────────────────────────────────────────────────────────
//  FAZ:     conectar (`mysql_native_password`), consultar, ler linhas, escapar
//           texto, reconectar quando a conexão cai.
//  RECUSA:  `caching_sha2_password` (o padrão do MySQL 8), TLS, compressão,
//           `LOAD DATA LOCAL`, prepared statements.
//
//  E RECUSAR É DIZER, NÃO É CALAR. Toda recusa deixa o motivo em `Erro()`. Um
//  cliente de banco que responde "sem linhas" quando na verdade não conseguiu
//  falar com o banco é a pior coisa que se pode pôr num servidor: o plugin
//  conclui que o jogador não tem grupo nenhum e tira o VIP de quem pagou.
//
//  Por isso `Consultar` devolve **false** quando falhou, e nunca uma lista
//  vazia com cara de resposta.
// ============================================================================
//  ────────────────────────────────────────────────────────────────────────────
//  E ELE COMPILA EM LINUX DE PROPOSITO
//  ────────────────────────────────────────────────────────────────────────────
//  O plugin roda no Windows, sob Wine. Mas um cliente de protocolo que nunca
//  falou com um banco de verdade e' uma hipotese, nao um cliente — e a regra
//  desta arvore e' que **o instrumento precisa de prova**.
//
//  As dez linhas de tomada abaixo deixam ESTE MESMO arquivo compilar num
//  Linux, onde o `ferramentas/provar-mysql.cpp` o aponta para o MariaDB de
//  verdade e confere o aperto de mao, a senha embaralhada e as tres tabelas.
//  Nao e' uma segunda implementacao para testar: e' a mesma, falando com o
//  mesmo banco. O que muda sao os nomes das chamadas de soquete.
#pragma once

#ifdef _WIN32
#  ifndef WIN32_LEAN_AND_MEAN
#    define WIN32_LEAN_AND_MEAN
#  endif
#  ifndef NOMINMAX
#    define NOMINMAX
#  endif
#  include <winsock2.h>
#  include <ws2tcpip.h>
#  include <windows.h>
   //  ── e o LINK precisa do Winsock, nao so' o compilador ────────────────
   //
   //  O MinGW aqui na VPS liga `ws2_32` sozinho no modo em que compilamos, e o
   //  `-fsyntax-only` nem chega a ligar: os dois disseram OK. O `cl.exe` do
   //  Visual Studio, que e' como QUALQUER usuario compila, parou no link com
   //  `__imp_closesocket`, `__imp_connect` e `__imp_recv` nao resolvidos.
   //
   //  E' exatamente o que o `compilar-no-pc.sh` existe para pegar: "compilou no
   //  MinGW" nao e' prova de que compila no Visual Studio.
   //
   //  O `pragma` poe a dependencia ao lado do codigo que a cria — quem incluir
   //  este header nao precisa saber que ela existe.
#  ifdef _MSC_VER
#    pragma comment(lib, "ws2_32.lib")
#  endif
#else
#  include <sys/socket.h>
#  include <sys/types.h>
#  include <netdb.h>
#  include <netinet/in.h>
#  include <unistd.h>
#  include <sys/time.h>
   typedef int SOCKET;
#  define INVALID_SOCKET (-1)
#  define closesocket ::close
#endif

#include <cstdint>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>

namespace brz {

// ── SHA-1, que é o que a autenticação pede ──────────────────────────────────
//
//  `mysql_native_password` é:
//
//      resposta = SHA1(senha) XOR SHA1( embaralho + SHA1(SHA1(senha)) )
//
//  Vinte bytes. Não há biblioteca envolvida — são oitenta linhas de contas com
//  inteiros de 32 bits, e escrevê-las aqui é mais barato que carregar uma
//  dependência inteira por causa delas.
struct Sha1
{
    uint32_t h[5];
    uint64_t total;
    uint8_t  buf[64];
    size_t   n;

    Sha1() { Comecar(); }
    void Comecar()
    {
        h[0] = 0x67452301u; h[1] = 0xEFCDAB89u; h[2] = 0x98BADCFEu;
        h[3] = 0x10325476u; h[4] = 0xC3D2E1F0u;
        total = 0; n = 0;
    }
    static uint32_t Gira(uint32_t v, int b) { return (v << b) | (v >> (32 - b)); }

    void Bloco(const uint8_t* p)
    {
        uint32_t w[80];
        for (int i = 0; i < 16; ++i)
            w[i] = (uint32_t(p[i*4]) << 24) | (uint32_t(p[i*4+1]) << 16) |
                   (uint32_t(p[i*4+2]) << 8) | uint32_t(p[i*4+3]);
        for (int i = 16; i < 80; ++i)
            w[i] = Gira(w[i-3] ^ w[i-8] ^ w[i-14] ^ w[i-16], 1);

        uint32_t a = h[0], b = h[1], c = h[2], d = h[3], e = h[4];
        for (int i = 0; i < 80; ++i)
        {
            uint32_t f, k;
            if      (i < 20) { f = (b & c) | ((~b) & d);          k = 0x5A827999u; }
            else if (i < 40) { f = b ^ c ^ d;                      k = 0x6ED9EBA1u; }
            else if (i < 60) { f = (b & c) | (b & d) | (c & d);    k = 0x8F1BBCDCu; }
            else             { f = b ^ c ^ d;                      k = 0xCA62C1D6u; }
            const uint32_t t = Gira(a, 5) + f + e + k + w[i];
            e = d; d = c; c = Gira(b, 30); b = a; a = t;
        }
        h[0] += a; h[1] += b; h[2] += c; h[3] += d; h[4] += e;
    }

    void Juntar(const void* dados, size_t tam)
    {
        const uint8_t* p = (const uint8_t*)dados;
        total += tam;
        while (tam)
        {
            const size_t cabe = 64 - n;
            const size_t leva = tam < cabe ? tam : cabe;
            std::memcpy(buf + n, p, leva);
            n += leva; p += leva; tam -= leva;
            if (n == 64) { Bloco(buf); n = 0; }
        }
    }

    void Fechar(uint8_t saida[20])
    {
        const uint64_t bits = total * 8;
        uint8_t um = 0x80;
        Juntar(&um, 1);
        const uint8_t zero = 0;
        while (n != 56) Juntar(&zero, 1);
        uint8_t fim[8];
        for (int i = 0; i < 8; ++i) fim[i] = uint8_t((bits >> (56 - i * 8)) & 0xFF);
        // `Juntar` mexe em `total`, e aqui já não importa: o bloco final fecha.
        const uint8_t* p = fim;
        std::memcpy(buf + n, p, 8);
        Bloco(buf);
        for (int i = 0; i < 5; ++i)
        {
            saida[i*4]   = uint8_t((h[i] >> 24) & 0xFF);
            saida[i*4+1] = uint8_t((h[i] >> 16) & 0xFF);
            saida[i*4+2] = uint8_t((h[i] >> 8)  & 0xFF);
            saida[i*4+3] = uint8_t( h[i]        & 0xFF);
        }
    }

    static void De(const void* dados, size_t tam, uint8_t saida[20])
    { Sha1 s; s.Juntar(dados, tam); s.Fechar(saida); }
};

// ── a conexão ───────────────────────────────────────────────────────────────
class MySql
{
public:
    MySql() : sock_(INVALID_SOCKET), seq_(0), conectado_(false) {}
    ~MySql() { Fechar(); }

    MySql(const MySql&) = delete;
    MySql& operator=(const MySql&) = delete;

    const std::string& Erro(void) const { return erro_; }
    bool Conectado(void) const { return conectado_; }

    bool Conectar(const std::string& servidor, int porta, const std::string& usuario,
                  const std::string& senha, const std::string& banco)
    {
        Fechar();
        erro_.clear();
        servidor_ = servidor; porta_ = porta; usuario_ = usuario;
        senha_ = senha; banco_ = banco;

        if (!IniciarWinsock()) return false;

        char portaTxt[16];
        std::snprintf(portaTxt, sizeof(portaTxt), "%d", porta);

        addrinfo dica; std::memset(&dica, 0, sizeof(dica));
        dica.ai_family = AF_UNSPEC;
        dica.ai_socktype = SOCK_STREAM;
        dica.ai_protocol = IPPROTO_TCP;

        addrinfo* lista = nullptr;
        if (getaddrinfo(servidor.c_str(), portaTxt, &dica, &lista) != 0 || !lista)
        { erro_ = "nao resolvi o endereco '" + servidor + "'"; return false; }

        for (addrinfo* a = lista; a; a = a->ai_next)
        {
            sock_ = socket(a->ai_family, a->ai_socktype, a->ai_protocol);
            if (sock_ == INVALID_SOCKET) continue;
            //  Um banco que não responde NÃO pode segurar a thread do jogo para
            //  sempre. Dez segundos é generoso para um container na mesma
            //  máquina, e é finito — que é a única propriedade que importa.
#ifdef _WIN32
            DWORD ms = 10000;
            setsockopt(sock_, SOL_SOCKET, SO_RCVTIMEO, (const char*)&ms, sizeof(ms));
            setsockopt(sock_, SOL_SOCKET, SO_SNDTIMEO, (const char*)&ms, sizeof(ms));
#else
            struct timeval tv; tv.tv_sec = 10; tv.tv_usec = 0;
            setsockopt(sock_, SOL_SOCKET, SO_RCVTIMEO, (const char*)&tv, sizeof(tv));
            setsockopt(sock_, SOL_SOCKET, SO_SNDTIMEO, (const char*)&tv, sizeof(tv));
#endif
            if (connect(sock_, a->ai_addr, int(a->ai_addrlen)) == 0) break;
            closesocket(sock_); sock_ = INVALID_SOCKET;
        }
        freeaddrinfo(lista);
        if (sock_ == INVALID_SOCKET)
        { erro_ = "nao conectei em " + servidor + ":" + std::to_string(porta); return false; }

        if (!ApertoDeMao()) { Fechar(); return false; }
        conectado_ = true;
        return true;
    }

    void Fechar(void)
    {
        if (sock_ != INVALID_SOCKET) { closesocket(sock_); sock_ = INVALID_SOCKET; }
        conectado_ = false;
        seq_ = 0;
    }

    //  Uma consulta que devolve linhas. `false` é FALHA — nunca "não achei".
    //  A diferença entre as duas é o VIP de alguém.
    bool Consultar(const std::string& sql, std::vector<std::vector<std::string>>& linhas)
    {
        linhas.clear();
        if (!conectado_ && !Reconectar()) return false;
        if (!MandarConsulta(sql))
        {
            //  A conexão pode ter caído entre duas consultas — o servidor fecha
            //  por inatividade e não avisa ninguém. Uma tentativa de reconexão,
            //  e só uma: insistir num banco fora do ar é segurar o jogo.
            if (!Reconectar()) return false;
            if (!MandarConsulta(sql)) return false;
        }
        return LerResultado(linhas);
    }

    //  Uma consulta que não devolve linhas (UPDATE/INSERT/DELETE/CREATE).
    bool Executar(const std::string& sql)
    {
        std::vector<std::vector<std::string>> ignora;
        return Consultar(sql, ignora);
    }

    //  ── e o texto que vai para dentro de aspas ──────────────────────────
    //
    //  Um EOSID vem do jogo; um nome de grupo vem do admin. Nenhum dos dois é
    //  confiável o bastante para entrar numa consulta sem passar por aqui.
    static std::string Escapar(const std::string& t)
    {
        std::string r;
        r.reserve(t.size() + 8);
        for (unsigned char c : t)
        {
            switch (c)
            {
            case '\0': r += "\\0";  break;
            case '\n': r += "\\n";  break;
            case '\r': r += "\\r";  break;
            case '\\': r += "\\\\"; break;
            case '\'': r += "\\'";  break;
            case '"':  r += "\\\""; break;
            case 26:   r += "\\Z";  break;
            default:   r += char(c); break;
            }
        }
        return r;
    }

private:
    SOCKET      sock_;
    uint8_t     seq_;
    bool        conectado_;
    std::string erro_;
    std::string servidor_, usuario_, senha_, banco_;
    int         porta_ = 3306;

    static bool IniciarWinsock(void)
    {
#ifdef _WIN32
        //  Uma vez por processo. O jogo já usa rede, então na prática o Winsock
        //  já está de pé — mas contar com isso é contar com outra pessoa.
        static bool feito = false;
        static bool ok = false;
        if (feito) return ok;
        feito = true;
        WSADATA d;
        ok = (WSAStartup(MAKEWORD(2, 2), &d) == 0);
        return ok;
#else
        return true;
#endif
    }

    bool Reconectar(void)
    {
        Fechar();
        if (servidor_.empty()) { erro_ = "sem dados de conexao"; return false; }
        return Conectar(servidor_, porta_, usuario_, senha_, banco_);
    }

    // ── os pacotes ──────────────────────────────────────────────────────────
    //
    //  Cabeçalho de 4 bytes: três de tamanho (little-endian) e um de sequência.
    //  Um corpo maior que 16 MB vem partido em vários pacotes de 0xFFFFFF, e o
    //  laço abaixo os emenda — o resultado da tabela `PermissionGroups` nunca
    //  chega perto disso, e um cliente que ignora o caso mente quando ele
    //  acontece.
    bool LerExato(void* destino, size_t quanto)
    {
        uint8_t* p = (uint8_t*)destino;
        while (quanto)
        {
            const int n = recv(sock_, (char*)p, int(quanto), 0);
            if (n <= 0) { erro_ = "a conexao com o banco caiu"; conectado_ = false; return false; }
            p += n; quanto -= size_t(n);
        }
        return true;
    }

    bool LerPacote(std::vector<uint8_t>& corpo)
    {
        corpo.clear();
        for (;;)
        {
            uint8_t cab[4];
            if (!LerExato(cab, 4)) return false;
            const uint32_t tam = uint32_t(cab[0]) | (uint32_t(cab[1]) << 8) | (uint32_t(cab[2]) << 16);
            seq_ = cab[3];
            const size_t antes = corpo.size();
            //  Teto de sanidade: 64 MB. Um pacote maior que isto não é uma
            //  resposta desta árvore — é confusão de protocolo, e continuar
            //  lendo alocaria memória sem fim.
            if (antes + tam > 64u * 1024u * 1024u)
            { erro_ = "resposta absurda do banco (>64 MB); desconfio do protocolo"; conectado_ = false; return false; }
            corpo.resize(antes + tam);
            if (tam && !LerExato(corpo.data() + antes, tam)) return false;
            if (tam < 0xFFFFFF) return true;      // último pedaço
        }
    }

    bool MandarPacote(const std::vector<uint8_t>& corpo, uint8_t sequencia)
    {
        std::vector<uint8_t> fora;
        fora.reserve(corpo.size() + 4);
        fora.push_back(uint8_t( corpo.size()        & 0xFF));
        fora.push_back(uint8_t((corpo.size() >> 8)  & 0xFF));
        fora.push_back(uint8_t((corpo.size() >> 16) & 0xFF));
        fora.push_back(sequencia);
        fora.insert(fora.end(), corpo.begin(), corpo.end());

        const uint8_t* p = fora.data();
        size_t quanto = fora.size();
        while (quanto)
        {
            const int n = send(sock_, (const char*)p, int(quanto), 0);
            if (n <= 0) { erro_ = "nao consegui escrever no banco"; conectado_ = false; return false; }
            p += n; quanto -= size_t(n);
        }
        return true;
    }

    // Inteiro de tamanho variável do protocolo.
    static bool LerInteiro(const std::vector<uint8_t>& b, size_t& i, uint64_t& saida)
    {
        if (i >= b.size()) return false;
        const uint8_t c = b[i++];
        if (c < 0xFB) { saida = c; return true; }
        if (c == 0xFB) { saida = 0; return true; }          // NULL
        int quantos = 0;
        if      (c == 0xFC) quantos = 2;
        else if (c == 0xFD) quantos = 3;
        else if (c == 0xFE) quantos = 8;
        else return false;
        if (i + size_t(quantos) > b.size()) return false;
        uint64_t v = 0;
        for (int k = 0; k < quantos; ++k) v |= uint64_t(b[i + size_t(k)]) << (8 * k);
        i += size_t(quantos);
        saida = v;
        return true;
    }

    // Texto de tamanho variável. `nulo` sai true no 0xFB, que é o NULL do SQL —
    // e NULL não é "": num campo de grupos, um é "não tem linha" e o outro é
    // "tem linha e está vazia".
    static bool LerTexto(const std::vector<uint8_t>& b, size_t& i, std::string& saida, bool& nulo)
    {
        nulo = false;
        if (i >= b.size()) return false;
        if (b[i] == 0xFB) { ++i; nulo = true; saida.clear(); return true; }
        uint64_t tam = 0;
        if (!LerInteiro(b, i, tam)) return false;
        if (i + size_t(tam) > b.size()) return false;
        saida.assign((const char*)b.data() + i, size_t(tam));
        i += size_t(tam);
        return true;
    }

    void GuardarErroDoServidor(const std::vector<uint8_t>& b)
    {
        // ERR: 0xFF, código (2), '#', estado (5), mensagem
        if (b.size() >= 9)
            erro_ = "o banco recusou: " + std::string((const char*)b.data() + 9, b.size() - 9);
        else
            erro_ = "o banco recusou (sem mensagem)";
    }

    bool ApertoDeMao(void)
    {
        std::vector<uint8_t> b;
        if (!LerPacote(b)) return false;
        if (b.empty()) { erro_ = "aperto de mao vazio"; return false; }
        if (b[0] == 0xFF) { GuardarErroDoServidor(b); return false; }
        if (b[0] != 10) { erro_ = "protocolo do banco nao e o 10 (e o " + std::to_string(int(b[0])) + ")"; return false; }

        size_t i = 1;
        while (i < b.size() && b[i] != 0) ++i;         // versão do servidor
        if (i >= b.size()) { erro_ = "aperto de mao truncado"; return false; }
        ++i;
        if (i + 4 + 8 + 1 + 2 > b.size()) { erro_ = "aperto de mao truncado"; return false; }
        i += 4;                                        // id da thread

        uint8_t embaralho[20];
        std::memcpy(embaralho, b.data() + i, 8);
        i += 8;
        ++i;                                           // enchimento

        uint32_t capacidades = uint32_t(b[i]) | (uint32_t(b[i+1]) << 8);
        i += 2;

        size_t tamEmbaralho = 8;
        std::string plugin = "mysql_native_password";
        if (i < b.size())
        {
            ++i;                                       // charset
            if (i + 2 > b.size()) { erro_ = "aperto de mao truncado"; return false; }
            i += 2;                                    // estado
            if (i + 2 > b.size()) { erro_ = "aperto de mao truncado"; return false; }
            capacidades |= (uint32_t(b[i]) | (uint32_t(b[i+1]) << 8)) << 16;
            i += 2;
            if (i >= b.size()) { erro_ = "aperto de mao truncado"; return false; }
            const size_t declarado = b[i]; ++i;
            i += 10;                                   // reservado
            const size_t resto = declarado > 8 ? (declarado - 8) : 0;
            const size_t leva = resto > 12 ? 12 : resto;      // os 12 úteis
            if (i + leva > b.size()) { erro_ = "aperto de mao truncado"; return false; }
            std::memcpy(embaralho + 8, b.data() + i, leva);
            tamEmbaralho = 8 + leva;
            i += resto ? (resto > 13 ? resto : 13) : 0;
            if (i < b.size())
            {
                const char* nome = (const char*)b.data() + i;
                const size_t sobra = b.size() - i;
                const size_t n = strnlen(nome, sobra);
                plugin.assign(nome, n);
            }
        }

        //  ── e o motivo do "recusa e diz" ────────────────────────────────
        //
        //  O MySQL 8 usa `caching_sha2_password` por padrão. Este cliente NÃO
        //  fala esse esquema, e tentar mesmo assim manda uma senha que nunca
        //  vai bater: o servidor responde "acesso negado", e quem lê o log
        //  conclui que a senha do config está errada — e vai trocar a senha
        //  certa por outra. O MariaDB deste servidor usa
        //  `mysql_native_password`, que é o que está implementado aqui.
        if (plugin != "mysql_native_password")
        {
            erro_ = "o banco pede autenticacao '" + plugin + "', e este cliente so "
                    "fala 'mysql_native_password'. NAO e senha errada — e o esquema. "
                    "Rode: ALTER USER ... IDENTIFIED WITH mysql_native_password BY ...";
            return false;
        }

        // Resposta 41.
        std::vector<uint8_t> r;
        //  CLIENT_LONG_PASSWORD | LONG_FLAG | CONNECT_WITH_DB | PROTOCOL_41 |
        //  TRANSACTIONS | SECURE_CONNECTION | PLUGIN_AUTH | MULTI_RESULTS
        uint32_t minhas = 0x00000001u | 0x00000004u | 0x00000200u | 0x00002000u |
                          0x00008000u | 0x00080000u | 0x00020000u;
        if (banco_.empty()) minhas &= ~0x00000008u; else minhas |= 0x00000008u;
        (void)capacidades;

        for (int k = 0; k < 4; ++k) r.push_back(uint8_t((minhas >> (8 * k)) & 0xFF));
        const uint32_t maxPacote = 16u * 1024u * 1024u;
        for (int k = 0; k < 4; ++k) r.push_back(uint8_t((maxPacote >> (8 * k)) & 0xFF));
        r.push_back(45);                                    // utf8mb4_general_ci
        for (int k = 0; k < 23; ++k) r.push_back(0);
        r.insert(r.end(), usuario_.begin(), usuario_.end());
        r.push_back(0);

        uint8_t resposta[20];
        const int tamResposta = Embaralhar(senha_, embaralho, tamEmbaralho, resposta);
        r.push_back(uint8_t(tamResposta));
        for (int k = 0; k < tamResposta; ++k) r.push_back(resposta[k]);

        if (!banco_.empty()) { r.insert(r.end(), banco_.begin(), banco_.end()); r.push_back(0); }
        const char* pl = "mysql_native_password";
        r.insert(r.end(), pl, pl + std::strlen(pl));
        r.push_back(0);

        if (!MandarPacote(r, 1)) return false;

        if (!LerPacote(b)) return false;
        if (b.empty()) { erro_ = "o banco nao respondeu ao login"; return false; }
        if (b[0] == 0xFF) { GuardarErroDoServidor(b); return false; }
        if (b[0] == 0xFE)
        {
            erro_ = "o banco pediu para trocar de esquema de autenticacao, e este "
                    "cliente so fala 'mysql_native_password'.";
            return false;
        }
        return true;
    }

    static int Embaralhar(const std::string& senha, const uint8_t* embaralho,
                          size_t tamEmbaralho, uint8_t saida[20])
    {
        if (senha.empty()) return 0;
        uint8_t s1[20], s2[20], junto[20];
        Sha1::De(senha.data(), senha.size(), s1);
        Sha1::De(s1, 20, s2);

        Sha1 h;
        h.Juntar(embaralho, tamEmbaralho < 20 ? tamEmbaralho : 20);
        h.Juntar(s2, 20);
        h.Fechar(junto);

        for (int i = 0; i < 20; ++i) saida[i] = uint8_t(s1[i] ^ junto[i]);
        return 20;
    }

    bool MandarConsulta(const std::string& sql)
    {
        std::vector<uint8_t> p;
        p.reserve(sql.size() + 1);
        p.push_back(0x03);                             // COM_QUERY
        p.insert(p.end(), sql.begin(), sql.end());
        return MandarPacote(p, 0);
    }

    bool LerResultado(std::vector<std::vector<std::string>>& linhas)
    {
        std::vector<uint8_t> b;
        if (!LerPacote(b)) return false;
        if (b.empty()) { erro_ = "resposta vazia do banco"; return false; }
        if (b[0] == 0xFF) { GuardarErroDoServidor(b); return false; }
        if (b[0] == 0x00 || b[0] == 0xFE) return true;   // OK: sem linhas, e isso é sucesso

        size_t i = 0;
        uint64_t colunas = 0;
        if (!LerInteiro(b, i, colunas) || colunas == 0)
        { erro_ = "nao entendi a contagem de colunas"; return false; }

        for (uint64_t c = 0; c < colunas; ++c)
            if (!LerPacote(b)) return false;             // definição de cada coluna

        if (!LerPacote(b)) return false;                 // EOF depois das colunas
        if (!b.empty() && b[0] == 0xFF) { GuardarErroDoServidor(b); return false; }

        for (;;)
        {
            if (!LerPacote(b)) return false;
            if (b.empty()) { erro_ = "linha vazia"; return false; }
            if (b[0] == 0xFF) { GuardarErroDoServidor(b); return false; }
            //  EOF: 0xFE com menos de 9 bytes. Um texto de 0xFE bytes começaria
            //  igual, e é por isso que o tamanho entra na conta.
            if (b[0] == 0xFE && b.size() < 9) break;

            std::vector<std::string> linha;
            linha.reserve(size_t(colunas));
            size_t k = 0;
            bool ok = true;
            for (uint64_t c = 0; c < colunas; ++c)
            {
                std::string campo; bool nulo = false;
                if (!LerTexto(b, k, campo, nulo)) { ok = false; break; }
                linha.push_back(campo);
            }
            if (!ok) { erro_ = "linha truncada"; return false; }
            linhas.push_back(linha);
        }
        return true;
    }
};

} // namespace brz

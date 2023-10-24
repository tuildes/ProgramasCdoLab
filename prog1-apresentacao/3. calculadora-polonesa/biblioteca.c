#include "biblioteca.h"

/* Funções de manipulação de pilhas */

    // Insere um novo na pilha
    // Nao verifica se eh possivel inserir, ou seja deve ser verificado antes do chamado
    void empilhar(struct pilha *p, char novo) {

        (*p).pilha[(*p).topo] = novo;
        (*p).topo++;

    };

    // Remove o primeiro colocado da pilha
    // Nao verifica se eh possivel remover, ou seja deve ser verificado antes do chamado
    void desimpilhar(struct pilha *p) {

        (*p).topo--;
        (*p).pilha[(*p).topo] = 0;

    };

    // Retorna 1 se eh vazio, ou 0 se nao
    int eh_vazio (struct pilha p) {

        if (p.topo == 0) {
            return 1;
        };

        return 0;
    };

    // Retorna 1 se eh cheio, ou 0 se nao
    int eh_cheio (struct pilha p) {

        if (p.topo == 100) {
            return 1;
        };

        return 0;
    };

    char ver_topo (struct pilha p) {
        return p.pilha[p.topo-1];
    };

/* Funções de manipulação de pilhas */

/* Funções auxiliares sem classificacao definido */

    // Verifica se a entrada eh um digito do tipo character '0-9'
    int eh_numero (char c) {

        switch (c) {

            case '0':
                return 1;
                break;

            case '1':
                return 1;
                break;

            case '2':
                return 1;
                break;

            case '3':
                return 1;
                break;

            case '4':
                return 1;
                break;

            case '5':
                return 1;
                break;

            case '6':
                return 1;
                break;

            case '7':
                return 1;
                break;

            case '8':
                return 1;
                break;

            case '9':
                return 1;
                break;
            
            default:
                return 0;
                break;
        }
    }

/* Funções auxiliares sem classificacao definido */
#include "biblioteca.h"

/* Funções de manipulação de Fila */

    // Verifica se a fila esta vazia
    // Retorna 1 para verdadeiro e 0 para falso
    int filaVazia(struct fila p) {
        if ((p.inicio % 5) == (p.final % 5))
            return 1;
        
        return 0;
    };

    // Verifica se a fila esta cheia
    // Retorna 1 para verdadeiro e 0 para falso
    int filaCheia(struct fila p) {
        if ((p.inicio % 5) == ((p.final+1) % 5))
            return 1;
        return 0;
    }

    // Insere na fila, MAS NÃO verifica se a fila esta cheia, deve ser verificado antes do chamado
    void inserirFila (struct fila *p, int n) {
        
        (*p).fila[((*p).final % 5)] = n;
        (*p).final++;

    };

    // Remove o primeiro da fila, MAS NÃO verifica se a fila esta vazia, deve ser verificado antes do chamado
    // Remoção por substituição, ou seja, apenas permite sobreescrever o elemento da fila
    int removerFila (struct fila *p) {
        (*p).inicio++;
        return (*p).fila[(*p).inicio-1];
    };

    // Retorna quem eh o primeiro na fila - proximo a ser removido
    int inicioFila (struct fila p) {
        return p.fila[(p.inicio % 5)];
    };

/* Funções de manipulação de Fila */

/* Funções de manipulação de Pilha */

    // Empilha um elemento, MAS NAO verifica se a pilha esta cheia
    void empilhar(struct pilha *p, int novo) {

        (*p).pilha[(*p).topo] = novo;
        (*p).topo++;

    };

    // Remove o ultimo elemento, MAS NAO verifica se a pilha esta vazia
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

    // Retorna o topo da pilha
    int ver_topo (struct pilha p) {
        return p.pilha[p.topo-1];
    };

/* Funções de manipulação de Pilha */

/* Funções de manipulação de vetores genericos */

    // Imprime todo o vetor de 0-tam
    void lerVetor (int v[], int tam) {
        for (int i=0; i<tam; i++)
        printf("%d ", v[i]);
        printf("\n");
    };

/* Funções de manipulação de vetores genericos */

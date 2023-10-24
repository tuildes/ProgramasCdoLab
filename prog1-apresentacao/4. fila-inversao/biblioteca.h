// Includes de todo o projeto
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

// Path: projeto-base/estruturas.h
// Funções da biblioteca.c"

// Estrutura do tipo fila que funciona do formato circular
// Principio: o primeiro a entrar eh o primeiro a sair
struct fila {

	int inicio;
	int final;
	int fila[5];

};

// Estrutura do tipo pilha
// Principio: o primeiro a entrar eh o ultimo a sair
struct pilha {
	int topo;
	int pilha[5];
};

/* Funções de manipulação de Fila */
    int filaVazia(struct fila p);
    int filaCheia(struct fila p);
    void inserirFila (struct fila *p, int n);
    int removerFila (struct fila *p);
    int inicioFila (struct fila p);
/* Funções de manipulação de Fila */

/* Funções de manipulação de Pilha */
    void empilhar(struct pilha *p, int novo);
    void desimpilhar(struct pilha *p);
    int eh_vazio (struct pilha p);
    int eh_cheio (struct pilha p);
    int ver_topo (struct pilha p);
/* Funções de manipulação de Pilha */

/* Funções de manipulação de vetores genericos */
    void lerVetor (int v[], int tam);
/* Funções de manipulação de vetores genericos */
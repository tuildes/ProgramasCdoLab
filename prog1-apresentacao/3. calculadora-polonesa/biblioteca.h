// Includes de todo o projeto
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

/*
    Path: projeto-base/estruturas.h
    Funções da biblioteca.c" 
*/

// Estrutura do tipo pilha, indica o topo QUE DEVE ser inicializado em 0
// O topo indica uma posicao acima do ultimo da pilha
// Principio: Primeiro entra, ultimo a sair
struct pilha {
	int topo;
	char pilha[100];
};

/* Funções de manipulação de pilhas */
    void empilhar(struct pilha *p, char novo);
    void desimpilhar(struct pilha *p);
    int eh_vazio (struct pilha p);
    int eh_cheio (struct pilha p);
    char ver_topo (struct pilha p);
/* Funções de manipulação de pilhas */

/* Funções auxiliares sem classificacao definido */
    int eh_numero (char c);
/* Funções auxiliares sem classificacao definido */
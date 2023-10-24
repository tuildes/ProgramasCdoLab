// Includes de todo o projeto
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

// Path: projeto-base/estruturas.h
// Funções da biblioteca.c"

typedef struct listaEncadeada lista;
struct listaEncadeada {
    int info;
    lista *prox;
};

void inserir_lista (lista *l, int dado);
void imprimir_lista (lista *l);
void remover_lista (lista *l);
lista* busca_lista (lista *l, int dado);
void remover_lista_num (lista *l, int posicao);
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
    char numero[100];
    char nome[100];
    char relacao[100];
    lista *prox;
};

// manipulação de lista
void inserir_lista (lista *l, char nome[], char numero[], char relacao[]);
void remover_lista (lista *l);
void remover_lista_num (lista *l, int posicao);
void imprimir_lista (lista *l);
lista* busca_lista (lista *l, char dado[]);

// manipulação de tela
void imprimir_menu ();
void menu_inserir ();
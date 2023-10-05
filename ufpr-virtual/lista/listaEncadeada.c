#include <stdio.h>
#include <stdlib.h>

// Lista é uma info que aponta para outra info
// O ultima info eh um NULL

typedef struct lista 
{
    int info;
    struct lista *prox;

} Lista;

// Retorna se a lista esta vazia
int lista_vazia (Lista L) {
    if (L.prox == NULL)
        return 1;
    return 0;
};

// Imprimir a lista
void imprimir_lista (Lista *L) {
    if (L != NULL) {
        printf("Lista: %d\n", (*L).info);
        imprimir_lista((*L).prox);
    };
}

// Inserir na lista
void inserir_lista (Lista *L, int i) {

    Lista *nova;
    *nova = *L;
    (*L).info = i;
    (*L).prox = nova;
};

int main () {

    Lista agenda;

    agenda.info = 0;
    agenda.prox = NULL;

    // inserir_lista(&agenda, 10);
    imprimir_lista(&agenda);

    return 0;
}
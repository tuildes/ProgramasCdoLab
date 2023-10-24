#include "biblioteca.h"

// Insere na lista
void inserir_lista (lista *l, int dado) {

    lista* nova;

    // Aloca espaco na lista
    if((nova = (lista *) malloc (sizeof(lista))) == NULL)
        return;

    // Inserir o dado na lista
    nova->info = dado;
    nova->prox = l->prox;
    l->prox = nova;
};  

// Deleta um valor da lista
// Remove sempre o primeiro item da lista
void remover_lista (lista *l) {
    
    lista *removivel;
    // Remove o proxima celula
    removivel = l->prox;
    l->prox = removivel->prox;

    free (removivel);
}

// Busca um item na lista
lista* busca_lista (lista *l, int dado) {
    
    lista *temp;
    // Procura por todas as celulas
    for (temp = l->prox; temp != NULL; temp = temp->prox) {
        if (temp->info == dado)
            return temp;
    };

    // Se nao encontrar, retorna vazio
    return NULL;
}

void remover_lista_num (lista *l, int posicao) {

        lista *p, *q;
        int i=1;

        p = l;
        q = l->prox;
        while (q != NULL && i != posicao) {
            p = q;
            q = q->prox;
            i++;
        }

        if (q != NULL) {
            p->prox = q->prox;
            free (q);
        }
};

// Imprimir lista
void imprimir_lista (lista *l) {
    lista *p;
	int i=1;

	printf("\nLista:\n");

    for (p = l->prox; p != NULL; p = p->prox) {
        printf ("%d: %d\n", i, p->info);
		i++;
	};
    printf ("\n");
};







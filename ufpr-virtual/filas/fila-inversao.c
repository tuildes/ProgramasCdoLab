#include <stdio.h>

// Feito para fila definida em tamanho 5 [0..5]

struct fila {

	int inicio;
	int final;
	int fila[5];

};

int filaVazia(struct fila p) {

	if ((p.inicio % 5) == (p.final % 5))
		return 1;
	
	return 0;
};

int filaCheia(struct fila p) {
	if ((p.inicio % 5) == ((p.final+1) % 5))
		return 1;
	return 0;
}

void inserirFila (struct fila *p, int n) {
	
	(*p).fila[((*p).final % 5)] = n;
    (*p).final++;

};

int removerFila (struct fila *p) {
	(*p).inicio++;
	return (*p).fila[(*p).inicio-1];
};

int inicioFila (struct fila p) {
	return p.fila[(p.inicio % 5)];
}

void lerVetor (int v[], int tam) {

    for (int i=0; i<tam; i++)
    printf("%d ", v[i]);
    printf("\n");
}

// Funções da pilha

struct pilha {
	int topo;
	int pilha[5];
};

void empilhar(struct pilha *p, int novo) {

	(*p).pilha[(*p).topo] = novo;
	(*p).topo++;

};

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

int eh_cheio (struct pilha p) {

	if (p.topo == 100) {
		return 1;
	};

	return 0;
};

int ver_topo (struct pilha p) {
	 return p.pilha[p.topo-1];
};



int main () {

    struct fila cheia;
    struct pilha invertida;

    // Encher a fila
    for (int i=0; i<5; i++)
        inserirFila(&cheia, i);

    // Imprimir o vetor fila antes
    printf("A fila antes eh:\t");
    lerVetor(cheia.fila, 5);
    
    // Inverte a fila na fila vazia

    if (eh_vazio(invertida)) {

        // Inverte a pilha
        for (int i=0; i<5; i++) {
            empilhar(&invertida, inicioFila(cheia));
            removerFila(&cheia);
        };

        for (int i=0; i<5; i++) {
            inserirFila(&cheia, ver_topo(invertida));
            desimpilhar(&invertida);
        };
        
        // Imprimir o vetor fila antes
        printf("A fila depois eh:\t");
        lerVetor(cheia.fila, 5);

    } else {
        printf("\nA pilha nao esta vazia para a inversao\n");
    };

    return 0;
}
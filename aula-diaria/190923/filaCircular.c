#include <stdio.h>

// Feito para fila definida em tamanho 25 [0..24]

struct fila {

	int inicio;
	int final;
	int fila[25];

};

int filaVazia(struct fila p) {

	if ((p.inicio % 25) == (p.final % 25))
		return 1;
	
	return 0;
};

int filaCheia(struct fila p) {
	if ((p.inicio % 25) == ((p.final+1) % 25))
		return 1;
	return 0;
}

void inserirFila (struct fila *p, int n) {
	
	(*p).final++;
	(*p).fila[((*p).final % 25)] = n;

};

int removerFila (struct fila *p) {
	(*p).inicio++;
	return (*p).fila[(*p).inicio-1];
};

int inicioFila (struct fila p) {
	return p.fila[(p.inicio % 25)];
}

int main () {

	// Inicia as variaveis e o struct
	
	struct fila generico;
	generico.inicio = 0;
	generico.final = 0;

	// Lota a fila de 1 a 25 nas 25 posicoes
	for (int i=1; i<25; i++) {
		inserirFila(&generico, i);
	}

	// Demonstracao que a fila funciona 1 para fila cheia
	removerFila(&generico);
	inserirFila(&generico, 26);

	printf("\nEh cheio: %d \n", filaCheia(generico));

	return 0;
}

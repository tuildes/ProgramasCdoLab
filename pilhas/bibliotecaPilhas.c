#include <stdio.h>
#include <stdlib.h>

struct pilha {
	int topo;
	char *pilha;
};

void empilhar(struct pilha *p, char novo) {

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

char ver_topo (struct pilha p) {
	 return p.pilha[p.topo-1];
};

int main () {

	// Declarar variaveis do ambiente
	struct pilha template;
	int tam;

	// Definir o tamanho da variavel

	printf("Digite o tamanho da sua pilha [0..n]:\t");
	scanf("%d", &tam);

	if ((template.pilha = malloc(tam * sizeof(char))) == NULL) {
		printf("\nA alocação deu errado");
		return 1;
	};

	// Execucao do main()

	printf("\n");

	for (int i=0; i<tam; i++) {
		empilhar(&template, i);
		printf("pilha[%d] = %d\n", i, ver_topo(template));
	};

	// Livrar a memoria dinamica
	free(template.pilha);

	return 0;	

};
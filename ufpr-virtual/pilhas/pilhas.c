#include <stdio.h>

struct pilha {
	int topo;
	char pilha[100];
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

	struct pilha parenteses;
	char expressao[100];
	parenteses.topo = 0;

	printf("\nDigite a sua expressão numérica\n");
	fgets(expressao, 100, stdin);
	printf("Expressão: %s\n", expressao);

	for (int i=0; i<100; i++) {
		if ((expressao[i] == '(') || (expressao[i] == ')')) {
			if (eh_vazio(parenteses)) {
				empilhar(&parenteses, expressao[i]);
			} else {
				if (ver_topo(parenteses) == expressao[i]) {
					empilhar(&parenteses, expressao[i]);
				} else {
					desimpilhar(&parenteses);
				}
			};
		};
	};

	printf("\no tamanho da pilha eh %d\n", parenteses.topo);

	if (eh_vazio(parenteses)) {
		printf("Esta vazia\n");
	} else {
		printf("Nao esta vazia\n");
	}

	return 0;
}

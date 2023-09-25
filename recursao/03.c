#include <stdio.h>

int ehPalindromo (int vetor[], int tam, int atual) {

	// Caso Base
	if (atual >= ((tam-1)/2)) {
		if (vetor[atual] == vetor[tam-atual-1])
			return 1;

		return 0;
	};

	// Manutencao e recursao
	
	if ((ehPalindromo(vetor, tam, atual+1)) && (vetor[atual] == vetor[tam-atual-1]))
			return 1;

	return 0;
};

int main () {

	int generico[6] = {0,1,1,1,1,1};

	if (ehPalindromo(generico, 6, 0)) {
		printf("Eh palindromo");
	} else {
		printf("Nao eh palindromo");
	};

	printf("\n");

	return 0;
};

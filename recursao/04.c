#include <stdio.h>
#include <stdlib.h>

int somador (int vetor[], int n) {

	// Caso base
	if (n == 0)
		return vetor[n];	

	// Manutenção e recursão
	return vetor[n] + somador(vetor, n-1);
};

int main () {

	int vetor[100];
	int n;

	printf("Diga o tamanho do vetor: ");
	scanf("%d", &n);

	if ((n>100) || (n<0))
		return 1;

	printf("\nInsira o vetor: \t");
	for (int i=0; i<n; i++)
		scanf("%d", &vetor[i]);

	printf("\nA soma do vetor eh: %d\n", somador(vetor, n));
	return 0;
};

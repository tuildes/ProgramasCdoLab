#include <stdio.h>

void troca (int vetor[], int a, int b) {
	int temp = vetor[a];
	vetor[a] = vetor[b];
	vetor[b] = temp;
};

int particiona (int vetor[], int ini, int fim) {

	int pivo = vetor[fim];
	int p = ini-1;
	
	for (int i=ini; i < fim; i++) {
		if (vetor[i] <= pivo) {
			p++;
			troca (vetor, i, p);
		};
	};
	troca (vetor, p+1, fim);
	return p+1;
};

void quick_sort (int vetor[], int ini, int fim) {
	if (ini < fim) {
		int pivo = particiona (vetor, ini, fim);
		quick_sort (vetor, ini, pivo-1);
		quick_sort (vetor, pivo+1, fim);
	};
};

void ler_vetor (int vetor[], int n) {
	
	printf("\nVetor:\n");
	for (int i=0; i<n; i++)
		printf("%d ", vetor[i]);
	printf("\n");
};

int main () {

	int vetor[10] = {0,1,7,5,4,2,3,9,7,6};

	ler_vetor (vetor, 10);
	quick_sort (vetor, 0, 9);
	ler_vetor (vetor, 10);

	return 0;
};

#include <stdio.h>

void imprimir_r (int n) {

	// Caso base
	if (n == 0) {
		printf("%d ", n);
		return; 
	};

	// Manutenção
	imprimir_r (n-1);
	printf("%d ", n);

};

void imprimir_invertido_r (int n, int atual) {

	// Caso base
	if (atual == n) {
		printf("%d ", atual);
		return;
	};

	// Manutenção e recursão
	imprimir_invertido_r (n, atual+1);
	printf("%d ", atual);

};

int main () {

	int n;

	// Define o N
	printf("Digite o N\t");
	scanf("%d", &n);

	// Ordem de 0 a N
	printf("A sua ordem de 0 a N  eh: ");
	imprimir_r (n);
	printf("\n");
	
	// Ordem de N a 0
	printf("A sua ordem de N a 0 eh: ");
	imprimir_invertido_r (n, 0);
	printf("\n");

	return 0;
};

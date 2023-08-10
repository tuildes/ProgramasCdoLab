#include <stdio.h>
// Programa que verifica se o numero colocado eh triangular

int main () {

	int cont, numero;

	scanf("%d", &numero);

	for (cont=0; cont <= (numero/3); cont++) {

		if ((cont*(cont+1)*(cont+2)) == numero) {
			printf("o numero %d eh triangular (%d)\n", numero, cont);
		}
	}

	return 0;
}

#include <stdio.h>
#include <math.h>

int main () {

	int numero,cont;

	printf("Coloque o numero para descobrir seus divisores PRIMOS\n");
	scanf("%d", &numero);

	int numeroEhPrimo (int teste) {
		
		int cont2, ehPrimo;

		ehPrimo = 1;

		for (cont2=2; cont2 <= (sqrt(cont)); cont2++) {
			if (teste%cont2 == 0) {
				ehPrimo = 0;
			}
		}

		return ehPrimo; 
	}

	// Passar por todos os numeros divisores de NUMERO
	for (cont=1; cont<=(numero/2); cont++) {

		// Descobrir se o numero eh primo

		// Se for primo, ele eh jogado de volta

		if ((numeroEhPrimo(cont)) && (numero%cont == 0)) {
			printf("%d eh divisor de %d\n", cont, numero);
		}
	}

	if (numeroEhPrimo(numero)) {
		printf("%d eh divisor de %d\n", numero, numero);
	}

	return 0;
}

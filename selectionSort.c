#include <stdio.h>

int main() {
	
	int a[10] = {66,34,98,120,0,128,6,5,31,31};
	int contador, existeMenor;
	int tamanho = 10;

	contador = 0;

	// fazer o selection sort
	while (contador < tamanho) {

		int contador2,temp;

		existeMenor = 0;
		
		for (contador2 = (contador+1); contador2 < tamanho ; contador2++) {
			if ( a[contador] > a[contador2] ) {
				existeMenor = 1;
				temp = a[contador];
				a[contador] = a[contador2];
				a[contador2] = temp;
				break;
			};
		}

		if (!existeMenor) {
			contador++;
		};
	};

	// ler o vetor ordenado
	for (contador = 0; contador < tamanho; contador++) {
		printf("a[%d] = %d\n", contador, a[contador]);
	};

	return 0;
}

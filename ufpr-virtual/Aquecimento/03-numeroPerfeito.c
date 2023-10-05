#include <stdio.h>

int main () {
	
	int quantidade, cont1, cont2, achados, soma;

	printf("Insira a quantidade de numeros perfeitos\n");
	scanf("%d", &quantidade);

	achados = 0;
	cont1 = 1;
	
	while (achados < quantidade ) {
		
		soma = 0;

		for (cont2=1; cont2 < cont1; cont2++) {
			if (cont1%cont2 == 0) {
				soma+=cont2;
			}
		}	

		if (soma == cont1) {
			achados++;
			printf("%d ", cont1);
		}
		
		cont1++; 
	};

	return 0;
}

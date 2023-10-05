#include <stdio.h>

int main () {
	
	int quantidade, cont1, total;

	printf("Digite o n!\n");
	scanf("%d", &quantidade);

	if (quantidade >= 1) {
		total = 1;

		for (cont1=1; cont1<=quantidade; cont1++) {
			total *= cont1;
		}
		printf("O total eh %d.\n", total);

	} else {
		printf("O numero digita nao eh maior que 0\n");
	}

	return 0;
}

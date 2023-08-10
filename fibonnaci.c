#include <stdio.h>

int main () {
	
	int cont1, quantidade, atual, anterior;
	printf("Coloque a quantidade de numeros para a sequencia\n");
	scanf("%d", &quantidade);

	atual=1;
	anterior=0;

	for (cont1=1; cont1<=quantidade; cont1++) {
		int temp;

		printf("%d, ", atual);

		temp=anterior;
		anterior=atual;
		atual+=temp;
	}

	return 0;
}

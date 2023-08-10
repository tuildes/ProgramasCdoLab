#include <stdio.h>

int main () {
	
	int numero, multiplicado, soma;

	printf("Digite o numero para ser testado\n");
	scanf("%d", &numero);

	multiplicado = numero*37;
	soma = 0;

	// repete o numero ate chegar no ultimo algarismo
	while (multiplicado/10 != 0) {
		soma += (multiplicado%10);
		multiplicado /= 10;
	};

	soma += multiplicado%10;

	// comparaca para dar a resposta
	if (soma == numero) {
		printf("SIM\n");
	} else {
		printf("NAO\n");	
	} ;

	return 0;
}

#include <stdio.h>
#include <math.h>

int main () {

	int numeroInput, todosQuadrados;
	double quadradoInput;

	todosQuadrados = 1;
	scanf("%d", &numeroInput)i;

	// Repete o numero ate achar um zero
	while (numeroInput) {
		quadradoInput = sqrt(numeroInput);
		
		// Verifica se o numero tem ponto flutuante sqrt - arrendondamento
		if ((quadradoInput - floor(quadradoInput)) != 0) {
			todosQuadrados = 0;
		}
		
		scanf("%d", &numeroInput);
	}

	//Output final
	if (!todosQuadrados) {
		printf("nao sao todos quadrados\n");
	} else {
		printf("todos sao quadrados\n");
	};

	return 0;
}

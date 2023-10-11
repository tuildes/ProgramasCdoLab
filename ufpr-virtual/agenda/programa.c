#include "biblioteca.h"

int main (int argc, char *argv[]) {

	// Variaveis
	int estado = -1;
	lista* agenda;

	agenda = NULL;
	if ((agenda = ((lista *) malloc(sizeof(lista)))) == NULL)
		return 1;

	// Loop do sistema
	while (estado != 4) {
		imprimir_menu();
		printf("\nColoque sua escolha: ");
		scanf("%d", &estado);

		switch (estado) {

			// Visualizar a agenda
			case 1:
				printf("\n----------------------\n");
				imprimir_lista (agenda);
				break;

			// Inserir um contato na agenda
			case 2:
				menu_inserir(agenda);
				break;

			case 3:
				printf("\n----------------------\n");
				printf("Qual posicao que voce quer remover?\n");
				printf("Obs: Se colocar uma posicao a mais, o ultimo sera removido!\t");
				scanf("%d", &estado);
				remover_lista_num (agenda, estado);
				estado = 3;
				break;
			
			default:
				break;
		};
	};

	// Liberar memoria
	free (agenda);
	return 0;
}

#include "biblioteca.h"

int main (int argc, char *argv[]) {

	lista* tabela;

	// Semente aleatoria pro programa
	srand(time(NULL));

	// Inicialziar a tabela
    tabela = NULL;
	if ((tabela = ((lista *) malloc(sizeof(lista)))) == NULL)
		return 1;

	// Teste de inserir
    for (int i=1; i<=3; i++)
		inserir_lista(tabela, (rand() % 50));
    imprimir_lista(tabela);

	// Teste de remoção
	remover_lista (tabela);
	remover_lista (tabela);
	
	imprimir_lista(tabela);

	// Liberar memoria
	free (tabela);
	return 0;
}

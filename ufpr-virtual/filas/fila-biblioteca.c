#include <stdio.h>
#include <stdlib.h>

// Feito para fila definida em tamanho tam [0..tam]

struct fila {

	int inicio;
	int final;
	int *fila;

};

int filaVazia(struct fila p, int tam) {

	if ((p.inicio % tam) == (p.final % tam))
		return 1;
	
	return 0;
};

int filaCheia(struct fila p, int tam) {
	if ((p.inicio % tam) == ((p.final+1) % tam))
		return 1;
	return 0;
}

void inserirFila (struct fila *p, int n, int tam) {
	
	(*p).fila[((*p).final % tam)] = n;
    (*p).final++;

};

int removerFila (struct fila *p) {
	(*p).inicio++;
	return (*p).fila[(*p).inicio-1];
};

int inicioFila (struct fila p, int tam) {
	return p.fila[(p.inicio % tam)];
}

void lerVetor (int v[], int tam) {
    for (int i=0; i<tam; i++)
    printf("%d ", v[i]);
    printf("\n");
}

void resetFila (struct fila *f) {
    (*f).inicio = 0;
    (*f).final = 0;
};

int main () {

    // Definir as variaveis
    struct fila template;
    int tam;

    resetFila(&template);

    printf("Defina o tamanho da sua fila: \t");
    scanf("%d", &tam);

    if ((template.fila = malloc(tam * sizeof(int))) == NULL) {
        printf("\nErro ao fazer a alocação, abortando!");
        return 1;
    }

    // Codigo do programa

    for (int i=0; i<tam; i++)
        inserirFila(&template, i, tam);

    printf("\n");
    lerVetor(template.fila, tam);

    // Liberar espaço da alocação dinâmica
    free (template.fila);
    return 0;
};
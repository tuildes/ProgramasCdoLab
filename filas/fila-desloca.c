#include <stdio.h>
#include <stdlib.h>

// Feito para fila definida em tamanho tam [0..tam]

struct fila {

	int inicio;
	int final;
	int fila[10];

};

int filaVazia(struct fila p) {

	if (p.inicio == p.final)
		return 1;
	
	return 0;
};

int filaCheia(struct fila p) {
	if (p.final == 5)
		return 1;

	return 0;
}

void inserirFila (struct fila *p, int n) {

    if (((*p).final > 4) && (*p).inicio != 0) {

        for (int i=(*p).inicio; i<=((*p).final - (*p).inicio); i++)
            (*p).fila[i - (*p).inicio] = (*p).fila[i];
        for (int i=0; i<(*p).inicio; i++)
            (*p).final--;
    }   
	
	(*p).fila[(*p).final] = n;
    (*p).final++;

};

int removerFila (struct fila *p) {
	(*p).inicio++;
	return (*p).fila[(*p).inicio-1];
};

int inicioFila (struct fila p) {
	return p.fila[p.inicio];
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
    
    for (int i=0; i<5; i++)
        inserirFila(&template, i);


    printf("\nA fila eh:\n");
    lerVetor(template.fila, 5);

    // Remover de teste

    removerFila(&template);
    removerFila(&template);

    inserirFila(&template, 5);
    inserirFila(&template, 6);

    printf("\nA fila removida eh:\n");
    lerVetor(template.fila, 5);

    return 0;
};
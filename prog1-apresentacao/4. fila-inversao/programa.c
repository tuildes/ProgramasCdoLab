#include "biblioteca.h"

int main (int argc, char *argv[]) {

    struct fila cheia;
    struct pilha invertida;

    // Incialziar as struct
    cheia.inicio = 0;
    cheia.final = 0;

    invertida.topo = 0;

    // Encher a fila
    for (int i=0; i<5; i++)
        inserirFila(&cheia, i);

    // Imprimir o vetor fila antes
    printf("\n\nO programa eh feito para demonstracao em vetores de 5 posicoes\n\n");
    printf("A fila antes eh:\t");
    lerVetor(cheia.fila, 5);
    
    // Inverte a fila na fila vazia

    if (eh_vazio(invertida)) {

        // Inverte a pilha
        for (int i=0; i<5; i++) {
            empilhar(&invertida, inicioFila(cheia));
            removerFila(&cheia);
        };

        for (int i=0; i<5; i++) {
            inserirFila(&cheia, ver_topo(invertida));
            desimpilhar(&invertida);
        };
        
        // Imprimir o vetor fila antes
        printf("A fila depois eh:\t");
        lerVetor(cheia.fila, 5);

    } else {
        printf("\nA pilha nao esta vazia para a inversao\n");
    };

    return 0;
}
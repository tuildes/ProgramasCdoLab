#include <stdio.h>

void lerVetor(int matriz[5][5]) {

    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
};

void imprimirVetor(int matriz[5][5]) {

    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            printf("%d ", matriz[i][j]);
        };
        printf("\n");
    }
}

void somarVetores (int a[5][5], int b[5][5], int c[5][5]) {
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            c[i][j] = b[i][j] + a[i][j];
        };
    }
}

void multiplicarVetores (int a[5][5], int b[5][5], int c[5][5]) {
    int multiplicado;

    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            multiplicado = 0;

            for (int m=0; m<5; m++) {
                multiplicado+= a[i][m]*b[m][j];
            }

            c[i][j] = multiplicado;
        };
    }
}

int main () {

    int matrizA[5][5], matrizB[5][5], matrizC[5][5];

    lerVetor(matrizA);
    lerVetor(matrizB);

    printf("\nO vetor A eh:\n");
    imprimirVetor(matrizA);

    printf("\nO vetor B eh:\n");
    imprimirVetor(matrizB);

    printf("\nA soma de A e B eh:\n");
    somarVetores(matrizA, matrizB, matrizC);
    imprimirVetor(matrizC);

    printf("\nA multiplicacao de A e B eh:\n");
    multiplicarVetores(matrizA, matrizB, matrizC);
    imprimirVetor(matrizC);

    return 0;
}

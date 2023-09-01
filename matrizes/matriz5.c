#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimir (int numero) {
	
	if (numero < 10) {
		printf("0%d", numero);
	} else {
		printf("%d", numero);
	};
}

int main (int argc, char *argv[]) {

    srand(time(NULL));

    int matriz_A[5][5], matriz_B[5][5];

    printf("\nA matriz A eh:\n");

    for (int i=0 ; i<5; i++) {
        for (int j=0; j<5; j++) {
            matriz_A[j][i] = (rand() % 10);
            if (matriz_A[j][i] < 10) {
                printf("0%d ", matriz_A[j][i]);
            } else {
                printf("%d ", matriz_A[j][i]); 
            }
        }
        printf("\n");
    };

    printf("\nA matriz B eh \n");

    for (int i=0 ; i<5; i++) {
        for (int j=0; j<5; j++) {
            matriz_B[j][i] = (rand() % 10);
            if (matriz_B[j][i] < 10) {
                printf("0%d ", matriz_B[j][i]);
            } else {
                printf("%d ", matriz_B[j][i]); 
            }
        }
        printf("\n");
    };

    printf("\nA soma de A e B eh\n");

    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            int soma = matriz_A[j][i] + matriz_B[j][i];
			if (soma < 10) {
				printf("0%d ", soma);
			} else {
				printf("%d ", soma);
			};
        };
		printf("\n");
    };

	printf("\nO produto de A por B eh\n");

	for (int i=0; i<5; i++) {
		for (int j=0; j<5; j++) {
			int multiplicado = 0;
			for (int m=0; m<5; m++) {
				multiplicado+= (matriz_A[j][m]*matriz_B[m][i]);
			};
			printf("%d ", multiplicado);		
		};
		printf("\n");
	}

    return 0;
}

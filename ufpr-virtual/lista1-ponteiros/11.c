#include <stdio.h>

int main () {

    int vetor[5];
    
    //Le o vetor
    for (int j=0; j<5; j++) {
        scanf("%d", &vetor[j]);
    };
    
    //Intermedio
    printf("\nResultado:\n");
    
    //Imprime o vetor
    for (int j=0; j<5; j++) {
        if ((vetor[j] % 2) == 0) {
            printf("%p\n", &vetor[j]);
        };
    };
    
    return 0; 
};
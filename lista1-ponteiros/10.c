#include <stdio.h>

int main () {

    int vetor[5];
    
    for (int j=0; j<5; j++) {
        scanf("%d", &vetor[j]);
        
        int* pointer = &vetor[j];
        
        *pointer*=2;
    };
    
    for (int j=0; j<5; j++) {
        printf("%d\n", vetor[j]);
    }
    
    return 0; 
};
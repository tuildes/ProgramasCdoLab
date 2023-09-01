#include <stdio.h>

int main () {

    int vetor[3][3];
    
for (int j=0; j<3; j++) {
    for (int i=0; i<3; i++) {
        printf("%d,%d: %d\n", j, i, &vetor[j][i]);
    };
};
    
    return 0; 
};
#include <stdio.h>

int main () {

    float vetor[10] = {0,1,2,3,4,5,6,7,8,9};

    for (int i=0; i<10; i++) {
        printf("%d: %d\n", i, &vetor[i]);
    };

    return 0;
};
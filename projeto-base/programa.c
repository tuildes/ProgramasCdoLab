#include "biblioteca.h"

int main (int argc, char *argv[]) {

    // Code
    srand(time(NULL));

    printf("10000000\n");
    for (int i=1; i<=100; i++) {
        for (int j=1; j<=100000; j++)
            printf("%d " ,rand()%100);
        printf("\n");
    };

    return 0;
}
#include <stdio.h>

int lg (int N, int n){

    if (n > N/2)
        return 0;

    return lg(N, n*2) + 1;
}

int main () {

    int N;

    printf("Digite o valor de N: \t");
    scanf("%d", &N);

    printf("\nO piso de N em LOG de 2 eh: %d\n", lg(N,1));

}
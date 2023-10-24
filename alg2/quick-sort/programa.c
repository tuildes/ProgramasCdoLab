#include "biblioteca.h"
#define MAX 1000000

double converte_ms_to_s (double tempo) {
	return tempo/1000;
};

void ler_vetor (int vetor[], int n) {
    for (int i=0; i<n; i++)
        scanf("%d", &vetor[i]);
}

int main (int argc, char *argv[]) {

    int n;
    int v[MAX];
    /* abaixo as variaveis que contarao tempo */
    clock_t inicio, fim; /* clock_t vem de time.h */
    double tempo, tempo_em_segundos;
    
    scanf ("%d", &n);
    ler_vetor (v, n);

    // imprimir_vetor (v, n);

    inicio = clock();
	quick_sort_alt (v, 0, (n-1));
    // quick_sort (v, 0, (n-1));
    fim = clock();

    // imprimir_vetor (v, n);

    /* tempo sera dado em milisegundos       */
    /* CLOCKS_PER_SEC eh um define em time.h */
    tempo = (double)(fim - inicio) * 1000.0 / CLOCKS_PER_SEC;
    tempo_em_segundos = converte_ms_to_s (tempo);
    printf("tempo em ms: %f\n", tempo_em_segundos);

    return 0;
}
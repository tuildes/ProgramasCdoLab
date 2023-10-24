#include "biblioteca.h"

// Funções do projeto que devem ser importadas para o bilioteca.hs
/* Quick Sort functions*/
    void troca (int vetor[], int a, int b) {
        int temp = vetor[a];
        vetor[a] = vetor[b];
        vetor[b] = temp;
    };

    int particiona (int vetor[], int ini, int fim) {

        int pivo = vetor[fim];
        int p = ini-1;
        
        for (int i=ini; i < fim; i++) {
            if (vetor[i] <= pivo) {
                p++;
                troca (vetor, i, p);
            };
        };
        troca (vetor, p+1, fim);
        return p+1;
    };

    void quick_sort (int vetor[], int ini, int fim) {
        if (ini < fim) {
            int pivo = particiona (vetor, ini, fim);
            quick_sort (vetor, ini, pivo-1);
            quick_sort (vetor, pivo+1, fim);
        };
    };

    void quick_sort_alt (int vetor[], int ini, int fim) {
        int i = ini;
        int j = fim;
        int pivo = vetor[(ini+fim)/2];

        while (i <= j) {
            while (vetor[i] < pivo)
                i++;
            while (vetor[j] > pivo)
                j--;
            if (i <= j) {
                troca (vetor, i, j);
                i++;
                j--;
            };
        };

        if (ini < j)
            quick_sort_alt (vetor, ini, j);
        if (i < fim)
            quick_sort_alt (vetor, i, fim);
    };

    void imprimir_vetor (int vetor[], int n) {
        
        printf("\nVetor:\n");
        for (int i=0; i<n; i++)
            printf("%d ", vetor[i]);
        printf("\n");
    };
/* Quick Sort functions*/
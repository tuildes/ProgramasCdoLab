#include "biblioteca.h"

/* TAD de lista */

    // Insere na lista
    void inserir_lista (lista *l, char nome[], char numero[], char relacao[]) {

        lista* nova;

        // Aloca espaco na lista
        if((nova = (lista *) malloc (sizeof(lista))) == NULL)
            return;

        // Inserir as infos na lista
        strcpy((nova->nome), nome);
        strcpy((nova->numero), numero);
        strcpy((nova->relacao), relacao);

        nova->prox = l->prox;
        l->prox = nova;
    };  

    // Deleta um valor da lista - Remove sempre o primeiro item da lista
    void remover_lista (lista *l) {
        
        lista *removivel;
        // Remove o proxima celula
        removivel = l->prox;
        l->prox = removivel->prox;

        free (removivel);
    }

    // Busca um item na lista
    lista* busca_lista (lista *l, char dado[]) {
        
        lista *temp;
        // Procura por todas as celulas
        for (temp = l->prox; temp != NULL; temp = temp->prox) {
            if (strcmp((temp->nome), dado))
                return temp;
        };

        // Se nao encontrar, retorna vazio
        return NULL;
    }

    void remover_lista_num (lista *l, int posicao) {

        lista *p, *q;
        int i=1;

        p = l;
        q = l->prox;
        while (q != NULL && i != posicao) {
            p = q;
            q = q->prox;
            i++;
        }

        if (q != NULL) {
            p->prox = q->prox;
            free (q);
        }
    };

    // Imprimir TODOS os elementos da lista
    void imprimir_lista (lista *l) {
        lista *p;
        int i=1;

        printf("\nLista:\n");

        for (p = l->prox; p != NULL; p = p->prox) {
            printf("\n\e[1;35m%d:\e[0;37m\n", i);
            printf("\e[1;37mNome:\e[0;37m %s\n", p->nome);
            printf("\e[1;37mNumero:\e[0;37m %s\n", p->numero);
            printf("\e[1;37mRelação:\e[0;37m %s\n", p->relacao);
            i++;
        };
    };

/* TAD de lista */

/* Funções de manipulação do menu*/

    // Imprimir na tela todas as opções do menu
    void imprimir_menu () {
        printf("\n");
        printf("----------------------\n");
        printf("\n");
        printf("1 - Visualizar a agenda\n");
        printf("2 - Inserir na agenda\n");
        printf("3 - Remover posição na agenda\n");
        printf("4 - Sair do menu\n");
        printf("\n");
        printf("----------------------");
        printf("\n");
    }

    void menu_inserir (lista *l) {

        char numero[100];
        char nome[100];
        char relacao[100];
        int escolha = -1;

        printf("\n----------------------\n\n");
        printf("\e[1;35mADICIONAR CONTATO NA AGENDA\n");
        printf("\n\e[0;37m"); //Resetar a cor

        printf("Coloque o nome do contato:\n");

        scanf(" %100[^\n]", nome);

        printf("\n");

        printf("Coloque o numero do contato:\n");
        printf("\t\e[0;36mExemplo: (00) 12345-6789\n");
        printf("\e[0;37m"); //Resetar a cor
        scanf(" %25[^\n]", numero);
        printf("\n");

        printf("Coloque a sua relacao com o contato:\n");
        scanf(" %100[^\n]", relacao);
        printf("\n");

        while ((escolha != 0) && (escolha != 1)) {
            printf("Esse contato está correto?\n");
            printf("Nome: %s\n", nome);
            printf("Numero: %s\n", numero);
            printf("Relação: %s\n\n", relacao);
            printf("1 para sim, 0 para não.\t");
            scanf("%d", &escolha);
        };

        if (escolha)
            inserir_lista (l, nome, numero, relacao);
    }

/* Funções de manipulação do menu*/

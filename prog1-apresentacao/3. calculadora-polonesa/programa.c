#include "biblioteca.h"

int main (int argc, char *argv[]) {

	if (argc != 2) {
		// Se o tamanho da entrada for diferente do esperado
		printf("\nO formato deve ser ./programa \"(a*(b+c))\"\n");
		printf("Sendo todos a, b, c... Todos inteiros de 0 a 9\n");
		return 1;
	}

    float resultado;
	int i;
	int continuar = 1;

	struct pilha calculadora;
	struct pilha sinais;

	calculadora.topo = 0;
	sinais.topo = 0;

	char expressao[100];
	strcpy(expressao, argv[1]);

    // Verifica se a entrada esta correta
	if (argc == 2) {
		printf("\nA sua expressao Infixa eh: %s\n", expressao);

        // Fazer a transformara de infixa para sufixa
		while (continuar) {

			if ((eh_vazio (sinais) == 0) &&
				((expressao[i] == '+') || (expressao[i] == '-') || (expressao[i] == '*') || (expressao[i] == '/')) &&
				((ver_topo(sinais) == '+') || (ver_topo(sinais) == '-') || (ver_topo(sinais) == '*') || (ver_topo(sinais) == '/')))
			{
				empilhar(&calculadora, ver_topo(sinais));
				desimpilhar(&sinais);
			};

			switch (expressao[i]) {

				case '(':
					empilhar(&sinais, expressao[i]);
					break;

				case ')':
					empilhar(&calculadora, ver_topo(sinais));
					desimpilhar(&sinais);
					desimpilhar(&sinais);

					if (eh_vazio(sinais)) {
						continuar = 0;
					};

					break;

				case '+':
					empilhar(&sinais, expressao[i]);
					break;

				case '-':
					empilhar(&sinais, expressao[i]);
					break;

				case '*':
					empilhar(&sinais, expressao[i]);
					break;

				case '/':
					empilhar(&sinais, expressao[i]);
					break;
				
				default:
					empilhar(&calculadora, expressao[i]);
					break;
			};

			i++;
		};

		printf("A sua expressao Posfixa eh: %s\n", calculadora.pilha);
		printf("\n");

		//Fazer as contas da calculadora
		int primeiro = 0;
		int divisaoContraria = 0;

        // Percorre todo o vetor para fazer as contas
		for (int j=0; j<=calculadora.topo; j++) {

            // Se achar um operador, vai fazer as contas
			if ((calculadora.pilha[j] == '+') || (calculadora.pilha[j] == '-') || (calculadora.pilha[j] == '*') || (calculadora.pilha[j] == '/')) {

				for (int m=(j-1); m>=0; m--) {

					if (eh_numero(calculadora.pilha[m])) {

						if (calculadora.pilha[j] == '*') {
								resultado *= ((calculadora.pilha[m] - '0'));
						};

						if (calculadora.pilha[j] == '-') {
								resultado -= ((calculadora.pilha[m] - '0'));
						};

						if (calculadora.pilha[j] == '+') {
								resultado += ((calculadora.pilha[m] - '0'));
						};

						if (calculadora.pilha[j] == '/') {

                                // Tratamento de erro em caso de divisao impossivel
								if (calculadora.pilha[m] == '0') {
									printf("\033[0;31mDIVISAO POR ZERO\n");
									return 1;
								};

                                // Tratamento de caso, se acontecer da divisao ser a primeira acao da Calculadora
								if (divisaoContraria) {
									resultado = (calculadora.pilha[m] - '0') / resultado;
									divisaoContraria = 0;
								} else {
									resultado /= (calculadora.pilha[m] - '0');
								};
						};

						if (primeiro) {

							calculadora.pilha[j] = 'n';
							calculadora.pilha[m] = 'n';
							m = -1;

						} else {
							resultado = calculadora.pilha[m] - '0';
							if (calculadora.pilha[m+1] == '/') 
								divisaoContraria = 1;
							primeiro = 1;
							calculadora.pilha[m] = 'n';
						};
					};
				};
			};
		};

		printf("Resultado: %f\n", resultado);


	};

	return 0;
}
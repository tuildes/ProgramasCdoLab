#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct pilha {
	int topo;
	char pilha[100];
};

void empilhar(struct pilha *p, char novo) {

	(*p).pilha[(*p).topo] = novo;
	(*p).topo++;

};

void desimpilhar(struct pilha *p) {

	(*p).topo--;
	(*p).pilha[(*p).topo] = 0;

};

// Retorna 1 se eh vazio, ou 0 se nao
int eh_vazio (struct pilha p) {

	if (p.topo == 0) {
		return 1;
	};

	return 0;
};

int eh_cheio (struct pilha p) {

	if (p.topo == 100) {
		return 1;
	};

	return 0;
};

char ver_topo (struct pilha p) {
	 return p.pilha[p.topo-1];
};

int eh_numero (char c) {
	switch (c)
	{
		case '0':
			return 1;
			break;

		case '1':
			return 1;
			break;

		case '2':
			return 1;
			break;

		case '3':
			return 1;
			break;

		case '4':
			return 1;
			break;

		case '5':
			return 1;
			break;

		case '6':
			return 1;
			break;

		case '7':
			return 1;
			break;

		case '8':
			return 1;
			break;

		case '9':
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
}

int main (int argc, char *argv[]) {

	int resultado, i;
	int continuar = 1;

	struct pilha calculadora;
	struct pilha sinais;

	calculadora.topo = 0;
	sinais.topo = 0;

	char expressao[100];
	strcpy(expressao, argv[1]);

	if (argc == 2) {
		printf("\nA sua expressao Infixa eh: %s\n", expressao);

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

		for (int j=0; j<=calculadora.topo; j++) {

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
								resultado /= ((calculadora.pilha[m] - '0'));
						};

						if (primeiro) {
							// printf("%c", calculadora.pilha[j]);
							// printf("%c", calculadora.pilha[m]);

							calculadora.pilha[j] = 'n';
							calculadora.pilha[m] = 'n';
							m = -1;

						} else {
							resultado = calculadora.pilha[m] - '0';
							primeiro = 1;
							// printf("%c", calculadora.pilha[m]);
							calculadora.pilha[m] = 'n';
						};
					};
				};
			};
		};

		printf("\nResultado: %d\n", resultado);


	} else {
		printf("\nO formato deve ser ./calculadora \"(a*(b+c))\"\n");
		printf("Sendo todos a, b, c... Todos inteiros de 0 a 9\n");
	}

	return 0;
}

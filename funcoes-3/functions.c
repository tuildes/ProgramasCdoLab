#include <stdio.h>
#include <math.h>

//0 Funcao que verifica se eh positivo
int ehPositivo (int numero) {
	if (numero > 0) {
		return 1;
	} else {
	return 0;
	};
};

//1 Funcao que diz se eh nulo
int ehNulo (int numero) {
	if (numero == 0) {
		return 1;
	} else {
		return 0;
	};
};

//2 Funcao que diz o delt
int  delta (int a, int b, int c) {
	int temp = ((b*b) - (4*a*c));
	return temp;
};

//3 Aplicativo que calcula raizes a² + bx + c = 0
int main () {

	//Declara a,b,c
	int a, b, c;
	printf("Digite a :\t");
	scanf("%d", &a);
	printf("Digite b :\t");
	scanf("%d", &b);
	printf("Digite c :\t");
	scanf("%d", &c);

	//Verifica se eh do segundo grau a != 0
	if (!ehNulo(a)) {
		
		//verifica qual o tipo de raiz
		int deltaCalculado = delta(a,b,c);

		if (deltaCalculado >= 0) {
			float raiz1, raiz2;
			//raizes reais
			raiz1 = (-b + sqrt(deltaCalculado))/(2*a);
			raiz2 = (-b - sqrt(deltaCalculado))/(2*a);
			printf("As raizes sao: %f e %f\n", raiz1, raiz2);

		} else {
			//raizes irreais
			float real, irreal;
			real = (-b/(2*a));

			deltaCalculado *= (-1);
			irreal = (sqrt(deltaCalculado))/(2*a);

			printf("As raizes sao: %f + %fi e %f - %fi", real, irreal, real, irreal);

		};
		
	} else {
		printf("Nao eh do segundo grau\n");
	};

	printf("\n\n");
	
	return 0;
}

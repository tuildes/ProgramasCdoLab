#include <stdio.h>
#include <math.h>

/* Fazer Bhaskara simples */

int main() {
	int a, b, c;
	double resultadoUm, resultadoDois, delta;

	/*Fazer o scan de todas as variaveis*/
	scanf ("%d%d%d", &a, &b, &c);
	
	delta = (b*b) - (4*a*c);
	resultadoUm = (-b+sqrt(delta))/(2*a);
	resultadoDois = (-b-sqrt(delta))/(2*a);
	printf("O primeiro resultado de Bhaskara eh: %f\n", resultadoUm);
	printf("O segundo  resultado de Bhaskara eh: %f\n", resultadoDois);
	return 0;
}

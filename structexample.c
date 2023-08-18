#include <stdio.h>
#include <string.h>

//Para a struct ser global
struct data {

	int dia;
	int mes;
	int ano;
};

struct medicamento {

	char nome[50];
	struct data inicio;

};

int main () {

	struct data aniversario;
	struct medicamento rivotril;

	strcpy (rivotril.nome, "Rivotril");
	rivotril.inicio.dia = 8;

	aniversario.dia = 11;
	aniversario.mes = 9;
	aniversario.ano = 2005;

	printf("o dia eh %d/%d/%d\n", aniversario.dia, aniversario.mes, aniversario.ano);
	printf("o remedio eh %s, com dia inicial %d\n", rivotril.nome, rivotril.inicio.dia);

	return 0;
}

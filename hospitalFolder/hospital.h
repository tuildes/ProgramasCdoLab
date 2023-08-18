#include <stdio.h>
#include <string.h>

struct data {
	int dia;
	int mes;
	int ano;
};

struct paciente {
	char nome[50];
	int idade;
	float peso;
};

void imprimirMenu();
struct paciente cadastroPaciente (void);

#include "hospital.h"

void imprimirMenu () {
printf("\n\n\033[31mEscolha a opção dentro do Sistema\033[0m\n");
		printf("\t1 para Cadastrar um novo Paciente \n");
		printf("\t2 para Consultar um novo Paciente \n");
		printf("\t3 para Sair do sistema\n");
		printf("\nDigite a sua escolha:\t");
};

struct paciente cadastroPaciente (void)  {

	struct paciente usuario;

	printf("\nDigite o primeiro nome do paciente\t");
	scanf("%c", &usuario.nome);
	printf("\nDigite a idade do paciente\t");
	scanf("%d", &usuario.idade);
	printf("\nDigite o peso do paciente\t");
	scanf("%f", &usuario.peso);
	printf("\n\n");

	return usuario;
};

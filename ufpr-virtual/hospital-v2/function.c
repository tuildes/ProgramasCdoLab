#include "hospital.h"

// Funcao visual do menu
void imprimirMenu () {
printf("\n\n\033[31mEscolha a opção dentro do Sistema\033[0m\n");
		printf("\t1 para Cadastrar um novo Paciente \n");
		printf("\t2 para Consultar um novo Paciente \n");
		printf("\t3 para Sair do sistema\n");
		printf("\nDigite a sua escolha:\t");
};

// Funcao que cria um novo paciente
struct paciente novoPaciente(void) {
	struct paciente usuario;

	printf("\nDigite o primeiro nome do paciente\t");
	scanf("%s", &usuario.nome);
	printf("\nDigite a idade do paciente\t");
	scanf("%d", &usuario.idade);
	printf("\nDigite o peso do paciente\t");
	scanf("%f", &usuario.peso);
	printf("\n");

	return usuario;
};

// Parte visual do novo paciente
void cadastroPaciente(int escolha, struct paciente usuario[]) {
	if ((escolha >= 0) && (escolha <= 9)) {
		usuario[escolha] = novoPaciente();

	} else {
		printf("\nErro de escolha do paciente!");
	};
};

// Funcao visual de imprimir o paciente
void imprimePaciente(int escolha, struct paciente usuario[]) {
	
	if ((escolha >= 0) && (escolha <= 9)) {
		printf("\n\nO nome do paciente eh %s", usuario[escolha].nome);
		printf("\nA idade do paciente eh %d", usuario[escolha].idade);
		printf("\nO peso do paciente eh %f", usuario[escolha].peso);
		printf("\n\n");

	} else {
		printf("\nEscolha de paciente invalida\n");
	};
};

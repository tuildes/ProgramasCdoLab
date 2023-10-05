#include "hospital.h"

int main () {
	
	//Define a escolha inicial do usuario
	int opcaoUsuario, escolhaPaciente;
	opcaoUsuario = 0;

	//Define o numero de usuarios, no caso 10
	struct paciente user[10];

	//Loop de menu ate escolher sair

	while (opcaoUsuario != 3) {
		
		imprimirMenu ();
		scanf("%d", &opcaoUsuario);

		//Fazer o cadastro do paciente
		if (opcaoUsuario == 1) {
			printf("\nEscolha qual paciente voce quer editar (0 a 9)\t");
			scanf("%d", &escolhaPaciente);

			cadastroPaciente(escolhaPaciente, user);
		};

		//Fazer a consulta dos pacientes
		if (opcaoUsuario == 2) {
			
			//Imprime a lista de Pacientes
			printf("\n A lista de usuarios eh:\n");
			for (int i=0; i<10; i++) {
				printf("\t%d : %s\n", i, user[i].nome);
			};

			//Escolha o paciente e imprime
			printf("Digite a sua escolha de paciente:\t");
			scanf("%d", &escolhaPaciente);
			
			imprimePaciente(escolhaPaciente, user);
		};

		
	};

	return 0;
}

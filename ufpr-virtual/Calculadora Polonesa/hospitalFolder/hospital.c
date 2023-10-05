#include "hospital.h"

int main () {

	//Definicao da escolha do usuario
	int opcaoUsuario, escolhaPaciente;
	opcaoUsuario = 0;

	//Declaracao das structs de paciente
	struct paciente user[10];

	while (opcaoUsuario != 3) {
		
		imprimirMenu();
        scanf("%d", &opcaoUsuario);

		if (opcaoUsuario == 1) {
			//Fazer o cadastro o paciente
			printf("\nEscolha qual paciente que voce quer editar (0 a 9)\t");
			scanf("%d", &escolhaPaciente);
			printf("\n");

			if ((escolhaPaciente >= 0) && (escolhaPaciente <= 9)) {
			user[escolhaPaciente] = cadastroPaciente();
			} else {
				printf("\nErro de escolha do paciente!");
			};
		}
		
		if (opcaoUsuario == 2) {

			printf("\n A lista de usuarios eh:\n");
			for (int i=0; i<10; i++) {
				printf("\t%d : %s\n", i, user[i].nome);
			};
			printf("Digite a sua escolha de paciente:\t");
			scanf("%d", &escolhaPaciente);

			if ((escolhaPaciente >= 0)&&(escolhaPaciente <=9)) {
			printf("\n\nO nome do paciente eh %s", user[escolhaPaciente].nome);
			printf("\nA idade do paciente eh %d", user[escolhaPaciente].idade);
			printf("\nO peso do paciente eh %f\n", user[escolhaPaciente].peso);
			};
		};

	};


	return 0;
}

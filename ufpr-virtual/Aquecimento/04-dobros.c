#include <stdio.h>

int main () {
	
	int atual, anterior, quantidade, soma;

	printf("Digite a sua sequencia de numeros\n");
	scanf("%d", &atual);
	anterior=0;
	soma=0;
	quantidade=1;

	while ((atual*2 != anterior)&&(atual != (anterior*2))) 
	{
		soma+=atual;
		anterior=atual;
		scanf("%d", &atual);
		quantidade+=1;
	};

	printf("A solicitação foi abortada, a quantidade de numeros lidos foi %d, por conta do anterior %d e o atual %d\n", quantidade, anterior, atual);

	return 0;
}

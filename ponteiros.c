#include <stdio.h>

void troca (int *a, int *b) {

	int temp = *a;
	*a = *b;
	*b = temp;

	return;
}

int main () {
	
	int a,b;
	//declarar um ponteiro
	int *pointer;

	//Mudar o valor do endereço de pointer
	pointer = &a;
	
	scanf("%d%d", &a, &b);
	printf("A é %d e B é %d, com ponteiro A %x, B %x, e P %x\n", a, b, &a, &b, &pointer);

	troca(&a,&b);

	printf("A é %d, B é %d\n", a, b);

	return 0;
}

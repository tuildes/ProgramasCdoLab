#include <stdio.h>

void somar_em_A (int *a, int *b) {

	*a+=*b;
}

int main () {

	int a, b;

	scanf("%d%d", &a, &b);

	somar_em_A(&a, &b);

	printf("a soma eh %d\n", a);

	return 0;
}

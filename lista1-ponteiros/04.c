#include <stdio.h>

void troca (int *a, int *b) {
	
	int temp = *b;
	*b = *a;
	*a = temp;

}

int main () {

	int a, b;

	a=5;
	b=10;

	printf("a: %d, b: %d\n", a, b);

	troca(&a,&b);

	printf("a: %d,b: %d\n", a, b);

	return 0;
}

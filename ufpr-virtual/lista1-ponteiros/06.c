#include <stdio.h>

void dobrar (int *n) {

	*n *= 2;

}

int main () {
	
	int a,b;

	scanf("%d%d", &a, &b);

	dobrar(&a);
	dobrar(&b);

	printf("a: %d, b: %d\n", a, b);

	return 0;
}

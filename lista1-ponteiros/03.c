#include <stdio.h>

int main () {
	
	int a,b;

	scanf("%d%d", &a, &b);

	if (&a > &b) {
		printf("a: %d\n", a);
	} else {
		printf("b: %d\n", b);
	}

	return 0;
}

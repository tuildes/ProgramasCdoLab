#include <stdio.h>

void maior (int *a, int *b) {

	if (*a < *b) {
		int temp = *b;
		*b = *a;
		*a = temp;
	};
}

int main () {

	int a, b;

	scanf("%d%d", &a, &b);

	maior (&a, &b);

	printf("a: %d, b: %d\n", a, b);

	return 0;
}

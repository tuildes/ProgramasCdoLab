#include <stdio.h>

int main () {

	int a,b;

	if (&a > &b) {
		printf("o maior eh A: %d\n", &a);
	} else {
		printf("o maior eh B: %d\n", &b);
	}

	return 0;
}

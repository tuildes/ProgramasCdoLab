#include <stdio.h>

int main () {

	int a, *d;
	float b, *e;
	char c, *f;

	d = &a;
	e = &b;
	f = &c;

	a = 0;
	b = 0;
	c = 0;

	printf("a:%d, b:%f, c:%c\n", a, b, c);

	*d = 10;
	*e = 20;
	*f = 77;

	printf("a:%d, b:%f, c:%c\n", a, b, c);

	return 0;
}

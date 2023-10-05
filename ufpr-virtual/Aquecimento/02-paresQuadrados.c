#include <stdio.h>

int main () {

	int atual, anterior, ehQuadrados;
	ehQuadrados = 1;

	scanf("%d", &anterior);

	while (anterior != 0) {

		scanf("%d", &atual);

		if ((anterior*anterior) != atual) {
			ehQuadrados = 0;
		};

		scanf("%d", &anterior);
	};

	printf("%d\n", ehQuadrados);
};

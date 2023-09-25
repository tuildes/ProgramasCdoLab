#include <stdio.h>

void move (int n, int p1, int p2){
    printf ("moveu disco %d do pino %d para o pino %d\n", n, p1, p2);
}

/* 
    Move da pilha 1 para pilha 2 usando aux.
    Retorna o numero de movimentos feitos.
    n eh o numero de discos.
*/
int hanoi (int n, int p1, int p2, int aux){
    
	int cont;

    // Caso base (n=1) colocar o menor na ultima pilha
	
	if (n == 1) {
		move (n, p1, p2);
		return 1;
	};

	// Recursao e manutencao
	
	cont = hanoi (n-1, p1, p2 ,aux);  
	
	if (n % 2 == 0) {
		move (n, p1, aux);
	} else {
		move (n, p1, p2);
	};

	cont += hanoi (n-1, p1, p2, aux);

	return cont + 2;
}

int main() {
    int cont, n;

    printf ("Insira a quantidade da pilha (1 eh o maior)\t");
    scanf ("%d",&n);

    cont = hanoi (n, 1, 3, 2);
    printf ("\nTerminou fazendo %d movimentos\n",cont);

    return 0;
}

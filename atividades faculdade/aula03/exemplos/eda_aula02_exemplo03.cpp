#include <stdio.h>

void troca(int *x, int *y) {
	int aux = *x;
	*x = *y;
	*y = aux; 
}

int main (){
	int a = 10, b = 20;
	troca(&a, &b); 
	printf("Os valores sao: %d e %d\n", a, b); 
	return 0;
}



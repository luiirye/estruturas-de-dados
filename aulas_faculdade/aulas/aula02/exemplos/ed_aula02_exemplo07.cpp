#include <stdio.h>
// Define que o par�metro � uma refer�ncia � outra vari�vel
void zera(float *a){
	// utiliza o operador de refer�ncia para alterar o conte�do da vari�vel
    *a = 0; 
}

int main(){
	float f;
    f = 20.7;
    zera(&f);  // Passa o endere�o da vari�vel f para a fun��o
    printf("Valor final: %.2f", f);
}



#include <stdio.h>
#include <locale.h>
#include <conio.h>
void esperaZero(){
	char tecla;
	do {
		fflush(stdin);
		tecla = getch();
		if (tecla != '0') {
			printf("Nao � zero\n");
		}
	} while (tecla != '0'); 
}
int main(){
	setlocale(LC_ALL,"");
	esperaZero(); // Chamada da fun��o definida antes
	// ...........
	esperaZero(); // Chamada da fun��o definida antes
	return 0;
}




#include <stdio.h>
#include <locale.h>

void soma(float a, int b) // par�metros separados por v�rgulas
{
	float result; // declara��o de vari�veis � igual a fun��o main
	result = a+b;
	printf("A soma de %.2f com %d � %.2f", a, b, result); 
}

int main() {
	setlocale(LC_ALL,"");
	int a = 10;
	float b = 12.3;
	soma(b,a); // Chamada da fun��o SOMA(12.3,10)
	return 0;
}



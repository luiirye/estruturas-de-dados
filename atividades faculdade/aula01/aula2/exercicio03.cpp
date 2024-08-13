#include <stdio.h>
#include <stdlib.h>

/*
Fa�a um programa que possua uma fun��o que
receba os valores a, b e c passados por valor, receba
tamb�m dois valores x1 e x2 passados por refer�ncia.
Em seguida, calcule e retorne as duas ra�zes da
equa��o do segundo grau nas vari�veis x1 e x2.
*/

float raizes(float a, float b, float c, float &x1, float &x2);

float raizes(float a, float b, float c, float &x1, float &x2)
{
	float delta = delta = (b*b) - 4 * a * c;
	
	if(delta == 0 || delta < 0)
	{
		printf("nao tem como calcular");
	}
	
	if(delta > 0 && delta != 0)
	{
		x1 =  (-b + sqrt(delta)) / 2 * a;	
		x2 =  (-b - sqrt(delta)) / 2 * a; 	
	}

	return delta;
}


int main ()
{
	printf("Calculo de raizes.\n");
	printf("Insira valor de a:\n");
	scanf("%f", &a);
	printf("Insira valor de b:\n");
	scanf("%f", &b);
	printf("Insira valor de c:\n");
	scanf("%f", &c);

	printf("valor das raizes: %f", raizes(a, b, c));
	
	
	return 0;
}

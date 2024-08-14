#include <stdio.h>
#include <stdlib.h>

/*
escreva uma fun��o em C/C++ que mostre na tela a
tabuada deste n�mero digitado e retorne ao
programa principal o valor da somat�ria das parcelas
da tabuada.
*/

int tabuada(int);

int tabuada(int a)
{
	
	int produto;
	
	for(int i = 1; i <= 10; i++)
	{
		produto = a * i;
		printf("%d X %d = %d\n", a, i, produto);
	}
	
	return produto;
}

int main()
{
	int a;
	printf("Tabuada.\n");
	printf("Insira um numero inteiro qualquer:\n");
	scanf("%d", &a);
	tabuada(a);

	return 0;
}

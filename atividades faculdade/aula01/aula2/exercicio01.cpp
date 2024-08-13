#include <stdio.h>
#include <stdlib.h>


/*
escreva uma função em C/C++ que mostre na tela a
tabuada deste número digitado e retorne ao
programa principal o valor da somatória das parcelas
da tabuada.
*/


int tabuada(int);

int tabuada(int a)
{
	
	int produto;
	
	for(int i = 1; i <= 10; i++)
	{
		produto = a * i;
		printf("%d * %d = %d\n", a, i, produto);
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

#include <stdio.h>
#include <stdlib.h>

/*
O fatorial de um número inteiro positivo n é definido como sendo o produto dos
inteiros de 1 a n. O fatorial de zero é definido como 1. Faça um programa que
contenha uma função que receba um inteiro como parâmetro e retorne seu fatorial.
*/

int fatorial(int x);

int fatorial(int x)
{
    int resultado;
    
    for (int i = 1; i <= x; i++)
    {
        resultado = resultado * i;
    }
    
    return resultado;

}

int main()
{
    int a;

    printf("Insira um numero inteiro:\n");
    scanf("%d", &a);

    printf("fatorial: %d\n",fatorial(a));

    
    return 0;
}
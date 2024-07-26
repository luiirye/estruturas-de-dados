/*Exercício 1: Função de Calculadora

Crie uma função adiciona_numeros que recebe dois parâmetros int, a e b, e retorna sua soma.*/

#include <stdio.h>
#include <stdlib.h>

int adiciona_numeros(int, int);

int adiciona_numeros(int a, int b)
{
    return a + b;
}

int main()
{
    int x, y;
    printf("Digite dois numeros\n");
    scanf("%d", &x);
    scanf("%d", &y);    
    int soma =adiciona_numeros(x,y);
    printf("soma: %d", soma);
    
    return 0;
}
/*Exercicio 05

Crie um programa em C que leia dois números inteiros e uma função que receba esses valores e retorne apenas o maior deles.

*/

#include <stdio.h>
#include <stdlib.h>

int funcao_maior(int a, int b)
{
    if(a > b)
    {
        return a;
    }

    else
    {
        return b;
    }
}

int main()
{
    int num1, num2;

    int jett = funcao_maior(num1, num2);

    printf("Digite dois numeros inteiros.\n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    printf("numeros: %d e %d\n", num1, num2);
    printf("%d eh maior\n", jett);

    system("pause");
    return 0;
}
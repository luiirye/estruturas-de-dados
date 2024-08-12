#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia dois números inteiros, positivos, e determine o produto
deles, utilizando o seguinte método de multiplicação:

> Dividir, sucessivamente, o primeiro número por 2, até que se obtenha 1 como
quociente;

> Paralelamente, dobrar, sucessivamente, o segundo número;

> Somar os números da segunda coluna que tenham um número ímpar na
primeira coluna. O total obtido é o produto procurado.

*/

int metodo_multiplicacao();

int metodo_multiplicacao(int x, int y)
{
    int resultado;
    while (x != 0)
    {
        if(x % 2 != 0)
        {
            resultado = resultado + y;
        }
        
        x = x / 2;
        y = y * 2;

    }
    return resultado;
}


int main()
{
    int a, b;

    printf("digite dois numeros inteiros:\n");
    scanf("%d, %d", &a, &b);
    printf("numeros digitados: %d %d\n", a, b);

    int resultado = metodo_multiplicacao(a, b);
    printf("%d\n", resultado);

    return 0;
}
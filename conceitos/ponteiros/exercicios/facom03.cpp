/*
Escreva um programa que contenha duas variaveis inteiras. Leia essas variaveis do 
teclado. Em seguida, compare seus enderec¸os e exiba o conteudo do maior endereco
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("endereco de a = %p\nendereco de b = %p\n", &a, &b);

    if (&a > &b)
    {
        printf("conteudo do maior endereco = %d\n", a);
    }
    
    else
    {
        printf("conteudo do maior endereco = %d\n", b);
    }

    return 0;
}
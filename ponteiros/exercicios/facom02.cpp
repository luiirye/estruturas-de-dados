#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que contenha duas variaveis inteiras. Compare seus enderec¸os e
exiba o maior endereco
*/
int main ()
{
    int x, y;
    //int imprime;

    printf("Digite dois numeros inteiros.\n");
    scanf("%d %d", &x, &y);
    printf("x = %d y = %d\n", x, y);
    printf("Endereco de x = %p\nEndereco de y = %p\n", &x, &y);

    if (&x > &y)
    {
        printf("endereco maior eh = %p\n", &x);
        //return &a;
    }
    
    else
    {
        printf("endereco maior eh = %p\n", &y);
        //return &b;
    }
    //printf("endereco maior eh = %d", imprime);
    
    return 0;
}


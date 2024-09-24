/*Variáveis e memória*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    int b, c;

    printf("==================================\n");
    printf("Valor de a: %d\n", a);
    printf("Valor de b: %d\n", b);
    printf("Valor de c: %d\n", c);
    printf("==================================\n");
    printf("Endereco de a: %p\n", &a);
    printf("Endereco de b: %p\n", &b);
    printf("Endereco de c: %p\n", &c);


    b = 20;
    c = a + b;

    printf("==================================\n");
    printf("Valor de a: %d\n", a);
    printf("Valor de b: %d\n", b);
    printf("Valor de c: %d\n", c);
    printf("==================================\n");
    printf("Endereco de a: %p\n", &a);
    printf("Endereco de b: %p\n", &b);
    printf("Endereco de c: %p\n", &c);
    
    
    return 0;
}

//No meu compilador, os endereços resultaram em 28, 24, e 20. Alocação de memória aconteceu de forma decrescente.
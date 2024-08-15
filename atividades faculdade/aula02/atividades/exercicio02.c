/*
Faça um programa que possua uma função que
receba dois números a e b, em seguida, faça a troca
destes dois números. Dica: a e b devem ser passados
por referência e impressos fora da função.
*/

#include <stdio.h>
#include <stdlib.h>

int troca_variavel(int, int);

int troca_variavel(int a, int b)
{
    int tempo;
    tempo = a;
    a = b;
    b = tempo;

    printf("Valores trocados\n");
    printf("Valor de a:%d\n", a);
    printf("Valor de b:%d\n", b);

    return tempo;
}

int main()
{
    int x, y;
    //int troca;
    printf("insira dois numeros:\n");
    scanf("%d %d", &x, &y);
    printf("Valores de:\n");
    printf("a:%d\n", x);
    printf("b:%d\n", y);
    
    troca_variavel(x, y);
    
    return 0;
}
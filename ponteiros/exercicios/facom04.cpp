/*
Faca um programa que leia 2 valores inteiros e chame uma funcao que receba estas
2 variaveis e troque o seu conteudo, ou seja, esta funcao e chamada passando duas
variaveis A e B por exemplo e, apos a execucao da funcao, A contera o valor de B e B 
tera o valor de A.
*/

#include <stdio.h>
#include <stdlib.h>

void troca(int, int);

int main()
{
    int x, y;
    printf("informe dois numeros inteiros:\n");
    scanf("%d %d", x, y);

    printf("x = %d y = %d\n", x, y);
    troca(x, y);
    printf("troca de conteudos:\n");
    printf("x = %d y = %d\n", x, y);
    return 0;
}

void troca(int &a, int &b)
{
    int aux = a;
    a = b;
    b = aux;
}

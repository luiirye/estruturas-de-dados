/*
Elaborar um programa que leia dois valores inteiros (A e B). 
Em seguida fac¸a uma funcao que retorne a soma do dobro dos dois numeros lidos. 
A funcao devera armazenar o dobro de A na propria variavel A e o dobro de B na propria variavel B.
*/

#include <stdio.h>
#include <stdlib.h>

int retorna_soma(int, int);

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);    
    return 0;
    int goat = retorna_soma(A, B);
    printf("soma = %d", goat);
}

int retorna_soma(int a, int b)
{
    int da, db;
    da = a * a;
    db = b * b;


    return da + da;
}
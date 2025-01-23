/*
Faça um programa que leia três valores inteiros e chame uma função que receba estes três números inteiros
de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variável , o segundo menor valor na
segunda variável, o maior valor na terceira variável.
A função deve retornar o valor 1 se os três valores forem iguais e 0 e se existirem valores diferentes.
Exibir valores ordenados na tela. 
*/

#include <stdio.h>

int ordenado(int*, int*, int*);
int main(){

    int x, y, z;
    //int teste;
    printf("Digite tres numeros inteiros:\n");
    printf("Valor de X:\n");
    scanf("%d", &x);
    printf("Valor de Y:\n");
    scanf("%d", &y);
    printf("Valor de Z:\n");
    scanf("%d", &z);
    
    ordenado(&x, &y, &z);
    printf("valores em ordem:\n");
    printf("%d\n%d\n%d\n", x, y, z);

    return(0);
}

int ordenado(int *a, int *b, int *c){
        
        int aux, aux2;
        
        if (*a > *b && *a > *c){
            aux = *a;
            
        }

        if (*b < *a && *b < *c) {
            aux = *b;
            aux2 = *a;
            *a = aux;
            *b = aux2;
        }

        if(*c < *a && *c < *b){
            aux = *c;
            aux2 = *a;
            *a = aux;
            *c = aux2;    
        }
}
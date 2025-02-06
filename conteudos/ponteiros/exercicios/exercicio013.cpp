/*
Faça um programa que leia três valores inteiros e chame uma função que receba estes três números inteiros
de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variável , o segundo menor valor na
segunda variável, o maior valor na terceira variável.
A função deve retornar o valor 1 se os três valores forem iguais e 0 e se existirem valores diferentes.
Exibir valores ordenados na tela. 
*/

#include <stdio.h>
#include <stdlib.h>

int ordenado(int*, int*, int*);
int main(){

    int A, B, C;
    //int teste;
    printf("Digite tres numeros inteiros:\n");
    printf("Valor de A:\n");
    scanf("%d", &A);
    printf("Valor de B:\n");
    scanf("%d", &B);
    printf("Valor de C:\n");
    scanf("%d", &C);
    
    ordenado(&A, &B, &C);

    if(ordenado(&A, &B, &C) == 1){
        printf("Os valores sao iguais.\n");
    }
    else{
        printf("Valores ordenados:\n");
        printf("A = %d\nB = %d\nC = %d\n", A, B, C);
    }
    
    return(0);
}

int ordenado(int *a, int *b, int *c){
        
        int aux;
        //correto
        if (*a == *b && *a == *c){
            return (1);
        }

        if(*a != *b && *b != *c){
            //possibilidade 1 2 3
            if(*a < *b && *b < *c){
                return(0);
            }
            //possibilidade 3 2 1
            if(*a > *b && *b > *c){
                aux = *a;
                *a = *c;
                *c = aux;
            }
            //possibilidade 2 3 1
            if(*a < *b && *a > *c){
                aux = *b;
                *b = *a;
                *a = *c;
                *c = aux; 
            }
            //possibilidade 2 1 3
            if(*a > *b && *a < *c){
                aux = *a;
                *a = *b;
                *b = aux;
                *c = *c; 
            }
            //possibilidade 3 1 2
            if(*a > *c && *b < *c){
                aux = *a;
                *a = *b;
                *b = *c;
                *c = aux;
            }
        
            return(0);
        }    
}
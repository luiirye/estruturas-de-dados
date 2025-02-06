/*
Faça um programa que leia dois valores inteiros e chame uma função que receba estes dois valores de entrada
e retorne o maior valor na primeira variável e o menor valor na segunda variável.
Escreva o conteúdo das duas variáveis na tela.
*/

#include <stdio.h>

int maior_troca(int *, int *);

int main(){
    
    int a;
    int b;

    printf("Digite o valor dos inteiros:\n");
    printf("Valor de A:\n");
    scanf("%d", &a);
    printf("Valor de B:\n");
    scanf("%d", &b);
    printf("Valor dos inteiros digitados:\nA = %d\nB = %d\n", a, b);
    
    printf("Troca de valores com base no maior.\n");
    maior_troca(&a, &b);
    printf("Valores apos troca.\n");
    printf("Valor de A = %d\n", a);
    printf("Valor de B = %d\n", b);
    
    return(0);
}

int maior_troca(int *a, int *b){
    
    int aux;
    
    //Se o valor de A for menor que B, será realizado
    //uma troca de valores, fazendo com que A troque de valor com B.
    if(*a < *b){
        aux = *a;
        *a = *b;
        *b = aux;
    }
}


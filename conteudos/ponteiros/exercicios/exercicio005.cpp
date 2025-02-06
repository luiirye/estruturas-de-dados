/*
Faça um programa que leia 2 valores inteiros e chame uma função que receba estas duas variáveis e troque seu
conteúdo, ou seja, esta função é chamada passando duas variáveis A e B por exemplo e, após a execução
da função, A conterá o valor de B e B terá o valor de A.
*/

#include <stdio.h>

//Protótipo da função troca
int troca(int*, int*);

int main(){
    
    //Variáveis inteiras
    int inteiro_A;
    int inteiro_B;

    // Leitura dos inteiros fornecidos pelo teclado
    printf("Informe dois valores inteiros:\n");
    printf("Valor do primeiro inteiro:\n");
    scanf("%d", &inteiro_A);
    printf("Valor do segundo inteiro:\n");
    scanf("%d", &inteiro_B);
    printf("Valores informados:\nA = %d\nB = %d\n", inteiro_A, inteiro_B);
    
    printf("Troca de inteiro:\n");
    troca(&inteiro_A, &inteiro_B);
    printf("A = %d\n", inteiro_A);
    printf("B = %d\n", inteiro_B);

    return(0);
}

//Função de troca de valores
int troca(int *a, int *b){
    
    //ponteiro para auxiliar a troca
    int auxiliar;

    //Algoritmo de troca
    auxiliar = *a;
    *a = *b;
    *b = auxiliar;
}
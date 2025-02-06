/*
Crie um programa que contenha a função que permita passar por parâmetro dois números inteiros inteiros A e B.
A função deverá calcular a soma entre estes dois números e armazenar o resultado na variável A.
Esta função NÃO deverá possuir retorno, mas deverá modificar o valor do primeiro parâmetro.
Imprima os valores de A e B na função principal.
*/

#include <stdio.h>

int soma(int*, int*);

int main (){
    
    int A, B;

    printf("Digite dois valores inteiros para A e B:\n");
    printf("Digite o valor de A:\n");
    scanf("%d", &A);
    printf("Digite o valor de B:\n");
    scanf("%d", &B);
    printf("Valores de A e B.\nA = %d\nB = %d\n", A, B);
    soma(&A, &B);
    printf("Valores de A e B apos a soma.\nA = %d\nB = %d\n", A, B);
    
    return(0);
}

int soma(int *a, int *b){
    int soma;
    soma = *a + *b;
    *a = soma;
}
/*
Elaborar um programa que leia dois valores inteiros (A e B).
Em seguida, faça uma função que retorne a soma do dobro dos dois números lidos.
A função deverá armazenar o dobro de A na própria variável A e o dobro de B na própria variável B.
*/

#include <stdio.h>

int dobro_maior(int*, int*, int*);

int main(){
    int A;
    int B;
    int resultado;
    
    printf("Digite dois valores inteiros:\n");
    printf("Valor de A:\n");
    scanf("%d", &A);
    printf("valor de B:\n");
    scanf("%d", &B);
    printf("Valores digitados:\nA = %d\nB = %d\n", A, B);
    
    printf("Dobro dos valores de A e B.\n");
    dobro_maior(&A, &B, &resultado);
    printf("Dobro de A: %d\n", A);
    printf("Dobro de B: %d\n", B);
    printf("Soma do dobro : %d\n", resultado);
}

int dobro_maior(int *a, int *b, int *soma){
    
    *a = (*a) * 2;
    *b = (*b) * 2;
    *soma = (*a) + (*b);
    return *soma;   
}
/*
Escreva um programa que contenha duas variaveis inteiras. 
Compare seus endereços exiba o maior endereço.
*/

#include <stdio.h>

int main(){

    /*Variáveis inteiras declaradas*/
    int inteiro1 = 20;
    int inteiro2 = 30;
    /*ponteiros de inteiros*/
    int *ponteiro1;
    int *ponteiro2;

    /*Ponteiros recebendo o endereço dos inteiros*/
    ponteiro1 = &inteiro1;
    ponteiro2 = &inteiro2;

    /*Imprimindo valor e endereço dos inteiros*/
    printf("valor do primeiro inteiro = %d\n", inteiro1);
    printf("valor do segundo inteiro = %d\n", inteiro2);
    printf("Endereco do primeiro inteiro = %p\n", &inteiro1);
    printf("Endereco do segundo inteiro = %p\n", &inteiro2);

    if (ponteiro1 > ponteiro2)
    {
        printf("o endereco do primeiro inteiro eh maior.\n");
        printf("endereco = %p\n", ponteiro1);
    }

    else{
        printf("o endereco do segundo inteiro eh maior.\n");
        printf("endereco = %p\n", ponteiro2);
    }
    
    return(0);
}
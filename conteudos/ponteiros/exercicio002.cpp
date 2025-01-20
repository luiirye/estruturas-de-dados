/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. 
Associe as variaveis aos ponteiros (use &). Modifique os valores de cada variavel usando os ponteiros. 
Imprima os valores das variáaveis antes e após a modificação.*/

#include <stdio.h>

int main(){
    /* Declarada variáveis*/
    int inteiro = 10;
    float real = 20.00;
    char caractere = 'A';

    /*Declarado ponteiros*/
    int *ponteiro_inteiro = &inteiro;
    float *ponteiro_real = &real;
    char *ponteiro_caractere = &caractere;

    printf("======ANTES DA TROCA======\n");
    printf("valor de inteiro a = %d\n", inteiro);
    printf("valor de real b = %.2f\n", real);
    printf("valor de char c = %c\n", caractere);

    /* Alterando o valor das variáveis usando endereços*/
    *ponteiro_inteiro = 100;
    *ponteiro_real = 999.99;
    *ponteiro_caractere = 'Z';

    printf("======DEPOIS DA TROCA======\n");
    printf("valor de inteiro a = %d\n", inteiro);
    printf("valor de real b = %.2f\n", real);
    printf("valor de char c = %c\n", caractere);

    return(0); //
}
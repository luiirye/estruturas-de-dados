/*
Cria um programa que contenha um array de 5 elementos inteiros.
Leia esse array do teclado e imprima o endereço das posições contendo valores PARES.
*/

#include <stdio.h>

int main(){
    int array[5];
    int *p = array;
    int i;

    for (i = 0; i < 5; i++){
        printf("digite um valor inteiro para a posicao [%d]:\n", (i + 1));
        scanf("%d", (p + i));
        printf("Valor %d armazenado na posicao [%d]\n\n", (*p), (i + 1));
    }
    return(0);
}
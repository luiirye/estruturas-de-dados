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
        } 
    printf("\n");
    // verifica os valores digitados e imprime apenas os valores pares e seus endereços.
    for (i = 0; i < 5; i++){
        if (*(p + i) % 2 == 0){
            printf("Endereco do valor %d na posicao [%d] = %p\n", *(p + i),(i+1), p + i);
        }
    }
    return(0);
}
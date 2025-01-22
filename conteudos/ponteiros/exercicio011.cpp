/*
Crie um programa que contenha um array de inteiros contendo 5 elementos.
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.
*/

#include <stdio.h>

int main(){
    int array[5]; // array de 5 inteiros
    int *p = array; // ponteiro recebe o conteúdo guardado nos arrays
    int i; // variável para os Laços for

    for (i = 0; i < 5; i++){
        //i inicia com 0, o laço se repetirá enquanto i for menor que 5, incrementando até chegar em 5.
        printf("Digite um numero inteiro para a posicao [%d]:\n", (i + 1));
        // (i + 1) para impressão das posições de 1 a 5, e não de 0 a 4.
        scanf("%d", (p + i));
        // guarda o valor no endereço correto dentro do array.
    }
    
    for (i = 0; i < 5; i++){
        printf("[%d]dobro de %d = %d\n",(i + 1), *(p + i) , (*(p + i)) * 2);
    }

    return (0);
}
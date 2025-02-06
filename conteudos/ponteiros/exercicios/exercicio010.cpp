/*
Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
Imprima o endereço de cada posição dessa matriz.
*/

#include <stdio.h>

int main(){
    float matriz[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    //[3][3] 3 colunas e 3 linhas
    //os números que estão em cada colchete, são as linhas em que cada endereço está
    int i, j;
    //
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("%p\n", &matriz[i][j]);
        }
    }

    putchar('\n');

    return(0);
}
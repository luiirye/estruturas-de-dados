/*
Crie um programa que contenha um array de float contendo 10 elementos.
Imprima o endereço de cada posição desse elemento.
*/

#include <stdio.h>

int main(){
    
    float array[10] = {0,1,2,3,4,5,6,7,8,9};
    // sequencia de floats em memória
    int i;
    
    // laço para percorrer o array e imprimir o endereço de cada elemento no array
    for (i = 0; i < 10; i++){
        //i é a variável que será incrementada para a repetição das impressões 
        //enquanto for menor que dez (elementos do array).
        printf("Endereco elemento %d = %p\tConteudo = %.1f\n", i, array + i, *(array + i));
    }
    // array + i = endereço de cada posição. 
    // *(array + i) = conteúdo das posições.
    return(0);
}
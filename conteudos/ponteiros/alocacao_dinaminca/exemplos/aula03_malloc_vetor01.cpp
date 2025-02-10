#include <stdio.h>
#include <stdlib.h>

// ALOCAÇÃO DINÂMICA PARA UM VETOR DE 10 POSIÇÕES

int main(){
    
    int *pvetor; // ponteiro para a primeira posição do vetor
    
    // numero de elementos do vetor
    int n = 10;

    // Aloca um espaço de memória em bytes do tamanho de 10 inteiros
    pvetor = (int*) malloc( n * sizeof(int));

    // imprime a posição de memória da posição 0;
    printf("Posicao na memoria do primeiro elemento: 0x%x\n", pvetor);

    // atribui um valor na posição 0 do vetor
    pvetor[0] = 56; // armazena na posição 0 o número 56
    
    // imprime o valor da posição 0
    printf("Valor do primeiro elemento: %d\n", pvetor[0]);

    // imprime a posição de memória da posição 1
    printf("Posicao de memoria do segundo elemento: 0x%x\n", &pvetor[1]);

    // atribui um valor para a posição 1 do vetor
    pvetor[1] = 100; // armazena na posição 1 o número 100 
    
    // imprime o valor da segunda posição
    printf("Valor do segundo elemento: %d\n", pvetor[1]);

    free(pvetor);   // libera a memória alocada
    
    return(0);
}
#include <stdio.h>
#include <stdlib.h>

int main(){
    
    // cria um ponteiro para inteiro
    // armazena o local de memória alocado
    int* numero;

    // aloca um espaço de memória 
    // converte a posição de memória em um tipo de ponteiro para inteiro
    // armazena no ponteiro a posição de memória 
    numero = (int*) malloc(sizeof(int));

    // imprime a posição de memória de número
    printf("Posicao de memoria: 0x%x\n", numero);

    // manipula o valor apontado por numero
    *numero = 56;

    // imprime o valor 
    printf("%d\n", *numero);

    // libera a memória alocada
    free(numero);

    system("PAUSE");
    return(0);
}
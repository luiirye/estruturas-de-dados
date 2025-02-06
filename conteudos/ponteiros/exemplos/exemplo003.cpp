#include <stdio.h>
#include <stdlib.h>

void modificaValor(int*);

int main(){
    int valor = 15; // variável do tipo inteira com valor 15
    printf("Valor = %d\n", valor); // imprime o valor da variável
    modificaValor(&valor); //passado o endereço da variável valor, e não o seu conteúdo 
    printf("Valor pos modificacao = %d\n", valor); // impressão do valor da variável
}

void modificaValor(int *p){
    *p = *p + 1; // soma 1 no valor apontado por p
}
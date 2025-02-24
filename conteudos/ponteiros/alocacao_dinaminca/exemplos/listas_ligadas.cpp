#include <stdio.h>
#include <stdlib.h>

/* Processos para criação de uma lista ligada */

/*
Criação ou definição da estrutura da lista (struct)
*/

/*
Inicialização da lista
*/

/*
Inserção com base em um endereço como referência
*/

/* 
Alocação de um endereço de nó para inserção da lista
*/

/* 
Remoção do nó com base em um endereço como referência
*/

/*
Deslocamento do nó removido da lista
*/

// Criação da estrutura da lista
struct Lista{
    int num;
    struct Lista* prox;
}
typedef struct Lista node; // estrutura passa a se chamar node para referência

// protótipos de funções
void inicia_lista(node*);

int main(){

    int *p;
    
    // Alocando memória dinâmicamente
    p = (int *) malloc (siozef(int));

    if(!p){
        printf("Erro de memoria insuficiente");
    }

    else{
        printf("Memoria alocada com sucesso");
    }
    
    return 0;
}


// Inicialização da lista

void inicia_lista(node* LISTA){
    LISTA -> prox = NULL;
} // Lista iniciada como vazia, tendo sem próximo apontando para NULL, indicando o "final"


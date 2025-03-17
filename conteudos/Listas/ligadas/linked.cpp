#include <stdio.h>
#include <stdlib.h>

// estrutura node 
typedef struct Lista {
    
    int num; // campo de informação do node
    struct Lista *proximo;

}node;

// Funções de listas ligadas

// Função para alocar um novo node
node *aloca(){
    node *aux = (node*) malloc (sizeof(node));
    return aux;
}

// Função para criar uma lista
node *criaLista(node *CABECA){
    
    node *novo = aloca(); // aloca um novo node dinâmicamente
   
    if(!novo){
        printf("Erro ao alocar espaço em memória\n");
    }

    else{
        CABECA = novo;
        CABECA -> proximo = NULL;
    }
}

node *insereNode(node *CABECA, int n){
    node *aux = aloca(); //alocado um ponteiro auxiliar;

    if(!criaLista){
        printf("A lista está vazia.\n");
    }

    else{
        CABECA -> proximo = aux -> proximo;
        aux -> proximo = CABECA;
    }
}
int main(){

    node *C;
    criaLista(C);
    return 0;
}


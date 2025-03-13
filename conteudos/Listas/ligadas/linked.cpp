#include <stdio.h>
#include <stdlib.h>

typedef struct Lista {
    
    int num;
    struct Lista *proximo;

}node;

node *aloca();
void iniciaLista(node);
node insereInicio(node*, int);
node insereMeio(node*, int);
node insereFim(node*, int);
node removeNode(int);
void imprimeLista(node);
int menu();

int main(){
    return 0;
}

node *aloca(){
    
    node *aux = (node*) malloc (sizeof(node));
    return aux;
    
}

void iniciaLista(node *CABECA){    
    
    CABECA -> proximo = NULL;

}


node insereInicio(node *CABECA, int v){
    
    node *novo = aloca();
    novo -> num = v;
    novo -> proximo = CABECA;
    return novo;

}

node insereFim(node *CABECA, int v){

    node *auxiliar = aloca();
    
    while(auxiliar -> proximo != NULL){
        
    }
}
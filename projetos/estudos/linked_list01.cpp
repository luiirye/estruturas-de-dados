#include <stdlib.h>
#include <stdio.h>

struct Lista{
    int valor;
    struct Lista* prox;
};
typedef struct Lista lista;

int main(){
    
    return 0;
}

lista* aloca(){
    lista* aux = (lista*)malloc(sizeof(lista));
    return aux;
}

int vazia(lista* l){
    if(l == NULL){
        return 1;
    }

    else{
        return 0;
    }
}

lista* insere(lista* l, int v){
    lista* novo;
    novo = aloca();

    if (novo = NULL){
        printf("erro ao alocar memoria dinamicamente.\n");
        exit(1);
    }
    
    else{
        novo -> valor = v;
        novo -> prox = l;
        return(novo);
    }
}

lista* remove(lista* l, int v){

    lista* aux = aloca();

    if (vazia(l)){
        printf("Nada a para remover, lista vazia");
        exit (1);
    }

    else{
        if(l -> valor == NULL){
            printf("Valor nao encontrado.\n");
            exit(1);
        }

        else{
            if(l -> valor == v){
                aux = l -> prox;
                free(aux);
            }
        }
    }
}

int* hash(int h, int k){
    int hash = h % k;
    return hash;
}
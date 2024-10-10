#include <stdio.h>
#include <stdlib.h>

struct Pilha{
    int num;
    struct Pilha *prox;
};
typedef struct Pilha pilha;

/*
• Criar uma pilha vazia
• Inserir um elemento no topo da pilha
• Remover um elemento do topo de pilha
• Consultar o topo da pilha
• Destruir a pilha
• Verificar se é cheia
• Verificar se é vazia
*/
pilha* cria_pilha();
void libera_pilha(pilha* );
int consulta_topo_pilha(pilha*, int);
pilha* push(pilha*, int);
pilha* pop(pilha*);


pilha aloca(pilha*){
    pilha *aux;
    aux = (pilha*) malloc(sizeof(pilha));
    return aux;
}

pilha push (pilha* p, int v){

}

int main(){
    
    printf("Hello World");
    return 0;
}


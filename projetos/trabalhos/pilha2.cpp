#include <stdio.h>
#include <stdlib.h>

struct Pilha
{
    int num;
    struct Pilha* prox;
    //struct Pilha* topo;
};typedef struct Pilha node;

node* aloca()
{
    node* aux;
    aux = (node*) malloc (sizeof(node));
    return aux;
}

node* inicia_pilha(node* pilha)
{
    pilha -> prox = NULL;
}

void pilha_eh_vazia(node* pilha)
{
    if (pilha -> prox == NULL)
    {
        printf("Pilha esta vazia.\n");
    }
}

node* push (node* pilha, int valor)
{
    node* aux = aloca();

    //verificar se a pilha esta vazia
    if (pilha -> prox == NULL)
    {
        inicia_pilha(pilha);
    }

    aux -> pilha;
    aux -> valor = num;
    pilha = aux;
    
}

int main()
{
    printf("vai tomar no cu nao aguento mais isso\n");
    
    return 0;
}
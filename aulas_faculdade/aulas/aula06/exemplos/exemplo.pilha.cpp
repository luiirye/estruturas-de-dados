#include <stdio.h>
#include <stdlib.h>

struct Pilha
{
    int num;
    struct Pilha *prox;

};
typedef struct Pilha node;

void inicia_pilha(node*);
int pilha_vazia(node*);
node* aloca();
void libera_pilha(node*);
node* push(node*);
node* pop(node*);

void inicia_pilha(node* pilha)
{
    pilha -> prox = NULL;
}

int pilha_vazia(node* pilha)
{
    if(pilha -> prox == NULL)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

node* aloca()
{
    node* novo = (node*) malloc (sizeof(node));
    if (!novo)
    {
        printf("sem memoria disponivel!\n");
        exit(1);
    }
    else
    {
        printf("Novo node:");
        scanf("%d", &novo -> num);
        novo -> prox = NULL;
        return novo;
    }
}

void libera_pilha(node* pilha)
{
    if (!pilha_vazia(pilha))
    {
        node* prox_node, *atual;

        atual = pilha -> prox;
        while (atual != NULL)
        {
            prox_node = atual -> prox;
            free(atual);
            atual = prox_node;
        }
    }
}

node* push(node* pilha)
{
    node* novo = aloca();
    if (pilha_vazia(pilha))
    {
        pilha -> prox = novo;
    }

    else
    {
        node *aux = pilha -> prox;
        while (aux -> prox != NULL)
        {
            aux = aux -> prox;
        }
        aux -> prox = novo;
    }
}
node* pop(node* pilha)
{
    if (pilha -> prox == NULL)
    {
        return NULL;
    }
    
    else
    {
        node* ultimo_node = pilha -> prox;
        node* penultimo = pilha;
        while (ultimo_node -> prox != NULL)
        {
            penultimo = ultimo_node;
            ultimo_node = ultimo_node -> prox;
        }
        penultimo -> prox = NULL;
        return ultimo_node;
    }
}

int main()
{
    return 0;
}
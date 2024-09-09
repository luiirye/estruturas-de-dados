#include <stdio.h>
#include <stdlib.h> // biblioteca para alocação dinâmica
#include <ctype.h>

/* Crianção de uma lista encadeada ordenada */

/*protótipos das funções*/
int lista_vazia(node*);
void insere_lista(node* , int);
int busca_lista(node*, int);
int remove_lIsta(node*);
void imprime_lista(node*);
void finaliza_lista(node*);
char menu();

struct lista
{
    int info;
    struct lista *proximo;

};typedef struct lista node; // Nó
// struct Node agora pode ser chamada usando "node"

node aloca()
{
    node *aux;
    aux = ((node) malloc(sizeof node));
    return *aux;
}
// Função para alocar dinâmicamente;

int lista_vazia(node* lista)
{
    if (lista == NULL)
    {
        return 1;
    }
	    
    else
    {
        return 0;
    }
}

void insere_lista(node* lista, int valor)
{
    node *novo;
    // novo nó;
    novo = aloca();
    // novo nó foi alocado; 
    novo -> info = valor;
    // valor do nó recebido;
    novo -> prox = lista;
    // novo nó aponta para proximo recebendo o topo da lista;
    return novo;
}

int busca_lista(node* lista, int valor)
{
    node *busca;
    for(busca = lista ; busca != NULL; busca -> prox)
    {
        
    }
}

int remove_lIsta(node* lista)
{
    lista *atual;
}

int main()
{
    return 0;
}
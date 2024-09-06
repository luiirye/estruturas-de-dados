#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* Crianção de uma lista encadeada ordenada */

/*protótipos das funções*/
int lista_vazia(node*);
int insere_lista(node* , int);
int remove_lIsta(node*);
int busca_lista(node*);
int imprime_lista(node*);
int finaliza_lista(node*);
char menu();

struct lista
{
    int info;
    struct lista *proximo;

};typedef struct lista node;
// struct lista agora pode ser chamada usando "node"

/*Função que aloca um node na memória*/
node *aloca()
{
    node* aux;
    aux = (node*)malloc(sizeof(node));
    return aux;
}

int lista_vazia(node* lista)
{
    if(lista == NULL)
    {
        printf("a lista esta vazia!!");
    }
}

int insere_lista(node* lista, int info)
{
    node* novo;
    novo = aloca();
    if(novo == NULL);
    {
        printf("erro na alocacao de memoria");
    } 
}



int main()
{
    return 0;
}
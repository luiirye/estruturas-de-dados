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

int insere_lista(node* lista, int numero)
{
    node* novo;
    if (novo == NULL)
    {
        printf("Erro de alocacao de memoria!\n");
        exit(1);
    }
    novo->info = numero;
    novo->proximo = lista;
    return (novo);
}


int main()
{
    return 0;
}
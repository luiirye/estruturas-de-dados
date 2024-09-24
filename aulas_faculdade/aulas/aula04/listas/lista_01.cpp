#include <stdio.h>
#include <stdlib.h> // biblioteca para alocação dinâmica
#include <ctype.h>

struct Lista
{
    int info;
    struct Lista *prox;
};typedef struct Lista node;

node *aloca(); // feito
node *insere(node *, int); //feito
//node *insere_Inicio(node *, int);
//node *insere_meio_fim(node *, int);
//node *insere_ordenado(node *, int);
node *remove_node(node *, int);
node *buscar_node(node *, int);
void lista_imprime(); // feito
void lista_eh_vazia();
node *finaliza_lista(node *);

/*Função para alocar um nó*/
node *aloca()
{
    //cria um ponteiro auxiliar do tipo struct lista, node;
    //aux aloca na memória
    //retorna aux;
    
    node *aux; 
    aux = (node*)malloc(sizeof(node));
    return aux;
}

/*Função para inserir um nó no início da lista*/
node *insere(node *lista, int valor)
{
    //criar um novo node
    //novo_node alocado na memória, usando a função aloca
    //novo_node aponta info e recebe o valor informado
    //novo_node aponta para o proximo, recebendo cabeça da lista apontando para prox
    //lista recebe o valor do novo_node
    //retorna lista, com node inserido no inicio
    
    node *novo_node;
    novo_node = aloca();
    novo_node -> info = valor;
    novo_node -> prox = lista -> prox;
    lista = novo_node;
    return lista;
}

/*Função para remover um node da lista*/
node *remove_node(node *, int)
{

}

/*Função para buscar um node na lista*/
node *buscar_node(node *lista, int valor)
{
    //Percore a lista a partir do início até que "valor"
    //seja encontrado.

    node *aux;
    aux = lista -> prox;
    while (aux != NULL && aux -> info != valor)
    {
        aux = aux -> prox;
    }
    return aux;
}

/*Função para imprimir TODOS os elementos da lista*/
void lista_imprime(node *lista)
{
    //Imprime a lista a partir da posição apontada por "lista"
    node *aux;
    for (aux = lista -> prox; aux != NULL; aux = aux -> prox)
    {
        printf("Elemento (ou node) = %d\n", aux -> info);
    }
    printf("\n");
}

/*Função que verifica se a lista está vazia ou com nodes*/
void lista_eh_vazia()
{

}

/*Função que destrói toda a lista, liberando espaço na memória*/
node *finaliza_lista(node *)
{

}

int main()
{
    return 0;
}
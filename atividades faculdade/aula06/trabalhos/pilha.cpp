#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*Representa cada elemento(dado, info, numero) na pilha*/
struct Pilha
{
    int num;
    struct Pilha *prox;
};
typedef struct Pilha node;

int menu();
node* aloca();
node* push(node **, int); 
node* pop(node **, int); 
void liberar_pilha(node **);
void exibir_pilha(node*);

node *topo = NULL;


int menu()
{
    int opt;
    printf("1 - Exibir Pilha\n");
    printf("2 - Push\n");
    printf("3 - Pop\n");
    printf("4 - Liberar Pilha\n");
    printf("0 - Sair\n");
    scanf("%d", &opt);
    return opt;
}

node* aloca()
{
    node *aux;
    aux = (node*)malloc(sizeof(node));
    return aux;
}

node* push (node **topo, int valor)
{
    node* novo = aloca();
    
    novo -> num = valor;
    novo -> prox = *topo;
    *topo = novo;
    return *topo;
    
}

node* pop (node **topo)
{
    if (*topo == NULL)
    {   
        printf("\n\nA pilha está vazia\n\n");
    }   
    
    else
    {
        node *aux;
        aux = *topo;
        *topo = (*topo) -> prox;
        printf("\n\n%d Numero Retirado\n\n", aux -> num);
        free(aux);
    }
    return *topo;
}

void liberar_pilha(node **topo)
{
    node *aux;
    while(*topo != NULL)
    {
        aux = *topo;
        *topo = (*topo) -> prox;
        free(aux);
    }
    *topo = NULL;
}

void exibir_pilha(node* pilha)
{
    printf("Conteudo da pilha:\n");
    while(pilha != NULL)
    {
        printf("%d", pilha -> num);
        pilha = pilha -> prox;
    }
}

int main ()
{
    int opt, valor;
    node* pilha = NULL;

    do
    {
        opt = menu();
        switch (opt)
        {
            case 1:
            exibir_pilha (pilha);
            break;

            case 2:
            printf("Digite o valor a ser empilhado:\n");
            scanf("%d", &valor);
            pilha = push(&pilha, valor);
            break;

            case 3:
            pilha = pop (&pilha);
            printf("ultimo elemento desempilhado.\n");
            break;

            case 4:
            liberar_pilha(&pilha);
            pilha = NULL;
            break;

            default:
            printf("Opcao invalida!\n");
        } 
    }
    while (opt != 0); 

    return 0;
}

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

char menu();
node* aloca();
node* push(node *, int); // função empilhar elemento (inserir elemento no início (topo));
node* pop(node *, int); // função para desempilhar elemento (remoção no início (topo));

int main ()
{
    return 0;
}

char menu()
{
    int opt;
    printf("1 - Exibir Pilha\n");
    printf("2 - Push");
    printf("3 - Pop");
    printf("4 - Liberar Pilha");
    printf("0 - Sair");
    scanf("%d", &opt);
    fflush(stdin);
    opt = tolower(opt);
    return opt;
}

/*Função para alocar um novo node*/
node* aloca()
{
    node *aux;
    aux = (node*)malloc(sizeof(node));
    return aux;
}

node* push (node *topo, int valor)
{
    node* novo = aloca();
    
    novo -> num = valor;
    novo -> prox = topo;
    return topo;
    
}

node* pop (node *topo, int valor)
{
    if (valor != NULL)
    {   
        
    }
    
}




#include <stdio.h>
#include <stdlib.h>

struct Pilha
{
    int num;
    struct Pilha *prox;
};
typedef struct Pilha node;

char menu();
node push(node *, int); // função empilhar elemento (inserir elemento no início (topo));
node pop(node *, int); // função para desempilhar elemento (remoção no início (topo));
node clear(node *); // função para limpar a pilha;
node isEmpty(node *);// verifica se a pilha está vazia;


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
node *aloca()
{
    node *aux;
    aux = (node*)malloc(sizeof(node));
    return aux;
}


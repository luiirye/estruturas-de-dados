#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct lista
{
    int info;
    struct lista *prox;
};
typedef struct lista node;

char menu(); // ok
node *aloca(); //ok 
node *insere_Inicio(node *, int); //ok
node *busca(node *, int); // ok
node *remove(node *, int);
void imprime_lista(node*);
void libera_lista(node*);

int main()
{
    return 0;
}

// Menu de opções para manipulação da lista;
char menu()
{
    char opt;
    printf("Opcoes do menu:\n");
    printf("(V) Veja se a lista esta vazia\n");
    printf("(I) Inserir um novo node\n");
    printf("(R) Remover node\n");
    printf("(B) Buscar node\n");
    printf("(P) Imprimir lista\n");
    printf("(F) Finalizar / destruir lista\n");
    scanf("%c", &opt);
    opt = tolower(opt);
    return opt;
}

//Função de alocar um node;
node *aloca()
{
    node* aux = (node*) malloc(sizeof(node));
    return aux;
}

node *insere_Inicio(node*lista, int valor)
{
    node* novo;
    novo = aloca(); // alocado um novo node;
    if (novo == NULL)
    {
        printf("Erro na alocacao.\n");
        exit(1);
    }
    novo -> info = valor;
    novo -> prox = lista;
    return (novo);
}

node *busca(node **lista, int valor)
{
    //Para buscar um elemento, é necessário percorrer a lista até encontrar o node solicitado
    //Percorrer a lista *COMPARANDO* os valores que estão presentes na lista, com o valor solicitado
    node *aux;
    //ponteiro auxiliar para percorrer a lista;
    aux = *lista;

    if(aux == NULL)
    {
        printf("node não encontrado.\n");
        exit(1);
    }

    else
    {
        while(aux -> info != valor)
        {
            aux = aux -> prox;
        }
    }
    return aux;
}

node *remove(node *lista, int valor)
{
    //Remove percorre toda a lista, comparando os valores de info com valor;
    //Quando os valores coincidirem, liberar o nó;
    //O nó anterior ao nó removido, aponta para o nó seguinte ao nó;
    node *aux;
    
    while ()
    {
        /* code */
    }
    
}
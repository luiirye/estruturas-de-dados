#include <stdio.h>
#include <stdlib.h> // biblioteca para alocação dinâmica
#include <ctype.h>

/* Crianção de uma lista encadeada ordenada */

/*protótipos das funções*/
int lista_esta_vazia(node *); // ok
//node *inserir(node*, int);
node *insere(node*, int); // ok
node *insere_inicio(node *, int); // ok
node *insere_meio_fim(node *, int); // ok
node *remover(node *, int); // ok
int buscar(node *, int);  // ok
void imprimir(node *); // ok
void finalizar(node *);
char menu();

struct lista
{
    int info;
    struct lista *proximo;

};typedef struct lista node; // Nó
// struct Node agora pode ser chamada usando "node"

int main()
{
    node* lista;
    int x;
    char opt;

    do
    {
        printf("Menu de opcoes:\n");

        opt = menu();
        switch (opt)
        {
        case 'v':
            
        
            if((lista_esta_vazia(lista)))
            {
                printf("\nLista vazia.");
            }
            else
            {
                printf("\nLista nao esta vazia.");
            }
            break;
        
        case 'i':
            printf("\nInsira um valor:\n");
            scanf("%d", &x);
            insere_inicio(lista, x);
            break;

        case 'r':
            printf("\nInsira um valor para ser removido:\n");
            scanf("%d", &x);
            remover(lista, x);
            break;

        case 'b':
            printf("\nQual elemento gostaria de procurar?\n");
            scanf("%d", &x);
            buscar(lista, x);
            break;

        case 'p':
            imprimir(lista);
            break;

        case 'f':
            finalizar(lista);
            break;

        default:
            printf("\nOpcao invalida\n");
        }
        
        printf("\n\n\n");
      	system("pause");
    
    } while (opt != 'f');
}

int lista_esta_vazia(node* cabeca)
{
    if(lista == NULL)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

node *insere(node* cabeca, int valor)
{
    node* novo_node = (node*)malloc(sizeof(node));
    novo_node -> info = valor;
    novo_node -> proximo = NULL;

    return cabeca;   
}

node *insere_inicio(node* cabeca, int valor)
{
    node* novo_node = (node*) malloc(sizeof(node));
    novo_node -> info = valor;
    novo_node -> proximo = cabeca;
    
    return novo_node;
}

node *insere_meio_fim(node* cabeca, int valor)
{
    node* novo_node = (node*) malloc(sizeof(node));
    novo_node -> info = valor;

    if(cabeca == NULL)
    {
        return novo_node;
    }
        
    node* atual = cabeca;
    while (atual -> proximo != NULL && valor < atual -> proximo -> info)
    {
        atual = atual -> proximo;
    }
        
    if (atual -> proximo == NULL)
    {
        atual -> proximo = novo_node;
    }
    
    else
    {
        novo_node -> proximo = atual ->proximo;
        atual -> proximo = novo_node;
    }
        
    return cabeca;
    
} 

node *remover(node* cabeca, int valor)
{
    //Caso a lista esteja vazia
    if (cabeca == NULL)
    {
        return NULL;
    }
    
    //Caso a cabeça seja igual ao valor
    if (cabeca -> valor == valor)
    {
        node *aux = cabeca;
        cabeca = cabeca -> proximo;
        free(aux); 
        //free libera o node cabeca
        return cabeca;
    }
    
    node *atual = cabeca;
    while (atual -> proximo != NULL)
    {
        if (atual -> proximo -> valor == valor)
        {
            node *aux = atual -> proximo;
            atual -> proximo = atual -> proximo -> proximo;
            free(aux);

            return cabeca;
        }
        
        atual = atual -> proximo;

    }
    
    return cabeca;
    
}

int buscar(node* cabeca, int valor)
{
    if(cabeca == NULL)
    {
        return 0;
    }

    while (cabeca != NULL)
    {
        if (cabeca -> valor == valor)
        {
            return 1;
        }
        
        cabeca = cabeca -> proximo;
    }
    
    return 0;

}

void imprimir(node* cabeca)
{
    if (cabeca != NULL)
    {
        node* aux;
        
        printf("\nElementos / valores da lista:\n");
        for (aux = cabeca; aux != NULL; aux = aux -> proximo)
        {
            printf("%d", aux -> info);
        }   
    }
    else
    {
        printf("\nLista vazia.\n");
    }
}

void finalizar(node* cabeca)
{
    if (!lista_esta_vazia(cabeca))
    {
        node *aux = cabeca;
        node *aux2;

        while (aux != NULL)
        {
            aux2 = aux -> proximo;
            free(aux);
            aux = aux2;
        }
        
        printf("\nLista finalizada com sucesso! Dale fiot!!");

    }
}

char menu()
{
    char opt;
    printf("(V) Lista Vazia\n");
    printf("(I) Insercao\n");
    printf("(R) Remover\n");
    printf("(B) Buscar\n");
    printf("(P) Imprimir\n");
    printf("(F) Finalizar Lista\n");

    fflush(stdin);

    scanf("%c", &opt);

    opt = tolower(opt);
    return opt;
    
}
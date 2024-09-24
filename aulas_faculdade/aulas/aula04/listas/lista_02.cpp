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
node *remove(node *, int); //ok
void imprime_lista(node*); //ok
void libera_lista(node*); //ok
node *insere_ordenado(node*, int);

int main()
{
    char opt;
    node *lista = NULL; //lista vazia
    node *aux;
    int y;
    
    do
    {
        opt = menu();
        
        switch (opt)
        {
        case 'V':
            break;
        
        case 'I':
            int x;
                printf("\nEscolha a inserção\n");
                    printf("1 - Início\n");
                    printf("2 - Ordenada\n");
                scanf("%d", &x);
            
                if (x == 1)
                {
                    lista = insere_Inicio(lista, y);
                }
                else if(x == 2)
                {
                    lista = insere_ordenado(lista, y);
                }
            break;

        case 'R':
            lista = remove(lista, y);
            break;
        
        case 'B':
            lista = busca(lista, y);
            break;
        
        case 'P':
            imprime_lista(lista);
            break;
        
        case 'F':
            libera_lista(lista);
            break;
        
        default:
            printf("\nOpcao Invalida.\n");
            break;
        }
        printf("\n\n\n");
      	system("pause");
    } while (opt != 'F');
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
    fflush(stdin);
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
    node *aux; //ponteiro auxiliar para percorrer a lista
    node *ant = NULL; //ponteiro com elemento anterior

    //procura elemento na lista, guardando anterior;
    while (aux != NULL && aux -> info != valor)
    {
        ant = aux;
        aux = aux -> prox;
    }
    
    /*Verifica se achou elemento*/
    if(aux == NULL)
    {
        printf("\nElemento nao encontrado\n");
        return lista;
        //se não encontrar, retorna a lista original
    }

    /*retira elemento*/
    if(ant == NULL)
    {
        //retira primeiro elemento da lista
        //atualiza o ponteiro lista 
        lista = aux -> prox;
        printf("Elemento removido\n");
    }

    else
    {
        /*retira elemnto do meio da lista */
        ant -> prox = aux -> prox;
        printf("\nElemento removido.\n");
    }   
    free(aux);
    return lista;
}

/*Função para imprimir os elementos da lista*/
void imprime_lista(node* lista)
{
    node *imprime;
    for (imprime = lista ; imprime != NULL; imprime -> prox)
    {
        printf("Elementos = %d\n", imprime -> info);
    }
    
}

/*Função para destruir a lista para liberar memória*/
void libera_lista(node* lista)
{
    node *aux = lista;
    node *aux2;

    aux2 = aux -> prox; //guarda referência para o próximo elemento
    free(aux); //libera a memória apontada por aux
    aux = aux2; // Faz aux apontar para próximo
}

node *insere_ordenado(node* lista, int valor)
{
    node *novo; //novo node
    node *ant; // ponteiro para elemento anterior
    node *aux = lista; // ponteiro auxiliar para percorrer a lista inteira

    /*procura posição para inserção */
    while (aux != NULL && aux -> info < valor)
    {
        ant = aux;
        aux = aux -> prox;
    }
    
    /*Cria novo elemento na lista*/
    novo = (node*)malloc(sizeof(node));
    novo -> info = valor;

    /*encadeia elemento*/
    if (ant == NULL)
    {
        //se o anterior for vazio, aloca no início da lista
        novo -> prox = lista;
        lista = novo;
    }

    else
    {
        // insere elemento no meio da lista
        novo -> prox = ant -> prox;
        ant -> prox = novo;
    }
    return lista;
}

//ERRADO
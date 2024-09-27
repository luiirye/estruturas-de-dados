#include <stdio.h>
#include <stdlib.h>

//Inserir no início e remover no início

struct Pilha
{
    int num;
    struct Pilha* prox;
};
typedef struct Pilha node;

node* aloca();
node* inicia_pilha(node*);
node* pilha_vazia(node*);
node* push(node*, int);
node* pop(node*);
void exibir_pilha(node*);


node* aloca()
{
    node* aux = (node*) malloc (sizeof(node));
    return aux;
}

node* inicia_pilha(node* pilha)
{
    pilha -> prox = NULL;
}

node* pilha_vazia(node* pilha)
{
    if (pilha -> prox == NULL)
    {
        printf("pilha vazia\n");
        return 0;
    }
}


node* push(node* pilha, int valor)
{
    node* aux;
    aux = aloca();

    if (!pilha_vazia(pilha))
    {
        aux -> prox = pilha;
    }
    
    pilha = aux;
}

node* pop(node* pilha, int valor)
{
    node* aux;

    if (pilha_vazia(pilha))
    {
        return 0;
    }

    aux = pilha;
    valor = aux -> num;
    pilha = pilha -> prox;
    free(aux);
    
}

void exibir_pilha(node* pilha)
{
    while (pilha != NULL)
    {
        printf("Conteudo(s) da pilha: %d\n", pilha -> num);
        pilha = pilha -> prox;
    }
    printf("\n");
}

int main()
{
    int opt;
    int valor;
    node* pilha;
    
    do
    {
        printf("Menu para utilizar a pilha.\n");
        printf("1 - Exibir pilha.\n");
        printf("2 - Inserir node na pilha.\n");
        printf("3 - Remover node da pilha.\n");
        printf("4 - Esvaziar / Destruir / Liberar pilha.\n");
        printf("0 - Finalizar.\n");
        scanf("%d", &opt);
        
        switch (opt)
        {
        case 1:
            printf("Exibindo Pilha:\n");
            exibir_pilha(pilha);
            break;
        case 2:
            printf("Informe numero inteiro para inserir na pilha.\n");
            scanf("%d", &valor);
            push(pilha, valor);
            printf("node %d empilhado com sucesso!\n\n", *push(pilha, valor));
            break;
        case 3:
            printf("Removendo node do topo.\n");
            pop(pilha);
            printf("node removido: %d\n\n", *pop(pilha));
            break;
        case 4:
            printf("Liberando memória...\n");
            //liberar_pilha(pilha);
            printf("Memoria liberada!\n");
            printf("Pilha esta vazia agora.\n");
            break;
        case 0:
            printf("Finalizando...\n");
            //pritnf("Ate mais meu peixe!\n");
            return 1;
            break;
        default:
            printf("Opcao invalida meu principe, tente as opcoes abaixo:\n");
            break;
        }
    } while (opt != 0);
    
    return 0;
}
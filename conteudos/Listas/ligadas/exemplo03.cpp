#include<stdio.h>
#include<stdlib.h>

typedef struct Lista  {
    int numero;
    struct Lista* proximo;
}node;
// estrutura chamada "node". 



 
void adicionar_fim(node* CABECA){
    
}


void adicionar_inicio(node* CABECA){
    
    // criar um novo node
    node *novo = (node*) malloc (sizeof(node));
    // novo node alocado na memória
    
    // verifica se o novo node foi alocado na memoria
    if(!novo){
        printf("node nao alocado.\nErro de memoria!!\n");
    }

    if(!CABECA){

        // novo node se torna a cabeca da lista
        CABECA = novo;
        novo -> proximo = NULL;
    }
    
    else{
        
        
        
    }
}

void imprime(node* CABECA){
    if(CABECA->proximo == NULL){
        printf("Lista vazia!!\n");
    }else{
        node* aux = CABECA->proximo;
        printf("CABECA proximo: %p\n", CABECA->proximo);
        while(aux != NULL){
            printf("End: %p\n", aux);
            printf("Valor: %d\n", aux->numero);
            printf("Proximo: %p\n\n", aux->proximo);
            aux = aux->proximo;
        }
    }
}


int main(){
    node *CABECA = (node*) malloc(sizeof(node));
    if(!CABECA){
        printf("Sem espaco em memoria\n");
        exit(1);
    }
    CABECA->proximo = NULL;

    int opcao;
    do{
        printf("1 Para inserir no inicio\n");
        printf("2 Para inseir no final\n");
        printf("3 Para imprimir\n");
        printf("0 Para sair\n");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                adicionar_inicio(CABECA);
                break;
            case 2:
                adicionar_fim(CABECA);
                break;
            case 3:
                imprime(CABECA);
                break;
            case 0:
                printf("Opcao 0 selecionada!\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    }while(opcao != 0);


    return 0;
}
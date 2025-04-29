#include <stdio.h>
#include <stdlib.h>

struct Banco{
    int numero_conta;
    //char nome[30] = "Paulo";
    //float saldo;
    struct Banco* proximo;
    struct Banco* anterior;
};
typedef struct Banco node;
/* estrutura de variáveis do node */
/* strcut Banco pode ser chamada por "node" */

/* Protótipos de funções para validação */
int menu(int);
node* aloca(); 
void imprime(node*);
node* insere_ordenado(node*);
node* remove(node*);

/*int menu(int opt){

    node* CABECA = aloca();
    if(!CABECA){
        printf("Sem memoria.\n");
        exit(1);
    }

    do{
        printf("1 - Imprimir Lista/Banco.\n");
        printf("2 - Inserir um elemento na lista/Banco\n");
        printf("3 - Remover um elemento da lista/Banco\n");
        printf("0 - Encerrar menu.\n");
        scanf("%d", &opt);
        switch(opt){
            case 1:
            printf("Opcao: Imprimir.\n");
            imprime()
        }
    }
}*/

/*Função de alocar um novo node*/
/* Para não ter que ficar colocando toda vez a função malloc de alocação.*/
node* aloca(){
    node* novo = (node*) malloc(sizeof(node));
    return novo;
}

/* Função para imprimir os elementos da lista/ banco se não estiver vazio(a).*/
void imprime(node* cabeca){
    
    // Verificando se a lista está vazia
    if(cabeca->proximo == NULL){
        printf("A lista esta vazia.\n");
    }
    // Se a lista possuir elementos.
    else{
        node* aux = cabeca->proximo;
        while(aux != NULL){
            printf("\n");
            printf("---------------------\n");
            printf("Endereco de node %d: 0x%p.\n", aux->numero_conta, aux);
            printf("Numero da conta: %d\n", aux->numero_conta);
            //printf("Nome cliente da conta %d: %s\n", aux->numero_conta, aux->nome);
            //printf("Saldo da conta %d: %.2f\n", aux->numero_conta, aux->saldo);
            printf("Anterior do node %d: 0x%p\n", aux->numero_conta, aux->anterior);
            printf("Proximo do node %d: 0x%p\n", aux->numero_conta, aux->proximo);
            printf("---------------------\n");
            aux = aux->proximo;
        }
    }
}

node* insere_ordenado(node* cabeca){

    //APAGAR, pois é inserção no início abaixo.
    node* novo = aloca();
    if(!novo){
        printf("Sem memoria.\n");
        exit(1);
    }  
    
    printf("Infrome um numero para o node:\n");
    scanf("%d", &novo->numero_conta);
    //printf("Informe o nome para o node:\n");
    //scanf("%s", novo->nome);
    //printf("Informe o saldo para o node:\n");
    //scanf("%f", &novo->saldo);
    novo->proximo = NULL;
    novo->anterior = NULL;

    if(cabeca->proximo == NULL){
        cabeca->proximo= novo;
    }

    else{
        node *aux = cabeca->proximo;
        novo->proximo = aux;
        novo->anterior = novo;
        cabeca->proximo = novo;
    }

    return novo;
}

node* remove(node* cabeca){
    
    if(cabeca->proximo == NULL){
        printf("Lista Vazia!!\n");
    }
    else{
        node* aux;
        aux = cabeca->proximo;
        cabeca->proximo = aux->proximo;
        free(aux);
        aux = cabeca->proximo;
        aux->anterior = NULL; 
    }
    return cabeca;
}

/*Função Principal*/
int main(){
    
    int opt;
    
    node* CABECA = aloca();
    if(!CABECA){
        printf("Sem memoria.\n");
        exit(1);
    }

    CABECA->proximo = NULL;

    do{
        printf("\n");
        printf("1 - Imprimir Lista/Banco.\n");
        printf("2 - Inserir um elemento na lista/Banco\n");
        printf("3 - Remover um elemento da lista/Banco\n");
        printf("0 - Encerrar menu.\n");
        scanf("%d", &opt);
        
        switch(opt){
            case 1:
            printf("Opcao: Imprimir.\n");
            imprime(CABECA);
            break;
        
            case 2:
            printf("Opcao: Inserir. (Ordenado)\n");
            insere_ordenado(CABECA);
            break;

            case 3:
            printf("Opcao: Remover.\n");
            remove(CABECA);
            break;

            case 0:
            printf("Opcao: Encerrar menu.\nEncerrando...\n");
            break;
        }
    } while(opt != 0);
}
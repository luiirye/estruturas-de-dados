#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Banco{

    int numero_conta;
    char nome_cliente[100];
    float saldo;
    struct Banco *proximo;

};
typedef struct Banco node;

node* aloca(){
    return (node*) malloc(sizeof(node));
}

void inserirCliente (node** cabeca, int numero_conta, char nome[], float saldo){

    node* novoCliente =  aloca();
    node* atual = *cabeca;
    node* anterior = NULL;

    if (novoCliente == NULL){
        printf("Erro! \n Memoria Insuficiente! \n");
        exit(1);
    }

    novoCliente->numero_conta = numero_conta;
    strcpy(novoCliente->nome_cliente, nome);
    novoCliente->saldo = saldo;
    novoCliente->proximo = NULL;

    while (atual != NULL){
        if (atual->numero_conta == numero_conta){
            printf("A conta %d já existe. Não é possivel inserir. \n", numero_conta);
            free(novoCliente);
            return;
        }

        anterior = atual;
        atual = atual->proximo;
    }

    if (anterior == NULL) {
        novoCliente->proximo = *cabeca;
        *cabeca = novoCliente;
    } 
    else{
        anterior->proximo = novoCliente;
        novoCliente->proximo = atual;
    }
    printf("Cliente com conta %d inserido com sucesso. \n", numero_conta);
}

void remover (node** cabeca, int numero_conta){

    node* atual = *cabeca;
    node* anterior = NULL;

    while (atual != NULL && atual-> numero_conta != numero_conta) {
        anterior = atual;
        atual = atual->proximo;
    }
    
    if (atual == NULL){
        printf("Cliente com conta %d não encontrado. \n", numero_conta);
        return;
    }

    if (anterior == NULL){
        *cabeca = atual->proximo;
    } 
    else{
        anterior->proximo = atual->proximo;
    }
    free(atual);
    printf("Cliente com conta %d removida com sucesso. \n", numero_conta);
}

void mostrarCliente (node* cabeca){
    if (cabeca == NULL){
        printf("Nenhum cliente cadastrado. \n");
        return;
    }

    node* atual = cabeca;
    while (atual != NULL){
        printf("- Conta: %d\n", atual->numero_conta);
        printf("- Nome: %s\n", atual->nome_cliente);
        printf("- Saldo: %.2f\n", atual->saldo);
        printf("- Endereço do nó: %p\n", (void*)atual);
        printf("- Próximo nó: %p\n", (void*)atual->proximo);
        atual = atual->proximo;
    }
}

int main (){
    
    int menu;
    int numero_conta;
    char nome[100];
    float saldo;
    node* cabeca = NULL;

    do{
        printf("\nMenu:\n");
        printf("1. Inserir Cliente\n");
        printf("2. Remover Cliente\n");
        printf("3. Exibir Lista de Clientes\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &menu);

        switch (menu){
        case 1:
            printf("Digite o Numero da conta do Cliente: \n");
            scanf("%d", &numero_conta);
            printf("Digite o Nome do Cliente: \n");
            getchar();  // Para consumir o '\n' que ficou no buffer após o scanf
            fgets(nome, sizeof(nome), stdin);  // Lê o nome do cliente
            nome[strcspn(nome, "\n")] = '\0';  // Remove o '\n' no final do nome
            printf("Qual o Saldo da conta: \n");
            scanf("%f", &saldo);
            inserirCliente(&cabeca, numero_conta, nome, saldo);
        break;
        
        case 2:
            printf("Informe o numero da Conta: \n");
            scanf("%d", &numero_conta);
            remover(&cabeca, numero_conta);
        break;

        case 3:
        
            mostrarCliente(cabeca);
            break;
        
        default:
            printf("Opçao invalida.\n");
        break;
        }
    } 
    while(menu != 4);
    
    return 0;
}
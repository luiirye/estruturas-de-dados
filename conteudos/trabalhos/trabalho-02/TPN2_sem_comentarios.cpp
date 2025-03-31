#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Banco {
    int numero_conta;
    char nome_cliente[30];
    float saldo;
    struct Banco *proximo;
};
typedef struct Banco Banco;

Banco *aloca();
int Banco_vazio(Banco*);
Banco *cria_banco(Banco*);
Banco *remove_inicio(Banco*, int);
Banco *insere_ordenado(Banco*); 
void imprime_cliente(Banco*);
int menu(int);

int main() {
    Banco* CABECA = aloca();
    cria_banco(CABECA);
    int opt;

    do {
        printf("Menu Banco.\n");
        printf("1 - Verifica banco.\n");
        printf("2 - Cria banco.\n");
        printf("3 - Inserir cliente.\n");
        printf("4 - Remover cliente.\n");
        printf("5 - Imprimir clientes.\n");
        printf("0 - Sair.\n");
        scanf("%d", &opt);
        getchar();

        switch(opt) {
            case 1:
                Banco_vazio(CABECA);
                break;

            case 2:
                cria_banco(CABECA);
                break;

            case 3:
                printf("Insira as informacoes do cliente:\n");
                insere_ordenado(CABECA);
                printf("Cliente registrado com sucesso!\n");
                break;

            case 4:
                printf("Insira o numero de conta para ser removido:\n");
                int conta;
                scanf("%d", &conta);
                CABECA = remove_inicio(CABECA, conta);
                printf("Conta %d removida com sucesso!\n", conta);
                break;

            case 5:
                printf("Imprimindo clientes alocados no banco:\n\n");
                imprime_cliente(CABECA);
                break;

            case 0:
                printf("Encerrando...\n");
                break;
        }

    } while (opt != 0);
    
    return 0;
}

Banco *aloca() {
    Banco *aux = (Banco*) malloc(sizeof(Banco));
    return aux;
}

int Banco_vazio(Banco *CABECA) {
    if (CABECA->proximo == NULL) {
        printf("O Banco esta vazio.\n");
        return 1;
    } else {
        printf("O Banco possui clientes.\n");
        return 0;
    }
}

Banco *cria_banco(Banco *CABECA) {
    CABECA->proximo = NULL;
    return CABECA;  
}

Banco *insere_ordenado(Banco *CABECA) {
    Banco *novo = aloca();
    
    int x;
    char nome[30];
    float valor;

    printf("Numero da conta:\n");
    scanf("%d", &x);
    printf("Nome do cliente:\n");
    scanf("%29s", nome);
    printf("Saldo do cliente:\n");
    scanf("%f", &valor);
    
    if (novo == NULL) {
        printf("Sem espaço em memória.\n");
        return CABECA;
    }

    novo->numero_conta = x;
    strcpy(novo->nome_cliente, nome);
    novo->saldo = valor;
    novo->proximo = NULL;

    Banco *aux = NULL; 
    Banco *p = CABECA; 
    
    while (p->proximo != NULL && p->proximo->numero_conta < x) {
        p = p->proximo;
    }

    novo->proximo = p->proximo;
    p->proximo = novo;

    return CABECA;
}

Banco *remove_inicio(Banco *CABECA, int x) {
    if (CABECA == NULL || CABECA->proximo == NULL) {
        printf("Banco vazio. Sem contas para remover.\n");
        return CABECA;
    }
    
    Banco *aux = CABECA->proximo; 
    Banco *p = CABECA;
    
    while (aux != NULL && aux->numero_conta != x) {
        p = aux;
        aux = aux->proximo;
    }

    if (aux == NULL) {
        printf("Conta não encontrada.\n");
        return CABECA; 
    }

    p->proximo = aux->proximo;
    free(aux);
    return CABECA;
}

void imprime_cliente(Banco *b) {
    if (Banco_vazio(b)){
        printf("Banco Vazio.\n");
    } 
    
    else{
        Banco *aux = b->proximo;
        while (aux != NULL) {
            printf("Nome cliente: %s\n", aux->nome_cliente);
            printf("Numero da conta do cliente: %d\n", aux->numero_conta);
            printf("Saldo do cliente: R$ %.2f\n", aux->saldo);
            printf("Endereco atual do cliente: 0x%p\n", aux->numero_conta);
            printf("Proximo cliente: 0x%p\n\n", aux->proximo);
            aux = aux->proximo;
        }
    }
}
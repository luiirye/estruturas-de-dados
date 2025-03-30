#include<stdio.h>
#include<stdlib.h>

// estrutura do Banco

struct Banco{
    int numero_conta;
    char nome_cliente[30];
    float saldo;
    struct Banco *proximo;
};
typedef struct Banco Banco;

// Funções para funcionalidade da lista encadeada Banco
// protótipos para validação
Banco *aloca();
int Banco_vazio(Banco*);
Banco *cria_banco(Banco*);
Banco *remove_inicio(Banco*, int);
Banco *insere_ordenado(Banco*); 
void imprime_cliente(Banco*);
int menu(int);

int main(){
    
    Banco* CABECA = aloca();
    
    cria_banco(CABECA);
    Banco_vazio(CABECA);
    int conta;

    int opt;

    do{
        printf("Menu Banco.\n");
        printf("1 - Verifica banco.\n");
        printf("2 - Cria banco.\n");
        printf("3 - Inserir cliente.\n");
        printf("4 - Remover cliente.\n");
        printf("5 - Imprimir clientes.\n");
        printf("0 - Sair.\n");
        scanf("%d", &opt);
        getchar(); // limpa o prompt de comando do menu

        switch(opt){
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
            remove_inicio(CABECA, conta);
            printf("Conta %d removida com sucesso!\n");
            break;

            case 5:
            imprime_cliente(CABECA);
            break;

            case 0:
            printf("Encerrando...\n");
            break;
        }

    }while (opt != 0);
    
    return 0;
}

// Função que aloca um espaço na memória dinâmicamente
Banco *aloca(){
    Banco *aux = (Banco*) malloc(sizeof(Banco));
    return aux;
}

int Banco_vazio(Banco *CABECA){
    if(CABECA->proximo == NULL){
        printf("O Banco esta vazio.\n");
        return 1;
        // verdade, lista está vazia.
    }

    else{
        printf("O Banco possui clientes.");
        return 0;
        // falso, a lista Banco não está vazia.
    }
}

Banco *cria_banco(Banco *CABECA){
    CABECA->proximo = NULL;
    return CABECA;  
}

Banco *insere_ordenado(Banco *CABECA){
    
    Banco *novo = aloca(); // cria novo node para o Banco
    
    int x;
    char nome[30];
    float valor;

    printf("Numero da conta:\n");
    scanf("%d", &x);
    printf("Nome do cliente:\n");
    scanf("%29s", nome);
    printf("Saldo do cliente:\n");
    scanf("%f", &valor);
    
    if(novo == NULL){
        printf("Sem espaço em memória.\n");
        return CABECA;
    }

    novo->numero_conta = x;
    //novo->nome_cliente = nome;
    novo->saldo = valor;
    novo->proximo = NULL;

    Banco *aux = NULL; // ponteiro auxiliar
    Banco *p = CABECA; // ponteiro para percorrer o Banco
    
    /* Procura posição para inserção */
    while (p != NULL && p->numero_conta < x){
        aux = p;
        p = p->proximo;
    }

    /* Inserindo elemento */
    if(aux == NULL){ // insere elemento no início
        novo->proximo = CABECA;
        CABECA = novo;
    }

    /*Insere elemento no meio da lista*/
    else{ 
        novo->proximo = aux->proximo;
        aux->proximo = novo;
    }
    return CABECA;
}

Banco *remove(Banco* CABECA, int v){
    Banco *aux, *r = NULL;
    

}   
Banco *remove_inicio(Banco *CABECA, int x){
    
    if(CABECA == NULL || CABECA->proximo == NULL){
        printf("Banco vazio. Sem contas para remover.\n");
        return CABECA;
    }
    
    Banco *aux = NULL; // ponteiro auxiliar para remoção de um elemento no banco
    Banco *p = CABECA; // ponteiro para percorrer a lista encadeada
    
    printf("Insira o numero de conta a ser removido.\n");
    scanf("%d", &x);
    /*Procura elemento na lista, guardando seu anterior */
    while(p != NULL && p->numero_conta != x){
        aux = p;
        p = p->proximo;
    }

    /* Verificia se o elemento foi encontrado */
    if(p == NULL){
        return CABECA; // Elemento não encontrado, retorna CABECA.
    }

    /* Retirada do elemento encontrado */
    if(aux == NULL){
        /*retira elemento do início do Banco*/
        aux = p->proximo; 
    }

    free(aux);
    return CABECA;
}

void imprime_cliente(Banco *b){
    if(Banco_vazio(b)){
        printf("Banco Vazio.\n");
    }

    else{
        Banco *aux = b->proximo;
        while(aux != NULL){
            printf("Nome cliente: %c", aux->nome_cliente[30]);
            printf("NUmero da conta do cliente: %d", aux->numero_conta);
            printf("Saldo do cliente: %.2f", aux->saldo);
            printf("Proximo cliente: %p", aux->proximo);
            aux = aux->proximo;
        }
    }
}
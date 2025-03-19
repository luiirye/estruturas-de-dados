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
Banco *aloca(); // OK
int Banco_vazio(); // OK
void cria_banco(); // OK
Banco *insere_cliente_inicio(Banco*, int); // OK
Banco *insere_cliente_meio(); 
Banco *insere_cliente_fim();
Banco *remove_cliente_inicio(Banco*, int); // OK
Banco *remove_cliente_meio(Banco*, int); // OK
Banco *remove_cliente_fim();
Banco *insere_cliente_ordenado(Banco*, int); // OK 
void imprime_cliente();
int menu(int);

int main(){
    
    int teste;
    scanf("%d", &teste);
    menu(teste);
    
    return 0;
}

// Função que aloca um espaço na memória dinâmicamente
Banco *aloca(){
    Banco *aux = (Banco*) malloc(sizeof(Banco));
    return aux;
}

int Banco_vazio(Banco *CABECA){
    if(CABECA->proximo == NULL){
        return 1;
        // verdade, lista está vazia.
    }

    else{
        return 0;
        // falso, a lista Banco não está vazia.
    }
}

void cria_banco(Banco *CABECA){
    CABECA -> proximo = NULL;
}

Banco *insere_cliente_inicio(Banco *CABECA, int a){
    
    Banco *novo = aloca();
    
    //scanf("%d", &a);
    
    if(!novo){
        printf("Erro ao alocar novo elemento no Banco");
        return 0;
    }
    else{
        novo->numero_conta = a;
        novo->proximo = CABECA;
        CABECA = novo;
    }
    return novo;
}

Banco *insere_cliente_meio(){

}

Banco *insere_cliente_fim(){

}

Banco *remove_cliente_inicio(Banco *CABECA, int x){
    Banco *aux = NULL; // ponteiro auxiliar para remoção de um elemento no banco
    Banco *p = CABECA; // ponteiro para percorrer a lista encadeada

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

Banco *remove_cliente_meio(Banco *CABECA, int x){
    Banco *aux = NULL;
    Banco *p = CABECA;

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
        /*retira elemento do meio do Banco*/
        aux->proximo = aux->proximo; 
    }

    free(aux);
    return CABECA;
}

Banco *remove_cliente_fim(){

}

Banco *insere_cliente_ordenado(Banco *CABECA, int x){
    Banco *novo = aloca(); // cria novo node para o Banco
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

void imprime_cliente(Banco *dark_aria){
    if(Banco_vazio(dark_aria)){
        printf("Banco sem clientes registrados\n");
    }

    else{
        Banco *aux = dark_aria->proximo;
        
        while(aux != NULL){
            printf("Nome cliente: %c", aux->nome_cliente[30]);
            printf("NUmero da conta do cliente: %d", aux->numero_conta);
            printf("Saldo do cliente: %.2f", aux->saldo);
            printf("Proximo cliente: %p", aux->proximo);
            aux = aux->proximo;
        }
    }
}

int menu(int opt){
    
    do{
        printf("Menu de Opcoes para utilizar o Banco.\n");
        printf("1 - Verificar se o banco esta vazio.\n");
        printf("2 - Criar Banco (Caso esteja vazio)");
        printf("3 - Inserir informacoes clientes: inicio.\n");
        printf("4 - Inserir informacoes clientes: meio.\n");
        printf("5 - Inserir informacoes clientes: fim.\n");
        printf("6 - Inserir informacoes cliente: ordenado.\n");
        printf("7 - Remover cliente do banco: inicio.\n");
        printf("8 - Remover cliente do banco: meio.\n");
        printf("9 - Remover cliente do banco: fim.\n");
        printf("10 - Imprimir Banco.\n");
        printf("11 - Destruir / apagar Banco.\n");
        printf("0 - Sair do menu.");
        
        scanf("%d", &opt);

        switch(opt){
            case 1:
            //Banco_vazio();
            break;

            case 2:
            //cria_banco();
            break;

            case 3:
            //insere_cliente_inicio();
            break;

            case 4:
            //insere_cliente_meio();
            break;

            case 5:
            //insere_cliente_fim();
            break;

            case 6:
            //insere_cliente_ordenado();
            break;

            case 7:
            //remove_cliente_inicio();
            break;

            case 8:
            //remove_cliente_meio();
            break;

            case 9:
            //remove_cliente_fim();
            break;

            case 10:
            //imprime_cliente();
            break;

            case 11:
            break;

            case 0:
            break;
        }

    }while (opt != 0);
}
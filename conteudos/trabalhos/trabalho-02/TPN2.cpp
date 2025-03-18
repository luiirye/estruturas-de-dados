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
int Banco_vazio();
void cria_banco();
Banco *insere_cliente_inicio();
Banco *insere_cliente_meio();
Banco *insere_cliente_fim();
Banco *remove_cliente_inicio();
Banco *remove_cliente_meio();
Banco *remove_cliente_fim();
Banco *insere_cliente_ordenado();
void imprime_cliente();
int memu();

int main(){
    return 0;
}

// Função que aloca um espaço na memória dinâmicamente
Banco *aloca(){
    Banco *aux = (Banco*) malloc(sizeof(Banco));
    return aux;
}

int Banco_vazio(Banco *CABECA){
    if(CABECA -> proximo == NULL){
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

    if(Banco_vazio == 1){
        CABECA = novo;
        novo -> numero_conta = a;
        novo -> proximo = NULL;
        
    }
}

Banco *insere_cliente_meio(){

}

Banco *insere_cliente_fim(){

}

Banco *remove_cliente_inicio(){

}

Banco *remove_cliente_meio(){

}

Banco *remove_cliente_fim(){

}

Banco *insere_cliente_ordenado(){

}

void imprime_cliente(){

}

int memu(){
    
}
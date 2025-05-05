// Trabalho Prático 03 - Estruturas de Dados

// Inserção ordenada pelo CPF.
// Remoção do Aluno (node) em qualquer posição da memória, pelo CPF.
// Edição de Dados de um Aluno (Nome, Notas), atualizando automáticamente a média e validação do CPF.
// Saída correta das informações (Endereço de node, CPF, Nome, Notas 1 e 2, Média, endereço node próximo e anteriro).
#include <stdio.h>
#include <stdlib.h>

struct Aluno{
    long long int CPF;
    char nome[100];
    float nota1;
    float nota2;
    float media;
    struct Aluno* proximo;
    struct Aluno* anterior;
};
typedef struct Aluno node;

// Declaração de funções / protótipos.

node* aloca(); // função para alocar um nó dinâmicamente na memória.
node* insere_ordenado(node*); // função para inserir um Aluno na lista.
node* remove(node*); // função para remover um aluno de qualquer posição.
node* edita(node*); // função para editar um aluno existente na lista.
void imprime(node*); // função para exibir os alunos cadastrados na lista.

int main(){
    return 0;
}

node* aloca(){
    node* novo = (node*)malloc(sizeof(node));
    return novo;
}

node* insere_ordenado(node* CABECA){

    // Criando novo nodeo na memória
    node* novo = aloca();
    // Verificando se o node foi alocado.
    if(!novo){
        printf("Sem memoria.\n");
        exit(1);
    }
    
    // Menu para inserção das informações do Aluno.
    printf("Inserindo informacoes aluno.\n");
    printf("CPF: ");
    scanf("%d", &novo->CPF); // armazena o CPF
    printf("\n");
    printf("Nome: ");
    scanf("%s", novo->nome); // armazena o Nome
    printf("\n");
    printf("Nota 1: ");
    scanf("%f", &novo->nota1); // armazena a nota 1
    printf("\n");
    printf("Nota 2: ");
    scanf("%f", &novo->nota2); // armazena a nota 2
    printf("\n");

    novo->proximo = NULL;
    novo->anterior = NULL;

    node* aux = CABECA->proximo;
    while(aux!=NULL){
        if(aux->CPF == novo->CPF){
            printf("CPF ja cadastrado.\n");
            free(novo);
            return aux;
        }
        aux = aux->proximo;
    }

    if(CABECA->proximo){
        CABECA->proximo = novo;
    }

    else{
        node* aux1 = CABECA;
        node* aux2 = CABECA->proximo;
        while(aux2 != NULL && aux2->CPF < novo->CPF){
            // enquanto auxiliar 2 não for NULL e for menor que o CPF novo informado
            aux1 = aux2;
            // aux que se torna CABECA, recebe proximo.
            aux2 = aux2->proximo;
            // a CABECA aponta proximo proximo.
            aux2->anterior = novo;
            // anterior
            CABECA->proximo = novo;
            CABECA->anterior = NULL;
        }
    }
}
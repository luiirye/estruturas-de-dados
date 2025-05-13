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
float calculo(); // função para calcular a média do aluno.
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
    // ponteiro auxiliar
    node* aux1 = aloca();
    // Verificando se o node foi alocado.
    if(!novo){
        printf("Sem memoria.\n");
        exit(1);
    }
    
    // Menu para inserção das informações do Aluno.
    printf("Inserindo informacoes aluno.\n");
    printf("CPF: ");
    scanf("%lld", &novo->CPF); // armazena o CPF
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

    // Se a lista estiver vazia
    if(CABECA == NULL){
        CABECA = novo;
    }

    // Se o novo node precisar ser alocado antes do primeiro node
    else if(novo->CPF < CABECA->CPF){
        novo->proximo = CABECA;
        CABECA->anterior = novo;
        CABECA = novo;
    }

    // Se o novo node precisar ser inserido depois dos primeiros nodes
    else{
        node* aux1 = CABECA;
        while(aux1->proximo != NULL && novo->CPF > aux1->proximo->CPF){
            aux1 = aux1->proximo;
        }
        novo->proximo = aux1->proximo;
        if(aux1->proximo != NULL){
            aux1 = aux1->proximo;
            aux1->anterior = novo;
        }
    }
    return CABECA;
}

node* remove(node* CABECA){
    if(CABECA->proximo==NULL){
        printf("Lista esta vazia, nada para remover.\n");
        return CABECA;
    }
    else{
        
    }

}

float calculo(){
    node* aux1;
    node* aux2;
    float media;
    return media = (aux1->nota1 + aux2->nota2)/2.0;
}

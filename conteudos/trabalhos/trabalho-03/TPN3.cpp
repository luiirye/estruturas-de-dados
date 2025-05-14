#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struct Aluno
typedef struct Aluno {
    long long int cpf; // CPF do aluno
    char nome[100];    // Nome do aluno
    float nota1, nota2; // Notas do aluno
    float media;       // Média das notas
    struct Aluno* anterior; // Ponteiro para o aluno anterior na lista
    struct Aluno* proximo;  // Ponteiro para o próximo aluno na lista
} node;

node* inicio = NULL; // Ponteiro para o início da lista de alunos

// Protótipos de funções para validação
float Media(float, float); // Função para calcular a média
int Valida_CPF(long long int); // Função para validar se o CPF já existe
node* cria_Aluno(long long int, char[], float, float); // Função para criar um novo aluno
void inserir_Aluno(long long int, char[], float, float); // Função para inserir um aluno na lista
void remover_Aluno(long long int); // Função para remover um aluno da lista
void editar_Aluno(long long int, char[], float, float); // Função para editar os dados de um aluno
void listar_Alunos(); // Função para listar todos os alunos
void liberar_Lista(); // Função para liberar a memória da lista de alunos

// Função que retorna o cálculo da média do Aluno
float Media(float n1, float n2) {
    return (n1 + n2) / 2.0; // Retorna a média das duas notas
}

// Função para verificar se o CPF existe ou não.
int Valida_CPF(long long int cpf) {
    node* atual = inicio; // Ponteiro para percorrer a lista
    while (atual) {
        if (atual->cpf == cpf) { // Verifica se o CPF já está cadastrado
            return 1; // CPF encontrado
        }
        atual = atual->proximo; // Avança para o próximo aluno
    }
    return 0; // CPF não encontrado
}

// Função para criar um novo aluno
node* cria_Aluno(long long int cpf, char nome[], float n1, float n2) {
    node* novo = (node*)malloc(sizeof(node)); // Aloca memória para um novo aluno
    novo->cpf = cpf; // Atribui o CPF
    strcpy(novo->nome, nome); // Copia o nome
    novo->nota1 = n1; // Atribui a primeira nota
    novo->nota2 = n2; // Atribui a segunda nota
    novo->media = Media(n1, n2); // Calcula a média
    novo->anterior = novo->proximo = NULL; // Inicializa os ponteiros anterior e próximo como NULL
    return novo; // Retorna o novo aluno
}

// Função para inserir um aluno na lista
void inserir_Aluno(long long int cpf, char nome[], float n1, float n2) {
    if (Valida_CPF(cpf)) { // Verifica se o CPF já está cadastrado
        printf("Erro: CPF %lld ja cadastrado.\n", cpf);
        return; // Se já existe, retorna sem inserir
    }

    node* novo = cria_Aluno(cpf, nome, n1, n2); // Cria um novo aluno
    if (!inicio) { // Se a lista estiver vazia
        inicio = novo; // O novo aluno se torna o início da lista
        printf("Aluno inserido com sucesso!\n");
        return;
    }

    node* atual = inicio; // Ponteiro para percorrer a lista
    node* anterior = NULL; // Ponteiro para o aluno anterior
    while (atual && atual->cpf < cpf) { // Encontra a posição correta para inserir
        anterior = atual; // Atualiza o ponteiro anterior
        atual = atual->proximo; // Avança para o próximo aluno
    }

    novo->proximo = atual; // O próximo do novo aluno aponta para o atual
    novo->anterior = anterior; // O anterior do novo aluno aponta para o anterior
    if (atual) atual->anterior = novo; // Se o atual não for NULL, atualiza seu anterior
    if (anterior) anterior->proximo = novo; // Se o anterior não for NULL, atualiza seu próximo
    else inicio = novo; // Se não havia anterior, o novo aluno é o início da lista

    printf("Aluno inserido com sucesso!\n");
}

// Função para remover um aluno da lista
void remover_Aluno(long long int cpf) {
    node* atual = inicio; // Ponteiro para percorrer a lista
    while (atual && atual->cpf != cpf) // Busca o aluno com o CPF informado
        atual = atual->proximo;

    if (!atual) { // Se não encontrou o aluno
        printf("Aluno nao encontrado.\n");
        return;
    }

    // Ajusta os ponteiros de anterior e próximo para remover o aluno da lista
    if (atual->anterior) atual->anterior->proximo = atual->proximo;
    else inicio = atual->proximo; // Se for o início da lista, atualiza o início
    if (atual->proximo) atual->proximo->anterior = atual->anterior;

    free(atual); // Libera a memória do aluno removido
    printf("Aluno removido com sucesso!\n");
}

// Função para editar os dados de um aluno pelo CPF
void editar_Aluno(long long int cpf, char nome[], float n1, float n2) {
    node* atual = inicio; // Ponteiro para percorrer a lista
    while (atual && atual->cpf != cpf) // Busca o aluno com o CPF informado
        atual = atual->proximo;

    if (!atual) { // Se não encontrou o aluno
        printf("Aluno com CPF %lld nao encontrado.\n", cpf);
        return;
    }

    // Atualiza os dados do aluno encontrado
    strcpy(atual->nome, nome);
    atual->nota1 = n1;
    atual->nota2 = n2;
    atual->media = Media(n1, n2); // Recalcula a média
    printf("Dados atualizados com sucesso!\n");
}

// Função para listar todos os alunos cadastrados
void listar_Alunos() {
    node* atual = inicio; // Ponteiro para percorrer a lista
    printf("=== Lista de Alunos ===\n");
    
    while (atual) {
        // Exibe informações detalhadas do aluno e seus ponteiros da lista
        printf("Endereco atual: 0x%p\n", (void*)atual);
        printf("CPF: %lld\n", atual->cpf);
        printf("Nome: %s\n", atual->nome);
        printf("Nota1: %.2f | Nota2: %.2f | Media: %.2f\n", atual->nota1, atual->nota2, atual->media);
        printf("Anterior: 0x%p | Proximo: 0x%p\n\n", (void*)atual->anterior, (void*)atual->proximo);
        atual = atual->proximo; // Avança para o próximo aluno
    }
}

// Função para liberar a memória de toda a lista de alunos
void liberar_Lista() {
    node* atual = inicio; // Ponteiro para percorrer a lista
    while (atual) {
        node* temp = atual; // Armazena o nó atual temporariamente
        atual = atual->proximo; // Avança para o próximo nó
        free(temp); // Libera a memória do nó armazenado
    }
    inicio = NULL; // Reinicia o ponteiro da lista
}

int main() {
    
    int opcao;
    long long int cpf;
    char nome[100];
    float n1, n2;

    do {
        printf("\n======== MENU ========\n");
        printf("1 - Inserir Aluno\n");
        printf("2 - Remover Aluno\n");
        printf("3 - Editar Aluno\n");
        printf("4 - Listar Alunos\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("CPF: ");
                scanf("%lld", &cpf);
                printf("Nome: ");
                scanf(" %[^\n]", nome);
                printf("Nota 1: ");
                scanf("%f", &n1);
                printf("Nota 2: ");
                scanf("%f", &n2);
                inserir_Aluno(cpf, nome, n1, n2);
                break;

            case 2:
                printf("CPF do aluno a remover: ");
                scanf("%lld", &cpf);
                remover_Aluno(cpf);
                break;

            case 3:
                printf("CPF do aluno a editar: ");
                scanf("%lld", &cpf);
                printf("Novo nome: ");
                scanf(" %[^\n]", nome);
                printf("Nova nota 1: ");
                scanf("%f", &n1);
                printf("Nova nota 2: ");
                scanf("%f", &n2);
                editar_Aluno(cpf, nome, n1, n2);
                break;

            case 4:
                listar_Alunos();
                break;

            case 0:
                liberar_Lista();
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }
    } while(opcao != 0);
    return 0;
}
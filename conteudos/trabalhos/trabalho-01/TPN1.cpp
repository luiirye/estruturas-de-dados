#include <stdio.h>
#include <stdlib.h>

/*
Crie uma struct chamada Aluno que contenha os seguintes campos:
    
    - string nome com até 50 caracteres // ok
    - matricula (um número inteiro) // ok
    - nota 1 (ponto flutuante) // ok
    - nota 2 (ponto flutante) // ok
    (feito)
*/

/*
Implemente uma função chamada cadastrarAluno:
    
    - Não recebe parâmetros // ok
    - Retornar uma struct Aluno

Esta função deve solicitar ao usuário que insira as informações de um aluno,
criar uma struct Aluno com essas informações e retorná-la

    (feito)
*/

/*
Implemente uma função chamada calcularMedia que:

    - Receba um parâmetro do tipo Aluno // ok
    - Retorne um ponto flutuante representando a média // ok
    - Média deve ser calculada dentro da função // ok
*/

/*
Implemente uma função chamada imprimirAluno que:

    - Receba um parâmetro do tipo Aluno
    - Sem retorno

Esta função deve imprimir na tela os detalhes do aluno, incluindo nome,
matrícula, nota1, nota2 e média.
*/


// Estruturas (Structs)
struct Aluno{
    char nome[50];
    int matricula;
    float n1, n2;
};
typedef struct Aluno Aluno;

// Protótipos de funções
Aluno cadastrarAluno();
float calculaMedia(Aluno);
void imprimirAluno(Aluno);

// Função principal
int main(){

    Aluno aluno1, aluno2;

    aluno1 = cadastrarAluno();
    aluno2 = cadastrarAluno();

    imprimirAluno(aluno1);
    imprimirAluno(aluno2);

    return 0;
}

// Função para cadastrar um aluno
Aluno cadastrarAluno(){
    
    Aluno acesso; // variável para acessar a struct Aluno
    
    // Entradas solicitadas para o usuário
    printf("====================\n");
    printf("CADASTRO DE ALUNOS:\n");
    printf("Insira o nome do aluno:\n");
    scanf("%49s", &acesso.nome[50]);
    printf("Insira o numero de matricula desse aluno:\n");
    scanf("%d", &acesso.matricula);
    printf("Informe as notas desse aluno:\n");
    printf("Nota 1:\n");
    scanf("%f", &acesso.n1);
    printf("Nota 2:\n");
    scanf("%f", &acesso.n2);
    printf("ALuno cadastrado com sucesso!!\n");
    printf("====================\n");
}

// Função para calcular a média de um aluno
float calculaMedia(Aluno x){
    float media = ((x.n1 + x.n2) / 2);
    return media;
}

// Função que imprime as informações do aluno
void imprimirAluno(Aluno a){

    printf("====================\n");
    printf("INFORMACOES DO ALUNO:\n");
    printf("Nome: %c\n", a.nome);
    printf("Numero Matricula: %d\n", a.matricula);
    printf("Nota 1: %.1f\n", a.n1);
    printf("Nota 2: %.1f\n", a.n2);
    printf("Media : %.1f\n", calculaMedia);
    printf("====================\n");
}
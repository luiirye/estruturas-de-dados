#include <stdio.h>
//#include <stdlib.h>

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
    - Retornar uma struct Aluno // ok

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

typedef struct{

    char nome[50];
    int matricula;
    double nota1, nota2;
}Aluno;

// Protótipos das funções
void imprimeAluno(Aluno);
Aluno cadastrarAluno();
double calculaMedia(Aluno);

// Função Principal
int main(){
    
    Aluno aluno1, aluno2;

    aluno1 = cadastrarAluno();
    aluno2 = cadastrarAluno();

    imprimeAluno(aluno1);
    imprimeAluno(aluno2);

    return 0;
}

// Função para cadastrar um aluno
Aluno cadastrarAluno(){
    
    // Variável para ter acesso a struct Aluno
    Aluno aluno;

    // Entradas de dados pelo usuário
    printf("------------------\n");
    printf("Cadastro de Aluno:\n");
    printf("Nome do aluno:\n");
    scanf("%49s", &aluno.nome);
    
    printf("Codigo da Matricula:\n");
    scanf("%d", &aluno.matricula);
    
    printf("Nota 1 do Aluno:\n");
    scanf("%lf", &aluno.nota1);
    printf("Nota 2 do Aluno:\n");
    scanf("%lf", &aluno.nota2);
    printf("Aluno cadastrado com sucesso!\n");
    printf("------------------\n");
    return aluno;
}

// Função para calcular a média do aluno
double calculaMedia(Aluno al){
    double media = (al.nota1 + al.nota2) / 2;
    return media;
}

void imprimeAluno(Aluno al){
    
    // Chamada da função calcula media
    double media = calculaMedia(al);
    
    printf("------------------\n");
    printf("Informacoes do aluno:\n");
    printf("Nome do aluno: %s\n", al.nome);
    printf("Codigo de matricula: %d\n", al.matricula);
    printf("Nota 1: %.1lf\n", al.nota1);
    printf("Nota 2: %.1lf\n", al.nota2);
    printf("Media do Aluno: %.1lf\n", media);
    printf("------------------\n");
}
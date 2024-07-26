#include <stdio.h>
#include <stdlib.h>

struct Aluno
{
    char nome[50];
    int matricula;
    float nota1, nota2;

};typedef struct Aluno aluno;


/*cadastrarAluno que não receba parâmetros e retorne uma struct Aluno. 
Esta função deve solicitar ao usuário que insira as informações de um aluno, 
criar uma struct Aluno com essas informações e retorná-la.*/
aluno cadastrar_Aluno()
{
    struct Aluno aluno; // variável do tipo aluno para chamar a struct aluno e acessar
                        // as variáveis que tem nela.
    
    printf("===========================\n");    
    printf("Inserindo informações do aluno:\n");
    printf("Nome:\n");
    scanf("%49s", &aluno.nome);     
    printf("Matricula:\n");
    scanf("%d", &aluno.matricula);
    printf("Nota 1:\n");
    scanf("%f", &aluno.nota1);
    printf("Nota 2:\n");
    scanf("%f", &aluno.nota2);
    printf("informações inseridas.\n");
    printf("===========================\n");    
    return aluno;
}

/*função chamada calcularMedia que receba um parâmetro do tipo Aluno 
e retorne um número de ponto flutuante representando a média do aluno. 
A média deve ser calculada dentro desta função.*/

float calcular_media(aluno aluno)
{
    float media = (aluno.nota1 + aluno.nota2) / 2;

    return media;
}

/*função chamada imprimirAluno que receba um parâmetro do tipo Aluno e não retorne nada. 
Esta função deve imprimir na tela os detalhes do aluno, incluindo nome, matrícula, nota1, nota2 e média.*/

void imprimeir_aluno(aluno imprimir)
{
    //float final = calcular_media(imprimir);

    printf("===========================\n");
    printf("Informações ALuno\n");
    printf("Nome: %s\n", imprimir.nome);
    printf("Matricula: %d\n", imprimir.matricula);
    printf("Nota 1: %.2f\n", imprimir.nota1);
    printf("Nota 2: %.2f\n", imprimir.nota2);
    printf("Media: %.2f\n", calcular_media(imprimir));
    printf("===========================\n");
    
}

int main()
{
    struct Aluno aluno1, aluno2;

    aluno1 = cadastrar_Aluno();
    aluno2 = cadastrar_Aluno();

    imprimeir_aluno(aluno1);
    imprimeir_aluno(aluno2);
    
    return 0;
}
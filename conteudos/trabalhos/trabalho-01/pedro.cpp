#include <stdio.h>

typedef struct {

    char nome [50];
    int matricula;
    float nota1, nota2;

}aluno;

aluno CadastrarAluno();
float calcularMedia(aluno);
void imprimirAluno(aluno);

int main (){

    aluno aluno1,aluno2;

    aluno1 = CadastrarAluno();
    aluno2 = CadastrarAluno();

    imprimirAluno (aluno1);
    imprimirAluno (aluno2);

    return 0;
}

aluno CadastrarAluno(){

    aluno acesso;
    scanf("%s", &acesso.nome);
    scanf("%d", &acesso.matricula);
    scanf("%f", &acesso.nota1);
    scanf("%f", &acesso.nota2);
    return acesso;

};

float calcularMedia (aluno x){

    float media;
    media = (x.nota1 + x.nota2) / 2;
    return media;

}; 

void imprimirAluno (aluno x){

    float media = calcularMedia (x);
    printf ("Nome: %s\n", x.nome);
    printf ("Matricula: %d\n", x.matricula);
    printf ("Nota 1: %f\n", x.nota1);
    printf ("Nota 2: %f\n", x.nota2);
    printf ("Media: %f\n, media");

};
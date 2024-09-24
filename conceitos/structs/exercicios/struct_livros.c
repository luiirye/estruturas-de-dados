/*ExercÃ­cio 1: Cadastro de Livros

Crie uma struct Livro com os campos titulo, autor e ano. 
Escreva uma função cadastrarLivro que receba como parâmetro uma struct Livro e a armazene em um vetor de structs Livro. 
A funçao deve também imprimir os dados do livro cadastrado.

*/
#include <stdio.h>
#include <stdlib.h>

struct Livros
{
    char titulo[50];
    char autor[50];
    int ano;
    
}; typedef struct Livros livros; 


livros cadastrar_livros()
{
    livros livros;

    printf("Cadastrar Livros:\n");
    printf("Nome do livro:\n");
    scanf("%49s", &livros.titulo);
    printf("Nome do autor:\n");
    scanf("%49s", &livros.autor);
    printf("Ano do livro:\n");
    scanf("%d", livros.ano);

    return livros;

}   

void imprimir_livros(livros imprimir)
{
    printf("Livro: %s49", imprimir.titulo);
    printf("Autor: %s49", imprimir.autor);
    printf("Ano: %d", imprimir.ano);
}



int main()
{
    livros livros[10];
    
    int i;

    for (i = 0; i <10 ; i++)
    {
        livros[i] = cadastrar_livros();
        imprimir_livros(livros[i]);
    }
 
 
    return 0;
}
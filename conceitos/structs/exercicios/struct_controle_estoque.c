/*Exercício 2: Controle de Estoque

Crie uma struct Produto com os campos nome, quantidade e preco. 
Escreva uma função adicionarProduto que receba como parâmetro uma struct Produto e a adicione a um vetor de structs Produto. 
A função deve também imprimir os dados do produto adicionado.

*/

#include <stdio.h>
#include <stdlib.h>

struct Produto
{
    char nome[50];
    int quantidade;
    float preco;

}; typedef produto;

void adicionar_Produto(struct Produto produto)
{
    printf("adicionar produtos:\n");
    printf("Nome do produto:\n");
    scanf("%s49", produto.nome);
    printf("Quantidade do produto:\n");
    scanf("%d", produto.quantidade);
    printf("Preco do protudo:\n");
    scanf("%.2f", produto.preco);

    struct Produto imprime;

    printf("==================\n");
    printf("nome: %s49\n", imprime.nome);
    printf("qunatidade: %d\n", imprime.quantidade);
    printf("preco: %.2f\n", imprime.preco);
}

int main ()
{

    produto produtos [10];

    int i;

    for (i = 0; i <= 10; i++)
    {
        //printf(produtos[i]);
    }

    return 0;
}
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

void adicionar_Produto(produto produto)
{
    printf("adicionar produtos:\n");
    printf("Nome do produto:\n");
    scanf("%s49", produto.nome);
    printf("Quantidade do produto:\n");
    scanf("%d", produto.quantidade);
    printf("Preco do protudo:\n");
    scanf(".2f", produto.preco);

    produto imprime;
}

int main ()
{
    return 0;
}
/*
Escreva um programa que contenha duas variáveis inteiras.
Leia essas variáveis do teclado.
Em seguida, COMPARE seus ENDEREÇOS e exiba o CONTEÚDO do MAIOR ENDEREÇO.
*/

#include <stdio.h>

int main(){
    //Declarando variáveis inteiras
    int inteiro1, inteiro2;
    //Declarada variáveis inteiras

    //Entrada do teclado
    printf("Informe o valor do primeiro inteiro:\n");
    scanf("%d", &inteiro1);
    printf("Informe o valor do segundo inteiro:\n");
    scanf("%d", &inteiro2);

    //imprimindo o valor dos inteiros informados
    printf("Valor dos inteiros\n");
    printf("Primeiro inteiro = %d\n", inteiro1);
    printf("Segundo inteiro = %d\n", inteiro2);

    //Declarando ponteiros
    int *ponteiro_inteiro1, *ponteiro_inteiro2;
    
    //Ponteiros recebendo endereços das variáveis inteiras
    ponteiro_inteiro1 = &inteiro1;
    ponteiro_inteiro2 = &inteiro2;
    //endereços atribuídos

    //Imprimindo os enderecos dos inteiros
    printf("Enderecos dos inteiros:\n");
    printf("Endereco do primeiro inteiro = %p\n", ponteiro_inteiro1);
    printf("Endereco do segundo inteiro = %p\n", ponteiro_inteiro2);

    //Comparação entre endereços
    if (ponteiro_inteiro1 > ponteiro_inteiro2){
        printf("Conteudo do maior endereco = %d", *ponteiro_inteiro1);
    }
    else{
        printf("Conteudo do maior endereco = %d\n", *ponteiro_inteiro2);
    }

    return(0);
}
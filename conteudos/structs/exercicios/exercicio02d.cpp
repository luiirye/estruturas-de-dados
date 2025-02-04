#include <stdio.h>
#include <stdlib.h>

/*
Criar uma struct chamada Pessoa, com os seguintes membros:
    Nome - com até 40 caracteres;
    Altura - em cm;
    Peso - em Kg;
*/

/*
Elaborar um programa que inicializa um vetor do tipo Pessoa, com 5 elementos, receba do usuário as informações de cada pessoa;
Depois, o programa deve exibir na tela o IMC de cada uma e exibir a classificação de acordo com a tabela apresentada.
*/

// Criada estrutura para Pessoa
struct Pessoa{
    char nome_pessoa[40];
    int altura_pessoa; //em cm
    float peso_pessoa; // em kg;
}; typedef struct Pessoa Pessoa;
// é necessário apenas "Pessoa" para chamar a struct.


int main(){

    Pessoa p;
    //Pessoa vetor_pessoa[p];
    int i = 1;
    for(i; i < 5; i++){
        
        printf("Digite o nome da pessoa:\n");
        scanf("%39s", &p.nome_pessoa[40]);
        printf("Digite a altura da pessoa:\n");
        scanf("%d", &p.altura_pessoa);
        printf("Digite o peso da pessoa:\n");
        scanf("%f", &p.peso_pessoa);
        printf("\n");
        printf("Dados da pessoa %d:\n", i);
        printf("Nome = %39s\nAltura = %d\nPeso = %.2f\n", p.nome_pessoa[40], p.altura_pessoa, p.peso_pessoa);
        printf("\n");
    
    }

    

    return(0);
}
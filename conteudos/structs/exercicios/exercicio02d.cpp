#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
    float altura_pessoa; //em m;
    float peso_pessoa; // em kg;
}; typedef struct Pessoa Pessoa;
// é necessário apenas "Pessoa" para chamar a struct.

//protótipo de funções
float calcula_IMC(Pessoa p);
//void tabela_IMC(Pessoa p);

int main(){

    Pessoa v_pessoa[10];
    //int i = 0;

    for(int i = 0; i < 5; i++){

        //Inicializando o vetor da struct
        strcpy(v_pessoa[i].nome_pessoa, "NULL");
        v_pessoa[i].altura_pessoa = 0.0;
        v_pessoa[i].peso_pessoa = 0.0; 


        printf("Digite o nome da pessoa %d:\n", (i + 1));
        scanf("%s", &v_pessoa[i].nome_pessoa[0]);
        printf("Digite a altura da pessoa %d (em metros. ex: 1.10;1.20...):\n", (i + 1));
        scanf("%f", &v_pessoa[i].altura_pessoa);
        printf("Digite o peso da pessoa %d (em Quilos):\n", (i + 1));
        scanf("%f", &v_pessoa[i].peso_pessoa);
        printf("\n");
        printf("======================\n");
        printf("Dados da pessoa %d:\n", (i + 1));
        printf("Nome = %s.\nAltura = %.2f m.\nPeso = %.2f Kg.\n", v_pessoa[i].nome_pessoa, v_pessoa[i].altura_pessoa, v_pessoa[i].peso_pessoa);
        printf("IMC Pessoa %d:\n", (i + 1));
        calcula_IMC(v_pessoa[i]);
        printf("======================\n");
        //tabela_IMC(v_pessoa[i]);
        printf("\n");  
    }
    return(0);
}

//Função de cálculo de IMC
float calcula_IMC(Pessoa p){
    float resultado_imc;
    resultado_imc = (p.peso_pessoa/(p.altura_pessoa * p.altura_pessoa));
    printf("IMC = %.2f\n", resultado_imc);
    
    if(resultado_imc < 18.5){
        printf("Classificacao: MAGREZA.\nOBESIDADE GRAU 0.\n");
    }
    else if(resultado_imc > 18.5 && resultado_imc < 24.9){
        printf("Classificacao: NORMAl.\nOBESIDADE GRAU 0.\n");
    }
    else if(resultado_imc > 25.0 && resultado_imc < 29.9){
        printf("Classificacao: SOBREPESO.\nOBESIDADE GRAU 1 (I).\n");
    }
    else if(resultado_imc > 30.0 && resultado_imc < 39.9){
        printf("Classificacao: OBESIDADE.\nOBESIDADE GRAU 2 (II).\n");
    }
    else if(resultado_imc > 40.0){
        printf("Classificacao: OBESIDADE GRAVE.\nOBESIDADE GRAU 3 (III).\n");
    }
    return resultado_imc;
}


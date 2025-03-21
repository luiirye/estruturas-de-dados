#include <stdio.h>
#include <stdlib.h>

/*
Criar uma struct chamada Paralelepipedo, com os seguintes membros:
Largura L - em m.
Altura H - em m.
Comprimento C - em m.
Densidade D - em kg/m³.
*/

struct Paralelepipedo{
    float largura_l;
    float altura_h;
    float comprimento_c;
    float densidade_d;
};typedef struct Paralelepipedo Paralelepipedo;

/*
Elaborar um programa que inicializa uma variável do tipo Paralelepipedo, receba do usuário os valores
dos membros e possui três funções/métodos que recebem a variável como parâmetro.
*/

//Protótipos das funções
void calculaArea(Paralelepipedo p);
void calculaVolume(Paralelepipedo p);
void calculaMassa(Paralelepipedo p);

int main(){
    
    //Variável para acessar a struct;
    Paralelepipedo p; //acessa a struct paralelepipedo;
    
    //Entradas do usuário;
    printf("Digite o valor da largura:\n");
    scanf("%f", &p.largura_l);
    printf("Digite o valor da altura:\n");
    scanf("%f", &p.altura_h);
    printf("Digite o valor do comprimento:\n");
    scanf("%f", &p.comprimento_c);
    printf("Digite o valor da densidade:\n");
    scanf("%f", &p.densidade_d);

    printf("\n");

    //Impressão dos valores armazenados;
    printf("largura = %.2f\nAltura = %.2f\nComprimento = %.2f\nDensidade = %.2f\n", p.largura_l, p.altura_h, p.comprimento_c, p.densidade_d);
    
    printf("\n");

    //Chamada das funções de cálculo;

    calculaArea(p);
    calculaVolume(p);
    calculaMassa(p);

    return(0);
}

//Declaração das funções de cálculos;

void calculaArea(Paralelepipedo x){
    float area;
    float a, b, c;
    a = (2*x.largura_l*x.comprimento_c);
    b = (2*x.largura_l*x.altura_h);
    c = (2*x.comprimento_c*x.altura_h);
    area = (a + b + c);

    printf("Area Total = %.2f\n", area);
}

void calculaVolume(Paralelepipedo y){
    float volume;
    volume = (y.largura_l * y.comprimento_c * y.altura_h);

    printf("Volume Total = %.2f\n", volume);
}

void calculaMassa(Paralelepipedo z){
    float massa;
    float volume;
    volume = (z.largura_l * z.comprimento_c * z.altura_h);

    massa = (z.densidade_d * volume);

    printf("Massa Total = %.2f\n", massa);
}
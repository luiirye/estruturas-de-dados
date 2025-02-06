#include <stdio.h>
#include <stdlib.h>

/*
Altere a função calculaArea para que a mesma receba um ponteiro para pararalelepípedo.

-> FEITO

*/

/*
Qual a diferença conceitual entre passar um tipo Pararalelepípedo ou passar um ponteiro para pararalelepípedo?

Com ponteiro, é passado o endereço e o valor alterado pelo endereço.
Passando um tipo, estamos criando uma cópia da variável

*/

/*
Considere a função:
    
    calculaArea(Pararalelepipedo *p)

    De que forma a função deve ser alterada para acessarmos os dados para cálculo da área?
*/

struct Paralelepipedo{
    float largura_l;
    float altura_h;
    float comprimento_c;
    float densidade_d;
    float area;      // Area calculada;
    float volume;    // Volume calculado;
    float massa;     // Massa calculada;
};typedef struct Paralelepipedo Paralelepipedo;

//Protótipos das funções
void calculaArea(Paralelepipedo *p);
void calculaVolume(Paralelepipedo *p);
void calculaMassa(Paralelepipedo *p);

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
    printf("Posicao de memoria de p           = 0x%x\n", &p);
    printf("Posicao de memoria de Largura     = 0x%p\n", &p.largura_l);
    printf("Posicao de memoria de Altura      = 0x%p\n", &p.altura_h);
    printf("Posicao de memoria de Comprimento = 0x%p\n", &p.comprimento_c);
    printf("Posicao de memoria de Densidade   = 0x%p\n", &p.densidade_d);
    printf("\n");


    //Imprime o tamanho da estrutura e seus bytes em memória.
    //A função sizeof mostra quantos bytes tem determinada estrutura ou variável.
    printf("Tamanho da estrutura p:                     %d\n", sizeof(p));
    printf("Tamanho da estrutura paralelepipedo:        %d\n", sizeof(Paralelepipedo));
    /*printf("Tamanho da estrutura da funcao calculaArea: %f\n", sizeof(calculaArea(&p)));*/
    printf("\n");

    //Chamada das funções de cálculo;
    calculaArea(&p);
    calculaVolume(&p);
    calculaMassa(&p);

    //Impressão usando ponteiros
    printf("Area Total   = %.2f\n", p.area);
    printf("Volume Total = %.2f\n", p.volume);
    printf("Massa Total  = %.2f\n", p.massa);

    return(0);
}

//Declaração das funções de cálculos;

void calculaArea(Paralelepipedo *x){
    float area;
    float a, b, c;
    a = (2 * (x -> largura_l) * (x -> comprimento_c));
    b = (2 * (x -> largura_l) * (x -> altura_h));
    c = (2 * (x -> comprimento_c) * (x -> altura_h));
    area = (a + b + c);

    x -> area = area;
}

void calculaVolume(Paralelepipedo *y){
    float volume;
    volume = (y -> largura_l * y -> comprimento_c * y -> altura_h);

    y -> volume = volume;
}

void calculaMassa(Paralelepipedo *z){
    float massa;
    float volume;
    volume = (z -> largura_l * z -> comprimento_c * z -> altura_h);

    massa = (z -> densidade_d * volume);

    z -> massa = massa;
}
#include <stdlib.h>
#include <stdio.h>

struct Numeros_Complexos{
    float Real = 10.0;
    float Imaginario;

};
typedef struct Numeros_Complexos num_com;

int main(){

    //Declaração de ponteiro;
    num_com *pt_nc;
    //Inicializando ponteiro;
    num_com Num1;
    pt_nc = &Num1;
    //ponteiro recebe endereço de Num1;

    //Obtendo o endereço de uma variável específica;
    float *pnt = &Num1.Imaginario;

    printf("conteudo: %f\n", pt_nc -> Real);
    printf("Endereco: %p\n", &pt_nc -> Real);
    printf("Endereco espefico: %p\n", pnt);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

/*
Leia o valor dos lados de um triângulo retângulo e calcule e informe a sua área.
Sabendo: Área = (base*altura)/2 
*/

// protótipos das funções
int triangulo_retangulo(int, int);

int main(){
    
    int base, altura, area;

    printf("Base:\n");
    scanf("%d", &base);

    printf("Altura:\n");
    scanf("%d", &altura);

    area = triangulo_retangulo(base, altura);

    printf("Area do triangulo retangulo = %d\n", area);
    
    return 0;
}

int triangulo_retangulo(int a, int b){
    int area = (a * b) / 2;
    return area;
}

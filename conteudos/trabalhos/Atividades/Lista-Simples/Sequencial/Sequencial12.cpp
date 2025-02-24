#include <stdio.h>
#include <stdlib.h>

/*
Elabore um programa que calcule o volume de uma esfera de raio r, em que r é um
valor informado. Sabendo: V = (4/3) π³ onde π = 3.14
*/

double volume(double);

int main(){
    
    double raio, V;

    printf("Invorme o valor do raio:\n");
    scanf("%lf", &raio);

    V = volume(raio);

    printf("Volume da esfera de raio %.1lf = %.1lf\n", raio, V);
    
    return 0;
    
}

double volume(double r){
    double pi = 3.14;
    double v = (4.0/3.0) * pi * (r * r * r);
    
    return v;
}
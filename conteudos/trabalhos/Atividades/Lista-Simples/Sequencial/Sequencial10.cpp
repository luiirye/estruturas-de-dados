#include <stdio.h>
#include <stdlib.h>

/*
Elabore um programa que fornecida uma temperatura em graus Farenheit, informe
sua correspondente em graus Celsius. Sabendo: C = (5/9) (F – 32) 
*/

float temperatura(float);

int main(){
    
    float F, Temperatura;

    scanf("%f", &F);

    Temperatura = temperatura(F);
    
    printf("%.1f Graus Celsius\n", Temperatura);


    return 0;
}

float temperatura(float F){
    
    float C = (5.0/9.0);
    float farenheit = C * (F - 32);
    
    return farenheit;
}
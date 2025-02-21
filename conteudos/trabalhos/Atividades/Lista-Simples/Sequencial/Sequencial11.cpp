#include <stdio.h>
#include <stdlib.h>

/*
Elabore um programa que fornecida uma temperatura em graus Celsius, informe sua
correspondente em graus Farenheit. Sabendo: C = (9 * C / 5) + 32 
*/

float temperatura(float);

int main(){
    
    float F, Temperatura;

    scanf("%f", &F);

    Temperatura = temperatura(F);
    
    printf("%.1f Graus Celsius\n", Temperatura);

    return 0;
}

float temperatura(float C){
    return (9 * C / 5) + 32;
}
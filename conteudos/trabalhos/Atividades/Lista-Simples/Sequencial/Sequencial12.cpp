#include <stdio.h>
#include <stdlib.h>

/*
Elabore um programa que calcule o volume de uma esfera de raio r, em que r é um
valor informado. Sabendo: V = (4/3) π³ onde π = 3.14
*/

float volume(float);

int main(){
    return 0;
    
}

float volume(float r){
    float pi = 3.14;
    float v = (4.0/3.0) * pi * (r * r * r);
    
    return v;
}
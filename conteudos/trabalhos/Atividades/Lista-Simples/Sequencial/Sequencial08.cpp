#include <stdio.h>
#include <stdlib.h>

/*
Leia três números, calcule e escreva a soma e sua média. 
*/

int calculaMedia(int, int, int);
int soma(int, int, int);

int main(){
    
    int x, y, z, s, m;

    scanf("%d %d %d", &x, &y, &z);

    m = calculaMedia(x, y, z);
    s = soma(x, y, z);

    printf("X = %d\nY = %d\nZ = %d\n", x, y, z);
    printf("Soma de X + Y + Z = %d\n", s);
    printf("Media de X + Y + Z = %d\n", m);
    
    return 0;
}

int calculaMedia(int a, int b, int c){
    return (a + b + c) / 3;
}

int soma(int a, int b, int c){
    return a + b + c;
}
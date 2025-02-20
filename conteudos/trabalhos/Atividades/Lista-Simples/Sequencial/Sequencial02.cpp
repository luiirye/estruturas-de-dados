#include <stdio.h>
#include <stdlib.h>

/*
Leia um número, calcule e escreva seu dobro
*/

int dobro(int x);

int main(){
    
    int x, y;
    
    scanf("%d", &x);
    printf("Numero = %d\n", x);
    y = dobro(x);
    printf("Dobro = %d\n", y);
    
    return 0;
}

int dobro(int x){
    return x * 2;
}
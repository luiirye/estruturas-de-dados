#include <stdio.h>
#include <stdlib.h>

/*
Leia dois números, calcule e escreva a soma de seus quadrados.
*/

int soma_quadrados(int, int);

int main(){
    
    int x, y, q1;
    scanf("%d %d", &x, &y);
    
    printf("x = %d\ny = %d\n", x, y);

    q1 = soma_quadrados(x, y);

    printf("x ^ 2 + y ^ 2 = %d\n", q1);
    
    return 0;
}

int soma_quadrados(int a, int b){
    return ((a * a) + (b * b));
}

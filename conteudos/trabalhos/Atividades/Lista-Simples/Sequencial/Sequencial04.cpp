#include <stdio.h>
#include <stdlib.h>

/*
Leia dois valores numéricos, faça a operação de soma entre os 2 valores e apresente 
o resultado obtido.
*/

int soma(int, int);

int main(){

    int a, b, s;

    scanf("%d %d", &a, &b);
    printf("a = %d\nb = %d\n", a, b);

    s = soma(a, b);
    printf("a + b = %d\n", s);

    return 0;
}

int soma(int x, int y){
    return x + y;
}
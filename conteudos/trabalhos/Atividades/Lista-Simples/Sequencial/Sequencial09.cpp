#include <stdio.h>
#include <stdlib.h>

/*
Leia cinco números, calcule e escreva o valor que é a soma dos 3 primeiros, dividido
pelo 4º e multiplicado pelo 5º. 
*/

int soma(int, int, int, int, int);

int main(){
    
    int a, b, c, d, e, f;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    f = soma(a, b, c, d, e);

    printf("Calculo = %d\n", f);
    
    return 0;
}

int soma(int a, int b, int c, int d, int e){
    return ((a + b + c) / (d)) * e;
}
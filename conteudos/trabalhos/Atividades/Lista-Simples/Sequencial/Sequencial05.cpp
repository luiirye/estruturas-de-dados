#include <stdio.h>
#include <stdlib.h>

/*
Leia dois números, calcule e escreve o quadrado dos dois
*/

double quadrados(double);

int main(){
    
    double x, y;

    scanf("%lf %lf", &x, &y);
    printf("x = %.2lf\ny = %.2lf\n", x, y);

    printf("x ^ 2 = %.2lf\ny ^ 2 = %.2lf\n", quadrados(x), quadrados(y));
    
    return 0;
}

double quadrados(double x){
    return x * x;
}


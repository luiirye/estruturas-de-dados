#include <stdio.h>
#include <stdlib.h>

/*
Leia dois números, calcule a média e escreva os números e sua respectiva média. 
*/

int calculaMedia(int, int);

int main(){
    
    int x, y, z;
    scanf("%d %d", &x, &y);

    printf("x = %d\ny = %d\n", x, y);
    
    z = calculaMedia(x, y);

    printf("Media de x e y = %d\n", z);
    return 0;
}

int calculaMedia(int x, int y){
    
    int media = (x + y) / 2;
    
    return media;
}
#include <stdio.h>
#include <stdlib.h>

/*
Calcule e informe a média aritmética de 4 notas bimestrais informadas. 
*/

// protótipos de funções
float calculaMedia(float, float, float, float);

int main(){
    
    float a, b, c, d;
    float media;

    printf("Informe as notas:\n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);

    media = calculaMedia(a, b, c, d);

    printf("nota 1 = %.1f\nnota 2 = %.1f\nnota 3 = %.1f\nnota 4 = %.1f\n", a, b, c, d);
    printf("Media = %.1f\n", media);
    
    return 0;
}

float calculaMedia(float n1, float n2, float n3, float n4){
    
    float media = (n1 + n2 + n3 + n4) / 4.0; 
    
    return media;
}

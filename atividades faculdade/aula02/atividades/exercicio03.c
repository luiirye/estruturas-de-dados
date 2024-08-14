#include <stdio.h>
//#include <stdlib.h>
#include <math.h>

/*
Fa�a um programa que possua uma fun��o que
receba os valores a, b e c passados por valor, receba
tamb�m dois valores x1 e x2 passados por refer�ncia.
Em seguida, calcule e retorne as duas ra�zes da
equa��o do segundo grau nas vari�veis x1 e x2.
*/

float calcular_raizes(float a, float b, float c, float *x1, float *x2); // x1 e x2 será  uma referência para outra variável

int main()
{
    //variáveis para usar como parâmetro na função para o cálculo;
    float a, b, c;
    //variáveis que que passarão o endereço para as variáveis de referência;
    float x1, x2;

    printf("Valor de a:\n");
    scanf("%f", &a);
    printf("Valor de b:\n");
    scanf("%f", &b);
    printf("Valor de c:\n");
    scanf("%f", &c);


    calcular_raizes(a, b, c, &x1, &x2);

    printf("x1 = %.2f\n", x1);
    printf("x2 = %.2f\n", x2);

    /*Eu desisto da minha vida, vou trancar o curso.*/
    /*Eu não aguento mais*/
    
    return 0;
}

float calcular_raizes(float a, float b, float c, float *x1, float *x2)
{
    if (a == 0.0)
    {
        printf("Nao tem como calcular as raizes.\n");
        return 0;
    }

    float delta = b * b - 4 * a * c;

    if (delta < 0.0)
    {
        printf("Nao eh possivel calcular raizes negativas\n");
        return 0;
    }
    
    
    *x1 = (-b + sqrt(delta)) / (2 * a);
    *x2 = (-b - sqrt(delta)) / (2 * a);
    
    return 0;
}
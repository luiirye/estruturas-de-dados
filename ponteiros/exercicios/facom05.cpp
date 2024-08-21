/*
1- Faca um programa que leia dois valores inteiros 
2- chame uma func¸ao que receba estes 2 valores de entrada e retorne o maior valor na primeira variavel e o menor valor na
segunda variavel. 
3 -Escreva o conteudo das 2 variaveis na tela. 
*/

#include <stdio.h>
#include <stdlib.h>

int var_maior(int*, int*);

int var_maior(int *a, int *b)
{
    int aux;

    if (*b > *a)
    {
        aux = *a;
        *a = *b;
        *b = aux;

        printf("valor de a = %d valor de b = %d", *a, *b);
    }
    
    else{
        printf("valor de a = %d valor de b = %d", *a, *b);
    }

}
int main()
{
    int x,y;
    scanf("%d %d", &x, &y); 
    
    var_maior(&x,&y);
    
    return 0;
}
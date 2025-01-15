#include <stdio.h>

int main(){
    int y, *p, x;
    y = 0; /*variável y inicializada com 0*/
    printf("y = %d\n", y);
    p = &y; /*p inicializada com o endereço de y*/
    printf("p = %p\n", p);
    x = *p; /*x é inicializado com o conteúdo de p (0)*/
    printf("x = %d\n", x);
    x = 4; /*X recebe o valor 4*/
    printf("x = %d\n", x);
    (*p)++;/*o conteúdo de p (0) é incrementado e passa a valer 1*/
    printf("p = %d\n", *p);
    x--; /*x é decrementado e passa a valer 3*/
    printf("x = %d\n", x);
    (*p) += x; /*o conteúdo de p é somado com x alterando o valor de y, que passa a valer 4*/
    printf("p = %d\n", *p);
    printf("y = %d\n", y);
    return (0);
}
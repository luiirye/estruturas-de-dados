#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variável x
    int x = 10; //valor de x é 10

    int* p; // ponteiro p

    p = &x; // ponteiro p agora armazena / aponta o endereço de x;

    printf("valor de x: %d\n", x);
    printf("endereco de x: %p\n", &x);  
    printf("valor de ponteiro p: %p\n",  p);
    printf("valor de x usando o poneito p %d\n", *p);  
    
    return 0;
}
/*
o "*" é o conteúdo de um endereço;
*/
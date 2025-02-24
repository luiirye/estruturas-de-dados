#include <stdio.h>

int main(){
    
    int x = 2 ; // variável x inteira com valor 2
    int *ptr; // ponteiro de inteiro
    ptr = &x; // ptr recebe o endereço de x

    printf("\n Valor de X = %d", x);
    printf("\n Endereco de X = %d", &x);
    printf("\n Conteudo armazenado no ponteiro = %d", ptr);
    printf("\n Conteudo do local onde o ponteiro aponta = %d", *ptr);

    getchar();

    return 0;
}
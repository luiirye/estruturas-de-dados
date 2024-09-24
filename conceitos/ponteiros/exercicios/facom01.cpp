#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. 
Associe as variaveis aos ponteiros (use &). Modifique os valores de 
cada variavel usando os ponteiros. Imprima os valores das variáveis antes e ap ´ os a ´
modificac¸ao. 
*/

int main()
{
    int inteiro = 10;
    float fl = 12.5;
    char ch = 'L';
    
    int *p1 ; float *p2; char *p3;

    printf("valor inteiro = %d\nvalor float = %f\nvalor de char = %c\n", inteiro, fl, ch);

    //alterando valores com os ponteiros

    p1 = &inteiro; //ponteiro de inteiro recebe o endereço de inteiro = 10;
    p2 = &fl; //ponteiro de float recebe o endereço de fl = 12.5;
    p3 = &ch; //ponteiro de char recebe o endereço de ch = 'L';

    *p1 = inteiro + 20; // ponteiro modificou o valor do inteiro acessando o seu endereço e conteúdo.
    *p2 = fl * 2; // idem
    *p3 = 'A'; // idem

    printf("alterando valores com ponteiros.\n");
    printf("valor inteiro = %d\nvalor float = %f\nvalor de char = %c\n", *p1, *p2, *p3);

    return 0;
}
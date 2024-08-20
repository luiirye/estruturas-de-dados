/*
Um ponteiro pode ser usado para dizer a uma função onde ela deve depositar o
resultado de seus cálculos. Escreva uma função que converta segundos em horas,
minutos e segundos. A função recebe um inteiro segs e os endereços de três variáveis
inteiras, digamos h, m e s, e atribui valores a essas variáveis de modo que m e s sejam
menores que 60. Escreva também uma função main que use a função descrita.
*/

#include <stdio.h>

void converter_segundos(int segundos, int *h, int *m, int *s);
/*
Tinhamos declarado as funções como "int", mas a função apenas modifica o valor das variáveis.
Não retornando algum valor explícito, então trocamos para void.
*/
void converter_segundos(int segundos, int *h, int *m, int *s)
{
    *h = (segundos / 60 / 60);
    *m = (segundos / 60) % 60;
    *s = segundos % 60;

    //printf("");
}

int main()
{
    int x, h, m, s;
    
    printf("informe os segundos:\n");
    scanf("%d", &x);
    
    converter_segundos(x, &h, &m, &s);

    printf("Segundos informados: %d\n", x);
    //printf("Convertendo %d em horas, munitos e segundos: ", x);
    printf("%d horas : %d minutos : %d segundos\n", h, m, s);

    return 0;
}
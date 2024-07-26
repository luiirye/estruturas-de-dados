#include <stdio.h>
#include <stdlib.h>

int maior_numero(int a, int b);

int maior_numero(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    
    else
    {
        return b;
    }
}
       
int main()
{
    int x, y;
    
    printf("Informe dois numeros inteiros:\n");
    scanf("%d", &x);
    scanf("%d", &y);

    int maior = maior_numero(x, y);
    printf("o maior entre a e b eh: %d\n", maior);
    
    return 0;
}
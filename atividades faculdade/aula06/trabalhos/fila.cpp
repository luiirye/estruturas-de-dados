#include <stdio.h>
#include <stdlib.h>

struct Fila
{
    int num;
    struct Fila *prox;
};
typedef struct Fila node;

char menu();


int main ()
{
    return 0;
}

char menu()
{
    int opt;
    printf("1 - Exibir Fila\n");
    printf("2 - Inserir");
    printf("3 - Remover");
    printf("4 - Liberar Fila");
    printf("0 - Sair");
    scanf("%d", &opt);
    fflush(stdin);
    opt = tolower(opt);
    return opt;
}
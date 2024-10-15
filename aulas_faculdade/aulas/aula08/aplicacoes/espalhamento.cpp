#include <stdio.h>
#include <stdlib.h>

struct Lista{
    int valor;
    struct Lista *prox;
};
typedef struct Lista lista;

int main(){
    int x;
    scanf("%d", &x);
    while (menu)
    {
        switch (x)
        {
        case /* constant-expression */:
            /* code */
            break;
        
        default:
            break;
        }
    }
    
    return 0;
}

int menu(){
    int opt;
    printf("================\n");
    printf("1 - Inserir\n");
    printf("2 - Remover\n");
    printf("3 - Buscar\n");
    printf("4 - Imprimir\n");
    printf("5 - Finalizar");
    printf("================\n");
    scanf("%d", &opt);
    return opt;
}

/*função para alocar um node na memória*/
lista* aloca(){
    lista* aux;
    aux = (lista*)malloc(sizeof(lista));
    return aux;
}
/*Função de inserir início*/
lista* inserir(lista* l, int v){
    lista* novo = aloca();
    novo -> valor = v;
    novo -> prox = l -> prox;
    l -> prox = novo;
    return novo;    
}

lista* remover(lista* l, int v){
    lista* aux = NULL; //ponteiro auxiliar
    lista* p; //ponteiro para percorrer a lista

    //enquanto "p" for diferente de NULL e p que aponta para valor for diferente
    //do valor informado, auxiliar receberá p, e p recebera p que aponta para prox até encontrar o node correto.
    while (p != NULL && p->valor != v){
        aux = p;
        p = p -> prox;
    }
    //se "p" for NULO, retorna lista
    if (p == NULL){
        return l;
    }
    //se não, se aux for nulo, lista recebe p que aponta para prox, topo da lista.
    else if (aux == NULL){
        l = p -> prox;
    }
    //se aux não for nulo, ele aponta para prox, e quando apontar para o proximo
    //recebe "p" que aponta para proximo, guardando o valor encontrado
    else{
        aux -> prox = p -> prox;
    }
    //libera o node;
    free(p);
    //retorna lista;
    return l;
}

void imprime(lista* l){
    lista *aux;
    for (aux = l -> prox; aux != NULL; aux = aux -> prox){
        printf("valor: %d\n", l -> valor);
    }
}

lista* busca(lista* l, int v){
    lista* aux;
    aux = l -> prox;
    while (aux != NULL && aux->valor != v){
        aux = aux -> prox;
        return aux;
    }
}
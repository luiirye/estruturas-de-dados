#include <stdio.h>
#include <stdlib.h>

struct Lista{
    int valor;
    struct Lista *prox;
};
typedef struct Lista lista;

int menu();
lista* aloca();
lista* inserir(lista*, int);
lista* remover(lista*, int);
lista* busca(lista*, int);
void imprime(lista*);

int main(){
    lista* l = NULL;
    //lista iniciada vazia
    lista* aux; //ponteiro auxiliar
    int x; //variavel inteira auxiliar;
    int op; // variavel para opcao e utilizar o menu

    do{
        printf("MENU DE OPCOES\n");
        op = menu();

        switch(op){
            case 1:
                printf("Insira um valor:\n");
                scanf("%d", &x);
                l = inserir(l, x);
            break;

            case 2:
                printf("Digite um valor para ser removido:\n");
                scanf("%d", &x);
                l = remover(l, x);
            break;

            case 3:
                printf("Digite o numero para encontrar seu endereco:\n");
                scanf("%d", &x);
                busca(l, x);
            break;

            case 4:
                imprime(l);
            break;
            
            case 5:
                printf("Encerrando...\n");
                exit(0);
            break;
            default:
                printf("\nOpcao Invalida");
        }
        printf("\n\n\n");
        system("pause");
    } while (op != 5);
}

int menu(){
    int opt;
    printf("1 - Inserir\n");
    printf("2 - Remover\n");
    printf("3 - Busca\n");
    printf("4 - Imprime lista\n");
    printf("5 - Encerrar\n");
    fflush(stdin);
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
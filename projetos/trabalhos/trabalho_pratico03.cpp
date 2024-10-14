#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pilha{
    float num;
    struct Pilha *prox;
};
typedef struct Pilha node;

node* aloca();
node* push(node*, float);
node* pop(node*);
float operacao(float, float, char);
float resolver_operacao(char[]);


node* aloca(){
    node* aux = (node*) malloc(sizeof(node));
    return aux;
}

node* push (node* p, float v){

    node *novo = aloca();

    if(novo){
        novo -> num = v;
        novo -> prox = p;
        return novo;
    }
    
    else{
        printf("Erro de alocacao de memoria.\n");
        return NULL;
    }
    return novo;    
}

node* pop (node **p){

    node *remove = NULL;

    if(*p){
        remove = *p;
        *p = remove -> prox;
    }

    else{
        printf("\nPilha vazia.\n");
    }
    return remove;
}

float operacao(float a, float b, char x){
    switch (x)
    {
        case '+':
        return a + b;
        break;

        case '-':
        return a - b;
        break;

        case '/':
            if (b != 0)
            {
                printf("Nao da para fazer divisao por 0!!");
                return 0.0;
            }
        return a / b;  
        break;     
                
        case '*':
        return a * b;
        break;

        default:
        return 0.0;
    }
}

float resolver_operacao(char x[]){
    char *pt;
    float num;
    node *n1, *n2, *pilha = NULL;
    
    pt = strtok(x, " ");
    while (pt)
    {
        if (pt[0] == '+' || pt [0] == '-' || pt[0] == '/' || pt[0] == '*')
        {
            n1 = pop(&pilha);
            n2 = pop(&pilha);
            num = operacao(n2 -> num, n1 -> num, pt[0]);
            pilha = push(pilha, num);
            free(n1);
            free(n2);
        }
        else{
            num = strtol(pt, NULL, 10);
            pilha = push(pilha, num);
        }
        
        pt = strtok(NULL, " ");
    }

    n1 = pop(&pilha);
    num = n1 -> num;
    free(n1);
    return num;
}

int main(){
    
    char exp[50];
    printf("Digite a expressao: \n");
    scanf("%49s", exp);
    printf("Resultado da expressao: %s: \n", exp);
    return 0;
}


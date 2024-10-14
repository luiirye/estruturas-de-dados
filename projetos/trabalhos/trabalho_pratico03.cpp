#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Struct da pilha com seu ponteiro e variável float
struct Pilha{
    float num;
    struct Pilha *prox;
};
typedef struct Pilha node;
//struct apelidada "node"

/*Protótipos das funções utilizadas*/
node* aloca();
node* push(node*, float);
node* pop(node*);
float operacao(float, float, char);
float resolver_operacao(char[]);

/*Função para alocar um node dinâmicamente na memória*/
node* aloca(){
    node* aux = (node*) malloc(sizeof(node));
    return aux;
}

/*Função para empilhar um novo node*/
node* push (node* p, float v){

    //criado novo node para alocar dinâmicamente em memória
    //usando a função aloca;
    node *novo = aloca();
    
    //verifica se novo foi alocado, e se sim, empilha.
    if(novo != NULL){
        //novo node aponta para o numero e recebe a variável float "v";
        novo -> num = v;
        //novo aponta para prox que recebe pilha;
        novo -> prox = p;
        //retorna novo;
        return novo;
    }
    
    else{
        printf("Erro de alocacao de memoria.\n");
        return NULL;
    }
    return novo;    
}

//Função remove o node do topo e retorna o valor removido
//parâmetro ponteiro para ponteiro p
node* pop (node **p){

    node *remove = NULL;

    //Verifica se a pilha não está vazia
    if(*p != NULL){
        remove = *p;
        *p = remove -> prox;
    }
    //o node do topo da pilha é armazenado em remove
    //e o ponteiro p aponta para o priximo node da pilha.
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

float resolver_operacao(char x[]) {
  // Ponteiro para uma string que será usado para iterar sobre a expressão RPN
  char *pt;
  
  // Valor de ponto flutuante que será usado para armazenar o resultado de cada operação
  float num;
  
  // Ponteiros para nós que serão usados para armazenar os operandos das operações
  node *n1, *n2, *pilha = NULL;
  
  // Dividir a expressão RPN em tokens separados por espaços
  pt = strtok(x, " ");
  
  // Iterar sobre cada token da expressão RPN
  while (pt) {
    // Verificar se o token é um operador (+, -, /, *)
    if (pt[0] == '+' || pt[0] == '-' || pt[0] == '/' || pt[0] == '*') {
      // Remover os dois operandos mais recentes da pilha
      n1 = pop(&pilha);
      n2 = pop(&pilha);
      
      // Realizar a operação correspondente ao operador com os operandos
      num = operacao(n2->num, n1->num, pt[0]);
      
      // Adicionar o resultado à pilha
      pilha = push(pilha, num);
      
      // Liberar a memória dos operandos
      free(n1);
      free(n2);
    } else {
      // Converter a string para um valor de ponto flutuante
      num = strtol(pt, NULL, 10);
      
      // Adicionar o número à pilha
      pilha = push(pilha, num);
    }
    
    // Iterar para o próximo token
    pt = strtok(NULL, " ");
  }
  
  // Remover o resultado final da pilha
  n1 = pop(&pilha);
  
  // Armazenar o valor de ponto flutuante no resultado final
  num = n1->num;
  
  // Liberar a memória do resultado final
  free(n1);
  
  // Retornar o resultado final como um valor de ponto flutuante
  return num;
}

int main(){
    
    char exp[50];
    printf("Digite a expressao: \n");
    scanf("%49s", exp);
    printf("Resultado da expressao: %s: \n", exp);
    return 0;
}


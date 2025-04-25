#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// estrutura para as variáveis do aluno
// informações que serão armazenadas na lista duplamente encadeada
struct aluno{
    int matricula;
    char nome[30];
    float nota1, nota2, nota3;
};
typedef struct elemento* Lista; 

// estrutura para os ponteiros.
struct elemento{
    struct elemento *ant;
    aluno dados;
    struct elemento *prox;
}; 
typedef struct elemento Elem;

// protótipos de funções para validação
Elem *aloca();
Lista  *criaLista();
void liberaLista(Lista*);
int tamanhoLista(Lista*);
int listaVazia(Lista*);
int insereInicio(Lista*, struct aluno al);
int insereFinal(Lista* li, struct aluno al);

// teste. Aparentemente, precisa ser manipulada de outra meneira
// verificar como utilizar a função aloca
Elem *aloca(){
    Elem *aux = (Elem*)malloc(sizeof(Elem));
    aux->prox = NULL;
    aux->ant = NULL;
    return aux;
}

Lista  *criaLista(){
    Lista *li = (Lista*)malloc(sizeof(Lista));
    if(li != NULL){
        *li = NULL;
        return li;
    }
}

void liberaLista(Lista* li){
    if(li != NULL){ // verifica se a lista está ou não vazia
        Elem* node; // ponteiro auxiliar
        while((*li) != NULL){ // enquanto lista for diferente de NULL, quer dizer que a lista não está vazia, entra na estrura de repetição
            node = *li; // node auxiliar recebe o conteúdo da lista
            *li = (*li)->prox; // lista vai avançando para os próximos elementos
            free(node); // libera o elemento / node que ficou para trás.
        }
        // faz o loop até que todos os nodes tenham sido liberados.
    }
}

int tamanhoLista(Lista *li){
    if(li == NULL){
        return 0;
        // a lista está vazia.
    }

    int cont = 0; // variável para contar a quantidade de elementos / nodes presentes na lista.
    Elem* node = *li; // ponteiro auxiliar recebe todo o conteúdo da lista.
    
    while(node != NULL){
        cont++;
        node = node->prox;
    }
    return cont;
}

int listaVazia(Lista* li){
    if(li == NULL){ // se minha lista for vazia, retorna 1
        return 1;
    }

    if(*li == NULL){ // se o CONTEÚDO da minha lista for nulo, retorna 1
        return 1;
    }

    else{
        return 0; // retorna 0 caso a lista não esteja vazia
    }
}

/* inserções da lista

    inserção início
    inserção meio
    inserção final

*/
int insereInicio(Lista* li, struct aluno al){
    if(li == NULl){ 
        return 0; // lista não alocada, lista vazia
    }
    
    Elem* no = (Elem*) malloc (sizeof(Elem)); // aloca um novo node dinâmicamente

    if(no == NULL){
        return 0; // node não alocado
    }

    no->dados = al; // caso o novo node seja alocado, aponta para dados recebendo a cabeça da lista
    no->prox = (*li); // novo node aponta para o prox recebendo o proximo elemento
    no->ant = NULL; // anterior do novo node é NULL, pois está sendo inserido no início

    if(*li != NULL){  // verifica se a lista não é vazia
        (*li)->ant = no; // o anterior do novo node recebe no
        *li = no; // o anterior passa a ser o primeiro elemento da lista
        return 1;
    }
}

int insereFinal(Lista* li, struct aluno al){

}

int main(){
    
    Lista* li;
    
    //utilizando a função cria lista na Main
    li = criaLista();

    //utilizando a função libera lista na Main
    liberaLista(li);

    //utilizando a função tamanho da lista na Main
    int x = tamanhoLista(li);

    //utilizando a função lista vazia na main
    int y = listaVazia(Lista* li);
    if(listaVazia(li));

    int z = insereInicio(li, dados_aluno);


    return 0;
}
//Manipula��o de Listas usando aloca��o encadeada

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

//Defini��es
struct lista{
   int info;
   struct lista *prox;
};

typedef struct lista node;

//Prototipa��o das fun��es
char menu();
int listaVazia(node *);
node *aloca();
node *insereInicio (node *, int);
void imprimeLista(node *);
void destroiLista (node *);

//Programa Principal
int main(){
	setlocale(LC_ALL,"");
	node *lista = NULL;  //aponta para o in�cio da lista
   	node *aux;  //vari�vel auxiliar
   	int x;		//vari�vel auxiliar
   	char op;    //variavel que guarda a opcao do menu
   	do{
   	  	system("cls");
		printf("MENU DE OP��ES\n");
      	//a variavel op recebe a opcao do menu escolhida em menu()
      	op = menu();
      	switch(op){
         	case 'v': //verifica se a lista est� vazia
				x = listaVazia(lista);
				if (x)
 	  		   		printf("\nLista vazia");
  				else
	  				printf("\nLista n�o est� vazia");
            break;
         	case 'i': //insere no in�cio da lista
         		printf("\nQual valor deseja inserir na lista? ");
	         	scanf("%d",&x);
	         	lista = insereInicio (lista, x);
	        break;
         	case 'p': //imprime os elementos da lista
				imprimeLista(lista);
	        break;
         	case 'f': //finaliza o programa
				destroiLista (lista);
	        break;
         	default:
         		printf("\nOpcao invalida");
      	}
      	printf("\n\n\n");
      	system("pause");
   	} while (op != 'f');
}

char menu(){
	char op;
	printf("(V)Lista Vazia\n(I)Inserir\n(P)Imprime lista\n(F)Finaliza\nOpcao: ");
	fflush(stdin);
	scanf("%c",&op);
	op = tolower(op);
	return op;
}

int listaVazia(node *lista){ 
	if (lista == NULL)
		return 1;
	else
		return 0;
}

node *aloca(){
	node* aux;
	aux = (node*) malloc(sizeof(node));
	return aux;
}

node *insereInicio (node *lista, int valor) {
	node *novo;
	novo = aloca();
	if (novo == NULL) {
        printf("Erro de aloca��o de mem�ria!\n");
        exit(1);
    }
	novo->info = valor;
	novo->prox = lista;
	return(novo);
}

void imprimeLista(node *lista){
	node *aux;
	if (lista != NULL){
		printf("\nElementos da lista:\n");
		for (aux=lista; aux!=NULL; aux=aux->prox)
			printf("%d ", aux->info);
	}
	else
		printf("\nLista vazia");	
}

void destroiLista (node *lista) {
	if(!listaVazia(lista)){
		node *p=lista, *q;
		while (p != NULL) {
			q=p->prox; 	//guarda refer�ncia p/ o pr�ximo
			free(p); 	//libera a mem�ria apontada por p
			p=q; 		//faz p apontar para o pr�ximo
		}
		printf("\nLista destru�da com sucesso!");
	}
}


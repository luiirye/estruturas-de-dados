#include <stdio.h>
#include <stdlib.h>

struct ListaDuplamente{
    int numero;
    struct ListaDuplamente* proximo;
    struct ListaDuplamente* anterior;
};
typedef struct ListaDuplamente node;

int podeInserir(node* CABECA, node* novo){
	if(CABECA->proximo == NULL){
		return 1;
	}
	else{
		node* aux = CABECA->proximo;
		while(aux != NULL){
			if(aux->numero == novo->numero){
				return 0;
			}
			aux = aux->proximo;
		}
		return 1;
	}
}


void inserir(node* CABECA){
    
    // inserir no início.

    node* novo = (node*) malloc (sizeof(node));
    if(!novo){
        printf("Sem memoria.\n");
        exit(1);
    }

    printf("Informe um valor do node:\n");
    scanf("%d", &novo->numero);
    novo->anterior = NULL;
    novo->proximo = NULL;

    if(CABECA->proximo == NULL){
        CABECA->proximo = novo;
    }
    else{
        node *aux = CABECA->proximo;
        novo->proximo = aux;
        aux->anterior = novo;
        CABECA->proximo = novo;
    }

    /*
    
    inserir final
    
    else{
        node *aux = CABECA->proximo;
        
        while(aux->proximo != NULL){
            aux = aux->proximo;
        }

        aux->proximo = novo;

        
    }
    */
}

void imprime(node* CABECA){
    if(CABECA->proximo == NULL){
        printf("Lista vazia.\n");
    }
    else{
        node* aux = CABECA->proximo;
        while(aux != NULL){
            printf("Endereço: %p\n", aux);
            printf("valor: %d\n", aux->numero);
            printf("Anterior: %p\n", aux->anterior);
            printf("Proximo: %p\n", aux->proximo);
            aux = aux->proximo;
        }
    }
}

void remove(node* CABECA){
    if(CABECA->proximo == NULL){
        printf("Lista Vazia!!\n");
    }
    else{
        node* aux;
        aux = CABECA->proximo;
        CABECA->proximo = aux->proximo;
        free(aux);
        aux = CABECA->proximo;
        aux->anterior = NULL; 

        /*
        outra alternativa

        node* aux = CABECA->proximo;
        node* aux2 = aux->proximo;
        CABECA->proximo = aux2;
        free(aux);
        if(aux2 != NULL){
            aux2->anterior = NULL;
        }
        */

        /*
        else{
            node* aux = CABECA->proximo;
            while(aux->proximo != NULL){
                aux = aux->proximo;
            }

            node* aux2 = aux->anterior;
            free(aux);
            if(aux2 != NULL){
                aux2->proximo = NULL;
            }
            else{
            	CABECA->proximo = NULL;
        	}
        }
        */
    }
}

int main(){
    
    node* CABECA = (node*) malloc(sizeof(node));
    if(!CABECA){
        printf("Sem memoria.\n");
        exit(1);
    }

    CABECA->proximo = NULL;

    int opt;
    do{
        printf("1 - para Imprimr\n");
        printf("2 - para implementar\n");
        printf("3 - para Remover\n");
        printf("0 - para Sair\n");
        scanf("%d", &opt);
        switch(opt){
            case 1:
            printf("Imprimir\n");
            //função
            imprime(CABECA);
            break;

            case 2:
            printf("Implementar\n");
            //função
            inserir(CABECA);
            break;

            case 3:
            printf("remover\n");
            //função
            remove(CABECA);
            break;

            case 0:
            printf("Encerrando\n");
            break;
        }    
    } while (opt != 0);
}
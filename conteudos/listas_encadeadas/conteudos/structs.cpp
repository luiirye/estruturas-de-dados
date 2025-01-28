#include <stdio.h>

/*Declarações alternativas de structs*/

//typedef struct reg {
//   int         conteudo;
//   struct reg *prox;
//} celula;

//typedef struct reg celula;
//struct reg {
//   int     conteudo; 
//   celula *prox;
//};

typedef struct celula celula;
struct celula {
   int     conteudo;
   celula *prox;
}; 

/* Função recursiva de imprimir uma lista */
void imprime(celula *le){
    if(le != NULL){
        printf("%d\n", le -> conteudo);
        imprime (le -> prox);
    }
}

/* Versão interativa da função acima */

void imprime2 (celula *le) {
   celula *p;
   for (p = le; p != NULL; p = p->prox)
      printf ("%d\n", p->conteudo);
}

int main (void) {
   printf ("sizeof (celula) = %d\n", 
            sizeof (celula));
   
   return 0;
}


#include <stdio.h>
#include <string.h>

// Estrutura para representar uma peça de xadrez
typedef struct {
    char tipo; // 'K' para rei, 'Q' para rainha, 'R' para torre, etc.
    char cor; // 'B' para branco, 'P' para preto
    int x, y; // coordenadas da peça no tabuleiro
} Peca;

// Estrutura para representar o tabuleiro de xadrez
typedef struct {
    Peca pecas[32]; // 32 peças no total (16 brancas e 16 pretas)
    int turno; // 0 para branco, 1 para preto
} Tabuleiro;

// Função para inicializar o tabuleiro
void inicializarTabuleiro(Tabuleiro *tabuleiro) {
    // Inicializar peças brancas
    tabuleiro->pecas[0].tipo = 'R'; tabuleiro->pecas[0].cor = 'B'; tabuleiro->pecas[0].x = 0; tabuleiro->pecas[0].y = 0;
    tabuleiro->pecas[1].tipo = 'N'; tabuleiro->pecas[1].cor = 'B'; tabuleiro->pecas[1].x = 1; tabuleiro->pecas[1].y = 0;
    tabuleiro->pecas[2].tipo = 'B'; tabuleiro->pecas[2].cor = 'B'; tabuleiro->pecas[2].x = 2; tabuleiro->pecas[2].y = 0;
    tabuleiro->pecas[3].tipo = 'Q'; tabuleiro->pecas[3].cor = 'B'; tabuleiro->pecas[3].x = 3; tabuleiro->pecas[3].y = 0;
    tabuleiro->pecas[4].tipo = 'K'; tabuleiro->pecas[4].cor = 'B'; tabuleiro->pecas[4].x = 4; tabuleiro->pecas[4].y = 0;
    tabuleiro->pecas[5].tipo = 'B'; tabuleiro->pecas[5].cor = 'B'; tabuleiro->pecas[5].x = 5; tabuleiro->pecas[5].y = 0;
    tabuleiro->pecas[6].tipo = 'N'; tabuleiro->pecas[6].cor = 'B'; tabuleiro->pecas[6].x = 6; tabuleiro->pecas[6].y = 0;
    tabuleiro->pecas[7].tipo = 'R'; tabuleiro->pecas[7].cor = 'B'; tabuleiro->pecas[7].x = 7; tabuleiro->pecas[7].y = 0;

    // Inicializar peças pretas
    tabuleiro->pecas[8].tipo = 'R'; tabuleiro->pecas[8].cor = 'P'; tabuleiro->pecas[8].x = 0; tabuleiro->pecas[8].y = 7;
    tabuleiro->pecas[9].tipo = 'N'; tabuleiro->pecas[9].cor = 'P'; tabuleiro->pecas[9].x = 1; tabuleiro->pecas[9].y = 7;
    tabuleiro->pecas[10].tipo = 'B'; tabuleiro->pecas[10].cor = 'P'; tabuleiro->pecas[10].x = 2; tabuleiro->pecas[10].y = 7;
    tabuleiro->pecas[11].tipo = 'Q'; tabuleiro->pecas[11].cor = 'P'; tabuleiro->pecas[11].x = 3; tabuleiro->pecas[11].y = 7;
    tabuleiro->pecas[12].tipo = 'K'; tabuleiro->pecas[12].cor = 'P'; tabuleiro->pecas[12].x = 4; tabuleiro->pecas[12].y = 7;
        tabuleiro->pecas[13].tipo = 'B'; tabuleiro->pecas[13].cor = 'P'; tabuleiro->pecas[13].x = 5; tabuleiro->pecas[13].y = 7;
    tabuleiro->pecas[14].tipo = 'N'; tabuleiro->pecas[14].cor = 'P'; tabuleiro->pecas[14].x = 6; tabuleiro->pecas[14].y = 7;
    tabuleiro->pecas[15].tipo = 'R'; tabuleiro->pecas[15].cor = 'P'; tabuleiro->pecas[15].x = 7; tabuleiro->pecas[15].y = 7;

    // Inicializar peões brancos
    for (int i = 0; i < 8; i++) {
        tabuleiro->pecas[16 + i].tipo = 'P'; tabuleiro->pecas[16 + i].cor = 'B'; tabuleiro->pecas[16 + i].x = i; tabuleiro->pecas[16 + i].y = 1;
    }

    // Inicializar peões pretos
    for (int i = 0; i < 8; i++) {
        tabuleiro->pecas[24 + i].tipo = 'P'; tabuleiro->pecas[24 + i].cor = 'P'; tabuleiro->pecas[24 + i].x = i; tabuleiro->pecas[24 + i].y = 6;
    }

    tabuleiro->turno = 0; // Inicializar turno com branco
}

// Função para imprimir o tabuleiro
void imprimirTabuleiro(Tabuleiro *tabuleiro) {
    printf("  A B C D E F G H\n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", 8 - i);
        for (int j = 0; j < 8; j++) {
            int encontrado = 0;
            for (int k = 0; k < 32; k++) {
                if (tabuleiro->pecas[k].x == j && tabuleiro->pecas[k].y == i) {
                    printf("%c", tabuleiro->pecas[k].tipo);
                    encontrado = 1;
                    break;
                }
            }
            if (!encontrado) {
                printf("-");
            }
            printf(" ");
        }
        printf("\n");
    }
}

// Função para mover uma peça
void moverPeca(Tabuleiro *tabuleiro, int xOrigem, int yOrigem, int xDestino, int yDestino) {
    for (int i = 0; i < 32; i++) {
        if (tabuleiro->pecas[i].x == xOrigem && tabuleiro->pecas[i].y == yOrigem) {
            tabuleiro->pecas[i].x = xDestino;
            tabuleiro->pecas[i].y = yDestino;
            break;
        }
    }
    tabuleiro->turno = 1 - tabuleiro->turno; // Alternar turno
}

int main() {
    Tabuleiro tabuleiro;
    inicializarTabuleiro(&tabuleiro);

    while (1) {
        imprimirTabuleiro(&tabuleiro);
        printf("Turno do %c\n", tabuleiro.turno ? 'P' : 'B');
        printf("Digite a coordenada de origem (ex: A2): ");
        char origem[3];
        scanf("%2s", origem);
        int xOrigem = origem[0] - 'A';
        int yOrigem = 8 - (origem[1] - '1');

        printf("Digite a coordenada de destino (ex: A4): ");
        char destino[3];
        scanf("%2s", destino);
        int xDestino = destino[0] - 'A';
        int yDestino = 8 - (destino[1] - '1');

        moverPeca(&tabuleiro, xOrigem, yOrigem, xDestino, yDestino);
    }

    return 0;
}

// Não foi feito por mim.



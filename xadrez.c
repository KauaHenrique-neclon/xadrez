#include <stdio.h>

#define TamanhoTabuleiro 8

void moverBispo(int x, int y) {
    printf("Movimentação do Bispo a partir da casa (%d, %d):\n", x, y);
    // Diagonal para cima à esquerda
    for (int i = 1; i < TamanhoTabuleiro; i++) {
        if (x - i >= 0 && y - i >= 0) {
            printf("Bispo pode ir para (%d, %d)\n", x - i, y - i);
        }
    }
    // Diagonal para cima à direita
    for (int i = 1; i < TamanhoTabuleiro; i++) {
        if (x - i >= 0 && y + i < TamanhoTabuleiro) {
            printf("Bispo pode ir para (%d, %d)\n", x - i, y + i);
        }
    }
    // Diagonal para baixo à esquerda
    for (int i = 1; i < TamanhoTabuleiro; i++) {
        if (x + i < TamanhoTabuleiro && y - i >= 0) {
            printf("Bispo pode ir para (%d, %d)\n", x + i, y - i);
        }
    }
    // Diagonal para baixo à direita
    for (int i = 1; i < TamanhoTabuleiro; i++) {
        if (x + i < TamanhoTabuleiro && y + i < TamanhoTabuleiro) {
            printf("Bispo pode ir para (%d, %d)\n", x + i, y + i);
        }
    }
}

void moverTorre(int x, int y) {
    printf("Movimentação da Torre a partir da casa (%d, %d):\n", x, y);
    // Vertical para cima
    for (int i = 1; i < TamanhoTabuleiro; i++) {
        if (x - i >= 0) {
            printf("Torre pode ir para (%d, %d)\n", x - i, y);
        }
    }
    // Vertical para baixo
    for (int i = 1; i < TamanhoTabuleiro; i++) {
        if (x + i < TamanhoTabuleiro) {
            printf("Torre pode ir para (%d, %d)\n", x + i, y);
        }
    }
    // Horizontal para a esquerda
    for (int i = 1; i < TamanhoTabuleiro; i++) {
        if (y - i >= 0) {
            printf("Torre pode ir para (%d, %d)\n", x, y - i);
        }
    }
    // Horizontal para a direita
    for (int i = 1; i < TamanhoTabuleiro; i++) {
        if (y + i < TamanhoTabuleiro) {
            printf("Torre pode ir para (%d, %d)\n", x, y + i);
        }
    }
}

void moverRainha(int x, int y) {
    printf("Movimentação da Rainha a partir da casa (%d, %d):\n", x, y);
    moverBispo(x, y);
    moverTorre(x, y);
}

void moverCavalo(int x, int y) {
    printf("Movimentação do Cavalo a partir da casa (%d, %d):\n", x, y);
    int movimentos[8][2] = {
        {x + 2, y + 1}, {x + 2, y - 1},
        {x - 2, y + 1}, {x - 2, y - 1},
        {x + 1, y + 2}, {x + 1, y - 2},
        {x - 1, y + 2}, {x - 1, y - 2},
    };
    
    for (int i = 0; i < 8; i++) {
        int novoX = movimentos[i][0];
        int novoY = movimentos[i][1];
        if (novoX >= 0 && novoX < TamanhoTabuleiro && novoY >= 0 && novoY < TamanhoTabuleiro) {
            printf("Cavalo pode ir para (%d, %d)\n", novoX, novoY);
        }
    }
}

int main() {
    int x = 4, y = 4; // Posição inicial

    moverBispo(x, y);
    printf("\n");
    moverTorre(x, y);
    printf("\n");
    moverRainha(x, y);
    printf("\n");
    moverCavalo(x, y);

    return 0;
}

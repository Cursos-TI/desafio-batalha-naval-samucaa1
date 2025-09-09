#include <stdio.h>

#define TAM 10     // Tamanho fixo do tabuleiro 10x10
#define NAVIO 3    // Valor que representa navio
#define TAMANHO 3  // Tamanho fixo dos navios (3 posições)

int main() {
    // ============================
    // DECLARAÇÃO E INICIALIZAÇÃO
    // ============================
    int tabuleiro[TAM][TAM];

    // Inicializar tabuleiro com 0 (água)
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // ============================
    // POSICIONAMENTO DOS NAVIOS
    // ============================

    // Navio horizontal
    int linhaHorizontal = 2;
    int colunaHorizontal = 1;
    for (int i = 0; i < TAMANHO; i++) {
        tabuleiro[linhaHorizontal][colunaHorizontal + i] = NAVIO;
    }

    // Navio vertical
    int linhaVertical = 0;
    int colunaVertical = 5;
    for (int i = 0; i < TAMANHO; i++) {
        tabuleiro[linhaVertical + i][colunaVertical] = NAVIO;
    }

    // Navio diagonal principal (\)
    int linhaDiagonal1 = 4;
    int colunaDiagonal1 = 2;
    for (int i = 0; i < TAMANHO; i++) {
        tabuleiro[linhaDiagonal1 + i][colunaDiagonal1 + i] = NAVIO;
    }

    // Navio diagonal secundária (/)
    int linhaDiagonal2 = 7;
    int colunaDiagonal2 = 6;
    for (int i = 0; i < TAMANHO; i++) {
        tabuleiro[linhaDiagonal2 - i][colunaDiagonal2 + i] = NAVIO;
    }

    // ============================
    // EXIBIÇÃO DO TABULEIRO
    // ============================
    printf("=== Tabuleiro 10x10 ===\n\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

#define TAM 5      // Tamanho fixo do tabuleiro 5x5
#define NAVIO 3    // Valor que representa navio
#define TAMANHO 3  // Tamanho dos navios (3 posições)

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

    // Navio horizontal (linha fixa, colunas variando)
    int linhaHorizontal = 1;   // Linha inicial
    int colunaHorizontal = 0;  // Coluna inicial

    printf("Coordenadas do Navio Horizontal:\n");
    for (int i = 0; i < TAMANHO; i++) {
        tabuleiro[linhaHorizontal][colunaHorizontal + i] = NAVIO;
        printf("(%d, %d)\n", linhaHorizontal, colunaHorizontal + i);
    }

    // Navio vertical (coluna fixa, linhas variando)
    int linhaVertical = 0;     // Linha inicial
    int colunaVertical = 3;    // Coluna inicial

    printf("\nCoordenadas do Navio Vertical:\n");
    for (int i = 0; i < TAMANHO; i++) {
        tabuleiro[linhaVertical + i][colunaVertical] = NAVIO;
        printf("(%d, %d)\n", linhaVertical + i, colunaVertical);
    }

    // ============================
    // EXIBIÇÃO DO TABULEIRO
    // ============================
    printf("\n=== Tabuleiro 5x5 ===\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

#define TAM 5  // Para simplificação, habilidades serão exibidas em matrizes 5x5

int main() {
    // ============================
    // MATRIZES PARA HABILIDADES
    // ============================
    int cone[TAM][TAM];
    int cruz[TAM][TAM];
    int octaedro[TAM][TAM];

    // ============================
    // HABILIDADE EM CONE
    // ============================
    // Preencher tudo com 0
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            cone[i][j] = 0;
        }
    }

    // Criar padrão em cone
    // Linha 2 -> todos 1
    for (int j = 0; j < TAM; j++) {
        cone[2][j] = 1;
    }
    // Linha 1 -> colunas 1,2,3
    for (int j = 1; j <= 3; j++) {
        cone[1][j] = 1;
    }
    // Linha 0 -> coluna 2
    cone[0][2] = 1;

    // ============================
    // HABILIDADE EM CRUZ
    // ============================
    // Preencher tudo com 0
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            cruz[i][j] = 0;
        }
    }

    // Linha central inteira
    for (int j = 0; j < TAM; j++) {
        cruz[2][j] = 1;
    }
    // Coluna central inteira
    for (int i = 0; i < TAM; i++) {
        cruz[i][2] = 1;
    }

    // ============================
    // HABILIDADE EM OCTAEDRO
    // ============================
    // Preencher tudo com 0
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            octaedro[i][j] = 0;
        }
    }

    // Padrão em forma de diamante (octaedro)
    octaedro[0][2] = 1;
    octaedro[1][1] = octaedro[1][2] = octaedro[1][3] = 1;
    octaedro[2][2] = 1;
    octaedro[3][1] = octaedro[3][2] = octaedro[3][3] = 1;
    octaedro[4][2] = 1;

    // ============================
    // EXIBIÇÃO DAS MATRIZES
    // ============================
    printf("=== Habilidade em CONE ===\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }

    printf("\n=== Habilidade em CRUZ ===\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }

    printf("\n=== Habilidade em OCTAEDRO ===\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
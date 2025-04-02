#include <stdio.h>

int main()
{
    char tabuleiro[10][10]; // Tabuleiro 10x10
    int linha, coluna;

    // Inicializando o tabuleiro com água (-)
    for (linha = 0; linha < 10; linha++) {
        for (coluna = 0; coluna < 10; coluna++) {
            tabuleiro[linha][coluna] = '-';
        }
    }

    // Posicionando um navio na horizontal (linha 2)
    for (coluna = 2; coluna <= 5; coluna++) {
        tabuleiro[2][coluna] = 'N';
    }

    // Posicionando um navio na vertical (coluna 4)
    for (linha = 5; linha <= 8; linha++) {
        tabuleiro[linha][4] = 'N';
    }

    // Exibindo o tabuleiro
    printf("  A B C D E F G H I J\n"); // Cabeçalho das colunas
    for (linha = 0; linha < 10; linha++) {
        printf("%d ", linha + 1); // Numeração das linhas
        for (coluna = 0; coluna < 10; coluna++) {
            printf("%c ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}

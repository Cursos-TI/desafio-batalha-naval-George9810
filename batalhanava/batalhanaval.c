#include  <stdio.h>

int main () {

    #define tamanho_tabuleiro 10
    #define tamanho_navio 4


    int tabuleiro [tamanho_tabuleiro] [tamanho_tabuleiro] = {0};


    int x_horizontal = 2, y_horizontal = 3;
    int x_vertical = 5, y_vertical = 1;

    printf("cordenadas do navio horizontal:\n");
    for (int i = 0; i < tamanho_navio; i++) {

        int x = x_horizontal;
        int y = y_horizontal + i;

     tabuleiro [x][y] = 3;

        printf( "(%d, %d)\n", x, y);

    }

    return 0;
}
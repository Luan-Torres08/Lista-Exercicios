#include <stdio.h>

#define LIN 61
#define COL 10

void somaColunas(int M[LIN][COL]) {
    int i, j, soma;

    for (j = 0; j < COL; j++) {
        soma = 0;
        for (i = 0; i < LIN - 1; i++) {
            soma = soma + M[i][j];
        }
        M[LIN - 1][j] = soma;
    }
}

int main() {
    int M[LIN][COL];
    int i, j;

    for (i = 0; i < LIN - 1; i++) {
        for (j = 0; j < COL; j++) {
            M[i][j] = (i + j) % 10;
        }
    }

    somaColunas(M);

    printf("Soma de cada coluna (61a linha da matriz):\n");
    for (j = 0; j < COL; j++) {
        printf("Coluna %2d: %d\n", j + 1, M[LIN - 1][j]);
    }

    return 0;
}

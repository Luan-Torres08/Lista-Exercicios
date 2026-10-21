#include <stdio.h>

#define N 10

void imprimeMatriz(int A[N][N]) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }
}

void trocas(int A[N][N]) {
    int i, j, aux;
    int vetor[N];

    for (j = 0; j < N; j++) {
        aux = A[1][j];
        A[1][j] = A[7][j];
        A[7][j] = aux;
    }

    for (i = 0; i < N; i++) {
        aux = A[i][3];
        A[i][3] = A[i][9];
        A[i][9] = aux;
    }

    for (i = 0; i < N; i++) {
        aux = A[i][i];
        A[i][i] = A[i][N - 1 - i];
        A[i][N - 1 - i] = aux;
    }

    for (j = 0; j < N; j++) {
        vetor[j] = A[4][j];
    }
    for (j = 0; j < N; j++) {
        A[4][j] = A[j][9];
    }
    for (j = 0; j < N; j++) {
        A[j][9] = vetor[j];
    }
}

int main() {
    int A[N][N];
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            A[i][j] = i * N + j + 1;
        }
    }

    printf("Matriz original:\n");
    imprimeMatriz(A);

    trocas(A);

    printf("\nMatriz depois das trocas:\n");
    imprimeMatriz(A);

    return 0;
}

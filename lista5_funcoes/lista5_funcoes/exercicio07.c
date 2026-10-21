#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 500

void locacoesGratis(int A[], int B[]) {
    int i;
    for (i = 0; i < TAM; i++) {
        B[i] = A[i] / 15;
    }
}

int main() {
    int A[TAM], B[TAM];
    int i;

    srand(time(NULL));
    for (i = 0; i < TAM; i++) {
        A[i] = rand() % 101;
    }

    locacoesGratis(A, B);

    printf("Cliente | Filmes retirados | Locacoes gratis\n");
    for (i = 0; i < 10; i++) {
        printf("%7d | %16d | %15d\n", i + 1, A[i], B[i]);
    }

    return 0;
}

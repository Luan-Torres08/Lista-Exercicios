#include <stdio.h>

int main() {
    int A[6];
    int soma;
    int i;

    /* item a: atribuir os valores diretamente */
    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = 7;

    /* item b: soma de A[0] + A[1] + A[5] */
    soma = A[0] + A[1] + A[5];
    printf("A soma de A[0] + A[1] + A[5] e: %d\n", soma);

    /* item c: modificar a posicao 4 */
    A[4] = 100;

    /* item d: mostrar cada valor, um por linha */
    printf("Valores do vetor A:\n");
    for (i = 0; i < 6; i++) {
        printf("%d\n", A[i]);
    }

    return 0;
}

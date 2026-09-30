#include <stdio.h>

int main() {
    int vetor[10];
    int i, maior, posicaoMaior;

    for (i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    posicaoMaior = 0;

    for (i = 1; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicaoMaior = i;
        }
    }

    printf("\nValores do vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("%d\n", vetor[i]);
    }

    printf("\nMaior elemento: %d\n", maior);
    printf("Posicao do maior elemento: %d\n", posicaoMaior);

    return 0;
}

#include <stdio.h>

int main() {
    int vetor[10];
    int i, contador;

    contador = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0) {
            contador++;
        }
    }

    printf("Quantidade de valores pares: %d\n", contador);

    return 0;
}

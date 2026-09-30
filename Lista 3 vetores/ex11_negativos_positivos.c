#include <stdio.h>

int main() {
    float vetor[10];
    int i, contadorNegativos;
    float somaPositivos;

    contadorNegativos = 0;
    somaPositivos = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &vetor[i]);

        if (vetor[i] < 0) {
            contadorNegativos++;
        } else if (vetor[i] > 0) {
            somaPositivos = somaPositivos + vetor[i];
        }
    }

    printf("Quantidade de numeros negativos: %d\n", contadorNegativos);
    printf("Soma dos numeros positivos: %.2f\n", somaPositivos);

    return 0;
}

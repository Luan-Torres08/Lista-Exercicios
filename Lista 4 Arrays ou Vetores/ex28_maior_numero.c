#include <stdio.h>

int main() {
    int i;
    float numero, maior;

    printf("Digite o numero 1: ");
    scanf("%f", &maior);

    for (i = 2; i <= 10; i++) {
        printf("Digite o numero %d: ", i);
        scanf("%f", &numero);

        if (numero > maior) {
            maior = numero;
        }
    }

    printf("O maior numero informado foi: %.2f\n", maior);

    return 0;
}

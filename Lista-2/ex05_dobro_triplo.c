#include <stdio.h>

int main() {
    float numero, resultado;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    if (numero >= 0) {
        resultado = numero * 2;
    } else {
        resultado = numero * 3;
    }

    printf("O resultado e: %.2f\n", resultado);

    return 0;
}

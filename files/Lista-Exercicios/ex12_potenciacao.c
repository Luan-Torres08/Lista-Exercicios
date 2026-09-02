/* Compilar com: gcc ex12_potenciacao.c -o ex12 -lm */

#include <stdio.h>
#include <math.h>

int main() {
    float base, expoente, resultado;

    printf("Digite o primeiro numero (base): ");
    scanf("%f", &base);
    printf("Digite o segundo numero (expoente): ");
    scanf("%f", &expoente);

    resultado = pow(base, expoente);

    printf("O resultado e: %.2f\n", resultado);

    return 0;
}

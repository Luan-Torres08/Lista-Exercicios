/* Este programa usa a biblioteca math.h.
   Ao compilar no terminal, use: gcc ex11_quadrado_cubo_raizes.c -o ex11 -lm */

#include <stdio.h>
#include <math.h>

int main() {
    float numero, quadrado, cubo, raizQuadrada, raizCubica;

    printf("Digite um numero positivo maior que zero: ");
    scanf("%f", &numero);

    quadrado = numero * numero;
    cubo = numero * numero * numero;
    raizQuadrada = sqrt(numero);
    raizCubica = cbrt(numero);

    printf("O numero ao quadrado e: %.2f\n", quadrado);
    printf("O numero ao cubo e: %.2f\n", cubo);
    printf("A raiz quadrada e: %.2f\n", raizQuadrada);
    printf("A raiz cubica e: %.2f\n", raizCubica);

    return 0;
}

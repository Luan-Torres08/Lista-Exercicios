#include <stdio.h>

int main() {
    int n, i, soma;

    soma = 0;

    printf("Digite um numero inteiro positivo N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        soma = soma + i;
    }

    printf("A soma de 1 ate %d e: %d\n", n, soma);

    return 0;
}

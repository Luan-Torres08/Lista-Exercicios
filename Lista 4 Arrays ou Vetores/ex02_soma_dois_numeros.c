#include <stdio.h>

int main() {
    int a, b, soma;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    soma = a + b;

    printf("Primeiro numero: %d\n", a);
    printf("Segundo numero: %d\n", b);
    printf("Soma: %d\n", soma);

    return 0;
}

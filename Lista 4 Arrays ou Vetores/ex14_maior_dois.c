#include <stdio.h>

int main() {
    float a, b;

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    if (a > b) {
        printf("O maior numero e %.2f\n", a);
    } else {
        printf("O maior numero e %.2f\n", b);
    }

    return 0;
}

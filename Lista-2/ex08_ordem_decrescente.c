#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    printf("Digite o terceiro valor: ");
    scanf("%d", &c);

    if (a > b && a > c) {
        if (b > c) {
            printf("Ordem decrescente: %d, %d, %d\n", a, b, c);
        } else {
            printf("Ordem decrescente: %d, %d, %d\n", a, c, b);
        }
    } else if (b > a && b > c) {
        if (a > c) {
            printf("Ordem decrescente: %d, %d, %d\n", b, a, c);
        } else {
            printf("Ordem decrescente: %d, %d, %d\n", b, c, a);
        }
    } else {
        if (a > b) {
            printf("Ordem decrescente: %d, %d, %d\n", c, a, b);
        } else {
            printf("Ordem decrescente: %d, %d, %d\n", c, b, a);
        }
    }

    return 0;
}

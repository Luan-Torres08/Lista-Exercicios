#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("Digite o valor de C: ");
    scanf("%d", &c);

    if (a + b < c) {
        printf("A soma de A + B e menor que C.\n");
    } else {
        printf("A soma de A + B NAO e menor que C.\n");
    }

    return 0;
}

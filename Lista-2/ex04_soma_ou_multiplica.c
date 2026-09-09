#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    if (a == b) {
        c = a + b;
    } else {
        c = a * b;
    }

    printf("O resultado (C) e: %d\n", c);

    return 0;
}

#include <stdio.h>

int main() {
    int valor1, valor2;

    printf("Digite o primeiro valor (1 = verdadeiro, 0 = falso): ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor (1 = verdadeiro, 0 = falso): ");
    scanf("%d", &valor2);

    if (valor1 == 1 && valor2 == 1) {
        printf("Os dois valores sao VERDADEIROS.\n");
    } else if (valor1 == 0 && valor2 == 0) {
        printf("Os dois valores sao FALSOS.\n");
    } else {
        printf("Os valores sao diferentes entre si.\n");
    }

    return 0;
}

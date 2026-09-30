#include <stdio.h>

int main() {
    float a, b;
    float soma, subtracao, multiplicacao, divisao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    soma = a + b;
    subtracao = a - b;
    multiplicacao = a * b;

    printf("Soma: %.2f\n", soma);
    printf("Subtracao: %.2f\n", subtracao);
    printf("Multiplicacao: %.2f\n", multiplicacao);

    if (b != 0) {
        divisao = a / b;
        printf("Divisao: %.2f\n", divisao);
    } else {
        printf("Divisao: nao e possivel dividir por zero.\n");
    }

    return 0;
}

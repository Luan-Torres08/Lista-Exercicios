#include <stdio.h>

int main() {
    float a, b, resultado;
    char operacao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    printf("Digite a operacao desejada (+, -, *, /): ");
    scanf(" %c", &operacao);

    if (operacao == '+') {
        resultado = a + b;
        printf("Resultado: %.2f\n", resultado);
    } else if (operacao == '-') {
        resultado = a - b;
        printf("Resultado: %.2f\n", resultado);
    } else if (operacao == '*') {
        resultado = a * b;
        printf("Resultado: %.2f\n", resultado);
    } else if (operacao == '/') {
        if (b != 0) {
            resultado = a / b;
            printf("Resultado: %.2f\n", resultado);
        } else {
            printf("Erro: divisao por zero!\n");
        }
    } else {
        printf("Operacao invalida.\n");
    }

    return 0;
}

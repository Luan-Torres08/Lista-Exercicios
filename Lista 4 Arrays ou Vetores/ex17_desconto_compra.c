#include <stdio.h>

int main() {
    float valor, percentual, valorDesconto, valorFinal;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor);

    if (valor <= 100.0) {
        percentual = 0;
    } else if (valor <= 500.0) {
        percentual = 5;
    } else {
        percentual = 10;
    }

    valorDesconto = valor * (percentual / 100);
    valorFinal = valor - valorDesconto;

    printf("Valor original: %.2f\n", valor);
    printf("Percentual de desconto: %.0f%%\n", percentual);
    printf("Valor do desconto: %.2f\n", valorDesconto);
    printf("Valor final: %.2f\n", valorFinal);

    return 0;
}

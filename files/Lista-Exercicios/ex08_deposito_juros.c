#include <stdio.h>

int main() {
    float deposito, taxaJuros, rendimento, total;

    printf("Digite o valor do deposito: ");
    scanf("%f", &deposito);
    printf("Digite a taxa de juros (em %%): ");
    scanf("%f", &taxaJuros);

    rendimento = deposito * (taxaJuros / 100);
    total = deposito + rendimento;

    printf("O valor do rendimento e: %.2f\n", rendimento);
    printf("O valor total apos o rendimento e: %.2f\n", total);

    return 0;
}

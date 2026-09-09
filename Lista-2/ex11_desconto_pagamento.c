#include <stdio.h>

int main() {
    float preco, valorFinal;
    int codigo;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    printf("Digite o codigo da condicao de pagamento:\n");
    printf("1 - A vista em dinheiro ou cheque (10%% de desconto)\n");
    printf("2 - A vista no cartao de credito (15%% de desconto)\n");
    printf("3 - Em duas parcelas, sem juros\n");
    printf("4 - Em duas parcelas, com 10%% de acrescimo\n");
    scanf("%d", &codigo);

    if (codigo == 1) {
        valorFinal = preco - (preco * 0.10);
    } else if (codigo == 2) {
        valorFinal = preco - (preco * 0.15);
    } else if (codigo == 3) {
        valorFinal = preco;
    } else if (codigo == 4) {
        valorFinal = preco + (preco * 0.10);
    } else {
        printf("Codigo invalido!\n");
        valorFinal = 0;
    }

    printf("O valor final a ser pago e: %.2f\n", valorFinal);

    return 0;
}

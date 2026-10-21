#include <stdio.h>

int menuOpcoes() {
    int opcao;

    printf("\n--- Opcoes de pagamento ---\n");
    printf("1 - A vista com 10%% de desconto\n");
    printf("2 - Em duas vezes (preco da etiqueta)\n");
    printf("3 - De 3 ate 10 vezes com 3%% de juros ao mes (acima de R$ 100,00)\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    return opcao;
}

void aVista(float total) {
    float valor = total - (total * 0.10);
    printf("\nA vista com desconto: R$ %.2f\n", valor);
}

void emDuasVezes(float total) {
    printf("\nEm 2 vezes de R$ %.2f (total R$ %.2f)\n", total / 2, total);
}

void parcelado(float total) {
    int parcelas, i;
    float valorTotal, valorParcela;

    if (total <= 100) {
        printf("\nParcelamento so eh permitido para compras acima de R$ 100,00!\n");
        return;
    }

    printf("Em quantas vezes (3 a 10)? ");
    scanf("%d", &parcelas);

    if (parcelas < 3 || parcelas > 10) {
        printf("\nNumero de parcelas invalido!\n");
        return;
    }

    valorTotal = total;
    for (i = 0; i < parcelas; i++) {
        valorTotal = valorTotal * 1.03;
    }
    valorParcela = valorTotal / parcelas;

    printf("\n%d parcelas de R$ %.2f (total R$ %.2f)\n", parcelas, valorParcela, valorTotal);
}

int main() {
    float total;
    int opcao;

    printf("Digite o total gasto pelo cliente: R$ ");
    scanf("%f", &total);

    opcao = menuOpcoes();

    if (opcao == 1)
        aVista(total);
    else if (opcao == 2)
        emDuasVezes(total);
    else if (opcao == 3)
        parcelado(total);
    else
        printf("\nOpcao invalida!\n");

    return 0;
}

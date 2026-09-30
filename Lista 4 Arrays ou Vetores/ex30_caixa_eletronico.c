#include <stdio.h>

int main() {
    float saldo, valor;
    int opcao;

    saldo = 1000.0; /* saldo inicial informado pelo programa */
    opcao = 0;

    while (opcao != 4) {
        printf("\n--- Caixa Eletronico ---\n");
        printf("1. Consultar saldo\n");
        printf("2. Depositar\n");
        printf("3. Sacar\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Seu saldo atual e: %.2f\n", saldo);
                break;
            case 2:
                printf("Digite o valor a depositar: ");
                scanf("%f", &valor);
                saldo = saldo + valor;
                printf("Deposito realizado. Novo saldo: %.2f\n", saldo);
                break;
            case 3:
                printf("Digite o valor a sacar: ");
                scanf("%f", &valor);
                if (valor <= saldo) {
                    saldo = saldo - valor;
                    printf("Saque realizado. Novo saldo: %.2f\n", saldo);
                } else {
                    printf("Saldo insuficiente!\n");
                }
                break;
            case 4:
                printf("Saindo... Obrigado por usar o caixa eletronico!\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    }

    return 0;
}

#include <stdio.h>

int main() {
    char produto[50];
    int quantidade, continuar;
    float precoUnitario, totalVenda, faturamentoTotal, maiorVenda;
    int quantidadeVendas, totalProdutosVendidos;

    quantidadeVendas = 0;
    totalProdutosVendidos = 0;
    faturamentoTotal = 0;
    maiorVenda = 0;

    printf("Deseja registrar uma venda? (1-Sim / 0-Nao): ");
    scanf("%d", &continuar);

    while (continuar == 1) {
        printf("\nDigite o nome do produto: ");
        scanf("%s", produto);
        printf("Digite a quantidade vendida: ");
        scanf("%d", &quantidade);
        printf("Digite o preco unitario: ");
        scanf("%f", &precoUnitario);

        totalVenda = quantidade * precoUnitario;
        printf("Total desta venda: %.2f\n", totalVenda);

        quantidadeVendas++;
        totalProdutosVendidos = totalProdutosVendidos + quantidade;
        faturamentoTotal = faturamentoTotal + totalVenda;

        if (totalVenda > maiorVenda) {
            maiorVenda = totalVenda;
        }

        printf("Deseja registrar outra venda? (1-Sim / 0-Nao): ");
        scanf("%d", &continuar);
    }

    printf("\n--- Resumo do dia ---\n");
    printf("Quantidade de vendas realizadas: %d\n", quantidadeVendas);
    printf("Quantidade total de produtos vendidos: %d\n", totalProdutosVendidos);
    printf("Faturamento total: %.2f\n", faturamentoTotal);
    printf("Maior venda realizada: %.2f\n", maiorVenda);

    return 0;
}

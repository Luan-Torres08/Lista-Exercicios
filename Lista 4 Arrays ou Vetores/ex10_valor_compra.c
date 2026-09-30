#include <stdio.h>

int main() {
    char produto[50];
    int quantidade;
    float precoUnitario, total;

    printf("Digite o nome do produto: ");
    scanf("%s", produto);
    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);
    printf("Digite o preco unitario: ");
    scanf("%f", &precoUnitario);

    total = quantidade * precoUnitario;

    printf("O valor total da compra de %s e: %.2f\n", produto, total);

    return 0;
}

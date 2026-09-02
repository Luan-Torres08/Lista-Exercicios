#include <stdio.h>

int main() {
    float precoFabrica, percentualLucro, percentualImposto;
    float lucro, impostos, precoFinal;

    printf("Digite o preco de fabrica: ");
    scanf("%f", &precoFabrica);
    printf("Digite o percentual de lucro do distribuidor: ");
    scanf("%f", &percentualLucro);
    printf("Digite o percentual de impostos: ");
    scanf("%f", &percentualImposto);

    lucro = precoFabrica * (percentualLucro / 100);
    impostos = precoFabrica * (percentualImposto / 100);
    precoFinal = precoFabrica + lucro + impostos;

    printf("O lucro do distribuidor e: %.2f\n", lucro);
    printf("O valor dos impostos e: %.2f\n", impostos);
    printf("O preco final do veiculo e: %.2f\n", precoFinal);

    return 0;
}

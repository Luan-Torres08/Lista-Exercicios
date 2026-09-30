#include <stdio.h>

int main() {
    float distancia, combustivel, consumo;

    printf("Digite a distancia percorrida (em km): ");
    scanf("%f", &distancia);
    printf("Digite a quantidade de combustivel utilizada (em litros): ");
    scanf("%f", &combustivel);

    consumo = distancia / combustivel;

    printf("O consumo medio do veiculo e: %.2f km/L\n", consumo);

    return 0;
}

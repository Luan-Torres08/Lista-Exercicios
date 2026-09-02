#include <stdio.h>

int main() {
    float pesoSacoKg, racaoPorGatoGramas;
    float pesoSacoGramas, consumoDiario, consumoTotal, racaoRestante;

    printf("Digite o peso do saco de racao (em kg): ");
    scanf("%f", &pesoSacoKg);
    printf("Digite a quantidade de racao por gato (em gramas): ");
    scanf("%f", &racaoPorGatoGramas);

    pesoSacoGramas = pesoSacoKg * 1000;
    consumoDiario = racaoPorGatoGramas * 2; /* dois gatos */
    consumoTotal = consumoDiario * 5;       /* cinco dias */
    racaoRestante = pesoSacoGramas - consumoTotal;

    printf("Restarao %.2f gramas de racao apos 5 dias.\n", racaoRestante);

    return 0;
}

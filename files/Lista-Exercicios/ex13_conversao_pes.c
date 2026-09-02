#include <stdio.h>

int main() {
    float pes, polegadas, jardas, milhas;

    printf("Digite a medida em pes: ");
    scanf("%f", &pes);

    polegadas = pes * 12;
    jardas = pes / 3;
    milhas = pes / 5280.0; /* 1 milha = 1760 jardas = 5280 pes */

    printf("Em polegadas: %.2f\n", polegadas);
    printf("Em jardas: %.2f\n", jardas);
    printf("Em milhas: %.4f\n", milhas);

    return 0;
}

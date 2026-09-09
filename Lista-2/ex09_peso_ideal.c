#include <stdio.h>

int main() {
    float altura, pesoIdeal;
    char sexo;

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);
    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = (72.7 * altura) - 58;
    } else {
        pesoIdeal = (62.1 * altura) - 44.7;
    }

    printf("O peso ideal e: %.2f kg\n", pesoIdeal);

    return 0;
}

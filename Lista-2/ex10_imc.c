#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite o peso (em kg): ");
    scanf("%f", &peso);
    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("O IMC calculado e: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Condicao: Abaixo do peso\n");
    } else if (imc < 25) {
        printf("Condicao: Peso normal\n");
    } else if (imc < 30) {
        printf("Condicao: Acima do peso\n");
    } else {
        printf("Condicao: Obeso\n");
    }

    return 0;
}

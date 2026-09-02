#include <stdio.h>

int main() {
    float salarioBase, gratificacao, imposto, salarioReceber;

    printf("Digite o salario-base do funcionario: ");
    scanf("%f", &salarioBase);

    gratificacao = 50.0;
    imposto = salarioBase * 0.10;
    salarioReceber = salarioBase + gratificacao - imposto;

    printf("O salario a receber e: %.2f\n", salarioReceber);

    return 0;
}

#include <stdio.h>

int main() {
    float salarioBase, gratificacao, imposto, salarioReceber;

    printf("Digite o salario-base do funcionario: ");
    scanf("%f", &salarioBase);

    gratificacao = salarioBase * 0.05;
    imposto = salarioBase * 0.07;
    salarioReceber = salarioBase + gratificacao - imposto;

    printf("O salario a receber e: %.2f\n", salarioReceber);

    return 0;
}

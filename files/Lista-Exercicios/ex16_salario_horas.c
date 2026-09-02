#include <stdio.h>

int main() {
    float horasTrabalhadas, salarioMinimo;
    float valorHora, salarioBruto, imposto, salarioReceber;

    printf("Digite o numero de horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);
    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salarioMinimo);

    valorHora = salarioMinimo / 2;
    salarioBruto = horasTrabalhadas * valorHora;
    imposto = salarioBruto * 0.03;
    salarioReceber = salarioBruto - imposto;

    printf("O salario a receber e: %.2f\n", salarioReceber);

    return 0;
}

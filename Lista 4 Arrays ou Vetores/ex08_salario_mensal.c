#include <stdio.h>

int main() {
    float horas, valorHora, salarioBruto;

    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%f", &horas);
    printf("Digite o valor recebido por hora: ");
    scanf("%f", &valorHora);

    salarioBruto = horas * valorHora;

    printf("O salario bruto do funcionario e: %.2f\n", salarioBruto);

    return 0;
}

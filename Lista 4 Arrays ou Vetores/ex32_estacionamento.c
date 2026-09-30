#include <stdio.h>

int main() {
    int horaEntrada, horaSaida, horasPermanencia;
    float valorTotal;

    printf("Digite a hora de entrada (0 a 23): ");
    scanf("%d", &horaEntrada);
    printf("Digite a hora de saida (0 a 23): ");
    scanf("%d", &horaSaida);

    horasPermanencia = horaSaida - horaEntrada;

    if (horasPermanencia <= 0) {
        printf("Hora de saida invalida (deve ser maior que a hora de entrada).\n");
        return 0;
    }

    if (horasPermanencia == 1) {
        valorTotal = 10.0;
    } else {
        valorTotal = 10.0 + (horasPermanencia - 1) * 5.0;
    }

    printf("Tempo de permanencia: %d hora(s)\n", horasPermanencia);
    printf("Valor total a pagar: %.2f\n", valorTotal);

    return 0;
}

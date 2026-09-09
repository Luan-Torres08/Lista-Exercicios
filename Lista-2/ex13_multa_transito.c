#include <stdio.h>

int main() {
    float limiteVia, velocidadeRegistrada, percentualExcedido;

    printf("Digite o limite de velocidade da via: ");
    scanf("%f", &limiteVia);
    printf("Digite a velocidade registrada do veiculo: ");
    scanf("%f", &velocidadeRegistrada);

    if (velocidadeRegistrada <= limiteVia) {
        printf("Nao houve infracao.\n");
    } else {
        percentualExcedido = ((velocidadeRegistrada - limiteVia) / limiteVia) * 100;

        printf("Limite da via: %.2f km/h\n", limiteVia);
        printf("Velocidade registrada: %.2f km/h\n", velocidadeRegistrada);
        printf("Percentual excedido: %.2f%%\n", percentualExcedido);

        if (percentualExcedido <= 20) {
            printf("Classificacao: infracao media\n");
        } else if (percentualExcedido <= 50) {
            printf("Classificacao: infracao grave\n");
        } else {
            printf("Classificacao: infracao gravissima\n");
        }

        if (velocidadeRegistrada > 120) {
            printf("ALERTA: velocidade extremamente elevada!\n");
        }
    }

    return 0;
}

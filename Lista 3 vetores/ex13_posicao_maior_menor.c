#include <stdio.h>

int main() {
    float valores[5];
    float maior, menor;
    int posicaoMaior, posicaoMenor;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &valores[i]);
    }

    maior = valores[0];
    menor = valores[0];
    posicaoMaior = 0;
    posicaoMenor = 0;

    for (i = 1; i < 5; i++) {
        if (valores[i] > maior) {
            maior = valores[i];
            posicaoMaior = i;
        }
        if (valores[i] < menor) {
            menor = valores[i];
            posicaoMenor = i;
        }
    }

    printf("O maior valor (%.2f) esta na posicao %d\n", maior, posicaoMaior);
    printf("O menor valor (%.2f) esta na posicao %d\n", menor, posicaoMenor);

    return 0;
}

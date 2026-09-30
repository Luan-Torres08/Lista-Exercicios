#include <stdio.h>

int main() {
    int vetor[8];
    int x, y;
    int i;

    for (i = 0; i < 8; i++) {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Digite a posicao X (0 a 7): ");
    scanf("%d", &x);
    printf("Digite a posicao Y (0 a 7): ");
    scanf("%d", &y);

    printf("A soma dos valores nas posicoes %d e %d e: %d\n", x, y, vetor[x] + vetor[y]);

    return 0;
}

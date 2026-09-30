#include <stdio.h>

int main() {
    float notas[15];
    float soma, media;
    int i;

    soma = 0;

    for (i = 0; i < 15; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma = soma + notas[i];
    }

    media = soma / 15;

    printf("A media geral da turma e: %.2f\n", media);

    return 0;
}

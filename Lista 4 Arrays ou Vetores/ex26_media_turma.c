#include <stdio.h>

int main() {
    int quantidadeAlunos, i;
    float nota, soma, media;

    soma = 0;

    printf("Digite a quantidade de alunos da turma: ");
    scanf("%d", &quantidadeAlunos);

    for (i = 1; i <= quantidadeAlunos; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);
        soma = soma + nota;
    }

    media = soma / quantidadeAlunos;

    printf("A media geral da turma e: %.2f\n", media);

    return 0;
}

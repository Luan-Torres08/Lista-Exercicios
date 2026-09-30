#include <stdio.h>

int main() {
    int quantidadeAlunos, i;
    char nome[50];
    float nota1, nota2, media;
    float somaMedias, maiorMedia, menorMedia;
    int aprovados, recuperacao, reprovados;

    somaMedias = 0;
    aprovados = 0;
    recuperacao = 0;
    reprovados = 0;
    maiorMedia = 0;
    menorMedia = 0;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &quantidadeAlunos);

    for (i = 1; i <= quantidadeAlunos; i++) {
        printf("\n--- Aluno %d ---\n", i);
        printf("Nome: ");
        scanf("%s", nome);
        printf("Nota da primeira avaliacao: ");
        scanf("%f", &nota1);
        printf("Nota da segunda avaliacao: ");
        scanf("%f", &nota2);

        media = (nota1 + nota2) / 2;
        somaMedias = somaMedias + media;

        if (i == 1) {
            maiorMedia = media;
            menorMedia = media;
        } else {
            if (media > maiorMedia) {
                maiorMedia = media;
            }
            if (media < menorMedia) {
                menorMedia = media;
            }
        }

        if (media >= 7) {
            printf("Situacao: Aprovado\n");
            aprovados++;
        } else if (media >= 5) {
            printf("Situacao: Recuperacao\n");
            recuperacao++;
        } else {
            printf("Situacao: Reprovado\n");
            reprovados++;
        }
    }

    printf("\n--- Resultado final da turma ---\n");
    printf("Quantidade de alunos: %d\n", quantidadeAlunos);
    printf("Quantidade de aprovados: %d\n", aprovados);
    printf("Quantidade em recuperacao: %d\n", recuperacao);
    printf("Quantidade de reprovados: %d\n", reprovados);
    printf("Media geral da turma: %.2f\n", somaMedias / quantidadeAlunos);
    printf("Maior media: %.2f\n", maiorMedia);
    printf("Menor media: %.2f\n", menorMedia);

    return 0;
}

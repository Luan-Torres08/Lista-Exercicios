#include <stdio.h>

int main() {
    int anoNascimento, anoAtual, idade, idadeEm2050;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    idade = anoAtual - anoNascimento;
    idadeEm2050 = 2050 - anoNascimento;

    printf("A idade da pessoa e: %d anos\n", idade);
    printf("Em 2050 essa pessoa tera: %d anos\n", idadeEm2050);

    return 0;
}

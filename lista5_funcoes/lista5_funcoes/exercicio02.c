#include <stdio.h>

void imprimeMes(int mes) {
    switch (mes) {
        case 1:  printf("janeiro - 31 dias\n"); break;
        case 2:  printf("fevereiro - 28 dias (29 em ano bissexto)\n"); break;
        case 3:  printf("marco - 31 dias\n"); break;
        case 4:  printf("abril - 30 dias\n"); break;
        case 5:  printf("maio - 31 dias\n"); break;
        case 6:  printf("junho - 30 dias\n"); break;
        case 7:  printf("julho - 31 dias\n"); break;
        case 8:  printf("agosto - 31 dias\n"); break;
        case 9:  printf("setembro - 30 dias\n"); break;
        case 10: printf("outubro - 31 dias\n"); break;
        case 11: printf("novembro - 30 dias\n"); break;
        case 12: printf("dezembro - 31 dias\n"); break;
        default: printf("Numero invalido! Digite de 1 a 12.\n");
    }
}

int main() {
    int numero;

    printf("Digite um numero de 1 a 12: ");
    scanf("%d", &numero);

    imprimeMes(numero);

    return 0;
}

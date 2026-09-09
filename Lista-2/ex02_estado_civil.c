#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    char sexo;
    char estadoCivil[20];
    float tempoCasamento;

    printf("Digite o nome: ");
    scanf("%s", nome);

    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);

    printf("Digite o estado civil (SOLTEIRA, CASADA, etc): ");
    scanf("%s", estadoCivil);

    if (sexo == 'F' && strcmp(estadoCivil, "CASADA") == 0) {
        printf("Digite o tempo de casamento (em anos): ");
        scanf("%f", &tempoCasamento);
        printf("Tempo de casamento: %.1f anos\n", tempoCasamento);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int voto;
    int votosCandidato1, votosCandidato2, votosCandidato3, totalVotos;

    votosCandidato1 = 0;
    votosCandidato2 = 0;
    votosCandidato3 = 0;
    totalVotos = 0;

    printf("Digite os votos (1, 2 ou 3). Digite 0 para encerrar a votacao.\n");

    printf("Voto: ");
    scanf("%d", &voto);

    while (voto != 0) {
        if (voto == 1) {
            votosCandidato1++;
            totalVotos++;
        } else if (voto == 2) {
            votosCandidato2++;
            totalVotos++;
        } else if (voto == 3) {
            votosCandidato3++;
            totalVotos++;
        } else {
            printf("Voto invalido!\n");
        }

        printf("Voto: ");
        scanf("%d", &voto);
    }

    printf("\nVotos do candidato 1: %d\n", votosCandidato1);
    printf("Votos do candidato 2: %d\n", votosCandidato2);
    printf("Votos do candidato 3: %d\n", votosCandidato3);
    printf("Total de votos: %d\n", totalVotos);

    if (votosCandidato1 > votosCandidato2 && votosCandidato1 > votosCandidato3) {
        printf("Candidato vencedor: Candidato 1\n");
    } else if (votosCandidato2 > votosCandidato1 && votosCandidato2 > votosCandidato3) {
        printf("Candidato vencedor: Candidato 2\n");
    } else if (votosCandidato3 > votosCandidato1 && votosCandidato3 > votosCandidato2) {
        printf("Candidato vencedor: Candidato 3\n");
    } else {
        printf("Houve empate entre os candidatos.\n");
    }

    return 0;
}

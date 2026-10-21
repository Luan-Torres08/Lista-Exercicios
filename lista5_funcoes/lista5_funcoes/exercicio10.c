#include <stdio.h>
#include <time.h>

void calculaIdade(int dia, int mes, int ano) {
    int diaAtual, mesAtual, anoAtual;
    int anos, meses, dias;
    time_t agora;
    struct tm *data;

    agora = time(NULL);
    data = localtime(&agora);
    diaAtual = data->tm_mday;
    mesAtual = data->tm_mon + 1;
    anoAtual = data->tm_year + 1900;

    anos = anoAtual - ano;
    meses = mesAtual - mes;
    dias = diaAtual - dia;

    if (dias < 0) {
        dias = dias + 30;
        meses = meses - 1;
    }
    if (meses < 0) {
        meses = meses + 12;
        anos = anos - 1;
    }

    printf("\nIdade: %d anos, %d meses e %d dias\n", anos, meses, dias);
    printf("Em meses: %d\n", anos * 12 + meses);
    printf("Em dias (aproximado): %d\n", anos * 365 + meses * 30 + dias);
}

int main() {
    int dia, mes, ano;

    printf("Digite a data de nascimento (dd mm aaaa): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    calculaIdade(dia, mes, ano);

    return 0;
}

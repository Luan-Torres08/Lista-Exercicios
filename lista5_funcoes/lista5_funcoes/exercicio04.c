#include <stdio.h>

#define PI 3.1414592

float volumeCilindro(float altura, float raio) {
    float volume;
    volume = PI * raio * raio * altura;
    return volume;
}

int main() {
    float altura, raio;

    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);
    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);

    printf("Volume do cilindro: %.2f\n", volumeCilindro(altura, raio));

    return 0;
}

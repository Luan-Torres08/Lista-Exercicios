#include <stdio.h>

#define PI 3.1414592

float volumeEsfera(float raio) {
    float volume;
    volume = (4.0 / 3.0) * PI * raio * raio * raio;
    return volume;
}

int main() {
    float raio;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    printf("Volume da esfera: %.2f\n", volumeEsfera(raio));

    return 0;
}

#include <stdio.h>

float fahrenheitParaCelsius(float f) {
    float c;
    c = (f - 32.0) * (5.0 / 9.0);
    return c;
}

int main() {
    float f, c;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &f);

    c = fahrenheitParaCelsius(f);

    printf("%.2f F = %.2f C\n", f, c);

    return 0;
}

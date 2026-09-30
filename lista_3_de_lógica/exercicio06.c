#include <stdio.h>

int main(void) {
    float raio, area;
    float pi = 3.14159;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    area = pi * raio * raio;

    printf("Área do círculo: %.2f\n", area);

    return 0;
}

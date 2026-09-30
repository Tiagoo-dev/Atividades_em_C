#include <stdio.h>

int main(void) {
    float base, altura, area;

    printf("Digite a base do retângulo: ");
    scanf("%f", &base);
    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);

    area = base * altura;

    printf("Área do retângulo: %.2f\n", area);

    return 0;
}

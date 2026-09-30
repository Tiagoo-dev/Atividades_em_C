#include <stdio.h>

int main(void) {
    float distancia, litros, consumo;

    printf("Digite a distância percorrida em km: ");
    scanf("%f", &distancia);
    printf("Digite a quantidade de combustível utilizada em litros: ");
    scanf("%f", &litros);

    if (litros > 0) {
        consumo = distancia / litros;
        printf("Consumo médio: %.2f km/L\n", consumo);
    } else {
        printf("A quantidade de combustível deve ser maior que zero.\n");
    }

    return 0;
}

#include <stdio.h>

int main(void) {
    float v[5];
    int i, posMaior = 0, posMenor = 0;

    for (i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &v[i]);
    }

    for (i = 1; i < 5; i++) {
        if (v[i] > v[posMaior]) {
            posMaior = i;
        }
        if (v[i] < v[posMenor]) {
            posMenor = i;
        }
    }

    printf("\nMaior valor: %.2f (posicao %d)\n", v[posMaior], posMaior);
    printf("Menor valor: %.2f (posicao %d)\n", v[posMenor], posMenor);

    return 0;
}

#include <stdio.h>

int main(void) {
    float v[5];
    float maior, menor, soma = 0, media;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &v[i]);
        soma = soma + v[i];
    }

    maior = v[0];
    menor = v[0];

    for (i = 1; i < 5; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
        if (v[i] < menor) {
            menor = v[i];
        }
    }

    media = soma / 5;

    printf("\nValores lidos: ");
    for (i = 0; i < 5; i++) {
        printf("%.2f ", v[i]);
    }

    printf("\nMaior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);
    printf("Media dos valores: %.2f\n", media);

    return 0;
}

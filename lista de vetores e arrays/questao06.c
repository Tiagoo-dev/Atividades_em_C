#include <stdio.h>

int main(void) {
    int v[10];
    int i, maior, menor;

    for (i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    maior = v[0];
    menor = v[0];

    for (i = 1; i < 10; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
        if (v[i] < menor) {
            menor = v[i];
        }
    }

    printf("\nMaior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);

    return 0;
}

#include <stdio.h>

int main(void) {
    float v[10];
    float somaPositivos = 0;
    int i, negativos = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o numero real %d: ", i + 1);
        scanf("%f", &v[i]);

        if (v[i] < 0) {
            negativos++;
        } else if (v[i] > 0) {
            somaPositivos = somaPositivos + v[i];
        }
    }

    printf("\nQuantidade de numeros negativos: %d\n", negativos);
    printf("Soma dos numeros positivos: %.2f\n", somaPositivos);

    return 0;
}

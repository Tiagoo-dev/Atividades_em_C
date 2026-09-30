#include <stdio.h>

int main(void) {
    float v[10], quad[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Digite o numero real %d: ", i + 1);
        scanf("%f", &v[i]);
        quad[i] = v[i] * v[i];
    }

    printf("\nVetor original:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f ", v[i]);
    }

    printf("\n\nVetor dos quadrados:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f ", quad[i]);
    }
    printf("\n");

    return 0;
}

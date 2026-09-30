#include <stdio.h>

int main(void) {
    int v[6];
    int i;

    for (i = 0; i < 6; i++) {
        do {
            printf("Digite o valor par %d: ", i + 1);
            scanf("%d", &v[i]);

            if (v[i] % 2 != 0) {
                printf("Valor invalido! Digite um numero par.\n");
            }
        } while (v[i] % 2 != 0);
    }

    printf("\nValores na ordem inversa:\n");
    for (i = 5; i >= 0; i--) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}

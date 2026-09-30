#include <stdio.h>

int main(void) {
    int v[10];
    int i, maior, posicao;

    for (i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    maior = v[0];
    posicao = 0;

    for (i = 1; i < 10; i++) {
        if (v[i] > maior) {
            maior = v[i];
            posicao = i;
        }
    }

    printf("\nVetor: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", v[i]);
    }

    printf("\nMaior elemento: %d\n", maior);
    printf("Posicao do maior elemento: %d\n", posicao);

    return 0;
}

#include <stdio.h>

int main(void) {
    int v[8];
    int i, x, y;

    for (i = 0; i < 8; i++) {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &v[i]);
    }

    do {
        printf("Digite a posicao X (0 a 7): ");
        scanf("%d", &x);
    } while (x < 0 || x > 7);

    do {
        printf("Digite a posicao Y (0 a 7): ");
        scanf("%d", &y);
    } while (y < 0 || y > 7);

    printf("\nv[%d] + v[%d] = %d + %d = %d\n", x, y, v[x], v[y], v[x] + v[y]);

    return 0;
}

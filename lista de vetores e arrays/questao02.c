#include <stdio.h>

int main(void) {
    int v[6];
    int i;

    for (i = 0; i < 6; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\nValores lidos:\n");
    for (i = 0; i < 6; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}

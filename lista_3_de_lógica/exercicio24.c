#include <stdio.h>

int main(void) {
    int numero, i;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    for (i = 1; i <= 10; i++) {
        printf("%d × %d = %d\n", numero, i, numero * i);
    }

    return 0;
}

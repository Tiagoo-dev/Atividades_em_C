#include <stdio.h>

int main(void) {
    int n, i, soma = 0;

    do {
        printf("Digite um número inteiro positivo N: ");
        scanf("%d", &n);
    } while (n <= 0);

    for (i = 1; i <= n; i++) {
        soma = soma + i;
    }

    printf("Soma de 1 até %d: %d\n", n, soma);

    return 0;
}

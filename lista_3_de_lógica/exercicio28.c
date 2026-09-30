#include <stdio.h>

int main(void) {
    int i;
    float numero, maior;

    printf("Digite o número 1: ");
    scanf("%f", &numero);
    maior = numero;

    for (i = 2; i <= 10; i++) {
        printf("Digite o número %d: ", i);
        scanf("%f", &numero);

        if (numero > maior) {
            maior = numero;
        }
    }

    printf("O maior número informado foi: %.2f\n", maior);

    return 0;
}

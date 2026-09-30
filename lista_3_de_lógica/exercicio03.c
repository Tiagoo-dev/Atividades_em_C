#include <stdio.h>

int main(void) {
    float n1, n2;

    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);

    printf("Soma: %.2f\n", n1 + n2);
    printf("Subtração: %.2f\n", n1 - n2);
    printf("Multiplicação: %.2f\n", n1 * n2);

    if (n2 != 0) {
        printf("Divisão: %.2f\n", n1 / n2);
    } else {
        printf("Divisão: não é possível dividir por zero.\n");
    }

    return 0;
}

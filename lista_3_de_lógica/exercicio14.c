#include <stdio.h>

int main(void) {
    float n1, n2;

    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);

    if (n1 > n2) {
        printf("O maior número é: %.2f\n", n1);
    } else if (n2 > n1) {
        printf("O maior número é: %.2f\n", n2);
    } else {
        printf("Os números são iguais.\n");
    }

    return 0;
}

#include <stdio.h>

int main(void) {
    int n1, n2, soma;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &n1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &n2);

    soma = n1 + n2;

    printf("Primeiro número: %d\n", n1);
    printf("Segundo número: %d\n", n2);
    printf("Soma: %d\n", soma);

    return 0;
}

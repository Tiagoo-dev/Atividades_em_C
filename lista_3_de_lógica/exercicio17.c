#include <stdio.h>

int main(void) {
    float valor, desconto, valorDesconto, valorFinal;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valor);

    if (valor <= 100.00) {
        desconto = 0;
    } else if (valor <= 500.00) {
        desconto = 5;
    } else {
        desconto = 10;
    }

    valorDesconto = valor * desconto / 100;
    valorFinal = valor - valorDesconto;

    printf("Valor original: R$ %.2f\n", valor);
    printf("Percentual de desconto: %.0f%%\n", desconto);
    printf("Valor do desconto: R$ %.2f\n", valorDesconto);
    printf("Valor final: R$ %.2f\n", valorFinal);

    return 0;
}

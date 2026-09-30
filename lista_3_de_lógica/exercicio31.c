#include <stdio.h>

int main(void) {
    float litros, preco, bruto, percentual, desconto, final;

    printf("Digite a quantidade de litros abastecidos: ");
    scanf("%f", &litros);
    printf("Digite o preço do litro: R$ ");
    scanf("%f", &preco);

    bruto = litros * preco;

    if (litros < 20) {
        percentual = 0;
    } else if (litros <= 40) {
        percentual = 3;
    } else {
        percentual = 5;
    }

    desconto = bruto * percentual / 100;
    final = bruto - desconto;

    printf("Valor bruto: R$ %.2f\n", bruto);
    printf("Desconto (%.0f%%): R$ %.2f\n", percentual, desconto);
    printf("Valor final: R$ %.2f\n", final);

    return 0;
}

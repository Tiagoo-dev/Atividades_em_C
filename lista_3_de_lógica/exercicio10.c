#include <stdio.h>

int main(void) {
    char produto[100];
    int quantidade;
    float preco, total;

    printf("Digite o nome do produto: ");
    scanf(" %99[^\n]", produto);
    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);
    printf("Digite o preço unitário: ");
    scanf("%f", &preco);

    total = quantidade * preco;

    printf("Produto: %s\n", produto);
    printf("Valor total da compra: R$ %.2f\n", total);

    return 0;
}

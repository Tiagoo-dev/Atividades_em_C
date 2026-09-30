#include <stdio.h>

int main(void) {
    char nomes[5][20] = {"X-Burger", "X-Salada", "Batata frita", "Refrigerante", "Suco"};
    float precos[5] = {18.00, 20.00, 12.00, 6.00, 8.00};
    int quantidades[5] = {0, 0, 0, 0, 0};
    int opcao, quantidade, i;
    float subtotal = 0, desconto = 0, total, pago, troco;

    printf("===== LANCHONETE - SISTEMA DE PEDIDOS =====\n");

    do {
        printf("\nCardápio\n");
        for (i = 0; i < 5; i++) {
            printf("%d - %s (R$ %.2f)\n", i + 1, nomes[i], precos[i]);
        }
        printf("0 - Finalizar pedido\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 5) {
            printf("Quantidade de %s: ", nomes[opcao - 1]);
            scanf("%d", &quantidade);

            if (quantidade > 0) {
                quantidades[opcao - 1] = quantidades[opcao - 1] + quantidade;
                subtotal = subtotal + quantidade * precos[opcao - 1];
                printf("Item adicionado. Subtotal: R$ %.2f\n", subtotal);
            } else {
                printf("Quantidade inválida.\n");
            }
        } else if (opcao != 0) {
            printf("Opção inválida.\n");
        }
    } while (opcao != 0);

    if (subtotal == 0) {
        printf("\nNenhum item foi pedido.\n");
        return 0;
    }

    if (subtotal > 100.00) {
        desconto = subtotal * 0.10;
    }

    total = subtotal - desconto;

    printf("\n===== RESUMO DO PEDIDO =====\n");
    for (i = 0; i < 5; i++) {
        if (quantidades[i] > 0) {
            printf("%d x %s = R$ %.2f\n", quantidades[i], nomes[i], quantidades[i] * precos[i]);
        }
    }
    printf("Subtotal: R$ %.2f\n", subtotal);
    printf("Desconto: R$ %.2f\n", desconto);
    printf("Total a pagar: R$ %.2f\n", total);

    do {
        printf("Valor pago pelo cliente: R$ ");
        scanf("%f", &pago);

        if (pago < total) {
            printf("Valor insuficiente.\n");
        }
    } while (pago < total);

    troco = pago - total;

    printf("Troco: R$ %.2f\n", troco);
    printf("Pedido finalizado. Obrigado pela preferência!\n");

    return 0;
}

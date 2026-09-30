#include <stdio.h>

int main(void) {
    char produto[100];
    int quantidade, continuar;
    int vendas = 0, totalProdutos = 0;
    float preco, totalVenda;
    float faturamento = 0, maiorVenda = 0;

    printf("Deseja registrar uma venda? (1 - Sim, 0 - Não): ");
    scanf("%d", &continuar);

    while (continuar == 1) {
        printf("Digite o nome do produto: ");
        scanf(" %99[^\n]", produto);
        printf("Digite a quantidade: ");
        scanf("%d", &quantidade);
        printf("Digite o preço unitário: R$ ");
        scanf("%f", &preco);

        totalVenda = quantidade * preco;

        printf("Total da venda: R$ %.2f\n", totalVenda);

        vendas++;
        totalProdutos = totalProdutos + quantidade;
        faturamento = faturamento + totalVenda;

        if (totalVenda > maiorVenda) {
            maiorVenda = totalVenda;
        }

        printf("\nDeseja registrar uma venda? (1 - Sim, 0 - Não): ");
        scanf("%d", &continuar);
    }

    printf("\nQuantidade de vendas realizadas: %d\n", vendas);
    printf("Quantidade total de produtos vendidos: %d\n", totalProdutos);
    printf("Faturamento total: R$ %.2f\n", faturamento);
    printf("Maior venda realizada: R$ %.2f\n", maiorVenda);

    return 0;
}

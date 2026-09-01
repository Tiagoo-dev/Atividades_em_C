#include <stdio.h>

main(){

    float deposito, taxa_juros, rendimento, valor_total;

    printf("Digite o valor do deposito: ");
    scanf("%f", &deposito);

    printf("Digite a taxa de juros (em %%): ");
    scanf("%f", &taxa_juros);

    rendimento = deposito * (taxa_juros / 100);
    valor_total = deposito + rendimento;

    printf("O valor do rendimento e: %.2f\n", rendimento);
    printf("O valor total apos o rendimento e: %.2f\n", valor_total);

}

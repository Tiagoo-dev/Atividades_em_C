#include <stdio.h>

int main(void) {
    float saldo = 1000.00;
    float valor;
    int opcao;

    printf("Bem-vindo ao caixa eletrônico.\n");
    printf("Saldo inicial: R$ %.2f\n", saldo);

    do {
        printf("\n1. Consultar saldo\n");
        printf("2. Depositar\n");
        printf("3. Sacar\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Saldo atual: R$ %.2f\n", saldo);
        } else if (opcao == 2) {
            printf("Digite o valor do depósito: R$ ");
            scanf("%f", &valor);

            if (valor > 0) {
                saldo = saldo + valor;
                printf("Depósito realizado. Saldo atual: R$ %.2f\n", saldo);
            } else {
                printf("Valor inválido.\n");
            }
        } else if (opcao == 3) {
            printf("Digite o valor do saque: R$ ");
            scanf("%f", &valor);

            if (valor <= 0) {
                printf("Valor inválido.\n");
            } else if (valor > saldo) {
                printf("Saldo insuficiente.\n");
            } else {
                saldo = saldo - valor;
                printf("Saque realizado. Saldo atual: R$ %.2f\n", saldo);
            }
        } else if (opcao == 4) {
            printf("Encerrando o atendimento.\n");
        } else {
            printf("Opção inválida.\n");
        }
    } while (opcao != 4);

    return 0;
}

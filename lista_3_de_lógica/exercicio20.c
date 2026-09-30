#include <stdio.h>

int main(void) {
    float n1, n2, resultado;
    char operacao;

    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);
    printf("Digite a operação desejada (+, -, * ou /): ");
    scanf(" %c", &operacao);

    if (operacao == '+') {
        resultado = n1 + n2;
        printf("Resultado: %.2f\n", resultado);
    } else if (operacao == '-') {
        resultado = n1 - n2;
        printf("Resultado: %.2f\n", resultado);
    } else if (operacao == '*') {
        resultado = n1 * n2;
        printf("Resultado: %.2f\n", resultado);
    } else if (operacao == '/') {
        if (n2 == 0) {
            printf("Erro: divisão por zero não é permitida.\n");
        } else {
            resultado = n1 / n2;
            printf("Resultado: %.2f\n", resultado);
        }
    } else {
        printf("Operação inválida.\n");
    }

    return 0;
}

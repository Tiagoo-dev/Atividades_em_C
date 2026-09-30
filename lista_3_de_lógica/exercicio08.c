#include <stdio.h>

int main(void) {
    float horas, valorHora, salario;

    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%f", &horas);
    printf("Digite o valor recebido por hora: ");
    scanf("%f", &valorHora);

    salario = horas * valorHora;

    printf("Salário bruto: R$ %.2f\n", salario);

    return 0;
}

#include <stdio.h>

main(){

    float salario_base, gratificacao, imposto, salario_receber;

    printf("Digite o salario-base do funcionario: ");
    scanf("%f", &salario_base);

    gratificacao = salario_base * 0.05;
    imposto = salario_base * 0.07;
    salario_receber = salario_base + gratificacao - imposto;

    printf("A gratificacao e: %.2f\n", gratificacao);
    printf("O imposto e: %.2f\n", imposto);
    printf("O salario a receber e: %.2f\n", salario_receber);

}

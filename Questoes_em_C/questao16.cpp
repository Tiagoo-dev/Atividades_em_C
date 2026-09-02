#include <stdio.h>

main(){

    float horas_trabalhadas, salario_minimo;
    float valor_hora, salario_bruto, imposto, salario_receber;

    printf("Digite o numero de horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salario_minimo);

    valor_hora = salario_minimo / 2;
    salario_bruto = horas_trabalhadas * valor_hora;
    imposto = salario_bruto * 0.03;
    salario_receber = salario_bruto - imposto;

    printf("O valor da hora trabalhada e: %.2f\n", valor_hora);
    printf("O salario bruto e: %.2f\n", salario_bruto);
    printf("O imposto e: %.2f\n", imposto);
    printf("O salario a receber e: %.2f\n", salario_receber);

}

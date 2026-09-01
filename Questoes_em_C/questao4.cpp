#include <stdio.h>

main() {

    float salario, novo_salario;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    novo_salario = salario + (salario * 0.25);

    printf("O novo salario e: %.2f\n", novo_salario);

    
}

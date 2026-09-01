#include <stdio.h>
main() {

    float salario, percentual, aumento, novo_salario;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    printf("Digite o percentual de aumento: ");
    scanf("%f", &percentual);

    aumento = salario * (percentual / 100);
    novo_salario = salario + aumento;

    printf("O valor do aumento e: %.2f\n", aumento);
    printf("O novo salario e: %.2f\n", novo_salario);


}

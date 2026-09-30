#include <stdio.h>

int main(void) {
    float peso, altura, imc;

    printf("Digite o peso em kg: ");
    scanf("%f", &peso);
    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    if (altura <= 0) {
        printf("A altura deve ser maior que zero.\n");
        return 0;
    }

    imc = peso / (altura * altura);

    printf("IMC: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Classificação: Abaixo do peso\n");
    } else if (imc < 25.0) {
        printf("Classificação: Peso adequado\n");
    } else if (imc < 30.0) {
        printf("Classificação: Sobrepeso\n");
    } else {
        printf("Classificação: Obesidade\n");
    }

    return 0;
}

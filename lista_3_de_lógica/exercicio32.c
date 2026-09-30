#include <stdio.h>

int main(void) {
    int entrada, saida, horas;
    float valor;

    printf("Digite a hora de entrada (0 a 23): ");
    scanf("%d", &entrada);
    printf("Digite a hora de saída (0 a 23): ");
    scanf("%d", &saida);

    horas = saida - entrada;

    if (horas < 0) {
        horas = horas + 24;
    }

    if (horas <= 1) {
        valor = 10.00;
    } else {
        valor = 10.00 + (horas - 1) * 5.00;
    }

    printf("Tempo de permanência: %d hora(s)\n", horas);
    printf("Valor total: R$ %.2f\n", valor);

    return 0;
}

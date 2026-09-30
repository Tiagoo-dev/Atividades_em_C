#include <stdio.h>

int main(void) {
    int i, aprovados = 0, reprovados = 0;
    float nota, percentual;

    for (i = 1; i <= 10; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);

        if (nota >= 7) {
            aprovados++;
        } else {
            reprovados++;
        }
    }

    percentual = (float) aprovados / 10 * 100;

    printf("Quantidade de aprovados: %d\n", aprovados);
    printf("Quantidade de reprovados: %d\n", reprovados);
    printf("Percentual de aprovação: %.2f%%\n", percentual);

    return 0;
}

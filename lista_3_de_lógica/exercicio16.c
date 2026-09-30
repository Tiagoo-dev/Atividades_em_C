#include <stdio.h>

int main(void) {
    float n1, n2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;

    printf("Média: %.2f\n", media);

    if (media >= 7.0) {
        printf("Situação: Aprovado\n");
    } else if (media >= 5.0) {
        printf("Situação: Recuperação\n");
    } else {
        printf("Situação: Reprovado\n");
    }

    return 0;
}

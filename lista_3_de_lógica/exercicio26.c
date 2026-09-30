#include <stdio.h>

int main(void) {
    int quantidade, i;
    float nota, soma = 0, media;

    do {
        printf("Digite a quantidade de alunos: ");
        scanf("%d", &quantidade);
    } while (quantidade <= 0);

    for (i = 1; i <= quantidade; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);
        soma = soma + nota;
    }

    media = soma / quantidade;

    printf("Média geral da turma: %.2f\n", media);

    return 0;
}

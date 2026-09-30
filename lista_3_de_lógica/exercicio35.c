#include <stdio.h>

int main(void) {
    char nome[100];
    int quantidade, i;
    int aprovados = 0, recuperacao = 0, reprovados = 0;
    float nota1, nota2, media, somaMedias = 0, maiorMedia = 0, menorMedia = 0;

    do {
        printf("Digite a quantidade de alunos: ");
        scanf("%d", &quantidade);
    } while (quantidade <= 0);

    for (i = 1; i <= quantidade; i++) {
        printf("\nAluno %d\n", i);
        printf("Nome: ");
        scanf(" %99[^\n]", nome);
        printf("Nota da primeira avaliação: ");
        scanf("%f", &nota1);
        printf("Nota da segunda avaliação: ");
        scanf("%f", &nota2);

        media = (nota1 + nota2) / 2;
        somaMedias = somaMedias + media;

        printf("Média de %s: %.2f - ", nome, media);

        if (media >= 7) {
            printf("Aprovado\n");
            aprovados++;
        } else if (media >= 5) {
            printf("Recuperação\n");
            recuperacao++;
        } else {
            printf("Reprovado\n");
            reprovados++;
        }

        if (i == 1) {
            maiorMedia = media;
            menorMedia = media;
        } else {
            if (media > maiorMedia) {
                maiorMedia = media;
            }
            if (media < menorMedia) {
                menorMedia = media;
            }
        }
    }

    printf("\nQuantidade de alunos: %d\n", quantidade);
    printf("Quantidade de aprovados: %d\n", aprovados);
    printf("Quantidade em recuperação: %d\n", recuperacao);
    printf("Quantidade de reprovados: %d\n", reprovados);
    printf("Média geral da turma: %.2f\n", somaMedias / quantidade);
    printf("Maior média: %.2f\n", maiorMedia);
    printf("Menor média: %.2f\n", menorMedia);

    return 0;
}

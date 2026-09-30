#include <stdio.h>

int main(void) {
    int voto, candidato1 = 0, candidato2 = 0, candidato3 = 0, total;

    do {
        printf("Digite o voto (1, 2, 3 ou 0 para encerrar): ");
        scanf("%d", &voto);

        if (voto == 1) {
            candidato1++;
        } else if (voto == 2) {
            candidato2++;
        } else if (voto == 3) {
            candidato3++;
        } else if (voto != 0) {
            printf("Voto inválido.\n");
        }
    } while (voto != 0);

    total = candidato1 + candidato2 + candidato3;

    printf("\nVotos do candidato 1: %d\n", candidato1);
    printf("Votos do candidato 2: %d\n", candidato2);
    printf("Votos do candidato 3: %d\n", candidato3);
    printf("Total de votos: %d\n", total);

    if (total == 0) {
        printf("Nenhum voto foi registrado.\n");
    } else if (candidato1 > candidato2 && candidato1 > candidato3) {
        printf("Candidato vencedor: Candidato 1\n");
    } else if (candidato2 > candidato1 && candidato2 > candidato3) {
        printf("Candidato vencedor: Candidato 2\n");
    } else if (candidato3 > candidato1 && candidato3 > candidato2) {
        printf("Candidato vencedor: Candidato 3\n");
    } else {
        printf("Houve empate entre os candidatos mais votados.\n");
    }

    return 0;
}

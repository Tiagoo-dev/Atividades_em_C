#include <stdio.h>

main(){

    float peso_saco_kg, peso_saco_g;
    float racao_por_gato, consumo_diario, consumo_total, racao_restante;

    printf("Digite o peso do saco de racao (em kg): ");
    scanf("%f", &peso_saco_kg);

    printf("Digite a quantidade de racao por gato (em gramas): ");
    scanf("%f", &racao_por_gato);

    peso_saco_g = peso_saco_kg * 1000;
    consumo_diario = racao_por_gato * 2;
    consumo_total = consumo_diario * 5;
    racao_restante = peso_saco_g - consumo_total;

    printf("A racao restante apos 5 dias e: %.2f gramas\n", racao_restante);

}

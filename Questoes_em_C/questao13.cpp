#include <stdio.h>

main(){

    float pes, polegadas, jardas, milhas;

    printf("Digite a medida em pes: ");
    scanf("%f", &pes);

    polegadas = pes * 12;
    jardas = pes / 3;
    milhas = jardas / 1760;

    printf("Polegadas: %.2f\n", polegadas);
    printf("Jardas: %.2f\n", jardas);
    printf("Milhas: %.4f\n", milhas);

}

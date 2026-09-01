#include <stdio.h>

main(){

    float base, altura, area;

    printf("Digite o valor da base: ");
    scanf("%f", &base);

    printf("Digite o valor da altura: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("A area do triangulo e: %.2f\n", area);

}

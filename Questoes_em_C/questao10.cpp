#include <stdio.h>

main(){

    float raio, area;
    float pi = 3.14159;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    area = pi * raio * raio;

    printf("A area do circulo e: %.2f\n", area);

}

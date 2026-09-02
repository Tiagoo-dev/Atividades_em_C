#include <stdio.h>
#include <math.h>

main(){

    float numero, quadrado, cubo, raiz_quadrada, raiz_cubica;

    printf("Digite um numero positivo: ");
    scanf("%f", &numero);

    quadrado = numero * numero;
    cubo = numero * numero * numero;
    raiz_quadrada = sqrt(numero);
    raiz_cubica = cbrt(numero);

    printf("O numero ao quadrado e: %.2f\n", quadrado);
    printf("O numero ao cubo e: %.2f\n", cubo);
    printf("A raiz quadrada e: %.2f\n", raiz_quadrada);
    printf("A raiz cubica e: %.2f\n", raiz_cubica);

}

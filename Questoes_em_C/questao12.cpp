#include <stdio.h>
#include <math.h>

main(){

    float base, expoente, resultado;

    printf("Digite a base: ");
    scanf("%f", &base);

    printf("Digite o expoente: ");
    scanf("%f", &expoente);

    resultado = pow(base, expoente);

    printf("O resultado e: %.2f\n", resultado);

}

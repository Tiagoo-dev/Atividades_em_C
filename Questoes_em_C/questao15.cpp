#include <stdio.h>

main(){

    float preco_fabrica, percentual_lucro, percentual_impostos;
    float lucro, impostos, preco_final;

    printf("Digite o preco de fabrica: ");
    scanf("%f", &preco_fabrica);

    printf("Digite o percentual de lucro do distribuidor: ");
    scanf("%f", &percentual_lucro);

    printf("Digite o percentual de impostos: ");
    scanf("%f", &percentual_impostos);

    lucro = preco_fabrica * (percentual_lucro / 100);
    impostos = preco_fabrica * (percentual_impostos / 100);
    preco_final = preco_fabrica + lucro + impostos;

    printf("O lucro do distribuidor e: %.2f\n", lucro);
    printf("O valor dos impostos e: %.2f\n", impostos);
    printf("O preco final do veiculo e: %.2f\n", preco_final);

}

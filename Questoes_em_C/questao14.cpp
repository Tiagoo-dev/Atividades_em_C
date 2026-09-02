#include <stdio.h>

main(){

    int ano_nascimento, ano_atual, idade, idade_2050;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    idade = ano_atual - ano_nascimento;
    idade_2050 = 2050 - ano_nascimento;

    printf("A idade da pessoa e: %d anos\n", idade);
    printf("Em 2050 essa pessoa tera: %d anos\n", idade_2050);

}

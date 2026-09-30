#include <stdio.h>

int main(void) {
    char nome[100];

    printf("Digite o nome: ");
    scanf(" %99[^\n]", nome);

    printf("Olá, %s! Seja bem-vindo(a) à disciplina de Lógica de Programação.\n", nome);

    return 0;
}

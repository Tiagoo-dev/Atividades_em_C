#include <stdio.h>

int main(void) {
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Maior de idade\n");
    } else {
        printf("Menor de idade\n");
    }

    return 0;
}

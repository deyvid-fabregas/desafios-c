#include <stdio.h>

/* Crianca: 0-11 | Adolescente: 12-17 | Adulto: 18-59 | Idoso: 60+ */
int main(void) {
    int idade;
    do {
        printf("Digite a idade: ");
        if (scanf("%d", &idade) != 1) {
            printf("Entrada invalida\n");
            return 1;
        }
        if (idade < 0)
            printf("Idade invalida! Tente novamente.\n");
    } while (idade < 0);
    if (idade <= 11)
        printf("Crianca\n");
    else if (idade <= 17)
        printf("Adolescente\n");
    else if (idade <= 59)
        printf("Adulto\n");
    else
        printf("Idoso\n");
    return 0;
}

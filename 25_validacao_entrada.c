#include <stdio.h>

int main(void) {
    double nota;
    do {
        printf("Digite uma nota entre 0 e 10: ");
        if (scanf("%lf", &nota) != 1) {
            printf("Entrada invalida\n");
            return 1;
        }
        if (nota < 0 || nota > 10)
            printf("Nota invalida! Tente novamente.\n");
    } while (nota < 0 || nota > 10);
    printf("Nota valida: %.2f\n", nota);
    return 0;
}

#include <stdio.h>

int main(void) {
    double n;
    printf("Digite um numero: ");
    if (scanf("%lf", &n) != 1) {
        printf("Entrada invalida\n");
        return 1;
    }
    if (n > 0)
        printf("Positivo\n");
    else if (n < 0)
        printf("Negativo\n");
    else
        printf("Zero\n");
    return 0;
}

#include <stdio.h>

int main(void) {
    double a, b;
    printf("Digite dois numeros: ");
    if (scanf("%lf %lf", &a, &b) != 2) {
        printf("Entrada invalida\n");
        return 1;
    }
    if (a > b)
        printf("O maior e %.2f\n", a);
    else if (b > a)
        printf("O maior e %.2f\n", b);
    else
        printf("Os valores sao iguais\n");
    return 0;
}

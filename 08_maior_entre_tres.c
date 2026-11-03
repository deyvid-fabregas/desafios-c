#include <stdio.h>

int main(void) {
    double a, b, c, maior;
    printf("Digite tres numeros: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Entrada invalida\n");
        return 1;
    }
    if (a == b && b == c) {
        printf("Os tres valores sao iguais\n");
        return 0;
    }
    maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;
    printf("O maior e %.2f\n", maior);
    return 0;
}

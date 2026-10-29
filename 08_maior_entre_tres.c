#include <stdio.h>

int main(void) {
    double a, b, c, maior;
    printf("Digite tres numeros: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;
    printf("O maior e %.2f\n", maior);
    return 0;
}

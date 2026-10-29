#include <stdio.h>

int main(void) {
    double a, b;
    printf("Digite dois numeros: ");
    scanf("%lf %lf", &a, &b);
    if (a > b)
        printf("O maior e %.2f\n", a);
    else if (b > a)
        printf("O maior e %.2f\n", b);
    else
        printf("Os valores sao iguais\n");
    return 0;
}

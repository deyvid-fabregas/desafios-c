#include <stdio.h>

int main(void) {
    double c;
    printf("Temperatura em Celsius: ");
    if (scanf("%lf", &c) != 1) {
        printf("Entrada invalida\n");
        return 1;
    }
    printf("%.2f C = %.2f F\n", c, c * 9.0 / 5.0 + 32.0);
    return 0;
}

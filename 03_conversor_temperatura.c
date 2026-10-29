#include <stdio.h>

int main(void) {
    double c;
    printf("Temperatura em Celsius: ");
    scanf("%lf", &c);
    printf("%.2f C = %.2f F\n", c, c * 9.0 / 5.0 + 32.0);
    return 0;
}

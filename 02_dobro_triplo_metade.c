#include <stdio.h>

int main(void) {
    double n;
    printf("Digite um numero: ");
    scanf("%lf", &n);
    printf("Dobro: %.2f\nTriplo: %.2f\nMetade: %.2f\n", n * 2, n * 3, n / 2);
    return 0;
}

#include <stdio.h>

int main(void) {
    double n;
    printf("Digite um numero: ");
    scanf("%lf", &n);
    if (n > 0)
        printf("Positivo\n");
    else if (n < 0)
        printf("Negativo\n");
    else
        printf("Zero\n");
    return 0;
}

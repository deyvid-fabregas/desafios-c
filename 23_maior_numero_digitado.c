#include <stdio.h>

int main(void) {
    int i;
    double n, maior = 0;
    for (i = 1; i <= 10; i++) {
        printf("Numero %d: ", i);
        if (scanf("%lf", &n) != 1) {
            printf("Entrada invalida\n");
            return 1;
        }
        if (i == 1 || n > maior)
            maior = n;
    }
    printf("Maior valor digitado: %.2f\n", maior);
    return 0;
}

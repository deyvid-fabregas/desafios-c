#include <stdio.h>

int main(void) {
    int n, i;
    unsigned long long a = 0, b = 1, prox;
    printf("Quantidade de termos: ");
    if (scanf("%d", &n) != 1) {
        printf("Entrada invalida\n");
        return 1;
    }
    if (n <= 0) {
        printf("Quantidade invalida\n");
        return 0;
    }
    if (n > 90) {
        printf("Maximo de 90 termos\n");
        return 0;
    }
    for (i = 1; i <= n; i++) {
        printf("%llu ", a);
        if (i < n) {
            prox = a + b;
            a = b;
            b = prox;
        }
    }
    printf("\n");
    return 0;
}

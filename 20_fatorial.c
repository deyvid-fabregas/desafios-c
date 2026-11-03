#include <stdio.h>

int main(void) {
    int n, i;
    unsigned long long fat = 1;
    do {
        printf("Digite um inteiro nao negativo (ate 20): ");
        if (scanf("%d", &n) != 1) {
            printf("Entrada invalida\n");
            return 1;
        }
        if (n < 0)
            printf("Nao existe fatorial de numero negativo! Tente novamente.\n");
        else if (n > 20)
            printf("Valor muito grande (maximo 20)! Tente novamente.\n");
    } while (n < 0 || n > 20);
    for (i = 2; i <= n; i++)
        fat *= i;
    printf("%d! = %llu\n", n, fat);
    return 0;
}

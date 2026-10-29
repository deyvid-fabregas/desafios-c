#include <stdio.h>

int main(void) {
    int n, i;
    unsigned long long fat = 1;
    printf("Digite um inteiro nao negativo: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Nao existe fatorial de numero negativo\n");
        return 0;
    }
    if (n > 20) {
        printf("Valor muito grande (maximo 20)\n");
        return 0;
    }
    for (i = 2; i <= n; i++)
        fat *= i;
    printf("%d! = %llu\n", n, fat);
    return 0;
}

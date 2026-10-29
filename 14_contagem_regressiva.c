#include <stdio.h>

int main(void) {
    int n, i;
    printf("Digite um inteiro positivo N: ");
    if (scanf("%d", &n) != 1) {
        printf("Entrada invalida\n");
        return 1;
    }
    if (n <= 0) {
        printf("N deve ser positivo\n");
        return 0;
    }
    for (i = n; i >= 0; i--)
        printf("%d ", i);
    printf("\n");
    return 0;
}

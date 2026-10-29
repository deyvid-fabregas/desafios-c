#include <stdio.h>

int main(void) {
    int n, i;
    printf("Digite um inteiro positivo: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Valor invalido\n");
        return 0;
    }
    printf("Divisores de %d: ", n);
    for (i = 1; i <= n; i++)
        if (n % i == 0)
            printf("%d ", i);
    printf("\n");
    return 0;
}

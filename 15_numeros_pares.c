#include <stdio.h>

int main(void) {
    int n, i;
    printf("Digite um inteiro positivo N: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("N deve ser positivo\n");
        return 0;
    }
    for (i = 2; i <= n; i += 2)
        printf("%d ", i);
    printf("\n");
    return 0;
}

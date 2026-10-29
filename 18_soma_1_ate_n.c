#include <stdio.h>

int main(void) {
    int n, i;
    long soma = 0;
    printf("Digite um inteiro positivo N: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("N deve ser positivo\n");
        return 0;
    }
    for (i = 1; i <= n; i++)
        soma += i;
    printf("Soma de 1 ate %d = %ld\n", n, soma);
    return 0;
}

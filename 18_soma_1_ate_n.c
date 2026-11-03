#include <stdio.h>

int main(void) {
    int n, i;
    long soma = 0;
    do {
        printf("Digite um inteiro positivo N: ");
        if (scanf("%d", &n) != 1) {
            printf("Entrada invalida\n");
            return 1;
        }
        if (n <= 0)
            printf("N deve ser positivo! Tente novamente.\n");
    } while (n <= 0);
    for (i = 1; i <= n; i++)
        soma += i;
    printf("Soma de 1 ate %d = %ld\n", n, soma);
    return 0;
}

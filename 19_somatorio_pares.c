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
    for (i = 2; i <= n; i += 2)
        soma += i;
    printf("Soma dos pares entre 1 e %d = %ld\n", n, soma);
    return 0;
}

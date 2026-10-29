#include <stdio.h>

int main(void) {
    int n, i, primo = 1;
    printf("Digite um inteiro positivo: ");
    if (scanf("%d", &n) != 1) {
        printf("Entrada invalida\n");
        return 1;
    }
    if (n <= 0) {
        printf("Valor invalido\n");
        return 0;
    }
    if (n < 2)
        primo = 0;
    for (i = 2; i <= n / i; i++) {
        if (n % i == 0) {
            primo = 0;
            break;
        }
    }
    if (primo)
        printf("%d e primo\n", n);
    else
        printf("%d nao e primo\n", n);
    return 0;
}

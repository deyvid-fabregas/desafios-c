#include <stdio.h>

int main(void) {
    int n;
    printf("Digite um numero inteiro: ");
    if (scanf("%d", &n) != 1) {
        printf("Entrada invalida\n");
        return 1;
    }
    printf("Antecessor: %d\nSucessor: %d\n", n - 1, n + 1);
    return 0;
}

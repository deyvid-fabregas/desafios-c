#include <stdio.h>

int main(void) {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    printf("Antecessor: %d\nSucessor: %d\n", n - 1, n + 1);
    return 0;
}

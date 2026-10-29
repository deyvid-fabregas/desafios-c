#include <stdio.h>

int main(void) {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("%d e par\n", n);
    else
        printf("%d e impar\n", n);
    return 0;
}

#include <stdio.h>

int main(void) {
    int i;
    double n, maior = 0;
    for (i = 1; i <= 10; i++) {
        printf("Numero %d: ", i);
        scanf("%lf", &n);
        if (i == 1 || n > maior)
            maior = n;
    }
    printf("Maior valor digitado: %.2f\n", maior);
    return 0;
}

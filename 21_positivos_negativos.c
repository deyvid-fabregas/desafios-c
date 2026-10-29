#include <stdio.h>

int main(void) {
    int i, pos = 0, neg = 0, zeros = 0;
    double n;
    for (i = 1; i <= 10; i++) {
        printf("Numero %d: ", i);
        scanf("%lf", &n);
        if (n > 0) pos++;
        else if (n < 0) neg++;
        else zeros++;
    }
    printf("Positivos: %d\nNegativos: %d\nZeros: %d\n", pos, neg, zeros);
    return 0;
}

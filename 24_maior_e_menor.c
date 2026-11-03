#include <stdio.h>

int main(void) {
    int qtd, i;
    double n, maior = 0, menor = 0;
    do {
        printf("Quantos numeros deseja digitar? ");
        if (scanf("%d", &qtd) != 1) {
            printf("Entrada invalida\n");
            return 1;
        }
        if (qtd <= 0)
            printf("Quantidade invalida! Tente novamente.\n");
    } while (qtd <= 0);
    for (i = 1; i <= qtd; i++) {
        printf("Numero %d: ", i);
        if (scanf("%lf", &n) != 1) {
            printf("Entrada invalida\n");
            return 1;
        }
        if (i == 1) {
            maior = n;
            menor = n;
        } else {
            if (n > maior) maior = n;
            if (n < menor) menor = n;
        }
    }
    printf("Maior: %.2f\nMenor: %.2f\n", maior, menor);
    return 0;
}

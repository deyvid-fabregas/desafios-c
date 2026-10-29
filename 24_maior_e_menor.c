#include <stdio.h>

int main(void) {
    int qtd, i;
    double n, maior = 0, menor = 0;
    printf("Quantos numeros deseja digitar? ");
    scanf("%d", &qtd);
    if (qtd <= 0) {
        printf("Quantidade invalida\n");
        return 0;
    }
    for (i = 1; i <= qtd; i++) {
        printf("Numero %d: ", i);
        scanf("%lf", &n);
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

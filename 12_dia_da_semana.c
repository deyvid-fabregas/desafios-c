#include <stdio.h>

int main(void) {
    int n;
    do {
        printf("Digite um numero de 1 a 7: ");
        if (scanf("%d", &n) != 1) {
            printf("Entrada invalida\n");
            return 1;
        }
        if (n < 1 || n > 7)
            printf("Opcao invalida! Tente novamente.\n");
    } while (n < 1 || n > 7);
    switch (n) {
        case 1: printf("Domingo\n"); break;
        case 2: printf("Segunda-feira\n"); break;
        case 3: printf("Terca-feira\n"); break;
        case 4: printf("Quarta-feira\n"); break;
        case 5: printf("Quinta-feira\n"); break;
        case 6: printf("Sexta-feira\n"); break;
        case 7: printf("Sabado\n"); break;
    }
    return 0;
}

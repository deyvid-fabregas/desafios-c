#include <stdio.h>

int main(void) {
    int opcao;
    double a, b;

    do {
        printf("=== MENU ===\n");
        printf("1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n");
        printf("Escolha: ");
        if (scanf("%d", &opcao) != 1) {
            printf("Entrada invalida\n");
            return 1;
        }
        if (opcao < 1 || opcao > 4)
            printf("Opcao invalida! Tente novamente.\n\n");
    } while (opcao < 1 || opcao > 4);

    printf("Digite dois numeros: ");
    if (scanf("%lf %lf", &a, &b) != 2) {
        printf("Entrada invalida\n");
        return 1;
    }

    switch (opcao) {
        case 1:
            printf("Soma: %.2f\n", a + b);
            break;
        case 2:
            printf("Subtracao: %.2f\n", a - b);
            break;
        case 3:
            printf("Multiplicacao: %.2f\n", a * b);
            break;
        case 4:
            if (b == 0)
                printf("Erro: divisao por zero!\n");
            else
                printf("Divisao: %.2f\n", a / b);
            break;
    }
    return 0;
}

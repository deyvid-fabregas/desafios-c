#include <stdio.h>

int main(void) {
    double a, b;
    char op;
    printf("Digite o primeiro numero: ");
    if (scanf("%lf", &a) != 1) {
        printf("Entrada invalida\n");
        return 1;
    }
    printf("Digite a operacao (+, -, *, /): ");
    if (scanf(" %c", &op) != 1) {
        printf("Entrada invalida\n");
        return 1;
    }
    printf("Digite o segundo numero: ");
    if (scanf("%lf", &b) != 1) {
        printf("Entrada invalida\n");
        return 1;
    }

    if (op == '+')
        printf("Resultado: %.2f\n", a + b);
    else if (op == '-')
        printf("Resultado: %.2f\n", a - b);
    else if (op == '*')
        printf("Resultado: %.2f\n", a * b);
    else if (op == '/') {
        if (b == 0)
            printf("Erro: divisao por zero!\n");
        else
            printf("Resultado: %.2f\n", a / b);
    } else
        printf("Operacao invalida\n");
    return 0;
}

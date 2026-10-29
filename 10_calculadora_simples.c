#include <stdio.h>

int main(void) {
    double a, b;
    char op;
    printf("Digite o primeiro numero: ");
    scanf("%lf", &a);
    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Digite o segundo numero: ");
    scanf("%lf", &b);

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

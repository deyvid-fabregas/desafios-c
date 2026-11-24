#include "entrada.h"

int main(void) {
    double salario, percentual1, percentual2;

    printf("Salario bruto: R$ ");
    if (!ler_real(&salario)) {
        return 1;
    }
    printf("Percentuais dos dois descontos: ");
    if (!ler_real(&percentual1) || !ler_real(&percentual2)) {
        return 1;
    }
    if (salario < 0 || percentual1 < 0 || percentual2 < 0 ||
        percentual1 > 100 || percentual2 > 100) {
        puts("Informe um salario nao negativo e percentuais de 0 a 100.");
        return 1;
    }

    double desconto1 = salario * (percentual1 / 100);
    double desconto2 = salario * (percentual2 / 100);
    printf("Primeiro desconto: R$ %.2f\n", desconto1);
    printf("Segundo desconto: R$ %.2f\n", desconto2);
    printf("Salario liquido: R$ %.2f\n", salario - desconto1 - desconto2);
    return 0;
}

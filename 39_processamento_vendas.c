#include <float.h>
#include "entrada.h"

int main(void) {
    size_t quantidade = 0;
    double faturamento = 0;

    while (1) {
        double venda;
        printf("Valor da venda (0 encerra): R$ ");
        if (!ler_real(&venda)) {
            return 1;
        }
        if (venda == 0) {
            break;
        }
        if (venda < 0) {
            continue;
        }
        if (venda > DBL_MAX - faturamento) {
            puts("Valor excede o limite do faturamento.");
            continue;
        }

        quantidade++;
        faturamento += venda;
    }

    double ticket_medio = quantidade > 0 ? faturamento / quantidade : 0;
    printf("Vendas: %zu\nFaturamento: R$ %.2f\nTicket medio: R$ %.2f\n",
           quantidade, faturamento, ticket_medio);
    return 0;
}

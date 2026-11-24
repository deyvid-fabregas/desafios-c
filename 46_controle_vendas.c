#include <float.h>
#include "entrada.h"

#define TOTAL_VENDAS 10

static void exibir_vendas(const double vendas[], int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        printf("Venda %d: R$ %.2f\n", i + 1, vendas[i]);
    }
}

static int calcular_faturamento(const double vendas[], int quantidade, double *total) {
    *total = 0;
    for (int i = 0; i < quantidade; i++) {
        if (vendas[i] > DBL_MAX - *total) {
            return 0;
        }
        *total += vendas[i];
    }
    return 1;
}

static double localizar_maior_venda(const double vendas[], int quantidade) {
    double maior = vendas[0];
    for (int i = 1; i < quantidade; i++) {
        if (vendas[i] > maior) {
            maior = vendas[i];
        }
    }
    return maior;
}

static int contar_vendas_acima_de(const double vendas[], int quantidade, double limite) {
    int total = 0;
    for (int i = 0; i < quantidade; i++) {
        if (vendas[i] > limite) {
            total++;
        }
    }
    return total;
}

int main(void) {
    double vendas[TOTAL_VENDAS];
    double faturamento;

    for (int i = 0; i < TOTAL_VENDAS; i++) {
        printf("Valor da venda %d: R$ ", i + 1);
        if (!ler_real(&vendas[i])) {
            return 1;
        }
        if (vendas[i] < 0) {
            puts("Valor de venda invalido.");
            return 1;
        }
    }

    puts("\nVendas registradas:");
    exibir_vendas(vendas, TOTAL_VENDAS);
    if (!calcular_faturamento(vendas, TOTAL_VENDAS, &faturamento)) {
        puts("Faturamento fora do intervalo.");
        return 1;
    }

    printf("Faturamento: R$ %.2f\n", faturamento);
    printf("Maior venda: R$ %.2f\n", localizar_maior_venda(vendas, TOTAL_VENDAS));
    printf("Vendas acima de R$ 500,00: %d\n", contar_vendas_acima_de(vendas, TOTAL_VENDAS, 500));
    return 0;
}

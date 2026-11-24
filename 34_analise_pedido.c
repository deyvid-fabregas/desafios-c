#include "entrada.h"

int main(void) {
    double compra;
    double frete = 0;

    printf("Valor da compra: R$ ");
    if (!ler_real(&compra)) {
        return 1;
    }
    if (compra < 0) {
        puts("Valor de compra invalido.");
        return 1;
    }

    if (compra < 200) {
        frete = 20;
    }

    printf("Compra: R$ %.2f\nFrete: R$ %.2f\nTotal: R$ %.2f\n",
           compra, frete, compra + frete);
    return 0;
}

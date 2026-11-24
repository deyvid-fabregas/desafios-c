#include <float.h>
#include "entrada.h"

int main(void) {
    size_t quantidade = 0;
    double total = 0;

    while (1) {
        double preco;
        printf("Preco do produto (0 encerra): R$ ");
        if (!ler_real(&preco)) {
            return 1;
        }
        if (preco == 0) {
            break;
        }
        if (preco < 0 || preco > DBL_MAX - total) {
            puts("Preco invalido.");
            continue;
        }
        quantidade++;
        total += preco;
    }

    printf("Produtos: %zu\nTotal: R$ %.2f\n", quantidade, total);
    return 0;
}

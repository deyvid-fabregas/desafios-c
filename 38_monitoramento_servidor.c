#include "entrada.h"

int main(void) {
    size_t leituras = 0;
    size_t criticas = 0;

    while (1) {
        int uso;
        printf("Uso da CPU em porcentagem inteira (-1 encerra): ");
        if (!ler_inteiro(&uso)) {
            return 1;
        }
        if (uso == -1) {
            break;
        }
        if (uso < 0 || uso > 100) {
            puts("Percentual invalido.");
            continue;
        }

        leituras++;
        if (uso >= 90) {
            puts("CRÍTICO");
            criticas++;
        } else if (uso >= 70) {
            puts("ALERTA");
        } else {
            puts("NORMAL");
        }
    }

    printf("Leituras: %zu\nLeituras criticas: %zu\n", leituras, criticas);
    return 0;
}
